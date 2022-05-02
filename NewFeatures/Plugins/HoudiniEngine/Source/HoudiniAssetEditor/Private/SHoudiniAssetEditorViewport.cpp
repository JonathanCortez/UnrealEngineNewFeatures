#include "SHoudiniAssetEditorViewport.h"
#include "SHoudiniAssetEditorViewportToolBar.h"
#include "HoudiniAssetViewportLODCommands.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "UObject/Package.h"
#include "Components/StaticMeshComponent.h"
#include "EditorStyleSet.h"
#include "Engine/StaticMesh.h"
#include "IHoudiniAssetEditor.h"
#include "HoudiniAssetEditorActions.h"
#include "Slate/SceneViewport.h"
#include "ComponentReregisterContext.h"
#include "Runtime/Analytics/Analytics/Public/AnalyticsEventAttribute.h"
#include "Runtime/Analytics/Analytics/Public/Interfaces/IAnalyticsProvider.h"
#include "EngineAnalytics.h"
#include "Widgets/Docking/SDockTab.h"
#include "Engine/StaticMeshSocket.h"
#include "Editor/UnrealEd/Public/SEditorViewportToolBarMenu.h"
#include "Editor.h"
#include "HoudiniAsset.h"

#include "HoudiniAssetActor.h"
#include "HoudiniAssetEditorObject.h"
#include "Components/SplineComponent.h"
#include "Engine/Selection.h"

#define LOCTEXT_NAMESPACE "HoudiniAssetEditorViewport"

void SHoudiniAssetEditorViewport::Construct(const FArguments& InArgs)
{
	HoudiniAssetEditorPtr = InArgs._HoudiniAssetEditor;

	TSharedPtr<IHoudiniAssetEditor> PinnedEditor = HoudiniAssetEditorPtr.Pin();
	HoudiniAssetObj = PinnedEditor.IsValid() ? PinnedEditor->GetHoudiniAssetEditorObj() : nullptr;
	StaticMeshes =	PinnedEditor.IsValid() ? PinnedEditor->GetStaticMeshes() : TArray<UStaticMesh*>{};
	FHoudiniAssetEditor* HoudiniAssetEditor = PinnedEditor.IsValid() ? PinnedEditor->GetHoudiniAssetEditor() : nullptr;
	
	UE_LOG(LogTemp, Warning, TEXT("Static Mesh Count from Viewport.h | %d"), PinnedEditor->GetStaticMeshes().Num());

	// restore last used feature level
	UWorld* World = PreviewScene->GetWorld();
	if (World != nullptr)
	{
		World->ChangeFeatureLevel(GWorld->FeatureLevel);
	}	
	UE_LOG(LogTemp, Warning, TEXT("Houdini Asset Editor World | %s"), *World->GetName());
	
	UEditorEngine* Editor = CastChecked<UEditorEngine>(GEngine);
	PreviewFeatureLevelChangedHandle = Editor->OnPreviewFeatureLevelChanged().AddLambda([this](ERHIFeatureLevel::Type NewFeatureLevel)
	{
		PreviewScene->GetWorld()->ChangeFeatureLevel(NewFeatureLevel);
	});

	CurrentViewMode = VMI_Lit;
	
	FHoudiniAssetViewportLODCommands::Register();
	
	if(!HoudiniAssetObj->GetHoudiniAssetActor())
	{
		FActorSpawnParameters ActorParms;
		ActorParms.Name = TEXT("HoudiniAssetEditorActor");
		HoudiniAssetActor = (AHoudiniAssetActor*)PreviewScene->GetWorld()->SpawnActor(AHoudiniAssetActor::StaticClass(),nullptr, nullptr, ActorParms);
	
		HoudiniAssetComponent = HoudiniAssetActor->GetHoudiniAssetComponent();
		HoudiniAssetComponent->SetHoudiniAssetComponentEditor(HoudiniAssetEditor);
		HoudiniAssetComponent->SetHasHoudiniAssetEditor(true);
	
		HoudiniAssetObj->SetHoudiniAssetComponent(HoudiniAssetComponent);
		HoudiniAssetObj->SetHoudiniAssetActor(HoudiniAssetActor);

		if(HoudiniAssetObj->GetHoudiniAsset())
		{	
			UClass* HoudiniComponenetClass = HoudiniAssetComponent->GetClass();
			FProperty* Property = HoudiniComponenetClass->FindPropertyByName(TEXT("HoudiniAsset"));
			if(FObjectProperty * ObjProperty = CastField<FObjectProperty>(Property))
			{
				ObjProperty->SetPropertyValue(Property->ContainerPtrToValuePtr<void*>(HoudiniAssetComponent), HoudiniAssetObj->GetHoudiniAsset());			
			}
		}
	}
	else
	{
		HoudiniAssetActor = HoudiniAssetObj->GetHoudiniAssetActor();
		HoudiniAssetComponent = HoudiniAssetActor->GetHoudiniAssetComponent();
		HoudiniAssetComponent->SetHoudiniAssetComponentEditor(HoudiniAssetEditor);
		
		TArray<UActorComponent*> ActorComponents;
		HoudiniAssetActor->GetComponents(ActorComponents);

		for(auto Comp : ActorComponents)
		{
			if(!Comp->IsA(UHoudiniAssetComponent::StaticClass()))
			{
				PreviewScene->AddComponent(Comp, FTransform::Identity);
			}
		}
	}
	UpdateViewportFloorOffset();
	
	for(int i = 0 ; i < StaticMeshes.Num(); i++)
	{
		UStaticMeshComponent* tempComp = NewObject<UStaticMeshComponent>(GetTransientPackage(), NAME_None, RF_Transient );
		PreviewMeshComponents.Add(tempComp);
		
		ERHIFeatureLevel::Type FeatureLevel = GEditor->PreviewPlatform.GetEffectivePreviewFeatureLevel();
		if (FeatureLevel <= ERHIFeatureLevel::ES3_1)
		{
			PreviewMeshComponents[i]->SetMobility(EComponentMobility::Static);
		}
	}
	SEditorViewport::Construct( SEditorViewport::FArguments() );
	SetPreviewMeshes(StaticMeshes);

	FCoreUObjectDelegates::OnObjectPropertyChanged.AddRaw(this, &SHoudiniAssetEditorViewport::OnObjectPropertyChanged);
	UE_LOG(LogTemp, Warning, TEXT("Viewport Construct Called"));
}

SHoudiniAssetEditorViewport::SHoudiniAssetEditorViewport()
	: PreviewScene(MakeShareable(new FAdvancedPreviewScene(FPreviewScene::ConstructionValues())))
{
	
}

SHoudiniAssetEditorViewport::~SHoudiniAssetEditorViewport()
{
	CastChecked<UEditorEngine>(GEngine)->OnPreviewFeatureLevelChanged().Remove(PreviewFeatureLevelChangedHandle);

	FCoreUObjectDelegates::OnObjectPropertyChanged.RemoveAll(this);
	if (EditorViewportClient.IsValid())
	{
		EditorViewportClient->Viewport = NULL;
	}
}

void SHoudiniAssetEditorViewport::AddReferencedObjects(FReferenceCollector& Collector)
{
	Collector.AddReferencedObjects( PreviewMeshComponents );
	Collector.AddReferencedObjects(StaticMeshes );
	Collector.AddReferencedObject( HoudiniAssetObj );
	Collector.AddReferencedObject(HoudiniAssetActor);
	//Collector.AddReferencedObjects( SocketPreviewMeshComponents );
}

void SHoudiniAssetEditorViewport::RefreshViewport()
{
	// Invalidate the viewport's display.
	SceneViewport->Invalidate();
}

void SHoudiniAssetEditorViewport::ForceLODLevel(int32 InForcedLOD)
{
	if(PreviewMeshComponents.Num() > 0)
	{
		PreviewMeshComponents[0]->ForcedLodModel = InForcedLOD;
		LODSelection = InForcedLOD;
		{FComponentReregisterContext ReregisterContext(PreviewMeshComponents[0]);}
	}
	SceneViewport->Invalidate();
}

int32 SHoudiniAssetEditorViewport::GetLODSelection() const
{
	if(PreviewMeshComponents.Num() > 0)
	{
		if (PreviewMeshComponents[0])
        {
        	return PreviewMeshComponents[0]->ForcedLodModel;
        }
	}
	
	return 0;
}

int32 SHoudiniAssetEditorViewport::GetLODModelCount() const
{
	if(PreviewMeshComponents.Num() > 0)
	{
		if (PreviewMeshComponents[0] && PreviewMeshComponents[0]->GetStaticMesh())
		{
			return PreviewMeshComponents[0]->GetStaticMesh()->GetNumLODs();
		}
	}
	
	return 0;
}

bool SHoudiniAssetEditorViewport::IsLODModelSelected(int32 LODSelectionType) const
{
	if(PreviewMeshComponents.Num() > 0)
	{
		if (PreviewMeshComponents[0])
		{
			return (PreviewMeshComponents[0]->ForcedLodModel == LODSelectionType) ? true : false;
		}
	}
	
	return false;
}

void SHoudiniAssetEditorViewport::OnSetLODModel(int32 LODSelectionType)
{
	if(PreviewMeshComponents.Num() > 0)
	{
		if (PreviewMeshComponents[0])
		{
			PreviewMeshComponents[0]->bOverrideMinLOD = (LODSelectionType != 0);
			LODSelection = LODSelectionType;
			PreviewMeshComponents[0]->SetForcedLodModel(LODSelection);
			//PopulateUVChoices();
			HoudiniAssetEditorPtr.Pin()->BroadcastOnSelectedLODChanged();
			RefreshViewport();
		}
	}
	
	LODSelection = 0;
	HoudiniAssetEditorPtr.Pin()->BroadcastOnSelectedLODChanged();
	RefreshViewport();
}

void SHoudiniAssetEditorViewport::OnLODModelChanged()
{
	// if (PreviewMeshComponents && LODSelection != PreviewMeshComponents->ForcedLodModel)
	// {
	// 	// PopulateUVChoices();
	// }
}

UHoudiniAssetComponent* SHoudiniAssetEditorViewport::GetHoudiniAssetComponent() const
{
	return HoudiniAssetComponent;
}

TArray<UStaticMeshComponent*> SHoudiniAssetEditorViewport::GetStaticMeshComponents() const
{
	return PreviewMeshComponents;
}


void SHoudiniAssetEditorViewport::UpdateViewportFloorOffset()
{
	FVector Origin;
	FVector BoxExtent;
	HoudiniAssetActor->GetActorBounds(false, Origin, BoxExtent);
	PreviewScene->SetFloorOffset(-Origin.Z + BoxExtent.Z);
}


void SHoudiniAssetEditorViewport::SetPreviewMeshes(TArray<UStaticMesh*> InStaticMeshes)
{
	// Set the new preview static mesh.
	for(int i = 0; i < InStaticMeshes.Num(); i++)
	{
		FComponentReregisterContext ReregisterContext( PreviewMeshComponents[i] );
		PreviewMeshComponents[i]->SetStaticMesh(InStaticMeshes[i]);
	}
	EditorViewportClient->SetPreviewMeshes(InStaticMeshes ,PreviewMeshComponents);
}

void SHoudiniAssetEditorViewport::UpdatePreviewMeshes(TArray<UStaticMesh*> InStaticMeshes, bool bResetCamera)
{
	if(PreviewMeshComponents.Num() != InStaticMeshes.Num())
		PreviewMeshComponents.Empty();
	
	StaticMeshes = InStaticMeshes;
	const int32 MeshCount = InStaticMeshes.Num();
	for(int32 i = 0 ; i < MeshCount; i++)
	{
		UStaticMesh* PreviewStaticMesh = InStaticMeshes[i];
		
		if(PreviewMeshComponents.Num() != MeshCount)
		{
			UStaticMeshComponent* tempComp = NewObject<UStaticMeshComponent>(GetTransientPackage(), NAME_None, RF_Transient );
			PreviewMeshComponents.Add(tempComp);
		
			ERHIFeatureLevel::Type FeatureLevel = GEditor->PreviewPlatform.GetEffectivePreviewFeatureLevel();
			if (FeatureLevel <= ERHIFeatureLevel::ES3_1)
			{
				PreviewMeshComponents[i]->SetMobility(EComponentMobility::Static);
			}	
			PreviewMeshComponents[i]->SetStaticMesh(PreviewStaticMesh);
				
		}
		else
		{
			// {
			// 	const int32 SocketedComponentCount = SocketPreviewMeshComponents.Num();
			// 	for(int32 s = 0; s < SocketedComponentCount; ++s)
			// 	{
			// 		UStaticMeshComponent* SocketPreviewMeshComponent = SocketPreviewMeshComponents[s];
			// 		if( SocketPreviewMeshComponent )
			// 		{
			// 			PreviewScene->RemoveComponent(SocketPreviewMeshComponent);
			// 		}
			// 	}
			// 	SocketPreviewMeshComponents.Empty();
			// }
			
			PreviewMeshComponents[i]->SetStaticMesh(PreviewStaticMesh);
	
			// const int32 SocketCount = PreviewStaticMesh->Sockets.Num();
			// SocketPreviewMeshComponents.Reserve(SocketCount);
			// for(int32 i = 0; i < SocketCount; ++i)
			// {
			// 	UStaticMeshSocket* Socket = PreviewStaticMesh->Sockets[i];
			//
			// 	UStaticMeshComponent* SocketPreviewMeshComponent = NULL;
			// 	if( Socket && Socket->PreviewStaticMesh )
			// 	{
			// 		SocketPreviewMeshComponent = NewObject<UStaticMeshComponent>();
			// 		SocketPreviewMeshComponent->SetStaticMesh(Socket->PreviewStaticMesh);
			// 		SocketPreviewMeshComponent->AttachToComponent(PreviewMeshComponent, FAttachmentTransformRules::SnapToTargetIncludingScale, Socket->SocketName);
			// 		SocketPreviewMeshComponents.Add(SocketPreviewMeshComponent);
			// 		PreviewScene->AddComponent(SocketPreviewMeshComponent, FTransform::Identity);
			// 	}
			// }
		}
	}
	UpdateViewportFloorOffset();
	
	EditorViewportClient->SetPreviewMeshes(InStaticMeshes ,PreviewMeshComponents, bResetCamera);

	if (EditorViewportClient->EngineShowFlags.PhysicalMaterialMasks)
	{
		//Reapply the physical material masks mode on the newly set static mesh.
		SetViewModePhysicalMaterialMasksImplementation(true);
	}
	else if (EditorViewportClient->EngineShowFlags.VertexColors)
	{
		//Reapply the vertex color mode on the newly set static mesh.
		SetViewModeVertexColorImplementation(true);
	}
	
	// PreviewMeshComponent->SelectionOverrideDelegate = UPrimitiveComponent::FSelectionOverride::CreateRaw(this, &SStaticMeshEditorViewport::PreviewComponentSelectionOverride);
	// PreviewMeshComponent->PushSelectionToProxy();
}

FHoudiniAssetEditorViewportClient& SHoudiniAssetEditorViewport::GetViewportClient()
{
	return *EditorViewportClient;
}

void SHoudiniAssetEditorViewport::PopulateOverlayText(const TArray<FOverlayTextItem>& TextItems)
{
	OverlayTextVerticalBox->ClearChildren();

	for (const auto& TextItem : TextItems)
	{
		OverlayTextVerticalBox->AddSlot()
		[
			SNew(STextBlock)
			.Text(TextItem.Text)
			.TextStyle(FEditorStyle::Get(), TextItem.Style)
		];
	}
}

TSharedRef<SEditorViewport> SHoudiniAssetEditorViewport::GetViewportWidget()
{
	return SharedThis(this);
}

TSharedPtr<FExtender> SHoudiniAssetEditorViewport::GetExtenders() const
{
	TSharedPtr<FExtender> Result(MakeShareable(new FExtender));
	return Result;
}

void SHoudiniAssetEditorViewport::OnFloatingButtonClicked()
{
	
}

TSharedRef<FEditorViewportClient> SHoudiniAssetEditorViewport::MakeEditorViewportClient()
{
	EditorViewportClient = MakeShareable( new FHoudiniAssetEditorViewportClient(HoudiniAssetEditorPtr, SharedThis(this), PreviewScene.ToSharedRef(), HoudiniAssetObj, StaticMeshes, PreviewMeshComponents ) );

	EditorViewportClient->bSetListenerPosition = false;

	EditorViewportClient->SetRealtime( true );
	EditorViewportClient->VisibilityDelegate.BindSP( this, &SHoudiniAssetEditorViewport::IsVisible );

	return EditorViewportClient.ToSharedRef();
}

EVisibility SHoudiniAssetEditorViewport::OnGetViewportContentVisibility() const
{
	return IsVisible() ? EVisibility::Visible : EVisibility::Collapsed;
}

void SHoudiniAssetEditorViewport::BindCommands()
{
	SAssetEditorViewport::BindCommands();

	const FHoudiniAssetEditorCommands& Commands = FHoudiniAssetEditorCommands::Get();

	TSharedRef<FHoudiniAssetEditorViewportClient> EditorViewportClientRef = EditorViewportClient.ToSharedRef();

	CommandList->MapAction(
		Commands.SetShowWireframe,
		FExecuteAction::CreateSP( this, &SHoudiniAssetEditorViewport::SetViewModeWireframe ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( this, &SHoudiniAssetEditorViewport::IsInViewModeWireframeChecked ) );

	CommandList->MapAction(
		Commands.SetShowVertexColor,
		FExecuteAction::CreateSP( this, &SHoudiniAssetEditorViewport::SetViewModeVertexColor ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( this, &SHoudiniAssetEditorViewport::IsInViewModeVertexColorChecked ) );

	CommandList->MapAction(
		Commands.SetShowPhysicalMaterialMasks,
		FExecuteAction::CreateSP(this, &SHoudiniAssetEditorViewport::SetViewModePhysicalMaterialMasks),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &SHoudiniAssetEditorViewport::IsInViewModePhysicalMaterialMasksChecked));

	CommandList->MapAction(
		Commands.SetDrawUVs,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleDrawUVOverlay ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsDrawUVOverlayChecked ) );

	CommandList->MapAction(
		Commands.SetShowGrid,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::SetShowGrid ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsSetShowGridChecked ) );

	CommandList->MapAction(
		Commands.SetShowBounds,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleShowBounds ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsSetShowBoundsChecked ) );

	CommandList->MapAction(
		Commands.SetShowSimpleCollision,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleShowSimpleCollision ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsShowSimpleCollisionChecked ) );

	CommandList->MapAction(
		Commands.SetShowComplexCollision,
		FExecuteAction::CreateSP(EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleShowComplexCollision),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsShowComplexCollisionChecked));

	// CommandList->MapAction(
	// 	Commands.SetShowSockets,
	// 	FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleShowSockets ),
	// 	FCanExecuteAction(),
	// 	FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsShowSocketsChecked ) );

	// Menu
	CommandList->MapAction(
		Commands.SetShowNormals,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleShowNormals ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsShowNormalsChecked ) );

	CommandList->MapAction(
		Commands.SetShowTangents,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleShowTangents ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsShowTangentsChecked ) );

	CommandList->MapAction(
		Commands.SetShowBinormals,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleShowBinormals ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsShowBinormalsChecked ) );

	CommandList->MapAction(
		Commands.SetShowPivot,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleShowPivot ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsShowPivotChecked ) );

	CommandList->MapAction(
		Commands.SetDrawAdditionalData,
		FExecuteAction::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleDrawAdditionalData ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP( EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsDrawAdditionalDataChecked ) );

	CommandList->MapAction(
		Commands.SetShowVertices,
		FExecuteAction::CreateSP(EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::ToggleDrawVertices ),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(EditorViewportClientRef, &FHoudiniAssetEditorViewportClient::IsDrawVerticesChecked ) );

	// LOD
	HoudiniAssetEditorPtr.Pin()->RegisterOnSelectedLODChanged(FOnSelectedLODChanged::CreateSP(this, &SHoudiniAssetEditorViewport::OnLODModelChanged), false);
	//Bind LOD preview menu commands

	const FHoudiniAssetViewportLODCommands& ViewportLODMenuCommands = FHoudiniAssetViewportLODCommands::Get();
	
	//LOD Auto
	CommandList->MapAction(
		ViewportLODMenuCommands.LODAuto,
		FExecuteAction::CreateSP(this, &SHoudiniAssetEditorViewport::OnSetLODModel, 0),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &SHoudiniAssetEditorViewport::IsLODModelSelected, 0));

	// LOD 0
	CommandList->MapAction(
		ViewportLODMenuCommands.LOD0,
		FExecuteAction::CreateSP(this, &SHoudiniAssetEditorViewport::OnSetLODModel, 1),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &SHoudiniAssetEditorViewport::IsLODModelSelected, 1));
	// all other LODs will be added dynamically
}

void SHoudiniAssetEditorViewport::OnFocusViewportToSelection()
{
	// UStaticMeshSocket* SelectedSocket = HoudiniAssetEditorPtr.Pin()->GetSelectedSocket();
	// if( SelectedSocket && PreviewMeshComponent )
	// {
	// 	FTransform SocketTransform;
	// 	SelectedSocket->GetSocketTransform( SocketTransform, PreviewMeshComponent );
	//
	// 	const FVector Extent(30.0f);
	//
	// 	const FVector Origin = SocketTransform.GetLocation();
	// 	const FBox Box(Origin - Extent, Origin + Extent);
	//
	// 	EditorViewportClient->FocusViewportOnBox( Box );
	// 	return;
	// }

	// If we have selected primitives, focus on them 
	// FBox Box(ForceInit);
	// const bool bSelectedPrim = HoudiniAssetEditorPtr.Pin()->CalcSelectedPrimsAABB(Box);
	// if (bSelectedPrim)
	// {
	// 	EditorViewportClient->FocusViewportOnBox(Box);
	// 	return;
	// }
	//
	// // Fallback to focusing on the mesh, if nothing else
	// if( PreviewMeshComponent )
	// {
	// 	EditorViewportClient->FocusViewportOnBox( PreviewMeshComponent->Bounds.GetBox() );
	// 	return;
	// }
}

TSharedPtr<SWidget> SHoudiniAssetEditorViewport::MakeViewportToolbar()
{
	return SNew(SHoudiniAssetEditorViewportToolbar, SharedThis(this));
}

void SHoudiniAssetEditorViewport::PopulateViewportOverlays(TSharedRef<SOverlay> Overlay)
{
	SEditorViewport::PopulateViewportOverlays(Overlay);

	Overlay->AddSlot()
		.VAlign(VAlign_Top)
		.HAlign(HAlign_Left)
		.Padding(FMargin(10.0f, 40.0f, 10.0f, 10.0f))
		[
			SAssignNew(OverlayTextVerticalBox, SVerticalBox)
		];

	// this widget will display the current viewed feature level
	Overlay->AddSlot()
		.VAlign(VAlign_Bottom)
		.HAlign(HAlign_Right)
		.Padding(5.0f)
		[
			BuildFeatureLevelWidget()
		];
}

void SHoudiniAssetEditorViewport::SetViewModeVertexColor()
{
	SetViewModeVertexColorImplementation(!EditorViewportClient->EngineShowFlags.VertexColors);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), FAnalyticsEventAttribute(TEXT("VertexColors"), static_cast<int>(EditorViewportClient->EngineShowFlags.VertexColors)));
	}
}

bool SHoudiniAssetEditorViewport::IsInViewModeVertexColorChecked() const
{
	return EditorViewportClient->EngineShowFlags.VertexColors;
}

void SHoudiniAssetEditorViewport::SetViewModeWireframe()
{
	if(CurrentViewMode != VMI_Wireframe)
	{
		CurrentViewMode = VMI_Wireframe;
	}
	else
	{
		CurrentViewMode = VMI_Lit;
	}
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("CurrentViewMode"), FString::Printf(TEXT("%d"), static_cast<int32>(CurrentViewMode)));
	}
	EditorViewportClient->SetViewMode(CurrentViewMode);
	SceneViewport->Invalidate();
}

bool SHoudiniAssetEditorViewport::IsInViewModeWireframeChecked() const
{
	return CurrentViewMode == VMI_Wireframe;
}

bool SHoudiniAssetEditorViewport::IsVisible() const
{
	return ViewportWidget.IsValid() && (!ParentTab.IsValid() || ParentTab.Pin()->IsForeground());

}

void SHoudiniAssetEditorViewport::SetViewModeVertexColorImplementation(bool bValue)
{
	SetViewModeVertexColorSubImplementation(bValue);

	// Disable physical material masks, if enabling vertex color.
	if (bValue)
	{
		SetViewModePhysicalMaterialMasksSubImplementation(false);
	}

	for(UStaticMeshComponent* Component : PreviewMeshComponents)
	{
		Component->MarkRenderStateDirty();
	}
	SceneViewport->Invalidate();
}

void SHoudiniAssetEditorViewport::SetViewModeVertexColorSubImplementation(bool bValue)
{
	EditorViewportClient->EngineShowFlags.SetVertexColors(bValue);
	EditorViewportClient->EngineShowFlags.SetLighting(!bValue);
	EditorViewportClient->EngineShowFlags.SetIndirectLightingCache(!bValue);
	EditorViewportClient->EngineShowFlags.SetPostProcessing(!bValue);
	EditorViewportClient->SetFloorAndEnvironmentVisibility(!bValue);

	for(UStaticMeshComponent* Component : PreviewMeshComponents)
	{
		Component->bDisplayVertexColors = bValue;
	}
	
}

void SHoudiniAssetEditorViewport::SetViewModePhysicalMaterialMasks()
{
	SetViewModePhysicalMaterialMasksImplementation(!EditorViewportClient->EngineShowFlags.PhysicalMaterialMasks);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), FAnalyticsEventAttribute(TEXT("PhysicalMaterialMasks"), static_cast<int>(EditorViewportClient->EngineShowFlags.PhysicalMaterialMasks)));
	}
}

void SHoudiniAssetEditorViewport::SetViewModePhysicalMaterialMasksImplementation(bool bValue)
{
	SetViewModePhysicalMaterialMasksSubImplementation(bValue);

	// Disable vertex color, if enabling physical material masks.
	if (bValue)
	{
		SetViewModeVertexColorSubImplementation(false);
	}

	for(UStaticMeshComponent* Component : PreviewMeshComponents)
	{
		Component->MarkRenderStateDirty();
	}
	SceneViewport->Invalidate();
}

void SHoudiniAssetEditorViewport::SetViewModePhysicalMaterialMasksSubImplementation(bool bValue)
{
	EditorViewportClient->EngineShowFlags.SetPhysicalMaterialMasks(bValue);
	for(UStaticMeshComponent* Component : PreviewMeshComponents)
	{
		Component->bDisplayPhysicalMaterialMasks = bValue;
	}
}

bool SHoudiniAssetEditorViewport::IsInViewModePhysicalMaterialMasksChecked() const
{
	return EditorViewportClient->EngineShowFlags.PhysicalMaterialMasks;
}

void SHoudiniAssetEditorViewport::OnObjectPropertyChanged(UObject* ObjectBeingModified,
	FPropertyChangedEvent& PropertyChangedEvent)
{
	if ( !ensure(ObjectBeingModified) )
	{
		return;
	}

	// if( PreviewMeshComponent )
	// {
	// 	bool bShouldUpdatePreviewSocketMeshes = (ObjectBeingModified == PreviewMeshComponent->GetStaticMesh());
	// 	if( !bShouldUpdatePreviewSocketMeshes && PreviewMeshComponent->GetStaticMesh())
	// 	{
	// 		const int32 SocketCount = PreviewMeshComponent->GetStaticMesh()->Sockets.Num();
	// 		for( int32 i = 0; i < SocketCount; ++i )
	// 		{
	// 			if( ObjectBeingModified == PreviewMeshComponent->GetStaticMesh()->Sockets[i] )
	// 			{
	// 				bShouldUpdatePreviewSocketMeshes = true;
	// 				break;
	// 			}
	// 		}
	// 	}
	//
	// 	if( bShouldUpdatePreviewSocketMeshes )
	// 	{
	// 		UpdatePreviewSocketMeshes();
	// 		RefreshViewport();
	// 	}
	// }
}

#undef LOCTEXT_NAMESPACE
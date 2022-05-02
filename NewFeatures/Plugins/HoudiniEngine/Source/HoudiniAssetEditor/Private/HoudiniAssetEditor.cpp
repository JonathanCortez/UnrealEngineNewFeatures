#include "HoudiniAssetEditor.h"

#include <string>

#include "AssetData.h"
#include "Misc/MessageDialog.h"
#include "HAL/FileManager.h"
#include "Misc/ScopedSlowTask.h"
#include "Modules/ModuleManager.h"
#include "Framework/Application/SlateApplication.h"
#include "EditorStyleSet.h"
#include "EditorReimportHandler.h"
#include "Editor/UnrealEdEngine.h"
#include "EditorFramework/AssetImportData.h"
#include "Engine/StaticMesh.h"
#include "Editor.h"
#include "UnrealEdGlobals.h"
#include "HoudiniAssetEditorModule.h"
#include "AI/Navigation/NavCollisionBase.h"
#include "ScopedTransaction.h"

#include "SHoudiniAssetEditorViewport.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "IDetailCustomization.h"
#include "HoudiniAssetEditorTools.h"
#include "HoudiniAssetEditorActions.h"
#include "HoudiniEngineStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "HoudiniAssetComponent.h"
#include "HoudiniParameter.h"
#include "HoudiniEngineDetails.h"

#include "StaticMeshResources.h"
#include "BusyCursor.h"
#include "Editor/UnrealEd/Private/GeomFitUtils.h"
#include "EditorViewportCommands.h"
#include "Editor/UnrealEd/Private/ConvexDecompTool.h"

#include "Runtime/Analytics/Analytics/Public/Interfaces/IAnalyticsProvider.h"
#include "EngineAnalytics.h"
#include "Widgets/Docking/SDockTab.h"
#include "Framework/Commands/GenericCommands.h"
#include "Widgets/Input/STextComboBox.h"
#include "PhysicsEngine/ConvexElem.h"
#include "PhysicsEngine/BoxElem.h"
#include "PhysicsEngine/SphereElem.h"
#include "PhysicsEngine/SphylElem.h"
#include "PhysicsEngine/BodySetup.h"

#include "AdvancedPreviewSceneModule.h"

#include "EditorViewportTabContent.h"
#include "EditorViewportLayout.h"
#include "HoudiniAssetActor.h"
#include "HoudiniAssetEditorActor.h"
#include "Engine/InstancedStaticMesh.h"
#include "Styling/SlateStyleRegistry.h"

#define LOCTEXT_NAMESPACE "HoudiniAssetEditor"


const FName FHoudiniAssetEditor::ViewportTabId( TEXT( "HoudiniAssetEditor_Viewport" ) );
const FName FHoudiniAssetEditor::PropertiesTabId( TEXT( "HoudiniAssetEditor_Properties" ) );
// const FName FStaticMeshEditor::SocketManagerTabId( TEXT( "StaticMeshEditor_SocketManager" ) );
const FName FHoudiniAssetEditor::HoudiniInfoTabId( TEXT( "HoudiniAssetEditor_HoudiniInfo" ) );
const FName FHoudiniAssetEditor::PreviewSceneSettingsTabId( TEXT ("HoudiniAssetEditor_PreviewScene" ) );
const FName FHoudiniAssetEditor::SecondaryToolbarTabId( TEXT( "HoudiniAssetEditor_SecondaryToolbar" ) );

FHoudiniAssetEditor::~FHoudiniAssetEditor()
{
	if (HoudiniAssetEditorObj)
	{
		if(HoudiniStaticMeshes.Num() > 0)
			HoudiniStaticMeshes[0]->GetOnMeshChanged().RemoveAll(this);
	}

	if (ViewportTabContent.IsValid())
	{
		ViewportTabContent->OnViewportTabContentLayoutChanged().RemoveAll(this);
	}

	OnHoudiniAssetEditorClosed().Broadcast();

	FReimportManager::Instance()->OnPostReimport().RemoveAll(this);

	GEditor->UnregisterForUndo( this );
	GEditor->GetEditorSubsystem<UImportSubsystem>()->OnAssetReimport.RemoveAll(this);
	bOpenEditor = false;
	
}

void FHoudiniAssetEditor::InitEditorForHoudiniAsset(UHoudiniAssetEditorObject* ObjectToEdit)
{
	FReimportManager::Instance()->OnPostReimport().AddRaw(this, &FHoudiniAssetEditor::OnPostReimport);
    GEditor->RegisterForUndo( this );

    // Register our commands. This will only register them if not previously registered
    FHoudiniAssetEditorCommands::Register();

    // Register to be notified when an object is reimported.
    GEditor->GetEditorSubsystem<UImportSubsystem>()->OnAssetReimport.AddSP(this, &FHoudiniAssetEditor::OnObjectReimported);
	
    BindCommands();

    // The tab must be created before the viewport layout because the layout needs them
    TSharedRef< SDockTab > DockableTab =
    	SNew(SDockTab)
    	.Icon(FEditorStyle::GetBrush("LevelEditor.Tabs.Viewports"));

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(TEXT("PropertyEditor"));

	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.bAllowSearch = true;
	DetailsViewArgs.bLockable = false;
	DetailsViewArgs.bUpdatesFromSelection = false;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	DetailsViewArgs.NotifyHook = this;

	HoudiniAssetDetailsView = PropertyEditorModule.CreateDetailView( DetailsViewArgs );

	FOnGetDetailCustomizationInstance LayoutCustomHoudiniAssetProperties = FOnGetDetailCustomizationInstance::CreateSP( this, &FHoudiniAssetEditor::MakeHoudiniAssetDetails );
	HoudiniAssetDetailsView->RegisterInstancedCustomPropertyLayout( UHoudiniAssetEditorObject::StaticClass(), LayoutCustomHoudiniAssetProperties );
	PropertyEditorModule.NotifyCustomizationModuleChanged();

	HoudiniAssetEditorObj = ObjectToEdit;
	HoudiniStaticMeshes = ObjectToEdit->GetHoudiniMeshes();
	HoudiniChildernComponents = ObjectToEdit->GetHoudiniAssetActorComponents();
	bOpenEditor = true;
	
	// Support undo/redo
	ObjectToEdit->SetFlags( RF_Transactional );
	// if (ObjectToEdit->NavCollision)
	// {
	// 	ObjectToEdit->NavCollision->SetFlags(RF_Transactional);
	// }
	
    IHoudiniAssetEditorModule* HoudiniAssetEditorModule = &FModuleManager::LoadModuleChecked<IHoudiniAssetEditorModule>("HoudiniAssetEditor");
    HoudiniAssetEditorModule->OnHoudiniAssetEditorOpened().Broadcast(SharedThis(this));
}

void FHoudiniAssetEditor::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(LOCTEXT("WorkspaceMenu_HoudiniAssetEditor", "Houdini Mesh Editor"));
	auto WorkspaceMenuCategoryRef = WorkspaceMenuCategory.ToSharedRef();

	const ISlateStyle* SlateStyle = FSlateStyleRegistry::FindSlateStyle(TEXT("HoudiniEngineStyle"));
	const FName HoudiniStyleSetName = SlateStyle->GetStyleSetName();

	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	InTabManager->RegisterTabSpawner( ViewportTabId, FOnSpawnTab::CreateSP(this, &FHoudiniAssetEditor::SpawnTab_Viewport) )
		.SetDisplayName( LOCTEXT("ViewportTab", "Viewport") )
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Viewports"));

	InTabManager->RegisterTabSpawner( PropertiesTabId, FOnSpawnTab::CreateSP(this, &FHoudiniAssetEditor::SpawnTab_Properties) )
		.SetDisplayName( LOCTEXT("PropertiesTab", "Houdini Parameters") )
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(HoudiniStyleSetName, "ClassIcon.HoudiniAsset"));

	// InTabManager->RegisterTabSpawner( SocketManagerTabId, FOnSpawnTab::CreateSP(this, &FStaticMeshEditor::SpawnTab_SocketManager) )
	// 	.SetDisplayName( LOCTEXT("SocketManagerTab", "Socket Manager") )
	// 	.SetGroup(WorkspaceMenuCategoryRef)
	// 	.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.Tabs.SocketManager"));
	//
	
	InTabManager->RegisterTabSpawner( HoudiniInfoTabId, FOnSpawnTab::CreateSP(this, &FHoudiniAssetEditor::SpawnTab_HoudiniInfo) )
		.SetDisplayName( LOCTEXT("HoudiniInfoTab", "Houdini Asset Info") )
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(HoudiniStyleSetName, "HoudiniEngine.HoudiniEngineLogo"));

	InTabManager->RegisterTabSpawner( PreviewSceneSettingsTabId, FOnSpawnTab::CreateSP(this, &FHoudiniAssetEditor::SpawnTab_PreviewSceneSettings) )
		.SetDisplayName( LOCTEXT("PreviewSceneTab", "Preview Scene Settings") )
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));

	FTabSpawnerEntry& MenuEntry = InTabManager->RegisterTabSpawner( SecondaryToolbarTabId, FOnSpawnTab::CreateSP(this, &FHoudiniAssetEditor::SpawnTab_SecondaryToolbar) )
		.SetDisplayName( LOCTEXT("ToolbarTab", "Secondary Toolbar") )
		.SetGroup(WorkspaceMenuCategoryRef)
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "Toolbar.Icon"));

	// Hide the menu item by default. It will be enabled only if the secondary toolbar is populated with extensions
	SecondaryToolbarEntry = &MenuEntry;
	SecondaryToolbarEntry->SetMenuType( ETabSpawnerMenuType::Hidden );

	HoudiniOnRegisterTabSpawners().Broadcast(InTabManager);
}

void FHoudiniAssetEditor::UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);

	InTabManager->UnregisterTabSpawner( ViewportTabId );
	InTabManager->UnregisterTabSpawner( PropertiesTabId );
	// InTabManager->UnregisterTabSpawner( SocketManagerTabId );
	InTabManager->UnregisterTabSpawner( HoudiniInfoTabId );
	InTabManager->UnregisterTabSpawner( PreviewSceneSettingsTabId );
	InTabManager->UnregisterTabSpawner( SecondaryToolbarTabId );

	HoudiniOnUnregisterTabSpawners().Broadcast(InTabManager);
}

void FHoudiniAssetEditor::InitHoudiniAssetEditor(const EToolkitMode::Type Mode,
	const TSharedPtr<IToolkitHost>& InitToolkitHost, UHoudiniAssetEditorObject* ObjectToEdit)
{
	bAllowClose = false;
	InitEditorForHoudiniAsset(ObjectToEdit);

	TSharedRef<FTabManager::FStack> ExtentionTabStack(
		FTabManager::NewStack()
		->SetSizeCoefficient(0.3f));
		// ->AddTab(SocketManagerTabId, ETabState::OpenedTab)
		// ->AddTab(CollisionTabId, ETabState::ClosedTab));
	//Let additional extensions dock themselves to this TabStack of tools
	OnHoudiniAssetEditorDockingExtentionTabs().Broadcast(ExtentionTabStack);
	
	const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout( "Standalone_HoudiniAssetEditor_Layout_v4.2" )
	->AddArea
	(
		FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
		->Split
		(
			FTabManager::NewStack()
			->SetSizeCoefficient(0.1f)
			->SetHideTabWell( true )
			->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
			// Don't want the secondary toolbar tab to be opened if there's nothing in it
			->AddTab(SecondaryToolbarTabId, ETabState::ClosedTab)
		)
		->Split
		(
			FTabManager::NewSplitter() ->SetOrientation(Orient_Horizontal)
			->SetSizeCoefficient(0.9f)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.6f)
				->AddTab(ViewportTabId, ETabState::OpenedTab)
				->SetHideTabWell( true )
			)
			->Split
			(
				FTabManager::NewSplitter() ->SetOrientation(Orient_Vertical)
				->SetSizeCoefficient(0.2f)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.7f)
					->AddTab(PropertiesTabId, ETabState::OpenedTab)
					->AddTab(HoudiniInfoTabId, ETabState::OpenedTab)
					->AddTab(PreviewSceneSettingsTabId, ETabState::OpenedTab)
					
				)
				->Split
				(
					ExtentionTabStack
				)
			)
		)
	);
	
	const bool bCreateDefaultStandaloneMenu = true;
	const bool bCreateDefaultToolbar = true;
	FAssetEditorToolkit::InitAssetEditor( Mode, InitToolkitHost, HoudiniAssetEditorAppIdentifier, StandaloneDefaultLayout, bCreateDefaultToolbar, bCreateDefaultStandaloneMenu, ObjectToEdit);
	
	if (HoudiniAssetDetailsView.IsValid())
	{
		HoudiniAssetDetailsView->SetObject((UObject*)HoudiniAssetEditorObj);
	}
	
	ExtendMenu();
	ExtendToolBar();
	RegenerateMenusAndToolbars();
	GenerateSecondaryToolbar();

	if(HoudiniAssetEditorObj->GetHoudiniAsset())
	{
		bAllowClose = true;
	}
	
}

TSharedRef<IDetailCustomization> FHoudiniAssetEditor::MakeHoudiniAssetDetails()
{
	TSharedRef<FHoudiniAssetDetails> NewDetails = MakeShareable( new FHoudiniAssetDetails( *this ) );
	HoudiniAssetDetails = NewDetails;
	return NewDetails;
}

void FHoudiniAssetEditor::UpdateHoudiniAssetEditor()
{
	UE_LOG(LogTemp,Warning,TEXT("Called Update Houdini Asset Editor"));
	
	AHoudiniAssetActor* HoudiniActor = GetHoudiniAssetActor();
	HoudiniActor->GetComponents(HoudiniChildernComponents);
	HoudiniAssetEditorObj->HoudiniAssetActorChildComponents(HoudiniChildernComponents);
	
	HoudiniStaticMeshes.Empty();
	HoudiniAssetEditorObj->HoudiniInstanceData.Empty();
	
	for(auto Comp : HoudiniChildernComponents)
	{
		if(Comp->IsA(UHoudiniAssetComponent::StaticClass()))
			continue;
		
		if(Comp->IsA(UInstancedStaticMeshComponent::StaticClass()))
		{
			UInstancedStaticMeshComponent* InstanceComp = Cast<UInstancedStaticMeshComponent>(Comp);
			if(!InstanceComp)
				break;
			
			FHoudiniInstanceComponentInfo InstanceInfo;
			InstanceInfo.InstanceCount = InstanceComp->GetNumRenderInstances();
			InstanceInfo.InstanceMesh = InstanceComp->GetStaticMesh();
			InstanceInfo.MeshName = InstanceComp->GetStaticMesh()->GetName();

			for(int i = 0; i < InstanceComp->GetInstanceCount(); ++i)
			{
				FTransform InstanceTransform;
				InstanceComp->GetInstanceTransform(i,InstanceTransform);
				InstanceInfo.InstanceTransform.Add(InstanceTransform);
			}
			
			HoudiniAssetEditorObj->HoudiniInstanceData.Add(InstanceInfo);
			HoudiniStaticMeshes.Add(InstanceComp->GetStaticMesh());
			
		}
		else if(Comp->IsA(UStaticMeshComponent::StaticClass()))
		{
			UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(Comp);
			if(!Mesh)
				break;
			
			HoudiniStaticMeshes.Add(Mesh->GetStaticMesh());
		}
	}
	
	HoudiniAssetEditorObj->SetStaticMeshes(HoudiniStaticMeshes);
	
	SetEditorMeshes(HoudiniStaticMeshes, false);
	UpdateActors();
	bAllowClose = true;
}

void FHoudiniAssetEditor::AddReferencedObjects(FReferenceCollector& Collector)
{
	Collector.AddReferencedObjects(HoudiniStaticMeshes );
	Collector.AddReferencedObject( HoudiniAssetEditorObj );
}

FName FHoudiniAssetEditor::GetToolkitFName() const
{
	return FName("HoudiniAssetEditor");
}

FText FHoudiniAssetEditor::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "HoudiniAsset Editor");
}

FString FHoudiniAssetEditor::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("WorldCentricTabPrefix", "HoudiniAsset ").ToString();
}

FLinearColor FHoudiniAssetEditor::GetWorldCentricTabColorScale() const
{
	return FLinearColor( 0.3f, 0.2f, 0.5f, 0.5f );
}

UHoudiniAssetComponent* FHoudiniAssetEditor::GetHoudiniAssetComponent() const
{
	if(GetHoudiniAssetViewport().IsValid())
	{
		return GetHoudiniAssetViewport()->GetHoudiniAssetComponent();
	}
	return nullptr;
}

TArray<UStaticMeshComponent*> FHoudiniAssetEditor::GetStaticMeshComponents() const
{
	return GetHoudiniAssetViewport().IsValid() ? GetHoudiniAssetViewport()->GetStaticMeshComponents() : TArray<UStaticMeshComponent*>{};
}

// bool FHoudiniAssetEditor::IsSelectedPrim(const FPrimData& InPrimData) const
// {
// 	return SelectedPrims.Contains(InPrimData);
// }

int32 FHoudiniAssetEditor::GetNumTriangles(int32 LODLevel) const
{
	return NumTriangles.IsValidIndex(LODLevel) ? NumTriangles[LODLevel] : 0;
}

int32 FHoudiniAssetEditor::GetNumVertices(int32 LODLevel) const
{
	return NumVertices.IsValidIndex(LODLevel) ? NumVertices[LODLevel] : 0;
}

int32 FHoudiniAssetEditor::GetNumUVChannels(int32 LODLevel) const
{
	return NumUVChannels.IsValidIndex(LODLevel) ? NumUVChannels[LODLevel] : 0;
}

int32 FHoudiniAssetEditor::GetCurrentUVChannel()
{
	return FMath::Min(CurrentViewedUVChannel, GetNumUVChannels());
}



int32 FHoudiniAssetEditor::GetCurrentLODLevel()
{
	if(GetStaticMeshComponents().Num() > 0 )
	{
		if (GetStaticMeshComponents()[0])
		{
			return GetStaticMeshComponents()[0]->ForcedLodModel;
		}
	}
	
	return 0;
}

int32 FHoudiniAssetEditor::GetCurrentLODIndex()
{
	int32 Index = GetCurrentLODLevel();

	return Index == 0? 0 : Index - 1;
}

TMap<int32, UStaticMesh*> FHoudiniAssetEditor::GetCurrentUVMesh(int32 LODLevel) const
{
	return MeshUVIndex.IsValidIndex(LODLevel) ? MeshUVIndex[LODLevel] : TMap<int32, UStaticMesh*>{};
}

TMap<int32, int32> FHoudiniAssetEditor::GetCurrentMeshUVIndex(int32 LODLevel) const
{
	return MeshUVMainIndex.IsValidIndex(LODLevel) ? MeshUVMainIndex[LODLevel] : TMap<int32, int32>{};
}


int32 FHoudiniAssetEditor::GetCustomData(const int32 Key) const
{
	if (!CustomEditorData.Contains(Key))
	{
		return INDEX_NONE;
	}
	return CustomEditorData[Key];
}

void FHoudiniAssetEditor::SetCustomData(const int32 Key, const int32 CustomData)
{
	CustomEditorData.FindOrAdd(Key) = CustomData;
}

void FHoudiniAssetEditor::RefreshTool()
{
	ResetLODStats();
	
	for(auto Mesh : HoudiniStaticMeshes)
	{
		int32 NumLODs = Mesh->GetNumLODs();
		for (int32 LODIndex = 0; LODIndex < NumLODs; ++LODIndex)
		{
			UpdateLODStats(LODIndex, Mesh);
		}
	}
	
	OnSelectedLODChangedResetOnRefresh.Clear();
	bool bForceRefresh = true;
	HoudiniAssetDetailsView->SetObject( HoudiniAssetEditorObj, bForceRefresh );

	RefreshViewport();
}

void FHoudiniAssetEditor::RefreshViewport()
{
	if (GetHoudiniAssetViewport().IsValid())
	{
		GetHoudiniAssetViewport()->RefreshViewport();
	}
}

FEditorViewportClient& FHoudiniAssetEditor::GetViewportClient()
{
	return GetHoudiniAssetViewport()->GetViewportClient();
}

void FHoudiniAssetEditor::SetSecondaryToolbarDisplayName(FText DisplayName)
{
	SecondaryToolbarDisplayName = DisplayName;
}

void FHoudiniAssetEditor::ExtendMenu()
{
	
	struct Local
	{
				
		// static void FillEditMenu( FMenuBuilder& InMenuBuilder )
		// {
		// 	InMenuBuilder.BeginSection("Sockets", LOCTEXT("EditStaticMeshSockets", "Sockets"));
		// 	{
		// 		InMenuBuilder.AddMenuEntry( FGenericCommands::Get().Delete, "DeleteSocket", LOCTEXT("DeleteSocket", "Delete Socket"), LOCTEXT("DeleteSocketToolTip", "Deletes the selected socket from the mesh.") );
		// 		InMenuBuilder.AddMenuEntry( FGenericCommands::Get().Duplicate, "DuplicateSocket", LOCTEXT("DuplicateSocket", "Duplicate Socket"), LOCTEXT("DuplicateSocketToolTip", "Duplicates the selected socket.") );
		// 	}
		// 	InMenuBuilder.EndSection();
		// }

		static void FillMeshMenu( FMenuBuilder& InMenuBuilder )
		{
			// @todo mainframe: These menus, and indeed all menus like them, should be updated with extension points, plus expose public module
			// access to extending the menus.  They may also need to extend the command list, or be able to PUSH a command list of their own.
			// If we decide to only allow PUSHING, then nothing else should be needed (happens by extender automatically).  But if we want to
			// augment the asset editor's existing command list, then we need to think about how to expose support for that.

			InMenuBuilder.BeginSection("MeshFindSource");
			{
				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().FindSource);
			}
			InMenuBuilder.EndSection();

			// InMenuBuilder.BeginSection("MeshChange");
			// {
			// 	InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ChangeMesh);
			// 	static auto* CVar = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.StaticMesh.EnableSaveGeneratedLODsInPackage"));
			// 	if (CVar && CVar->GetValueOnGameThread() != 0)
			// 	{
			// 		InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().SaveGeneratedLODs);
			// 	}
			// }
			// InMenuBuilder.EndSection();
		}

		static void FillBakeSubMenu(FMenuBuilder& InMenuBuilder)
		{
			InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ActorBake,
			NAME_Name,
			FHoudiniAssetEditorCommands::Get().ActorBake->GetLabel(),
			FHoudiniAssetEditorCommands::Get().ActorBake->GetDescription(),
			FSlateIcon(FEditorStyle::GetStyleSetName(), "GraphEditor.SpawnActor_16x")
			);

			InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().BlueprintBake,
			NAME_Name,
			FHoudiniAssetEditorCommands::Get().BlueprintBake->GetLabel(),
			FHoudiniAssetEditorCommands::Get().BlueprintBake->GetDescription(),
			FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.CreateClassBlueprint")
			);

			InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().FoliageBake,
			NAME_Name,
			FHoudiniAssetEditorCommands::Get().FoliageBake->GetLabel(),
			FHoudiniAssetEditorCommands::Get().FoliageBake->GetDescription(),
			FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.FoliageMode.Small")
			);

			InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().WorldOutlinerBake,
			NAME_Name,
			FHoudiniAssetEditorCommands::Get().WorldOutlinerBake->GetLabel(),
			FHoudiniAssetEditorCommands::Get().WorldOutlinerBake->GetDescription(),
			FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.WorldBrowserDetails")
			);
		}

		static void FillHoudiniEngineMenu(FMenuBuilder& InMenuBuilder)
		{
			const ISlateStyle* SlateStyle = FSlateStyleRegistry::FindSlateStyle(TEXT("HoudiniEngineStyle"));
			const FName HoudiniStyleSetName = SlateStyle->GetStyleSetName();
			
			InMenuBuilder.BeginSection("Generate", LOCTEXT("HoudiniEngineGenerate", "Generate"));
			{
				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().Recook,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().Recook->GetLabel(),
				FHoudiniAssetEditorCommands::Get().Recook->GetDescription(),
				FSlateIcon(HoudiniStyleSetName, "HoudiniEngine._CookAll")
				);

				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().Rebuild,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().Rebuild->GetLabel(),
				FHoudiniAssetEditorCommands::Get().Rebuild->GetDescription(),
				FSlateIcon(HoudiniStyleSetName, "HoudiniEngine._RebuildSelected")
				);

				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ResetParm,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ResetParm->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ResetParm->GetDescription(),
				FSlateIcon(HoudiniStyleSetName, "HoudiniEngine.ResetParm")
				);
			}
			InMenuBuilder.EndSection();

			InMenuBuilder.BeginSection("Bake", LOCTEXT("HoudniEngineBakeAsset", "Bake"));
			{
				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().Bake,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().Bake->GetLabel(),
				FHoudiniAssetEditorCommands::Get().Bake->GetDescription(),
				FSlateIcon(HoudiniStyleSetName, "HoudiniEngine._BakeAll")
				);

				InMenuBuilder.AddSubMenu(
				LOCTEXT("BakeSubMenu","Bake Type"),
				LOCTEXT("BakeType_Tooltip", "Choose a Bake Output type"),
				FNewMenuDelegate::CreateStatic(&Local::FillBakeSubMenu),
				false,
				FSlateIcon(HoudiniStyleSetName, "HoudiniEngine._BakeAll")
				);

				InMenuBuilder.AddSeparator();

				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().RemoveHDABake,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().RemoveHDABake->GetLabel(),
				FHoudiniAssetEditorCommands::Get().RemoveHDABake->GetDescription()
				);

				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().RecenterBakeActor,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().RecenterBakeActor->GetLabel(),
				FHoudiniAssetEditorCommands::Get().RecenterBakeActor->GetDescription()
				);

				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().AutoBake,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().AutoBake->GetLabel(),
				FHoudiniAssetEditorCommands::Get().AutoBake->GetDescription()
				);

				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ReplacePrevious,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ReplacePrevious->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ReplacePrevious->GetDescription()
				);
			}
			InMenuBuilder.EndSection();

			InMenuBuilder.BeginSection("AssetOptions", LOCTEXT("HoudiniEngineAssetOpt", "Asset Options"));
			{
				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().OnParmChange,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().OnParmChange->GetLabel(),
				FHoudiniAssetEditorCommands::Get().OnParmChange->GetDescription()
				);

				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().OnAssetInputCook,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().OnAssetInputCook->GetLabel(),
				FHoudiniAssetEditorCommands::Get().OnAssetInputCook->GetDescription()
				);
				
			}
			InMenuBuilder.EndSection();

			InMenuBuilder.BeginSection("HelpDebug", LOCTEXT("HoudiniEngineHelp","Help and Debug"));
			{
				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ShowCookLog,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ShowCookLog->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ShowCookLog->GetDescription(),
				FSlateIcon(HoudiniStyleSetName, "HoudiniEngine.CookLog")
				);
				
				InMenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().AssetHelp,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().AssetHelp->GetLabel(),
				FHoudiniAssetEditorCommands::Get().AssetHelp->GetDescription(),
				FSlateIcon(HoudiniStyleSetName, "HoudiniEngine.AssetHelp")
				);
			}
			InMenuBuilder.EndSection();
			
		}

		static void GenerateNewMenuBars( FMenuBarBuilder& InMenuBarBuilder)
		{
			InMenuBarBuilder.AddPullDownMenu(
				LOCTEXT("HoudiniAssetEditorMeshMenu", "Mesh"),
				LOCTEXT("HoudiniAssetEditorMeshMenu_ToolTip", "Opens a menu with commands for altering this mesh"),
				FNewMenuDelegate::CreateStatic(&Local::FillMeshMenu),
				"Mesh");

			/* Add New Menu to Editor here */

			InMenuBarBuilder.AddPullDownMenu(
			LOCTEXT("HoudiniAssetEditorEngineMenu", "Houdini Engine"),
			LOCTEXT("HoudiniAssedEditorMeshMenu_Tooltip", "Opens a menu with commands to update HDA."),
			FNewMenuDelegate::CreateStatic(&Local::FillHoudiniEngineMenu),
			"Houdini Engine"
			);
		}
	};

	TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender);

	MenuExtender->AddMenuBarExtension(
		"Asset",
		EExtensionHook::After,
		GetToolkitCommands(),
		FMenuBarExtensionDelegate::CreateStatic( &Local::GenerateNewMenuBars )
		);

	AddMenuExtender(MenuExtender);

	IHoudiniAssetEditorModule* HoudiniAssetEditorModule = &FModuleManager::LoadModuleChecked<IHoudiniAssetEditorModule>( "HoudiniAssetEditor" );
	AddMenuExtender(HoudiniAssetEditorModule->GetMenuExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects()));
}

void FHoudiniAssetEditor::RegisterOnPostUndo(const FOnPostUndo& Delegate)
{
	OnPostUndo.Add( Delegate );
}

void FHoudiniAssetEditor::UnregisterOnPostUndo(SWidget* Widget)
{
	OnPostUndo.RemoveAll( Widget );
}

void FHoudiniAssetEditor::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent,
	FProperty* PropertyThatChanged)
{
	
	// if(HoudiniAsset && HoudiniAsset->BodySetup)
	// {
	// 	HoudiniAsset->BodySetup->CreatePhysicsMeshes();
	//
	// 	if (GET_MEMBER_NAME_CHECKED(UStaticMesh, LODGroup) == PropertyChangedEvent.GetPropertyName())
	// 	{
	// 		RefreshTool();
	// 	}
	// 	else if (PropertyChangedEvent.GetPropertyName() == TEXT("CollisionResponses"))
	// 	{
	// 		for (FObjectIterator Iter(UStaticMeshComponent::StaticClass()); Iter; ++Iter)
	// 		{
	// 			UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(*Iter);
	// 			if (StaticMeshComponent->GetStaticMesh() == HoudiniAsset)
	// 			{
	// 				StaticMeshComponent->UpdateCollisionFromStaticMesh();
	// 				StaticMeshComponent->MarkRenderTransformDirty();
	// 			}
	// 		}
	// 	}
	// }
}

EViewModeIndex FHoudiniAssetEditor::GetViewMode() const
{
	if (GetHoudiniAssetViewport().IsValid())
	{
		const FHoudiniAssetEditorViewportClient& ViewportClient = GetHoudiniAssetViewport()->GetViewportClient();
		return ViewportClient.GetViewMode();
	}
	else
	{
		return VMI_Unknown;
	}
}

void FHoudiniAssetEditor::UpdateActors()
{
	/** Check for any NULL Actor to remove from list */
	for(int32 i = 0; i < HoudiniAssetEditorObj->GetEditorActors().Num(); i++)
	{
		if(!HoudiniAssetEditorObj->HoudiniAssetEditorActors[i])
		{
			HoudiniAssetEditorObj->HoudiniAssetEditorActors.RemoveAt(i);
		}
	}
	
	/** Check and remove any AActor that isnt placed in the world/level
	 * Spawn Actor gets called twice when drag & drop AActor to world so we
	 * are removing the extra one here. */
	for(int32 i = 0; i < HoudiniAssetEditorObj->GetEditorActors().Num(); i++)
	{
		AHoudiniAssetEditorActor* Actor = HoudiniAssetEditorObj->HoudiniAssetEditorActors[i];
		
		if(Actor->HasAnyFlags(RF_Transient))
		{
			HoudiniAssetEditorObj->HoudiniAssetEditorActors.Remove(Actor);
		}
	}
	
	TArray<UObject*> ActorObj;
	TArray<AHoudiniAssetEditorActor*> EditorActors = HoudiniAssetEditorObj->GetEditorActors();
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(TEXT("PropertyEditor"));
		
	if(EditorActors.Num() > 0)
	{
		// bool RemoveComps = false;
		// if(HoudiniChildernComponents.Num() < EditorActors[0]->GetComponents().Num())
		// {
		// 	RemoveComps = true;
		// }
		
		
		for(auto Actor : EditorActors)
		{
			if(!Actor && !Actor->IsPendingKill())
				continue;

			TArray<UActorComponent*> Components;
			Actor->GetComponents(Components);
			
			for(int32 i = 0; i < Components.Num(); i++)
			{
				FString CompName = Components[i]->GetName();
				if(CompName == "HoudiniAssetRootComponent")
					continue;
				
				Actor->RemoveOwnedComponent(Components[i]);
				Components[i]->UnregisterComponent();
				Components[i]->DestroyComponent();
			}
			
			int32 InstanceCount = 0;
			int32 StaticCount = 0;
			
			for(auto Comp : HoudiniChildernComponents)
			{
				if(Comp->IsA(UInstancedStaticMeshComponent::StaticClass()))
				{
					// FHoudiniInstanceComponentInfo InstanceData = HoudiniAssetEditorObj->HoudiniInstanceData[InstanceCount];
					//
					// UInstancedStaticMeshComponent* InstanceComp = Cast<UInstancedStaticMeshComponent>(Comp);
					// InstanceComp->ClearInstances();
					// InstanceComp->AddInstances(InstanceData.InstanceTransform, false);
					// InstanceComp->ReregisterComponent();
		
					FFormatNamedArguments Args;
					Args.Add("ComponentName", FText::FromString("HoudiniInstanceStaticMeshComponent_"));
					Args.Add("ComponentIndex", FText::AsNumber(InstanceCount));
					
					UInstancedStaticMeshComponent* InstanceComp = DuplicateObject(Cast<UInstancedStaticMeshComponent>(Comp),
					Actor,FName(*FText::Format(NSLOCTEXT("UnrealEd", "Instance_Components", "{ComponentName}{ComponentIndex}"),Args).ToString()));
					
					InstanceComp->AttachToComponent(Actor->GetActorRootSceneComponenet(), FAttachmentTransformRules::KeepRelativeTransform);
					InstanceComp->RegisterComponent();
					
					InstanceCount++;
				}
				else if(Comp->IsA(UStaticMeshComponent::StaticClass()))
				{
					FFormatNamedArguments Args;
					Args.Add("ComponentName", FText::FromString("HoudiniStaticMeshComponent_"));
					Args.Add("ComponentIndex", FText::AsNumber(StaticCount));
				
					UStaticMeshComponent* SMComponent = DuplicateObject(Cast<UStaticMeshComponent>(Comp),
					Actor, FName(*FText::Format(NSLOCTEXT("UnrealEd", "Static_Components", "{ComponentName}{ComponentIndex}"),Args).ToString()));
					
					SMComponent->AttachToComponent(Actor->GetActorRootSceneComponenet(), FAttachmentTransformRules::KeepRelativeTransform);
					SMComponent->RegisterComponent();
				}
			}

			ActorObj.Add(Actor);
		}
	}

	PropertyEditorModule.UpdatePropertyViews(ActorObj);
}

TSharedRef<SDockTab> FHoudiniAssetEditor::SpawnTab_Viewport(const FSpawnTabArgs& Args)
{
	TSharedRef< SDockTab > DockableTab =
		SNew(SDockTab)
		.Icon(FEditorStyle::GetBrush("LevelEditor.Tabs.Viewports"));


	TWeakPtr<IHoudiniAssetEditor> WeakSharedThis(SharedThis(this));
	MakeViewportFunc = [WeakSharedThis]()
	{
		return SNew(SHoudiniAssetEditorViewport)
		    .HoudiniAssetEditor(WeakSharedThis);
	};
	
	// Create a new tab
	ViewportTabContent = MakeShareable(new FEditorViewportTabContent());
	ViewportTabContent->OnViewportTabContentLayoutChanged().AddRaw(this, &FHoudiniAssetEditor::OnEditorLayoutChanged);

	const FString LayoutId = FString("HoudiniAssetEditorViewport");
	ViewportTabContent->Initialize(MakeViewportFunc, DockableTab, LayoutId);
	
	return DockableTab;
}

TSharedRef<SDockTab> FHoudiniAssetEditor::SpawnTab_Properties(const FSpawnTabArgs& Args)
{
	check( Args.GetTabId() == PropertiesTabId );

	return SNew(SDockTab)
		.Label( LOCTEXT("SHoudiniAssetProperties_TabTitle", "Houdini Parameters") )
		[
			HoudiniAssetDetailsView.ToSharedRef()
		];
}

TSharedRef<SDockTab> FHoudiniAssetEditor::SpawnTab_HoudiniInfo(const FSpawnTabArgs& Args)
{
	check( Args.GetTabId() == HoudiniInfoTabId );
	return SNew(SDockTab)
		.Label(LOCTEXT("SHoudiniAssetInfo_TabTitle", "Houdini Asset Info"))
		[
			SNew(STextBlock)
			.Text(LOCTEXT("DisplayText", "Display Houdini Asset Outputs and other Categories that are not Parameters of the HDA"))
		];
}

TSharedRef<SDockTab> FHoudiniAssetEditor::SpawnTab_PreviewSceneSettings(const FSpawnTabArgs& Args)
{
	check( Args.GetTabId() == PreviewSceneSettingsTabId );
	return SNew(SDockTab)
		.Label( LOCTEXT("HoudiniAssetPreviewScene_TabTitle", "Preview Scene Settings") )
		[
			AdvancedPreviewSettingsWidget.ToSharedRef()
		];
}

TSharedRef<SDockTab> FHoudiniAssetEditor::SpawnTab_SecondaryToolbar(const FSpawnTabArgs& Args)
{
	check( Args.GetTabId() == SecondaryToolbarTabId );

	FText TabLabel = !SecondaryToolbarDisplayName.IsEmpty() ? SecondaryToolbarDisplayName : LOCTEXT("SecondaryToolbar_TabTitle", "Secondary Toolbar");

	TSharedRef<SDockTab> SpawnedTab = SNew(SDockTab)
		.Label( TabLabel )
		.Icon( FEditorStyle::GetBrush("LevelEditor.Tabs.Toolbar") )
		.ShouldAutosize( true )
		[
			SAssignNew(SecondaryToolbarWidgetContent, SBorder)
			.Padding(0)
			.BorderImage(FEditorStyle::GetBrush("NoBorder"))
		];

	if ( SecondaryToolbar.IsValid() )
	{
		SecondaryToolbarWidgetContent->SetContent( SecondaryToolbar.ToSharedRef() );
	}
	
	return SpawnedTab;
}

void FHoudiniAssetEditor::ToggleShowNormals()
{
	bDrawNormals = !bDrawNormals;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowNormalsFunc = 
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowNormals(bDrawNormals);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowNormalsFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawNormals"), bDrawNormals ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowNormalsChecked() const
{
	return bDrawNormals;
}

void FHoudiniAssetEditor::ToggleShowTangents()
{
	bDrawTangents = !bDrawTangents;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowTangentsFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowTangents(bDrawTangents);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowTangentsFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawTangents"), bDrawTangents ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowTangentsChecked() const
{
	return bDrawTangents;
}

void FHoudiniAssetEditor::ToggleShowBinormals()
{
	bDrawBinormals= !bDrawBinormals;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowBinormalsFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowBinormals(bDrawBinormals);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowBinormalsFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawBinormals"), bDrawBinormals? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowBinormalsChecked() const
{
	return bDrawBinormals;
}

void FHoudiniAssetEditor::ToggleShowPivots()
{
	bDrawPivots = !bDrawPivots;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowPivotsFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowPivots(bDrawPivots);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowPivotsFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawPivots"), bDrawPivots ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowPivotsChecked() const
{
	return bDrawPivots;
}

void FHoudiniAssetEditor::ToggleShowVertices()
{
	bDrawVertices = !bDrawVertices;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowVerticesFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowVertices(bDrawVertices);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowVerticesFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawVertices"), bDrawVertices ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowVerticesChecked() const
{
	return bDrawVertices;
}

void FHoudiniAssetEditor::ToggleShowGrids()
{
	bDrawGrids = !IsShowGridsChecked();
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowGridFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowGrids(bDrawGrids);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowGridFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawGrids"), bDrawGrids ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowGridsChecked() const
{
	bool LocalDrawGrids = false;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> CheckShowGridFunc =
		[this, &LocalDrawGrids](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			LocalDrawGrids |= HoudiniAssetEditorViewportClient.IsSetShowGridChecked();
		};

	ViewportTabContent->PerformActionOnViewports(CheckShowGridFunc);

	return LocalDrawGrids;
}

void FHoudiniAssetEditor::ToggleShowBounds()
{
	bDrawBounds = !bDrawBounds;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowBoundsFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowBounds(bDrawBounds);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowBoundsFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawBounds"), bDrawBounds ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowBoundsChecked() const
{
	return bDrawBounds;
}

void FHoudiniAssetEditor::ToggleShowSimpleCollisions()
{
	bDrawSimpleCollisions = !bDrawSimpleCollisions;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowSimpleCollisionsFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowSimpleCollisions(bDrawSimpleCollisions);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowSimpleCollisionsFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawSimpleCollisions"), bDrawSimpleCollisions ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowSimpleCollisionsChecked() const
{
	return bDrawSimpleCollisions;
}

void FHoudiniAssetEditor::ToggleShowComplexCollisions()
{
	bDrawComplexCollisions = !bDrawComplexCollisions;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowComplexCollisionsFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			HoudiniAssetEditorViewportClient.SetShowComplexCollisions(bDrawComplexCollisions);
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowComplexCollisionsFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawComplexCollisions"), bDrawComplexCollisions ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowComplexCollisionsChecked() const
{
	return bDrawComplexCollisions;
}

void FHoudiniAssetEditor::ToggleShowWireframes()
{
	bDrawWireframes = !bDrawWireframes;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowWireframesFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			if (HoudiniAssetEditorViewport->IsInViewModeWireframeChecked() != bDrawWireframes)
			{
				HoudiniAssetEditorViewport->SetViewModeWireframe();
			}
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowWireframesFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawWireframes"), bDrawWireframes ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowWireframesChecked() const
{
	return bDrawWireframes;
}

void FHoudiniAssetEditor::ToggleShowVertexColors()
{
	bDrawVertexColors = !bDrawVertexColors;

	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleShowVertexColorsFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			if (HoudiniAssetEditorViewport->IsInViewModeVertexColorChecked() != bDrawVertexColors)
			{
				FHoudiniAssetEditorViewportClient& EditorViewportClient = HoudiniAssetEditorViewport->GetViewportClient();

				EditorViewportClient.EngineShowFlags.SetVertexColors(bDrawVertexColors);
				EditorViewportClient.EngineShowFlags.SetLighting(!bDrawVertexColors);
				EditorViewportClient.EngineShowFlags.SetIndirectLightingCache(!bDrawVertexColors);
				EditorViewportClient.EngineShowFlags.SetPostProcessing(!bDrawVertexColors);
				EditorViewportClient.SetFloorAndEnvironmentVisibility(!bDrawVertexColors);

				for(UStaticMeshComponent* Component : GetStaticMeshComponents())
				{
					Component->bDisplayVertexColors = bDrawVertexColors;
					Component->MarkRenderStateDirty();
				}
				HoudiniAssetEditorViewport->Invalidate();
			}
		};

	ViewportTabContent->PerformActionOnViewports(ToggleShowVertexColorsFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawVertexColors"), bDrawVertexColors ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsShowVertexColorsChecked() const
{
	return bDrawVertexColors;
}

void FHoudiniAssetEditor::ResetCamera()
{
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ResetCameraFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			if(GetStaticMeshComponents().Num() > 0)
			{
				HoudiniAssetEditorViewport->GetViewportClient().FocusViewportOnBox(HoudiniAssetEditorViewport->GetStaticMeshComponents()[0]->Bounds.GetBox());
			}
			HoudiniAssetEditorViewport->Invalidate();
		};

	ViewportTabContent->PerformActionOnViewports(ResetCameraFunc);

}

void FHoudiniAssetEditor::ToggleDrawAdditionalData()
{
	bDrawAdditionalData = !bDrawAdditionalData;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> ToggleDrawAdditionalDataFunc =
		[this](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient  = HoudiniAssetEditorViewport->GetViewportClient();
			if (HoudiniAssetEditorViewportClient.IsDrawAdditionalDataChecked() != bDrawAdditionalData)
			{
				HoudiniAssetEditorViewportClient.ToggleDrawAdditionalData();
			}
		};

	ViewportTabContent->PerformActionOnViewports(ToggleDrawAdditionalDataFunc);

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawAdditionalData"), bDrawAdditionalData ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditor::IsDrawAdditionalDataChecked() const
{
	return bDrawAdditionalData;
}

TSharedPtr<SHoudiniAssetEditorViewport> FHoudiniAssetEditor::GetHoudiniAssetViewport() const
{
	if (ViewportTabContent.IsValid())
	{
		// we can use static cast here b/c we know in this editor we will have a Houdini Asset viewport 
		return StaticCastSharedPtr<SHoudiniAssetEditorViewport>(ViewportTabContent->GetFirstViewport());
	}
	
	return TSharedPtr<SHoudiniAssetEditorViewport>();
}

AHoudiniAssetActor* FHoudiniAssetEditor::GetHoudiniAssetActor() const
{
	if(GetHoudiniAssetViewport().IsValid())
	{
		return GetHoudiniAssetViewport()->GetHoudiniAssetActor();
	}
	
	return nullptr;
}

void FHoudiniAssetEditor::OnEditorLayoutChanged()
{
	SetEditorMeshes(HoudiniStaticMeshes);

	BuildSubTools();

	bool LocalDrawGrids = false;
	TFunction<void(FName, TSharedPtr<IEditorViewportLayoutEntity>)> CheckShowGridFunc =
		[this, &LocalDrawGrids](FName Name, TSharedPtr<IEditorViewportLayoutEntity> Entity)
		{
			TSharedRef<SHoudiniAssetEditorViewport> HoudiniAssetEditorViewport = StaticCastSharedRef<SHoudiniAssetEditorViewport>(Entity->AsWidget());
			FHoudiniAssetEditorViewportClient& HoudiniAssetEditorViewportClient = HoudiniAssetEditorViewport->GetViewportClient();
			LocalDrawGrids |= HoudiniAssetEditorViewportClient.IsSetShowGridChecked();
		};

	ViewportTabContent->PerformActionOnViewports(CheckShowGridFunc);

	bDrawGrids = LocalDrawGrids;

	OnPreviewSceneChangedDelegate.Broadcast(GetHoudiniAssetViewport()->GetPreviewScene());
}

void FHoudiniAssetEditor::BindCommands()
{
	const FHoudiniAssetEditorCommands& Commands = FHoudiniAssetEditorCommands::Get();

	const TSharedRef<FUICommandList>& UICommandList = GetToolkitCommands();


	// UICommandList->MapAction( FGenericCommands::Get().Delete,
	// 	FExecuteAction::CreateSP( this, &FHoudiniAssetEditor::DeleteSelected ),
	// 	FCanExecuteAction::CreateSP(this, &FHoudiniAssetEditor::CanDeleteSelected));

	UICommandList->MapAction( FGenericCommands::Get().Undo,
		FExecuteAction::CreateSP( this, &FHoudiniAssetEditor::UndoAction ) );

	UICommandList->MapAction( FGenericCommands::Get().Redo,
		FExecuteAction::CreateSP( this, &FHoudiniAssetEditor::RedoAction ) );


	// UICommandList->MapAction(
	// 	FGenericCommands::Get().Duplicate,
	// 	FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::DuplicateSelected),
	// 	FCanExecuteAction::CreateSP(this, &FHoudiniAssetEditor::CanDuplicateSelected));

	// UICommandList->MapAction(
	// 	FGenericCommands::Get().Rename,
	// 	FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::RequestRenameSelectedSocket),
	// 	FCanExecuteAction::CreateSP(this, &FHoudiniAssetEditor::CanRenameSelected));

	UICommandList->MapAction(Commands.ToggleShowNormals,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowNormals),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowNormalsChecked));

	UICommandList->MapAction(Commands.ToggleShowTangents,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowTangents),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowTangentsChecked));

	UICommandList->MapAction(Commands.ToggleShowBinormals,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowBinormals),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowBinormalsChecked));

	UICommandList->MapAction(Commands.ToggleShowPivots,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowPivots),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowPivotsChecked));

	UICommandList->MapAction(Commands.ToggleShowVertices,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowVertices),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowVerticesChecked));

	UICommandList->MapAction(Commands.ToggleShowGrids,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowGrids),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowGridsChecked));

	UICommandList->MapAction(Commands.ToggleShowBounds,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowBounds),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowBoundsChecked));

	UICommandList->MapAction(Commands.ToggleShowSimpleCollisions,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowSimpleCollisions),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowSimpleCollisionsChecked));

	UICommandList->MapAction(Commands.ToggleShowComplexCollisions,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowComplexCollisions),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowComplexCollisionsChecked));

	// UICommandList->MapAction(Commands.ToggleShowSockets,
	// 	FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowSockets),
	// 	FCanExecuteAction(),
	// 	FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowSocketsChecked));

	UICommandList->MapAction(Commands.ToggleShowWireframes,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowWireframes),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowWireframesChecked));

	UICommandList->MapAction(Commands.ToggleShowVertexColors,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleShowVertexColors),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsShowVertexColorsChecked));

	// Mesh menu
	UICommandList->MapAction(
		Commands.FindSource,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ExecuteFindInExplorer),
		FCanExecuteAction::CreateSP(this, &FHoudiniAssetEditor::CanExecuteSourceCommands));

	UICommandList->MapAction(
		Commands.ChangeMesh,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::OnChangeMesh),
		FCanExecuteAction::CreateSP(this, &FHoudiniAssetEditor::CanChangeMesh));

	// Viewport Camera
	UICommandList->MapAction(
		Commands.ResetCamera,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ResetCamera));

	// Draw additional data
	UICommandList->MapAction(
		Commands.SetDrawAdditionalData,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ToggleDrawAdditionalData),
		FCanExecuteAction(),
		FIsActionChecked::CreateSP(this, &FHoudiniAssetEditor::IsDrawAdditionalDataChecked));

	// Houdini Engine Menu
	UICommandList->MapAction(
		Commands.Recook,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ExecuteRecookHDA)
		);

	UICommandList->MapAction(
		Commands.Rebuild,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ExecuteRebuildHDA)
		);

	UICommandList->MapAction(
		Commands.ResetParm,
		FExecuteAction::CreateSP(this, &FHoudiniAssetEditor::ExecuteResetParm),
		FCanExecuteAction::CreateSP(this , &FHoudiniAssetEditor::CanExecuteRestParm)
		);

	UICommandList->MapAction(
		Commands.ShowCookLog,
		FExecuteAction::CreateSP(this , &FHoudiniAssetEditor::DisplayCookLog)
		);
		
}

static TSharedRef< SWidget > GenerateCollisionMenuContent(TSharedPtr<const FUICommandList> InCommandList)
{
	FMenuBuilder MenuBuilder(true, InCommandList);

	MenuBuilder.BeginSection("ShowCollision", LOCTEXT("ShowCollision", "Show Collision"));
	{
		MenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ToggleShowSimpleCollisions);
		MenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ToggleShowComplexCollisions);
	}
	MenuBuilder.EndSection();

	return MenuBuilder.MakeWidget();
}

void FHoudiniAssetEditor::ExtendToolBar()
{
	struct Local
	{
		static void FillToolbar(FToolBarBuilder& ToolbarBuilder, FHoudiniAssetEditor* ThisEditor)
		{
			const ISlateStyle* SlateStyle = FSlateStyleRegistry::FindSlateStyle(TEXT("HoudiniEngineStyle"));
			const FName HoudiniStyleSetName = SlateStyle->GetStyleSetName();
			
			// auto ConstructReimportContextMenu = [ThisEditor]()
			// {
			// 	FMenuBuilder MenuBuilder(true, nullptr);
			// 	MenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ReimportMesh->GetLabel(),
			// 		FHoudiniAssetEditorCommands::Get().ReimportMesh->GetDescription(),
			// 		FSlateIcon(),
			// 		FUIAction(FExecuteAction::CreateSP(ThisEditor, &FHoudiniAssetEditor::HandleReimportMesh)));
			// 	MenuBuilder.AddMenuEntry(FHoudiniAssetEditorCommands::Get().ReimportAllMesh->GetLabel(),
			// 		FHoudiniAssetEditorCommands::Get().ReimportAllMesh->GetDescription(),
			// 		FSlateIcon(),
			// 		FUIAction(FExecuteAction::CreateSP(ThisEditor, &FHoudiniAssetEditor::HandleReimportAllMesh)));
			// 	return MenuBuilder.MakeWidget();
			// };

			ToolbarBuilder.BeginSection("Realtime");
			{
				ToolbarBuilder.AddToolBarButton(FEditorViewportCommands::Get().ToggleRealTime);
			}
			ToolbarBuilder.EndSection();

			ToolbarBuilder.BeginSection("Mesh");
			{
				ToolbarBuilder.AddToolBarButton(FUIAction(FExecuteAction::CreateSP(ThisEditor, &FHoudiniAssetEditor::HandleReimportMesh)),
					NAME_None,
					FHoudiniAssetEditorCommands::Get().ReimportMesh->GetLabel(),
					FHoudiniAssetEditorCommands::Get().ReimportMesh->GetDescription(),
					FSlateIcon(HoudiniStyleSetName, "HoudiniEngine.DigitalAsset40"));
				// ToolbarBuilder.AddComboButton(
				// 	FUIAction(),
				// 	FOnGetContent::CreateLambda(ConstructReimportContextMenu),
				// 	TAttribute<FText>(),
				// 	TAttribute<FText>()
				// );
			}
			ToolbarBuilder.EndSection();

			ToolbarBuilder.BeginSection("Command");
			{
				
				// ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowSockets);
				
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowWireframes,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowWireframes->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowWireframes->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowWireframes")
				);
				
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowVertexColors,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowVertexColors->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowVertexColors->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowVertexColors")
				);
				
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowGrids,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowGrids->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowGrids->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowGrids")
				);
				
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowBounds,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowBounds->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowBounds->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowBounds")
				);

				TSharedPtr<const FUICommandList> CommandList = ToolbarBuilder.GetTopCommandList();
				
				ToolbarBuilder.AddComboButton(
					FUIAction(),
					FOnGetContent::CreateStatic(&GenerateCollisionMenuContent, CommandList),
					LOCTEXT("Collision_Label", "Collision"),
					LOCTEXT("Collision_Tooltip", "Collision drawing options"),
					FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetShowCollision")
				);

				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowPivots,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowPivots->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowPivots->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowPivots")
				);
				
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowNormals,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowNormals->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowNormals->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowNormals")
				);
				
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowTangents,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowTangents->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowTangents->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowTangents")
				);
				
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowBinormals,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowBinormals->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowBinormals->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowBinormals")
				);
				
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ToggleShowVertices,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ToggleShowVertices->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ToggleShowVertices->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ToggleShowVertices")
				);

				FOnGetContent OnGetUVMenuContent = FOnGetContent::CreateRaw(ThisEditor, &FHoudiniAssetEditor::GenerateUVChannelComboList);

				ToolbarBuilder.AddComboButton(
					FUIAction(),
					OnGetUVMenuContent,
					LOCTEXT("UVToolbarText", "UV"),
					LOCTEXT("UVToolbarTooltip", "Toggles display of the static mesh's UVs for the specified channel."),
					FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetDrawUVs"));
			}

			ToolbarBuilder.EndSection();
			ToolbarBuilder.BeginSection("Camera");
			{
				ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().ResetCamera,
				NAME_None,
				FHoudiniAssetEditorCommands::Get().ResetCamera->GetLabel(),
				FHoudiniAssetEditorCommands::Get().ResetCamera->GetDescription(),
				FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.ResetCamera")
				);
			}
			ToolbarBuilder.EndSection();

			ToolbarBuilder.AddToolBarButton(FHoudiniAssetEditorCommands::Get().SetDrawAdditionalData,
			NAME_None,
			FHoudiniAssetEditorCommands::Get().SetDrawAdditionalData->GetLabel(),
			FHoudiniAssetEditorCommands::Get().SetDrawAdditionalData->GetDescription(),
			FSlateIcon(FEditorStyle::GetStyleSetName(), "StaticMeshEditor.SetDrawAdditionalData")
			);
		}
	};


	{
	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
	
	FHoudiniAssetEditorViewportClient& ViewportClient = GetHoudiniAssetViewport()->GetViewportClient();

	FHoudiniAssetEditor* ThisEditor = this;

	ToolbarExtender->AddToolBarExtension(
		"Asset",
		EExtensionHook::After,
		GetToolkitCommands(),
		FToolBarExtensionDelegate::CreateStatic(&Local::FillToolbar, ThisEditor)
	);
	AddToolbarExtender(ToolbarExtender);

	IHoudiniAssetEditorModule* HoudiniAssetEditorModule = &FModuleManager::LoadModuleChecked<IHoudiniAssetEditorModule>("HoudiniAssetEditor");
	EditorToolbarExtender = HoudiniAssetEditorModule->GetToolBarExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects());
	AddToolbarExtender(EditorToolbarExtender);
	AddSecondaryToolbarExtender(HoudiniAssetEditorModule->GetSecondaryToolBarExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects()));
	}
}

void FHoudiniAssetEditor::BuildSubTools()
{
	// FSimpleDelegate OnSocketSelectionChanged = FSimpleDelegate::CreateSP( SharedThis(this), &FHoudiniAssetEditor::OnSocketSelectionChanged );
	//
	// SocketManager = ISocketManager::CreateSocketManager( SharedThis(this) , OnSocketSelectionChanged );
	//
	// SAssignNew( ConvexDecomposition, SConvexDecomposition )
	// 	.StaticMeshEditorPtr(SharedThis(this));

	FAdvancedPreviewSceneModule& AdvancedPreviewSceneModule = FModuleManager::LoadModuleChecked<FAdvancedPreviewSceneModule>("AdvancedPreviewScene");

	TArray<FAdvancedPreviewSceneModule::FDetailDelegates> Delegates;
	Delegates.Add({ OnPreviewSceneChangedDelegate });
	AdvancedPreviewSettingsWidget = AdvancedPreviewSceneModule.CreateAdvancedPreviewSceneSettingsWidget(GetHoudiniAssetViewport()->GetPreviewScene(), nullptr, TArray<FAdvancedPreviewSceneModule::FDetailCustomizationInfo>(),  TArray<FAdvancedPreviewSceneModule::FPropertyTypeCustomizationInfo>(), Delegates);

}

void FHoudiniAssetEditor::UpdateLODStats(int32 CurrentLOD, UStaticMesh* CurrentMesh)
{
	if( CurrentMesh->RenderData )
	{
		int32 NumLODLevels = CurrentMesh->RenderData->LODResources.Num();
		if (CurrentLOD >= 0 && CurrentLOD < NumLODLevels)
		{
			int32 InstanceCount = GetHoudiniInstanceCount(CurrentMesh);
			FStaticMeshLODResources& LODModel = CurrentMesh->RenderData->LODResources[CurrentLOD];
			NumTriangles[CurrentLOD] += LODModel.GetNumTriangles() * InstanceCount;
			NumVertices[CurrentLOD] += LODModel.GetNumVertices() * InstanceCount;
			NumUVChannels[CurrentLOD] += LODModel.VertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords();

			for(uint32 i = 0; i < LODModel.VertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords(); i++)
			{
				MeshUVIndex[CurrentLOD].Add(UVCount, CurrentMesh);
				MeshUVMainIndex[CurrentLOD].Add(UVCount, i);
				UVCount++;
			}
		}
	}
    
}

int32 FHoudiniAssetEditor::GetHoudiniInstanceCount(UStaticMesh* CurrentMesh)
{
	for(auto Instance : HoudiniAssetEditorObj->HoudiniInstanceData)
	{
		if(CurrentMesh == Instance.InstanceMesh)
		{
			return Instance.InstanceCount;
		}
	}

	return 0;
}

void FHoudiniAssetEditor::ResetLODStats()
{
	for(int32 i = 0; i < MAX_STATIC_MESH_LODS; i++)
	{
		NumTriangles[i] = 0; //-V781
		NumVertices[i] = 0; //-V781
		NumUVChannels[i] = 0; //-V781
		
	}
	UVCount = 0;
}

void FHoudiniAssetEditor::ComboBoxSelectionChanged(TSharedPtr<FString> NewSelection, ESelectInfo::Type SelectInfo)
{
	GetHoudiniAssetViewport()->RefreshViewport();
}

void FHoudiniAssetEditor::HandleReimportMesh()
{
	// Reimport the asset
	if (HoudiniAssetEditorObj)
	{
		FReimportManager::Instance()->Reimport(HoudiniAssetEditorObj, true);
	}
}

void FHoudiniAssetEditor::HandleReimportAllMesh()
{
	if (HoudiniAssetEditorObj)
	{
		//Reimport base LOD, generated mesh will be rebuild here, the static mesh is always using the base mesh to reduce LOD
		if (FReimportManager::Instance()->Reimport(HoudiniAssetEditorObj, true))
		{
			// TArray<FStaticMeshSourceModel>& SourceModels = HoudiniAsset->GetSourceModels();
			// //Reimport all custom LODs
			// for (int32 LodIndex = 1; LodIndex < HoudiniAsset->GetNumLODs(); ++LodIndex)
			// {
			// 	//Skip LOD import in the same file as the base mesh, they are already re-import
			// 	if (SourceModels[LodIndex].bImportWithBaseMesh)
			// 	{
			// 		continue;
			// 	}
			//
			// 	bool bHasBeenSimplified = !HoudiniAsset->IsMeshDescriptionValid(LodIndex) || HoudiniAsset->IsReductionActive(LodIndex);
			// 	if (!bHasBeenSimplified)
			// 	{
			// 		FbxMeshUtils::ImportMeshLODDialog(HoudiniAsset, LodIndex);
			// 	}
			// }
		}
	}
}

void FHoudiniAssetEditor::SetEditorMeshes(TArray<UStaticMesh*> InStaticMesh, bool bResetCamera)
{
	// for(UStaticMesh* Mesh : HoudiniStaticMeshes)
	// {
	// 	if (Mesh)
	// 	{
	// 		Mesh->GetOnMeshChanged().RemoveAll(this);
	// 	}
	// }

	HoudiniStaticMeshes = InStaticMesh;

	//Init stat arrays.
	const int32 ArraySize = MAX_STATIC_MESH_LODS;
	NumVertices.Empty(ArraySize);
	NumVertices.AddZeroed(ArraySize);
	NumTriangles.Empty(ArraySize);
	NumTriangles.AddZeroed(ArraySize);
	NumUVChannels.Empty(ArraySize);
	NumUVChannels.AddZeroed(ArraySize);
	MeshUVIndex.Empty(ArraySize);
	MeshUVIndex.AddZeroed(ArraySize);
	MeshUVMainIndex.Empty(ArraySize);
	MeshUVMainIndex.AddZeroed(ArraySize);

	ResetLODStats();
	
	// for(UStaticMesh* Mesh : HoudiniStaticMeshes)
	// {
	// 	if(Mesh)
	// 	{
	// 		Mesh->GetOnMeshChanged().AddRaw(this, &FHoudiniAssetEditor::OnMeshChanged);
	// 	}
	// }
	
	for(auto Mesh : HoudiniStaticMeshes)
	{
		int32 NumLODs = Mesh->GetNumLODs();
		for (int32 LODIndex = 0; LODIndex < NumLODs; ++LODIndex)
		{
			UpdateLODStats(LODIndex, Mesh);
		}
	}

	// Set the details view.
	HoudiniAssetDetailsView->SetObject(HoudiniAssetEditorObj);

	if (GetHoudiniAssetViewport().IsValid())
	{
		GetHoudiniAssetViewport()->UpdatePreviewMeshes(HoudiniStaticMeshes, bResetCamera);
		GetHoudiniAssetViewport()->RefreshViewport();
	}
}

UHoudiniAssetEditorObject* FHoudiniAssetEditor::GetFirstSelectedStaticMeshInContentBrowser() const
{
	TArray<FAssetData> SelectedAssets;
	GEditor->GetContentBrowserSelections(SelectedAssets);

	for(auto& Asset : SelectedAssets)
	{
		UHoudiniAssetEditorObject* SelectedMesh = Cast<UHoudiniAssetEditorObject>(Asset.GetAsset());
		if(SelectedMesh)
		{
			return SelectedMesh;
		}
	}

	return NULL;
}

void FHoudiniAssetEditor::OnChangeMesh()
{
	// TODO: Fix how Houdini Asset Mesh is changed.
	UHoudiniAssetEditorObject* SelectedMesh = GetFirstSelectedStaticMeshInContentBrowser();
	check(SelectedMesh != NULL && SelectedMesh != HoudiniAssetEditorObj);

	RemoveEditingObject(HoudiniAssetEditorObj);
	AddEditingObject(SelectedMesh);
	
	// SetEditorMeshes(SelectedMesh);

	// Clear selections made on previous mesh
	// if(SocketManager.IsValid())
	// {
	// 	SocketManager->UpdateStaticMesh();
	// }
}

bool FHoudiniAssetEditor::CanChangeMesh() const
{
	bool CanChange = false;

	TArray<FAssetData> SelectedAssets;
	GEditor->GetContentBrowserSelections(SelectedAssets);
	if(SelectedAssets.Num() == 1)
	{
		FAssetData& Asset = SelectedAssets[0];
		if(Asset.GetClass() == UHoudiniAssetEditorObject::StaticClass())
		{
			UHoudiniAssetEditorObject* SelectedMesh = Cast<UHoudiniAssetEditorObject>(Asset.GetAsset());
			if(SelectedMesh && SelectedMesh != HoudiniAssetEditorObj)
			{
				CanChange = true;
			}
		}
	}

	return CanChange;
}

TSharedRef<SWidget> FHoudiniAssetEditor::GenerateUVChannelComboList()
{
	FMenuBuilder MenuBuilder(true, nullptr, EditorToolbarExtender);
	FUIAction DrawUVsAction;

	FHoudiniAssetEditorViewportClient& ViewportClient = GetHoudiniAssetViewport()->GetViewportClient();

	DrawUVsAction.ExecuteAction = FExecuteAction::CreateRaw(&ViewportClient, &FHoudiniAssetEditorViewportClient::SetDrawUVOverlay, false);

	// Note, the logic is inversed here.  We show the radio button as checked if no uv channels are being shown
	DrawUVsAction.GetActionCheckState = FGetActionCheckState::CreateLambda([&ViewportClient]() {return ViewportClient.IsDrawUVOverlayChecked() ? ECheckBoxState::Unchecked : ECheckBoxState::Checked; });
	
	// Add UV display functions
	{
		MenuBuilder.BeginSection("UVDisplayOptions");
		MenuBuilder.AddMenuEntry(
			LOCTEXT("ShowUVSToggle", "None"),
			LOCTEXT("ShowUVSToggle_Tooltip", "Toggles display of the static mesh's UVs."),
			FSlateIcon(),
			DrawUVsAction,
			NAME_None,
			EUserInterfaceActionType::RadioButton
		);

		MenuBuilder.AddMenuSeparator();
		// Fill out the UV channels combo.
		int32 MaxUVChannels = FMath::Max<int32>(GetNumUVChannels(), 1);
		for (int32 UVChannelID = 0; UVChannelID < MaxUVChannels; ++UVChannelID)
		{
			FUIAction MenuAction;
			MenuAction.ExecuteAction.BindSP(this, &FHoudiniAssetEditor::SetCurrentViewedUVChannel, UVChannelID);
			MenuAction.GetActionCheckState.BindSP(this, &FHoudiniAssetEditor::GetUVChannelCheckState, UVChannelID);

			MenuBuilder.AddMenuEntry(
				FText::Format(LOCTEXT("UVChannel_ID", "UV Channel {0}"), FText::AsNumber(UVChannelID)),
				FText::Format(LOCTEXT("UVChannel_ID_ToolTip", "Overlay UV Channel {0} on the viewport"), FText::AsNumber(UVChannelID)),
				FSlateIcon(),
				MenuAction,
				NAME_None,
				EUserInterfaceActionType::RadioButton
			);
		}
		MenuBuilder.EndSection();
	}

	// Add UV editing functions
	// {
	// 	MenuBuilder.BeginSection("UVActionOptions");
	//
	// 	FUIAction MenuAction;
	// 	MenuAction.ExecuteAction.BindSP(this, &FHoudiniAssetEditor::RemoveCurrentUVChannel);
	// 	MenuAction.CanExecuteAction.BindSP(this, &FHoudiniAssetEditor::CanRemoveUVChannel);
	// 	MenuBuilder.AddMenuEntry(
	// 		LOCTEXT("Remove_UVChannel", "Remove Selected"),
	// 		LOCTEXT("Remove_UVChannel_ToolTip", "Remove currently selected UV channel from the static mesh"),
	// 		FSlateIcon(),
	// 		MenuAction,
	// 		NAME_None,
	// 		EUserInterfaceActionType::Button
	// 	);
	// 	MenuBuilder.EndSection();
	// }

	return MenuBuilder.MakeWidget();
	
}


void FHoudiniAssetEditor::ExecuteFindInExplorer()
{
	// if ( ensure(HoudiniAsset->AssetImportData) )
	// {
	// 	const FString SourceFilePath = HoudiniAsset->AssetImportData->GetFirstFilename();
	// 	if ( SourceFilePath.Len() && IFileManager::Get().FileSize( *SourceFilePath ) != INDEX_NONE )
	// 	{
	// 		FPlatformProcess::ExploreFolder( *FPaths::GetPath(SourceFilePath) );
	// 	}
	// }
}

bool FHoudiniAssetEditor::CanExecuteSourceCommands() const
{
	// if ( !HoudiniAsset->AssetImportData )
	// {
	// 	return false;
	// }
	//
	// const FString& SourceFilePath = HoudiniAsset->AssetImportData->GetFirstFilename();
	//
	// return SourceFilePath.Len() && IFileManager::Get().FileSize(*SourceFilePath) != INDEX_NONE;

	return false;
}

void FHoudiniAssetEditor::ExecuteRecookHDA() const
{
	GetHoudiniAssetComponent()->MarkAsNeedCook();
}

void FHoudiniAssetEditor::ExecuteRebuildHDA() const
{
	GetHoudiniAssetComponent()->MarkAsNeedRebuild();
}

void FHoudiniAssetEditor::ExecuteResetParm() const
{
	// Reset parameters to default values?
	for (int32 n = 0; n < GetHoudiniAssetComponent()->GetNumParameters(); ++n)
	{
		UHoudiniParameter* NextParm = GetHoudiniAssetComponent()->GetParameterAt(n);

		if (NextParm && !NextParm->IsDefault())
		{
			NextParm->RevertToDefault();
		}
	}
}

bool FHoudiniAssetEditor::CanExecuteRestParm() const
{
	// Reset parameters to default values?
	for (int32 n = 0; n < GetHoudiniAssetComponent()->GetNumParameters(); ++n)
	{
		UHoudiniParameter* NextParm = GetHoudiniAssetComponent()->GetParameterAt(n);

		if (NextParm && !NextParm->IsDefault())
			return true;
	}

	return false;
}

void FHoudiniAssetEditor::DisplayCookLog() const
{

}

void FHoudiniAssetEditor::OnObjectReimported(UObject* InObject)
{
	//TODO: Fix this reimport implementation 
	// Make sure we are using the object that is being reimported, otherwise a lot of needless work could occur.
	if(HoudiniAssetEditorObj == InObject)
	{
		//When we re-import we want to avoid moving the camera in the staticmesh editor
		bool bResetCamera = false;
		// SetEditorMeshes(Cast<UHoudiniAssetEditorObject>(InObject), bResetCamera);

		// if (SocketManager.IsValid())
		// {
		// 	SocketManager->UpdateStaticMesh();
		// }
	}
}

bool FHoudiniAssetEditor::OnRequestClose()
{
	// if (HoudiniAssetDetails.IsValid() && HoudiniAssetDetails.Pin()->IsApplyNeeded())
	// {
	// 	// find out the user wants to do with this dirty material
	// 	EAppReturnType::Type YesNoCancelReply = FMessageDialog::Open(
	// 		EAppMsgType::YesNoCancel,
	// 		FText::Format( LOCTEXT("ShouldApplyLODChanges", "Would you like to apply level of detail changes to {0}?\n\n(No will lose all changes!)"), FText::FromString( HoudiniAsset->GetName() ) )
	// 	);
	// 	
	// 	switch (YesNoCancelReply)
	// 	{
	// 	case EAppReturnType::Yes:
	// 		HoudiniAssetDetails.Pin()->ApplyChanges();
	// 		bAllowClose = true;
	// 		break;
	// 	case EAppReturnType::No:
	// 		// Do nothing, changes will be abandoned.
	// 		bAllowClose = true;
	// 		break;
	// 	case EAppReturnType::Cancel:
	// 		// Don't exit.
	// 		bAllowClose = false;
	// 		break;
	// 	}
	// }

	return bAllowClose;
	
}

void FHoudiniAssetEditor::PostUndo(bool bSuccess)
{
	RefreshTool();

	OnPostUndo.Broadcast();
}

void FHoudiniAssetEditor::PostRedo(bool bSuccess)
{
	RefreshTool();

	OnPostUndo.Broadcast();
}

void FHoudiniAssetEditor::UndoAction()
{
	GEditor->UndoTransaction();
}

void FHoudiniAssetEditor::RedoAction()
{
	GEditor->RedoTransaction();
}

void FHoudiniAssetEditor::OnMeshChanged()
{
	GetHoudiniAssetViewport()->GetViewportClient().OnMeshChanged();
}

void FHoudiniAssetEditor::OnPostReimport(UObject* InObject, bool bSuccess)
{
	// Ignore if this is regarding a different object
	if ( InObject != HoudiniAssetEditorObj )
	{
		return;
	}

	if (bSuccess)
	{
		RefreshTool();
	}
}

void FHoudiniAssetEditor::SetCurrentViewedUVChannel(int32 InNewUVChannel)
{
	CurrentViewedUVChannel = FMath::Clamp(InNewUVChannel, 0, GetNumUVChannels());
	GetHoudiniAssetViewport()->GetViewportClient().SetDrawUVOverlay(true);
}

ECheckBoxState FHoudiniAssetEditor::GetUVChannelCheckState(int32 TestUVChannel) const
{
	return CurrentViewedUVChannel == TestUVChannel && GetHoudiniAssetViewport()->GetViewportClient().IsDrawUVOverlayChecked() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void FHoudiniAssetEditor::AddSecondaryToolbarExtender(TSharedPtr<FExtender> Extender)
{
	SecondaryToolbarExtenders.AddUnique(Extender);
}

void FHoudiniAssetEditor::RemoveSecondaryToolbarExtender(TSharedPtr<FExtender> Extender)
{
	SecondaryToolbarExtenders.Remove(Extender);
}

void FHoudiniAssetEditor::GenerateSecondaryToolbar()
{
	// Generate the secondary toolbar only if there are registered extensions
    	TSharedPtr<SDockTab> Tab = TabManager->FindExistingLiveTab(SecondaryToolbarTabId);
    
    	TSharedPtr<FExtender> Extender = FExtender::Combine(SecondaryToolbarExtenders);
    	if (Extender->NumExtensions() == 0)
    	{
    		// If the tab was previously opened, close it since it's now empty
    		if (Tab)
    		{
    			Tab->RemoveTabFromParent();
    		}
    		return;
    	}
    
    	const bool bIsFocusable = true;
    
    	FToolBarBuilder ToolbarBuilder(this->GetToolkitCommands(), FMultiBoxCustomization::AllowCustomization(GetToolkitFName()), Extender);
    	ToolbarBuilder.SetIsFocusable(bIsFocusable);
    	ToolbarBuilder.BeginSection("Extensions");
    	{
    		// The secondary toolbar itself is empty but will be populated by the extensions when EndSection is called.
    		// The section name helps in the extenders positioning.
    	}
    	ToolbarBuilder.EndSection();
    
    	// Setup the secondary toolbar menu entry
    	SecondaryToolbarEntry->SetMenuType(ETabSpawnerMenuType::Enabled);
    	SecondaryToolbarEntry->SetDisplayName(SecondaryToolbarDisplayName);
    
    	SecondaryToolbar =
    		SNew(SHorizontalBox)
    		+ SHorizontalBox::Slot()
    		.HAlign(HAlign_Left)
    		.AutoWidth()
    		.VAlign(VAlign_Center)
    		[
    			SNew(SVerticalBox)
    			+ SVerticalBox::Slot()
    			.AutoHeight()
    			.VAlign(VAlign_Bottom)
    			[
    				ToolbarBuilder.MakeWidget()
    			]
    		];
    
    	if (SecondaryToolbarWidgetContent.IsValid())
    	{
    		SecondaryToolbarWidgetContent->SetContent(SecondaryToolbar.ToSharedRef());
    	}
    
    	if (!Tab)
    	{
    		// By default, the tab is closed but we want it to be opened when it is populated
    		Tab = TSharedPtr<SDockTab>(TabManager->TryInvokeTab(SecondaryToolbarTabId));
    	}
    
    	// Override the display name if it was set
    	if (!SecondaryToolbarDisplayName.IsEmpty())
    	{
    		Tab->SetLabel(SecondaryToolbarDisplayName);
    	}
    
    	// But have the focus on the default toolbar
    	TabManager->TryInvokeTab(GetToolbarTabId());
}

#undef LOCTEXT_NAMESPACE
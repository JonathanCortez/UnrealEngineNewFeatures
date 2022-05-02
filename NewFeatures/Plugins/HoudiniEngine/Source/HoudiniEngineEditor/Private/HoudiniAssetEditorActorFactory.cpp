// Fill out your copyright notice in the Description page of Project Settings.


#include "HoudiniAssetEditorActorFactory.h"
#include "HoudiniAssetEditorObject.h"
#include "HoudiniAssetEditorActor.h"
#include "HoudiniEngine.h"

#define LOCTEXT_NAMESPACE HOUDINI_LOCTEXT_NAMESPACE 

UHoudiniAssetEditorActorFactory::UHoudiniAssetEditorActorFactory(const FObjectInitializer & ObjectInitializer)
	:Super(ObjectInitializer)
{
	DisplayName = LOCTEXT("HoudiniAssetDisplayName", "Houdini Engine Asset");
	NewActorClass = AHoudiniAssetEditorActor::StaticClass();
}

bool UHoudiniAssetEditorActorFactory::CanCreateActorFrom(const FAssetData& AssetData, FText& OutErrorMsg)
{
	if ( !AssetData.IsValid() || !AssetData.GetClass()->IsChildOf( UHoudiniAssetEditorObject::StaticClass()))
	{
		OutErrorMsg = NSLOCTEXT("CanCreateActor", "NoHoudiniAsset", "A valid Houdini Engine asset must be specified.");
		return false;
	}

	return true;
}

UObject* UHoudiniAssetEditorActorFactory::GetAssetFromActorInstance(AActor* Instance)
{
	check(Instance->IsA(NewActorClass));
	AHoudiniAssetEditorActor* HoudiniAssetActor = CastChecked<AHoudiniAssetEditorActor>(Instance);

	check(HoudiniAssetActor->GetActorRootSceneComponenet());
	return HoudiniAssetActor->GetHoudiniAssetEditor()->GetHoudiniMeshes()[0];
}

void UHoudiniAssetEditorActorFactory::PostSpawnActor(UObject* Asset, AActor* NewActor)
{
	Super::PostSpawnActor(Asset, NewActor);
	
	UHoudiniAssetEditorObject* HoudiniAssetEditorObj = CastChecked<UHoudiniAssetEditorObject>(Asset);

	UE_LOG(LogActorFactory, Log, TEXT("Actor Factory created %s"), *HoudiniAssetEditorObj->GetName());

	// Change properties
	AHoudiniAssetEditorActor* HoudiniAssetActor = CastChecked<AHoudiniAssetEditorActor>( NewActor );
	// UStaticMeshComponent* StaticMeshComponent = HoudiniAssetActor->GetStaticMeshComponent();
	// check(StaticMeshComponent);
	
	HoudiniAssetActor->SetHoudiniAssetEditor(HoudiniAssetEditorObj);
	HoudiniAssetActor->SetPrevHoudiniAssetEditor(HoudiniAssetEditorObj);
	HoudiniAssetEditorObj->HoudiniAssetEditorActors.Add(HoudiniAssetActor);
	
	if(!HoudiniAssetEditorObj->GetHoudiniAssetActor())
	{
		UStaticMesh* HoudiniLogoSM = FHoudiniEngine::Get().GetHoudiniLogoStaticMesh().Get();
		check(HoudiniLogoSM);

		UStaticMeshComponent* StaticMeshComponent = NewObject<UStaticMeshComponent>(HoudiniAssetActor, TEXT("HoudiniStaticMeshComponentLogo"));
		check(StaticMeshComponent);
		
		StaticMeshComponent->UnregisterComponent();
		
		StaticMeshComponent->SetStaticMesh(HoudiniLogoSM);
		StaticMeshComponent->SetVisibility(true);
		StaticMeshComponent->SetHiddenInGame(true);
		StaticMeshComponent->AttachToComponent(HoudiniAssetActor->GetActorRootSceneComponenet(), FAttachmentTransformRules::KeepRelativeTransform);
		StaticMeshComponent->RegisterComponent();
	}
	else
	{
		int32 InstanceCount = 0;
		int32 StaticCount = 0;
		
		for(auto Comp : HoudiniAssetEditorObj->GetHoudiniAssetActorComponents())
		{
			if(Comp->IsA(UInstancedStaticMeshComponent::StaticClass()))
			{
				FFormatNamedArguments Args;
				Args.Add("ComponentName", FText::FromString("HoudiniInstanceStaticMeshComponent_"));
				Args.Add("ComponentIndex", FText::AsNumber(InstanceCount));
				
				UInstancedStaticMeshComponent* InstanceComp = DuplicateObject(Cast<UInstancedStaticMeshComponent>(Comp),
				HoudiniAssetActor,FName(*FText::Format(NSLOCTEXT("UnrealEd", "Instance_Components", "{ComponentName}{ComponentIndex}"),Args).ToString()));

				InstanceComp->UnregisterComponent();
				
				InstanceComp->SetVisibility(true);
				InstanceComp->SetHiddenInGame(true);
				InstanceComp->AttachToComponent(HoudiniAssetActor->GetActorRootSceneComponenet(), FAttachmentTransformRules::KeepRelativeTransform);
				InstanceComp->RegisterComponent();

				InstanceCount++;
				
			}
			else if(Comp->IsA(UStaticMeshComponent::StaticClass()))
			{
				FFormatNamedArguments Args;
				Args.Add("ComponentName", FText::FromString("HoudiniStaticMeshComponent_"));
				Args.Add("ComponentIndex", FText::AsNumber(StaticCount));
				
				UStaticMeshComponent* SMComponent = DuplicateObject(Cast<UStaticMeshComponent>(Comp),
				HoudiniAssetActor, FName(*FText::Format(NSLOCTEXT("UnrealEd", "Static_Components", "{ComponentName}{ComponentIndex}"),Args).ToString()));

				SMComponent->UnregisterComponent();
				SMComponent->SetVisibility(true);
				SMComponent->SetHiddenInGame(true);
				SMComponent->AttachToComponent(HoudiniAssetActor->GetActorRootSceneComponenet(), FAttachmentTransformRules::KeepRelativeTransform);
				SMComponent->RegisterComponent();

				StaticCount++;
			}
		}
	}
	
}

void UHoudiniAssetEditorActorFactory::PostCreateBlueprint(UObject* Asset, AActor* CDO)
{
	if (Asset != NULL && CDO != NULL)
	{
		UHoudiniAssetEditorObject* HoudiniAssetEditorObj = CastChecked<UHoudiniAssetEditorObject>(Asset);
		AHoudiniAssetEditorActor* HoudiniAssetActor = CastChecked<AHoudiniAssetEditorActor>(CDO);
		USceneComponent* RootComponent = HoudiniAssetActor->GetActorRootSceneComponenet();

		// StaticMeshComponent->SetStaticMesh(HoudiniAssetEditorObj->GetHoudiniMeshes()[0]);
		// StaticMeshComponent->StaticMeshDerivedDataKey = HoudiniAssetEditorObj->GetHoudiniMeshes()[0]->RenderData->DerivedDataKey;
	}
}

#undef LOCTEXT_NAMESPACE
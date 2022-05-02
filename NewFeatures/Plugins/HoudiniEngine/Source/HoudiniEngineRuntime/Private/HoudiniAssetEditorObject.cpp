// Fill out your copyright notice in the Description page of Project Settings.


#include "HoudiniAssetEditorObject.h"

#include "HoudiniAssetActor.h"
#include "HoudiniAssetEditorActor.h"

UHoudiniAssetEditorObject::UHoudiniAssetEditorObject(const FObjectInitializer & ObjectInitializer)
	: Super(ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("WE JUST OPEN UHoudiniAssetEditorObject"));
	bHasViewportRef = false;

}

UHoudiniAssetEditorObject::~UHoudiniAssetEditorObject()
{
	
}

void UHoudiniAssetEditorObject::Serialize(FArchive& Ar)
{
	Ar.UsingCustomVersion(FHoudiniCustomSerializationVersion::GUID);
	
	Super::Serialize(Ar);
}

void UHoudiniAssetEditorObject::SetHoudiniAsset(UHoudiniAsset* InHoudiniAsset)
{
	HoudiniAsset = InHoudiniAsset;
}

void UHoudiniAssetEditorObject::SetStaticMeshes(TArray<UStaticMesh*> InStaticMeshes)
{
	StaticMeshes = InStaticMeshes;
}

void UHoudiniAssetEditorObject::SetHoudiniAssetComponent(UHoudiniAssetComponent* InHoudiniAssetComponent)
{
	HoudiniAssetComponent = InHoudiniAssetComponent;
}

void UHoudiniAssetEditorObject::SetHoudiniAssetActor(AHoudiniAssetActor* InHoudiniAssetActor)
{
	HoudiniAssetActor = InHoudiniAssetActor;
}

void UHoudiniAssetEditorObject::HoudiniAssetActorChildComponents(TInlineComponentArray<UActorComponent*> ActorComponents)
{
	HoudiniAssetActorComponents = ActorComponents;
}

void UHoudiniAssetEditorObject::StoreEditorViewportSlate(TSharedRef<SHoudiniAssetEditorViewport> ViewportRef)
{
	ViewportTab = ViewportRef;
}

void UHoudiniAssetEditorObject::HoudiniAssetActionToAssetEditor()
{
	if(GetHoudiniAsset())
	{	
		UClass* HoudiniComponenetClass = HoudiniAssetComponent->GetClass();
		FProperty* Property = HoudiniComponenetClass->FindPropertyByName(TEXT("HoudiniAsset"));
		if(FObjectProperty * ObjProperty = CastField<FObjectProperty>(Property))
		{
			ObjProperty->SetPropertyValue(Property->ContainerPtrToValuePtr<void*>(HoudiniAssetComponent), GetHoudiniAsset());			
		}
	}
	
}

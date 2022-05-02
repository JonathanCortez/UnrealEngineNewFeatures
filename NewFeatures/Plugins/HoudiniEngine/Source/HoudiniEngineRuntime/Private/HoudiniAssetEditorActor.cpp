// Fill out your copyright notice in the Description page of Project Settings.


#include "HoudiniAssetEditorActor.h"
#include "HoudiniAssetEditorObject.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/CollisionProfile.h"


// Sets default values
AHoudiniAssetEditorActor::AHoudiniAssetEditorActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetCanBeDamaged(false);

	SceneComponentRoot = CreateDefaultSubobject<USceneComponent>("HoudiniAssetRootComponent");
	SceneComponentRoot->Mobility = EComponentMobility::Static;

	RootComponent = SceneComponentRoot;

}

AHoudiniAssetEditorActor::~AHoudiniAssetEditorActor()
{
}

void AHoudiniAssetEditorActor::SetHoudiniAssetEditor(UHoudiniAssetEditorObject* InHoudiniAssetEditor)
{
	HoudiniAssetEditorObj = InHoudiniAssetEditor;
}

void AHoudiniAssetEditorActor::SetPrevHoudiniAssetEditor(UHoudiniAssetEditorObject* InHoudiniAssetEditor)
{
	HoudiniAssetEditorObjPrev = InHoudiniAssetEditor;
}

void AHoudiniAssetEditorActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	FProperty * Property = PropertyChangedEvent.MemberProperty;
	if (!Property)
		return;
	
	FName PropertyName = Property->GetFName();
	
	if(PropertyName == GET_MEMBER_NAME_CHECKED(AHoudiniAssetEditorActor, HoudiniAssetEditorObj))
	{
		HoudiniAssetEditorChanged();
	}
}

void AHoudiniAssetEditorActor::PostDuplicate(bool bDuplicateForPIE)
{
	Super::PostDuplicate(bDuplicateForPIE);
	
	if(HoudiniAssetEditorObj)
		HoudiniAssetEditorObj->HoudiniAssetEditorActors.Add(this);
}

void AHoudiniAssetEditorActor::HoudiniAssetEditorChanged()
{
	int32 index = HoudiniAssetEditorObjPrev->HoudiniAssetEditorActors.Find(this);
	if(index != INDEX_NONE)
	{
		HoudiniAssetEditorObjPrev->HoudiniAssetEditorActors.RemoveAt(index);
	}
			
	TArray<UStaticMesh*> StaticMeshes = HoudiniAssetEditorObj->GetHoudiniMeshes();
	for(UStaticMesh* SM : StaticMeshes)
	{
		// StaticMeshComponent->SetStaticMesh(SM);
	}

	HoudiniAssetEditorObjPrev = HoudiniAssetEditorObj;
}

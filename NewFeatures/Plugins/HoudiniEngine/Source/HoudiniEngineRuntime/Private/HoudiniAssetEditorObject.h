// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "HoudiniAssetComponent.h"
#include "SEditorViewport.h"
#include "UObject/Object.h"
#include "HoudiniAssetEditorObject.generated.h"

USTRUCT()
struct FHoudiniInstanceComponentInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	UStaticMesh* InstanceMesh;
	
	UPROPERTY()
	int32 InstanceCount;

	UPROPERTY()
	FString MeshName;

	UPROPERTY()
	TArray<FTransform> InstanceTransform;
	
};

USTRUCT()
struct FHoudiniAssetEditorOrbitCameraPosition
{
	GENERATED_USTRUCT_BODY()

	FHoudiniAssetEditorOrbitCameraPosition()
		: bIsSet(false)
		, CamOrbitPoint(ForceInitToZero)
		, CamOrbitZoom(ForceInitToZero)
		, CamOrbitRotation(ForceInitToZero)
	{
	}

	FHoudiniAssetEditorOrbitCameraPosition(const FVector& InCamOrbitPoint, const FVector& InCamOrbitZoom, const FRotator& InCamOrbitRotation)
		: bIsSet(true)
		, CamOrbitPoint(InCamOrbitPoint)
		, CamOrbitZoom(InCamOrbitZoom)
		, CamOrbitRotation(InCamOrbitRotation)
	{
	}

	/** Whether or not this has been set to a valid value */
	UPROPERTY()
	bool bIsSet;

	/** The position to orbit the camera around */
	UPROPERTY()
	FVector	CamOrbitPoint;

	/** The distance of the camera from the orbit point */
	UPROPERTY()
	FVector CamOrbitZoom;

	/** The rotation to apply around the orbit point */
	UPROPERTY()
	FRotator CamOrbitRotation;
};


class UHoudiniAsset;
class UStaticMesh;
class AHoudiniAssetEditorActor;
class AHoudiniAssetActor;
class SHoudiniAssetEditorViewport;
/**
 * 
 */
UCLASS(BlueprintType)
class HOUDINIENGINERUNTIME_API UHoudiniAssetEditorObject : public UObject
{
	GENERATED_UCLASS_BODY()
	
	
public:
	~UHoudiniAssetEditorObject();

	virtual void Serialize(FArchive& Ar) override;
	
	/** Called when Action to Create Asset Editor on a HDA to load the
	 * Houdini Asset to the Houdini Asset Component Property */
	void HoudiniAssetActionToAssetEditor();
	
// Mutators
	void SetHoudiniAsset(UHoudiniAsset* InHoudiniAsset);
	void SetStaticMeshes(TArray<UStaticMesh*> InStaticMeshes);
	void SetHoudiniAssetComponent(UHoudiniAssetComponent* InHoudiniAssetComponent);
	void SetHoudiniAssetActor(AHoudiniAssetActor* InHoudiniAssetActor);

	void HoudiniAssetActorChildComponents(TInlineComponentArray<UActorComponent*> ActorComponents);

	void StoreEditorViewportSlate(TSharedRef<SHoudiniAssetEditorViewport> ViewportRef);
	void EditorViewportSlateState(bool bSetViewportRef) { bHasViewportRef = bSetViewportRef; }
	
// Accessor 
	UHoudiniAsset* GetHoudiniAsset() const { return HoudiniAsset; }
	UHoudiniAssetComponent* GetHoudiniAssetComponent() const { return HoudiniAssetComponent; }
	TArray<UStaticMesh*> GetHoudiniMeshes() const { return StaticMeshes; }

	AHoudiniAssetActor* GetHoudiniAssetActor() const {return HoudiniAssetActor; }
	TArray<AHoudiniAssetEditorActor*> GetEditorActors() const { return HoudiniAssetEditorActors; }
	TInlineComponentArray<UActorComponent*> GetHoudiniAssetActorComponents() const { return HoudiniAssetActorComponents; }

	TSharedRef<SHoudiniAssetEditorViewport> GetEditorViewport() { return ViewportTab.ToSharedRef(); }
	bool HasViewportRef() const { return bHasViewportRef; }
	
	/** The stored camera position to use as a default for the Houdini Mesh Editor Window*/
	UPROPERTY()
		FHoudiniAssetEditorOrbitCameraPosition EditorCameraPosition;

	/** Store Houdini Asset Instance Components Info */
	UPROPERTY()
		TArray<FHoudiniInstanceComponentInfo> HoudiniInstanceData;
	
	/* Actor that is placed in the Level Editor Scene */
	UPROPERTY()
		TArray<AHoudiniAssetEditorActor*> HoudiniAssetEditorActors;
	
protected:
	
	UPROPERTY()
		UHoudiniAsset* HoudiniAsset;
	
	UPROPERTY(VisibleAnywhere)
		UHoudiniAssetComponent* HoudiniAssetComponent;

	UPROPERTY()
		AHoudiniAssetActor* HoudiniAssetActor;

	UPROPERTY()
		TArray<UStaticMesh*> StaticMeshes;

	UPROPERTY()
		bool bHasViewportRef;

	TInlineComponentArray<UActorComponent*> HoudiniAssetActorComponents;

	TSharedPtr<SHoudiniAssetEditorViewport> ViewportTab;
};

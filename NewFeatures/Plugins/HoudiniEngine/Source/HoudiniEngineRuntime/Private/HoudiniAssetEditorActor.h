// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "HoudiniAssetEditorObject.h"
#include "GameFramework/Actor.h"
#include "HoudiniAssetEditorActor.generated.h"

UCLASS(BlueprintType)
class HOUDINIENGINERUNTIME_API AHoudiniAssetEditorActor : public AActor
{
	GENERATED_UCLASS_BODY()

public:
	// Sets default values for this actor's properties
	AHoudiniAssetEditorActor();
	~AHoudiniAssetEditorActor();

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostDuplicate(bool bDuplicateForPIE) override;
	
	void HoudiniAssetEditorChanged();
	
	void SetHoudiniAssetEditor(UHoudiniAssetEditorObject* InHoudiniAssetEditor);
	void SetPrevHoudiniAssetEditor(UHoudiniAssetEditorObject* InHoudiniAssetEditor);

	UHoudiniAssetEditorObject* GetPreviousHoudniAssetEditor() const { return HoudiniAssetEditorObjPrev;}
	class UHoudiniAssetEditorObject* GetHoudiniAssetEditor() const { return HoudiniAssetEditorObj;}
	USceneComponent* GetActorRootSceneComponenet() const { return SceneComponentRoot; }

	bool GetOverrideInputProperty() const { return bOverrideInputs; }

private:
	UPROPERTY(EditAnywhere , Category = "HoudiniAssetEditor")
		UHoudiniAssetEditorObject* HoudiniAssetEditorObj;

	UPROPERTY(EditAnywhere, Category = "Inputs")
		bool bOverrideInputs;
	
	UPROPERTY()
		UHoudiniAssetEditorObject* HoudiniAssetEditorObjPrev;
	
	UPROPERTY(VisibleAnywhere)
		USceneComponent* SceneComponentRoot;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniPublicAPIProcessedAsset.generated.h"

class UHoudiniAssetComponent;

DECLARE_DELEGATE_OneParam(FNewHDAProcessed, UHoudiniAssetComponent*)

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniPublicAPIProcessedAsset : public UObject
{
	GENERATED_BODY()

	public:
		UHoudiniPublicAPIProcessedAsset();
		~UHoudiniPublicAPIProcessedAsset();

		static UHoudiniPublicAPIProcessedAsset& Get();
	
		FNewHDAProcessed OnProcessedAsset;

	private:
		static UHoudiniPublicAPIProcessedAsset* HoudiniPublicAPIProcessedAssetInstance;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniUIBridge.generated.h"

class UHoudiniAssetComponent;

UCLASS(Blueprintable)
class QUICKUISETUP_API UHoudiniUIBridge : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "HoudiniPython")
	static UHoudiniUIBridge* Get();
	
	UFUNCTION(BlueprintImplementableEvent, Category="HoudiniPython")
	void HoudiniUIWrap(const FString& file_path, const FString& hda_name, UHoudiniAssetComponent* HoudiniAssetWrapper) const;
	
	UFUNCTION(BlueprintImplementableEvent, Category="HoudiniPython")
	void UpdateWrapper(const FString& file_path, const FString& hda_name) const;
};

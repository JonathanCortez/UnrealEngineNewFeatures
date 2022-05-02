// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniPythonManger.generated.h"

class UHoudiniPythonClass;
class UHoudiniAssetComponent;

UCLASS()
class QUICKUISETUP_API UHoudiniPythonManger : public UObject
{
	GENERATED_BODY()

	public:

		UHoudiniPythonManger();
		~UHoudiniPythonManger();
		
		static UHoudiniPythonManger& Get();

		UHoudiniPythonClass* Create(UHoudiniAssetComponent* HoudiniAssetComponent);
	
		bool HasHoudiniPythonClass(UHoudiniAssetComponent* HoudiniAssetComponent);
		bool HasHoudiniPythonClass(const FString& ClassName);
	
	private:
		static UHoudiniPythonManger* HoudiniPythonMangerInstance;

		TMap<FString,UHoudiniPythonClass*> HoudiniPythonClasses;
};

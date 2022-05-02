// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "HoudiniAssetEditorFactory.generated.h"

/**
 * 
 */
UCLASS()
class HOUDINIENGINEEDITOR_API UHoudiniAssetEditorFactory : public UFactory
{
	GENERATED_BODY()
	
public:
	UHoudiniAssetEditorFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)override;
};

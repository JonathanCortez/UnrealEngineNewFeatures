// Fill out your copyright notice in the Description page of Project Settings.


#include "HoudiniAssetEditorFactory.h"
#include "HoudiniAssetEditorObject.h"

UHoudiniAssetEditorFactory::UHoudiniAssetEditorFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UHoudiniAssetEditorObject::StaticClass();
}

UObject* UHoudiniAssetEditorFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	auto HoudiniAssetEditorObj = NewObject<UHoudiniAssetEditorObject>(InParent, InClass, InName, Flags);
	return HoudiniAssetEditorObj;
}

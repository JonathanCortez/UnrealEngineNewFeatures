// Fill out your copyright notice in the Description page of Project Settings.


#include "HoudiniUIBridge.h"

UHoudiniUIBridge* UHoudiniUIBridge::Get()
{
	TArray<UClass*> HoudiniPythonBridgeClasses;
	GetDerivedClasses(StaticClass(), HoudiniPythonBridgeClasses);
	int32 NumClasses = HoudiniPythonBridgeClasses.Num();
	if (NumClasses > 0)
	{
		return Cast<UHoudiniUIBridge>(HoudiniPythonBridgeClasses[NumClasses - 1]->GetDefaultObject());
	}
	return nullptr;
}

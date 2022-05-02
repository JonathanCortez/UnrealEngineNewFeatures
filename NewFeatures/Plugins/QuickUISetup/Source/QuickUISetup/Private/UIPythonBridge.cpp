// Fill out your copyright notice in the Description page of Project Settings.


#include "UIPythonBridge.h"

UUIPythonBridge* UUIPythonBridge::Get()
{
	TArray<UClass*> PythonBridgeClasses;
	GetDerivedClasses(StaticClass(), PythonBridgeClasses);
	int32 NumClasses = PythonBridgeClasses.Num();
	if (NumClasses > 0)
	{
		return Cast<UUIPythonBridge>(PythonBridgeClasses[NumClasses - 1]->GetDefaultObject());
	}
	return nullptr;
	
}

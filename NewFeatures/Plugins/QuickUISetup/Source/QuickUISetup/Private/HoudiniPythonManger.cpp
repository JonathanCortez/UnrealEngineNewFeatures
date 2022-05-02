// Fill out your copyright notice in the Description page of Project Settings.


#include "HoudiniPythonManger.h"
#include "HoudiniPythonClass.h"
#include "HoudiniUIBridge.h"
#include "QuickUISettings.h"
#include "HoudiniEngineRuntime/Private/HoudiniAsset.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetComponent.h"


#define LOCTEXT_NAMESPACE "UHoudiniPythonMangerClass"

UHoudiniPythonManger*
UHoudiniPythonManger::HoudiniPythonMangerInstance = nullptr;

UHoudiniPythonManger::UHoudiniPythonManger()
{
	HoudiniPythonMangerInstance = this;
}

UHoudiniPythonManger::~UHoudiniPythonManger()
{
}

UHoudiniPythonManger& UHoudiniPythonManger::Get()
{
	return *HoudiniPythonMangerInstance;
}

UHoudiniPythonClass* UHoudiniPythonManger::Create(UHoudiniAssetComponent* HoudiniAssetComponent)
{
	UHoudiniPythonClass* PythonClass = nullptr;
	const FString CurrentHoudiniDisplayName = HoudiniAssetComponent->GetDisplayName();
	const FString HoudiniAssetName = HoudiniAssetComponent->GetHoudiniAsset()->GetName();
	
	if(HasHoudiniPythonClass(HoudiniAssetComponent))
	{
		
		if(HoudiniPythonClasses.Contains(CurrentHoudiniDisplayName))
		{
			if(HoudiniPythonClasses[CurrentHoudiniDisplayName]->NeedUpdate(HoudiniAssetComponent))
			{
				for(auto& Elem : HoudiniPythonClasses)
				{
					if(Elem.Value->GetComponent() == HoudiniAssetComponent)
					{
						const FString& path = IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*HoudiniPythonClasses[CurrentHoudiniDisplayName]->GetJsonPath());
						UHoudiniUIBridge::Get()->HoudiniUIWrap(path, Elem.Key, HoudiniAssetComponent);
					}
				}
			}
			
			return HoudiniPythonClasses[CurrentHoudiniDisplayName];
		}
		
		
		for(auto& Elem : HoudiniPythonClasses)
		{
			if(Elem.Value->GetComponent() == HoudiniAssetComponent)
			{
				PythonClass = Elem.Value;
				break;
			}
		}
	}
	else
	{
		const FText pathformat = FText::Format(LOCTEXT("PathBuild", "{0}/Houdini/{1}.json"), FText::FromString(GetDefault<UQuickUISettings>()->JsonPath.Path), FText::FromString(HoudiniAssetName));
		
        PythonClass = NewObject<UHoudiniPythonClass>(GetTransientPackage(), NAME_None, RF_MarkAsRootSet);
        PythonClass->ConstructParameterLayout(HoudiniAssetComponent);
        PythonClass->ConstructJsonLayout(pathformat.ToString());
	}

	if(PythonClass)
	{
		const FString& path = IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*PythonClass->GetJsonPath());
        UHoudiniUIBridge::Get()->HoudiniUIWrap(path, CurrentHoudiniDisplayName, HoudiniAssetComponent);
		HoudiniPythonClasses.Add(CurrentHoudiniDisplayName, PythonClass);
	}
	return PythonClass;
	
}

bool UHoudiniPythonManger::HasHoudiniPythonClass(UHoudiniAssetComponent* HoudiniAssetComponent)
{
	bool hasItem = false;
	for(auto& Elem : HoudiniPythonClasses)
	{
		if(Elem.Value->GetComponent() == HoudiniAssetComponent)
		{
			hasItem = true;
			break;
		}
	}
	return hasItem;
}

bool UHoudiniPythonManger::HasHoudiniPythonClass(const FString& ClassName)
{
	return HoudiniPythonClasses.Contains(ClassName);
}

#undef LOCTEXT_NAMESPACE
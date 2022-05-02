// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniPythonClass.generated.h"


USTRUCT()
struct FParameterSettingSetup
{
	GENERATED_BODY()
	
	UPROPERTY()
	FString CountValues;
	
	UPROPERTY()
	FString minValue;

	UPROPERTY()
	FString maxValue;

	UPROPERTY()
	bool hasMin;

	UPROPERTY()
	bool hasMax;

	UPROPERTY()
	FString Values;
};

USTRUCT()
struct FParameterConditions
{
	GENERATED_BODY()

	UPROPERTY()
	FString HideCondition;

	UPROPERTY()
	FString DisableCondition;
};

USTRUCT()
struct FParameterSetup 
{
	GENERATED_BODY()

	UPROPERTY()
	FString ParameterName;
	
	UPROPERTY()
	FString ParameterLabel;

	UPROPERTY()
	FString ParameterType;

	UPROPERTY()
	FString ParameterValue;

	UPROPERTY()
	FString ParameterExpression;

	UPROPERTY()
	FParameterConditions ParameterConditions;

	UPROPERTY()
	bool bParameterSettings;
	
	UPROPERTY()
	FParameterSettingSetup ParameterSettings;

	UPROPERTY()
	int32 ParameterID;
	
	UPROPERTY()
	bool ParameterVisible;
	
	UPROPERTY()
	bool ParameterDisable;
	
	UPROPERTY()
	bool ParameterNeighbour;
};


USTRUCT()
struct FFolderSetup
{
	GENERATED_BODY()

	UPROPERTY()
	FString FolderName;
	
	UPROPERTY()
	FString FolderLabel;
	
	UPROPERTY()
	FString FolderType;

	UPROPERTY()
	bool FolderVisible;

	UPROPERTY()
	bool FolderDisable;
	
	UPROPERTY()
	FString FolderExpression;

	UPROPERTY()
	FParameterConditions FolderConditions;

	UPROPERTY()
	bool FolderEndGroup;

	UPROPERTY()
	int32 FolderID;
	
	UPROPERTY()
	TArray<FParameterSetup> FolderParameters;
	
};

USTRUCT()
struct FFolderListSetup
{
	GENERATED_BODY()

	UPROPERTY()
	int32 ParentID;

	UPROPERTY()
	FString ParentName;

	UPROPERTY()
	FString FolderListType;

	UPROPERTY()
	int32 TabsCount;

	UPROPERTY()
	bool bIsTab;

	UPROPERTY()
	TArray<FFolderSetup> FolderSetups;
};

USTRUCT()
struct FLayoutSetup
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<int32, FString> ParameterTypes;
	
};

class UHoudiniParameter;
class UHoudiniAssetComponent;
class UHoudiniParameterFolder;
class FJsonValue;

UCLASS()
class QUICKUISETUP_API UHoudiniPythonClass : public UObject
{
	GENERATED_BODY()

public:
	UHoudiniPythonClass();

	void ConstructParameterLayout(UHoudiniAssetComponent* HoudiniAssetComponent);

	void ConstructJsonLayout(FString Path);

	void RecursiveLayoutBuild(TArray< TSharedPtr<FJsonValue> >& JsonObj, const FString name);
	
	FString GetParameterValue(UHoudiniParameter* Parameter, FParameterSetup& ParameterStruct);
	
	static bool IsFolderChild(UHoudiniParameter* FolderParm,TArray<UHoudiniParameter*> Parameters);

	bool IsTabChild(UHoudiniParameterFolder* FolderParm, TArray<UHoudiniParameter*> Parameters, int32& parentID);

	bool NeedUpdate(UHoudiniAssetComponent* HoudiniAssetComponent);
	
	UHoudiniAssetComponent* GetComponent();

	FString GetJsonPath() { return HoudiniPythonJsonFullPath; }

private:
	
	UPROPERTY()
	UHoudiniAssetComponent* ClassHoudiniAssetComponent;

	UPROPERTY()
	TMap<FString,FLayoutSetup> LayoutSetup;
	
	UPROPERTY()
	TMap<int32,FParameterSetup> RootLayout;
	
	UPROPERTY()
	TMap<int32,FFolderSetup> FolderLayout;

	UPROPERTY()
	TMap<int32,FFolderListSetup> FolderListLayout;	

	UPROPERTY()
	int32 ParameterCount;

	UPROPERTY()
	FString HoudiniAssetName;

	UPROPERTY()
	FString HoudiniPythonJsonFullPath;
};





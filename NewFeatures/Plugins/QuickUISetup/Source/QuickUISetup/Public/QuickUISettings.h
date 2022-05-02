// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuickUISettings.generated.h"

/**
 * 
 */
UCLASS(config = MySetting)
class QUICKUISETUP_API UQuickUISettings : public UObject
{
	GENERATED_BODY()

	UQuickUISettings(const FObjectInitializer& obj);

	public:

	UPROPERTY(Config, EditAnywhere, Category="UI", meta = (DisplayName = "Root Save", ToolTip=" Directory were constructed UI will be safed."))
	FDirectoryPath BaseDir;
	
	UPROPERTY(Config, EditAnywhere, Category="Houdini", meta =(DisplayName = "Houdini and Python UI", ToolTip = "Enable Python UI to make layout for Houdini Digital Asset.", ConfigRestartRequired = true))
	bool HoudiniWins;

	UPROPERTY(Config, EditAnywhere, Category="Houdini", meta=(DisplayName= "Keep Json File", ToolTip= "Keep Json file when constructed."))
	bool SaveJson;
	
	UPROPERTY(Config, EditAnywhere, Category="Houdini", meta=( DisplayName = "Save Path", ToolTop = "Path directory for json file save.", EditCondition="SaveJson"))
	FDirectoryPath  JsonPath;
};

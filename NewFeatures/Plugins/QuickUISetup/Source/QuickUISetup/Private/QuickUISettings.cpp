// Fill out your copyright notice in the Description page of Project Settings.


#include "QuickUISettings.h"

UQuickUISettings::UQuickUISettings(const FObjectInitializer& obj)
{
	BaseDir.Path = FPaths::ProjectPluginsDir() + TEXT("/QuickUISetup/SaveUI");
	HoudiniWins = true;
	JsonPath.Path = FPaths::ProjectPluginsDir() + TEXT("/QuickUISetup/Json");
}
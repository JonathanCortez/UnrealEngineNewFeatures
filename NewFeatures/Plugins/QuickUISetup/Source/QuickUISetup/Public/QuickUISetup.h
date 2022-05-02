// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;
class UHoudiniAssetComponent;

class FQuickUISetupModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginCreateNew();
	
	void PluginLoadUI();

	void PluginOpenUI(const FString& name, const FString& WinType,const FString& CategoryName);

	void NewHoudiniAssetLayout(UHoudiniAssetComponent* HoudiniAsset);


private:
	
	void AddToolbarButton(FToolBarBuilder& Builder);
	void AddMenuEntry(FMenuBuilder& MenuBuilder);
	void FillSubmenu(FMenuBuilder& MenuBuilder);
	void FillUISubMenu(FMenuBuilder& MenuBuilder);
	TSharedRef<SWidget> FillComboButton(TSharedPtr<class FUICommandList> Commands);
	
	TSharedPtr<class FUICommandList> PluginCommands;
	
};

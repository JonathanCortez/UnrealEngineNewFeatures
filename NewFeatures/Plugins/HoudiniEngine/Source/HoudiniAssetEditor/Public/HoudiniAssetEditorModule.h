// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "Toolkits/AssetEditorToolkit.h"

class IHoudiniAssetEditor;
class UHoudiniAssetEditorObject;

extern const FName HoudiniAssetEditorAppIdentifier;

class IHoudiniAssetEditorModule : public IModuleInterface, public IHasMenuExtensibility, public IHasToolBarExtensibility
{
public:
	virtual TSharedRef<IHoudiniAssetEditor> CreateHoudiniAssetEditor( const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UHoudiniAssetEditorObject* HoudiniAsset ) = 0;

	/** Delegate to be called when a Material Editor is created, for toolbar, tab, and menu extension **/
	DECLARE_EVENT_OneParam(IHoudiniAssetEditorModule, FHoudiniAssetEditorOpenedEvent, TWeakPtr<IHoudiniAssetEditor>);
	virtual FHoudiniAssetEditorOpenedEvent& OnHoudiniAssetEditorOpened() { return HoudiniAssetEditorOpenedEvent; };

	virtual TSharedPtr<FExtensibilityManager> GetSecondaryToolBarExtensibilityManager() = 0;

private:
	FHoudiniAssetEditorOpenedEvent HoudiniAssetEditorOpenedEvent;
};

#include "HoudiniAssetEditorModule.h"
#include "Modules/ModuleManager.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "AssetTypeActions_HoudiniAssetEditor.h"
#include "HoudiniAssetEditorObject.h"
#include "HoudiniAssetEditor.h"

const FName HoudiniAssetEditorAppIdentifier = FName(TEXT("HoudiniAssetEditorApp"));

class FHoudiniAssetEditorModule : public IHoudiniAssetEditorModule
{
public:
	/** Constructor */
	FHoudiniAssetEditorModule() { }

	virtual void StartupModule() override
	{
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		EAssetTypeCategories::Type gameAssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("HoudiniCategory")), FText::FromName(TEXT("Houdini Category")));
		TSharedPtr<IAssetTypeActions> actionType = MakeShareable(new AssetTypeActions_HoudiniAssetEditor(gameAssetCategory));
		AssetTools.RegisterAssetTypeActions(actionType.ToSharedRef());

		// Create new extensibility managers for our menu and toolbar
		MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
		ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);
		SecondaryToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);
	}

	/**
	* Called before the module is unloaded, right before the module object is destroyed.
	*/
	virtual void ShutdownModule() override
	{
		// Reset our existing extensibility managers
		MenuExtensibilityManager.Reset();
		ToolBarExtensibilityManager.Reset();
		SecondaryToolBarExtensibilityManager.Reset();

		
		if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
		{
			// Unregister our custom created assets from the AssetTools
			IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
			for (int32 i = 0; i < CreatedAssetTypeActions.Num(); ++i)
			{
				AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[i].ToSharedRef());
			}
		}

		CreatedAssetTypeActions.Empty();
	}

	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		CreatedAssetTypeActions.Add(Action);
	}

	/**
	* Creates a new custom asset editor for a MyCustomAsset
	*/
	virtual TSharedRef<IHoudiniAssetEditor> CreateHoudiniAssetEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UHoudiniAssetEditorObject* CustomAsset) override
	{
		// Initialize and spawn a new custom asset editor with the provided parameters
		TSharedRef<FHoudiniAssetEditor> NewHoudiniAssetEditor(new FHoudiniAssetEditor());
		NewHoudiniAssetEditor->InitHoudiniAssetEditor(Mode, InitToolkitHost, CustomAsset);
		return NewHoudiniAssetEditor;
	}
	
	
	/** Gets the extensibility managers for outside entities to extend custom asset editor's menus and toolbars */
	virtual TSharedPtr<FExtensibilityManager> GetMenuExtensibilityManager() override { return MenuExtensibilityManager; }
	virtual TSharedPtr<FExtensibilityManager> GetToolBarExtensibilityManager() override { return ToolBarExtensibilityManager; }
	virtual TSharedPtr<FExtensibilityManager> GetSecondaryToolBarExtensibilityManager() override { return SecondaryToolBarExtensibilityManager; }

private:
	TSharedPtr<FExtensibilityManager> MenuExtensibilityManager;
	TSharedPtr<FExtensibilityManager> ToolBarExtensibilityManager;
	TSharedPtr<FExtensibilityManager> SecondaryToolBarExtensibilityManager;
	
	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
};

IMPLEMENT_MODULE(FHoudiniAssetEditorModule, HoudiniAssetEditor);
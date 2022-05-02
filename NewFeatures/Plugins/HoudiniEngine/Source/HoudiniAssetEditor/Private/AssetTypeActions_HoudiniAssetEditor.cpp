#include "AssetTypeActions_HoudiniAssetEditor.h"
#include "HoudiniAssetEditorModule.h"

AssetTypeActions_HoudiniAssetEditor::AssetTypeActions_HoudiniAssetEditor(EAssetTypeCategories::Type InAssetCategory)
	: MyAssetCategory(InAssetCategory)
{
	
}

FColor AssetTypeActions_HoudiniAssetEditor::GetTypeColor() const
{
	return FColor::Orange;
}

FText AssetTypeActions_HoudiniAssetEditor::GetName() const
{
	return NSLOCTEXT("AssetTypeActions_MyCustomAsset", "AssetTypeActions_MyCustomAsset", "Houdini Asset Editor");
}

void AssetTypeActions_HoudiniAssetEditor::OpenAssetEditor(const TArray<UObject*>& InObjects,
	TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	// FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);

	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		auto HoudiniAssetEditorAsset = Cast<UHoudiniAssetEditorObject>(*ObjIt);
		if (HoudiniAssetEditorAsset != NULL)
		{
			IHoudiniAssetEditorModule* HoudiniAssetEditorModule = &FModuleManager::LoadModuleChecked<IHoudiniAssetEditorModule>("HoudiniAssetEditor");
			HoudiniAssetEditorModule->CreateHoudiniAssetEditor(Mode, EditWithinLevelEditor, HoudiniAssetEditorAsset);
		}
	}
}

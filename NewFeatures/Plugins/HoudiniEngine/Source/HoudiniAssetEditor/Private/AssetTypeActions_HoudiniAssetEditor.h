#pragma once

#include "CoreMinimal.h"
#include "Toolkits/IToolkitHost.h"
#include "AssetTypeActions_Base.h"
#include "HoudiniAssetEditorObject.h"

class AssetTypeActions_HoudiniAssetEditor : public FAssetTypeActions_Base
{
public:
	AssetTypeActions_HoudiniAssetEditor(EAssetTypeCategories::Type InAssetCategory);

	
	// IAssetTypeActions interface
	virtual FColor GetTypeColor() const override;
	virtual FText GetName() const override;
	virtual UClass* GetSupportedClass() const override { return UHoudiniAssetEditorObject::StaticClass(); }
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
	virtual uint32 GetCategories() override { return MyAssetCategory; }
	// End of IAssetTypeActions interface

private:
	EAssetTypeCategories::Type MyAssetCategory;
};

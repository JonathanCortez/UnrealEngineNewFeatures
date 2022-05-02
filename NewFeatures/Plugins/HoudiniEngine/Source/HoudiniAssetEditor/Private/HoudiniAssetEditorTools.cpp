#include "HoudiniAssetEditorTools.h"
#include "Framework/Commands/UIAction.h"
#include "Textures/SlateIcon.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "EngineDefines.h"
#include "EditorStyleSet.h"
#include "PropertyHandle.h"
#include "IDetailGroup.h"
#include "IDetailChildrenBuilder.h"
#include "Misc/MessageDialog.h"
#include "Misc/FeedbackContext.h"
#include "Modules/ModuleManager.h"
#include "SlateOptMacros.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Materials/Material.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "RawMesh.h"
#include "MeshUtilities.h"
#include "StaticMeshResources.h"
#include "HoudiniAssetEditor.h"
#include "PropertyCustomizationHelpers.h"
#include "MaterialList.h"
#include "PhysicsEngine/BodySetup.h"
#include "FbxMeshUtils.h"
#include "Widgets/Input/SVectorInputBox.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "SPerPlatformPropertiesWidget.h"
#include "PlatformInfo.h"

#include "ContentStreaming.h"
#include "EditorDirectories.h"
#include "EditorFramework/AssetImportData.h"
#include "Engine/SkeletalMesh.h"
#include "EngineAnalytics.h"
#include "Factories/FbxStaticMeshImportData.h"
#include "HAL/PlatformApplicationMisc.h"
#include "IMeshReductionManagerModule.h"
#include "Interfaces/ITargetPlatform.h"
#include "Interfaces/ITargetPlatformManagerModule.h"
#include "JsonObjectConverter.h"
#include "Runtime/Analytics/Analytics/Public/Interfaces/IAnalyticsProvider.h"
#include "ScopedTransaction.h"
#include "UObject/UObjectGlobals.h"
#include "Widgets/Input/SFilePathPicker.h"
#include "Widgets/Input/STextComboBox.h"
#include "HoudiniAssetEditorObject.h"

#define LOCTEXT_NAMESPACE "HoudiniAssetEditor"

enum SM_CustomDataKey
{
	CustomDataKey_LODVisibilityState = 0, //This is the key to know if a LOD is shown in custom mode. Do CustomDataKey_LODVisibilityState + LodIndex for a specific LOD
	CustomDataKey_LODEditMode = 100 //This is the key to know the state of the custom lod edit mode.
};

FHoudiniAssetDetails::FHoudiniAssetDetails( class FHoudiniAssetEditor& InHoudiniAssetEditor )
	: HoudiniAssetEditor( InHoudiniAssetEditor )
{}

FHoudiniAssetDetails::~FHoudiniAssetDetails()
{
}

void FHoudiniAssetDetails::CustomizeDetails( class IDetailLayoutBuilder& DetailBuilder )
{
	/* Hide Category that this editor wont need */
	DetailBuilder.HideCategory("Houdini Engine");
	DetailBuilder.HideCategory("TransformCommon");
	DetailBuilder.HideCategory("Lighting");
	DetailBuilder.HideCategory("Collision");
	DetailBuilder.HideCategory("Physics");
	DetailBuilder.HideCategory("Rendering");
	DetailBuilder.HideCategory("Navigation");
	DetailBuilder.HideCategory("Tags");
	DetailBuilder.HideCategory("ComponentReplication");
	DetailBuilder.HideCategory("Variable");
	DetailBuilder.HideCategory("Cooking");
	DetailBuilder.HideCategory("Lighting");
	DetailBuilder.HideCategory("HLOD");
	DetailBuilder.HideCategory("Mobile");
	DetailBuilder.HideCategory("AssetUserData");
	/*----------------------------------------*/

	// UHoudiniAssetEditorObject* MainEditor = nullptr;
	// TArray<TWeakObjectPtr<UObject>> Objects;
	// DetailBuilder.GetObjectsBeingCustomized(Objects);
	//
	// for(auto obj : Objects)
	// {
	// 	MainEditor = Cast<UHoudiniAssetEditorObject>(obj);
	// 	if(MainEditor)
	// 		break;
	// }


	
}

// void FHoudiniAssetDetails::OnInstancedFbxStaticMeshImportDataPropertyIteration(IDetailCategoryBuilder& BaseCategory, IDetailGroup* PropertyGroup, TSharedRef<IPropertyHandle>& Property) const
// {
// 	IDetailPropertyRow* Row = nullptr;
//
// 	if (PropertyGroup)
// 	{
// 		Row = &PropertyGroup->AddPropertyRow(Property);
// 	}
// 	else
// 	{
// 		Row = &BaseCategory.AddProperty(Property);
// 	}
//
// 	if (Row)
// 	{
// 		//Vertex Override Color property should be disabled if we are not in override mode.
// 		if (Property->IsValidHandle() && Property->GetProperty() == VertexColorImportOverrideHandle->GetProperty())
// 		{
// 			Row->IsEnabled(TAttribute<bool>(this, &FHoudiniAssetDetails::GetVertexOverrideColorEnabledState));
// 		}
// 	}
// }
//
// void FHoudiniAssetDetails::OnLightmapSettingsChanged()
// {
// 	UHoudiniAssetEditorObject* HoudiniAsset = HoudiniAssetEditor.GetHoudiniAsset();
// 	check(HoudiniAsset);
// 	// HoudiniAsset->EnforceLightmapRestrictions(false); //TODO : Add this func to UMyHoudiniAsset.h
// }
//
// bool FHoudiniAssetDetails::GetVertexOverrideColorEnabledState() const
// {
// 	uint8 VertexColorImportOption;
// 	check(VertexColorImportOptionHandle.IsValid());
// 	ensure(VertexColorImportOptionHandle->GetValue(VertexColorImportOption) == FPropertyAccess::Success);
//
// 	return (VertexColorImportOption == EVertexColorImportOption::Override);
// }
//
// bool FHoudiniAssetDetails::IsApplyNeeded() const
// {
// 	return LevelOfDetailSettings.IsValid() && LevelOfDetailSettings->IsApplyNeeded();
// }
//
// void FHoudiniAssetDetails::ApplyChanges()
// {
// 	if( LevelOfDetailSettings.IsValid() )
// 	{
// 		LevelOfDetailSettings->ApplyChanges();
// 	}
// }

//----------------------------------------------------------------------------------------------------------------------------


#undef LOCTEXT_NAMESPACE
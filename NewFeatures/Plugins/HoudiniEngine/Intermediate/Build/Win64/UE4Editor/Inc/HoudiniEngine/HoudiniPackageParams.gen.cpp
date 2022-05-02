// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniPackageParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPackageParams() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageMode();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EPackageReplaceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EPackageReplaceMode"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageReplaceMode>()
	{
		return EPackageReplaceMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPackageReplaceMode(EPackageReplaceMode_StaticEnum, TEXT("/Script/HoudiniEngine"), TEXT("EPackageReplaceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Hash() { return 4221653677U; }
	UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPackageReplaceMode"), 0, Get_Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPackageReplaceMode::CreateNewAssets", (int64)EPackageReplaceMode::CreateNewAssets },
				{ "EPackageReplaceMode::ReplaceExistingAssets", (int64)EPackageReplaceMode::ReplaceExistingAssets },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CreateNewAssets.Name", "EPackageReplaceMode::CreateNewAssets" },
				{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
				{ "ReplaceExistingAssets.Name", "EPackageReplaceMode::ReplaceExistingAssets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
				nullptr,
				"EPackageReplaceMode",
				"EPackageReplaceMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPackageMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EPackageMode, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EPackageMode"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageMode>()
	{
		return EPackageMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPackageMode(EPackageMode_StaticEnum, TEXT("/Script/HoudiniEngine"), TEXT("EPackageMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngine_EPackageMode_Hash() { return 692064403U; }
	UEnum* Z_Construct_UEnum_HoudiniEngine_EPackageMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPackageMode"), 0, Get_Z_Construct_UEnum_HoudiniEngine_EPackageMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPackageMode::CookToLevel", (int64)EPackageMode::CookToLevel },
				{ "EPackageMode::CookToTemp", (int64)EPackageMode::CookToTemp },
				{ "EPackageMode::Bake", (int64)EPackageMode::Bake },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bake.Name", "EPackageMode::Bake" },
				{ "CookToLevel.Name", "EPackageMode::CookToLevel" },
				{ "CookToTemp.Name", "EPackageMode::CookToTemp" },
				{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
				nullptr,
				"EPackageMode",
				"EPackageMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHoudiniPackageParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPackageParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPackageParams, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPackageParams"), sizeof(FHoudiniPackageParams), Get_Z_Construct_UScriptStruct_FHoudiniPackageParams_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPackageParams>()
{
	return FHoudiniPackageParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPackageParams(FHoudiniPackageParams::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniPackageParams"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPackageParams
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPackageParams()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniPackageParams>(FName(TEXT("HoudiniPackageParams")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPackageParams;
	struct Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_PackageMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PackageMode;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ReplaceMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReplaceMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempCookFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TempCookFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterPackage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OuterPackage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniAssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniAssetActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeoId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SplitStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDGTOPNetworkName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PDGTOPNetworkName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDGTOPNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PDGTOPNodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PDGWorkItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PDGWorkItemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPackageParams>();
	}
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_MetaData[] = {
		{ "Comment", "// The current cook/baking mode\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "The current cook/baking mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode = { "PackageMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, PackageMode), Z_Construct_UEnum_HoudiniEngine_EPackageMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_MetaData[] = {
		{ "Comment", "// How to handle existing assets? replace or rename?\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "How to handle existing assets? replace or rename?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode = { "ReplaceMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, ReplaceMode), Z_Construct_UEnum_HoudiniEngine_EPackageReplaceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "Comment", "// When cooking in bake mode - folder to create assets in\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "When cooking in bake mode - folder to create assets in" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, BakeFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder_MetaData[] = {
		{ "Comment", "// When cooking in temp mode - folder to create assets in\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "When cooking in temp mode - folder to create assets in" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder = { "TempCookFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, TempCookFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage_MetaData[] = {
		{ "Comment", "// Package to save to\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Package to save to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage = { "OuterPackage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, OuterPackage), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Comment", "// Name of the package we want to create\n// If null, we'll generate one from:\n// (without PDG) ASSET_OBJ_GEO_PART_SPLIT,\n// (with PDG) ASSET_TOPNET_TOPNODE_WORKITEMINDEX_PART_SPLIT\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Name of the package we want to create\nIf null, we'll generate one from:\n(without PDG) ASSET_OBJ_GEO_PART_SPLIT,\n(with PDG) ASSET_TOPNET_TOPNODE_WORKITEMINDEX_PART_SPLIT" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName_MetaData[] = {
		{ "Comment", "// Name of the HDA\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Name of the HDA" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName = { "HoudiniAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, HoudiniAssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName_MetaData[] = {
		{ "Comment", "// Name of actor that is managing an instance of the HDA\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "Name of actor that is managing an instance of the HDA" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName = { "HoudiniAssetActorName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, HoudiniAssetActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, ObjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, GeoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, PartId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr = { "SplitStr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, SplitStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID_MetaData[] = {
		{ "Comment", "// GUID used for the owner\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "GUID used for the owner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID = { "ComponentGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, ComponentGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName_MetaData[] = {
		{ "Comment", "// For PDG temporary outputs: the TOP network name\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "For PDG temporary outputs: the TOP network name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName = { "PDGTOPNetworkName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, PDGTOPNetworkName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName_MetaData[] = {
		{ "Comment", "// For PDG temporary outputs: the TOP node name\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "For PDG temporary outputs: the TOP node name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName = { "PDGTOPNodeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, PDGTOPNodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex_MetaData[] = {
		{ "Comment", "// For PDG temporary outputs: the work item index of the TOP node\n" },
		{ "ModuleRelativePath", "Private/HoudiniPackageParams.h" },
		{ "ToolTip", "For PDG temporary outputs: the work item index of the TOP node" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex = { "PDGWorkItemIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPackageParams, PDGWorkItemIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PackageMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ReplaceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_BakeFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_TempCookFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_OuterPackage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_HoudiniAssetActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_GeoId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PartId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_SplitStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_ComponentGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNetworkName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGTOPNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::NewProp_PDGWorkItemIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPackageParams",
		sizeof(FHoudiniPackageParams),
		alignof(FHoudiniPackageParams),
		Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPackageParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPackageParams"), sizeof(FHoudiniPackageParams), Get_Z_Construct_UScriptStruct_FHoudiniPackageParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPackageParams_Hash() { return 2878312590U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

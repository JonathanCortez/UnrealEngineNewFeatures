// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniEngineTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineTask() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static UEnum* EHoudiniEngineTaskType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniEngineTaskType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniEngineTaskType>()
	{
		return EHoudiniEngineTaskType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniEngineTaskType(EHoudiniEngineTaskType_StaticEnum, TEXT("/Script/HoudiniEngine"), TEXT("EHoudiniEngineTaskType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Hash() { return 3650046797U; }
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniEngineTaskType"), 0, Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniEngineTaskType::None", (int64)EHoudiniEngineTaskType::None },
				{ "EHoudiniEngineTaskType::AssetInstantiation", (int64)EHoudiniEngineTaskType::AssetInstantiation },
				{ "EHoudiniEngineTaskType::AssetCooking", (int64)EHoudiniEngineTaskType::AssetCooking },
				{ "EHoudiniEngineTaskType::AssetDeletion", (int64)EHoudiniEngineTaskType::AssetDeletion },
				{ "EHoudiniEngineTaskType::AssetProcess", (int64)EHoudiniEngineTaskType::AssetProcess },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AssetCooking.Comment", "// This type corresponds to Houdini asset cooking request.\n" },
				{ "AssetCooking.Name", "EHoudiniEngineTaskType::AssetCooking" },
				{ "AssetCooking.ToolTip", "This type corresponds to Houdini asset cooking request." },
				{ "AssetDeletion.Comment", "// This type is used for asynchronous asset deletion.\n" },
				{ "AssetDeletion.Name", "EHoudiniEngineTaskType::AssetDeletion" },
				{ "AssetDeletion.ToolTip", "This type is used for asynchronous asset deletion." },
				{ "AssetInstantiation.Comment", "// This type corresponds to Houdini asset instantiation (without cooking).\n" },
				{ "AssetInstantiation.Name", "EHoudiniEngineTaskType::AssetInstantiation" },
				{ "AssetInstantiation.ToolTip", "This type corresponds to Houdini asset instantiation (without cooking)." },
				{ "AssetProcess.Comment", "// This type is used when processing the results of a sucessful cook\n" },
				{ "AssetProcess.Name", "EHoudiniEngineTaskType::AssetProcess" },
				{ "AssetProcess.ToolTip", "This type is used when processing the results of a sucessful cook" },
				{ "Comment", "/*\nnamespace EHoudiniEngineTaskType\n{\n\x09""enum Type\n\x09{\n\x09\x09None,\n\n\x09\x09// This type corresponds to Houdini asset instantiation (without cooking).\n\x09\x09""AssetInstantiation,\n\n\x09\x09// This type corresponds to Houdini asset cooking request.\n\x09\x09""AssetCooking,\n\n\x09\x09// This type is used for asynchronous asset deletion.\n\x09\x09""AssetDeletion\n\x09};\n}\n*/" },
				{ "ModuleRelativePath", "Private/HoudiniEngineTask.h" },
				{ "None.Name", "EHoudiniEngineTaskType::None" },
				{ "ToolTip", "namespace EHoudiniEngineTaskType\n{\n       enum Type\n       {\n               None,\n\n               // This type corresponds to Houdini asset instantiation (without cooking).\n               AssetInstantiation,\n\n               // This type corresponds to Houdini asset cooking request.\n               AssetCooking,\n\n               // This type is used for asynchronous asset deletion.\n               AssetDeletion\n       };\n}" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
				nullptr,
				"EHoudiniEngineTaskType",
				"EHoudiniEngineTaskType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

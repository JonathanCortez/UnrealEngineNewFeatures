// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniTool() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType();
// End Cross Module References
	static UEnum* EHoudiniToolSelectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniToolSelectionType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolSelectionType>()
	{
		return EHoudiniToolSelectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniToolSelectionType(EHoudiniToolSelectionType_StaticEnum, TEXT("/Script/HoudiniEngineEditor"), TEXT("EHoudiniToolSelectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Hash() { return 945655868U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniToolSelectionType"), 0, Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolSelectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniToolSelectionType::HTOOL_SELECTION_ALL", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_ALL },
				{ "EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY },
				{ "EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HTOOL_SELECTION_ALL.Comment", "// For tools that can be applied both to Content Browser and World selection\n" },
				{ "HTOOL_SELECTION_ALL.DisplayName", "Content Browser AND World" },
				{ "HTOOL_SELECTION_ALL.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_ALL" },
				{ "HTOOL_SELECTION_ALL.ToolTip", "For tools that can be applied both to Content Browser and World selection" },
				{ "HTOOL_SELECTION_CB_ONLY.Comment", "// For tools that can be applied only to Content Browser selection\n" },
				{ "HTOOL_SELECTION_CB_ONLY.DisplayName", "Content browser selection only" },
				{ "HTOOL_SELECTION_CB_ONLY.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY" },
				{ "HTOOL_SELECTION_CB_ONLY.ToolTip", "For tools that can be applied only to Content Browser selection" },
				{ "HTOOL_SELECTION_WORLD_ONLY.Comment", "// For tools that can be applied only to World selection\n" },
				{ "HTOOL_SELECTION_WORLD_ONLY.DisplayName", "World selection only" },
				{ "HTOOL_SELECTION_WORLD_ONLY.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY" },
				{ "HTOOL_SELECTION_WORLD_ONLY.ToolTip", "For tools that can be applied only to World selection" },
				{ "ModuleRelativePath", "Private/HoudiniTool.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
				nullptr,
				"EHoudiniToolSelectionType",
				"EHoudiniToolSelectionType",
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
	static UEnum* EHoudiniToolType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniToolType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolType>()
	{
		return EHoudiniToolType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniToolType(EHoudiniToolType_StaticEnum, TEXT("/Script/HoudiniEngineEditor"), TEXT("EHoudiniToolType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Hash() { return 1429147204U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniToolType"), 0, Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniToolType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniToolType::HTOOLTYPE_GENERATOR", (int64)EHoudiniToolType::HTOOLTYPE_GENERATOR },
				{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE },
				{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI },
				{ "EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH", (int64)EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HTOOLTYPE_GENERATOR.Comment", "// For tools that generates geometry, and do not need input\n" },
				{ "HTOOLTYPE_GENERATOR.DisplayName", "Generator" },
				{ "HTOOLTYPE_GENERATOR.Name", "EHoudiniToolType::HTOOLTYPE_GENERATOR" },
				{ "HTOOLTYPE_GENERATOR.ToolTip", "For tools that generates geometry, and do not need input" },
				{ "HTOOLTYPE_OPERATOR_BATCH.Comment", "// For tools that needs to be applied each time for each single selected\n" },
				{ "HTOOLTYPE_OPERATOR_BATCH.DisplayName", "Batch Operator" },
				{ "HTOOLTYPE_OPERATOR_BATCH.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH" },
				{ "HTOOLTYPE_OPERATOR_BATCH.ToolTip", "For tools that needs to be applied each time for each single selected" },
				{ "HTOOLTYPE_OPERATOR_MULTI.Comment", "// For Tools that have multiple input, a single selected asset will be applied to each input\n" },
				{ "HTOOLTYPE_OPERATOR_MULTI.DisplayName", "Operator (multiple)" },
				{ "HTOOLTYPE_OPERATOR_MULTI.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI" },
				{ "HTOOLTYPE_OPERATOR_MULTI.ToolTip", "For Tools that have multiple input, a single selected asset will be applied to each input" },
				{ "HTOOLTYPE_OPERATOR_SINGLE.Comment", "// For tools that have a single input, the selection will be merged in that single input\n" },
				{ "HTOOLTYPE_OPERATOR_SINGLE.DisplayName", "Operator (single)" },
				{ "HTOOLTYPE_OPERATOR_SINGLE.Name", "EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE" },
				{ "HTOOLTYPE_OPERATOR_SINGLE.ToolTip", "For tools that have a single input, the selection will be merged in that single input" },
				{ "ModuleRelativePath", "Private/HoudiniTool.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
				nullptr,
				"EHoudiniToolType",
				"EHoudiniToolType",
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

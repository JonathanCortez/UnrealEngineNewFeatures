// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniEngineCommands.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineCommands() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineResult();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineRequestResult();
// End Cross Module References
	static UEnum* EHoudiniProxyRefineResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineResult, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniProxyRefineResult"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniProxyRefineResult>()
	{
		return EHoudiniProxyRefineResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniProxyRefineResult(EHoudiniProxyRefineResult_StaticEnum, TEXT("/Script/HoudiniEngineEditor"), TEXT("EHoudiniProxyRefineResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineResult_Hash() { return 1126338980U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniProxyRefineResult"), 0, Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniProxyRefineResult::Invalid", (int64)EHoudiniProxyRefineResult::Invalid },
				{ "EHoudiniProxyRefineResult::Failed", (int64)EHoudiniProxyRefineResult::Failed },
				{ "EHoudiniProxyRefineResult::Success", (int64)EHoudiniProxyRefineResult::Success },
				{ "EHoudiniProxyRefineResult::Skipped", (int64)EHoudiniProxyRefineResult::Skipped },
				{ "EHoudiniProxyRefineResult::Max", (int64)EHoudiniProxyRefineResult::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// When attempting to refine proxy mesh outputs it is a possible that a cook is needed. The enum\n// defines the possible return values on a request to refine proxies.\n" },
				{ "Failed.Comment", "// Refinement (or cook if needed) failed\n" },
				{ "Failed.Name", "EHoudiniProxyRefineResult::Failed" },
				{ "Failed.ToolTip", "Refinement (or cook if needed) failed" },
				{ "Invalid.Name", "EHoudiniProxyRefineResult::Invalid" },
				{ "Max.Name", "EHoudiniProxyRefineResult::Max" },
				{ "ModuleRelativePath", "Private/HoudiniEngineCommands.h" },
				{ "Skipped.Comment", "// Refinement was skipped, either it was not necessary or the operation was cancelled by the user\n" },
				{ "Skipped.Name", "EHoudiniProxyRefineResult::Skipped" },
				{ "Skipped.ToolTip", "Refinement was skipped, either it was not necessary or the operation was cancelled by the user" },
				{ "Success.Comment", "// Refinement completed successfully\n" },
				{ "Success.Name", "EHoudiniProxyRefineResult::Success" },
				{ "Success.ToolTip", "Refinement completed successfully" },
				{ "ToolTip", "When attempting to refine proxy mesh outputs it is a possible that a cook is needed. The enum\ndefines the possible return values on a request to refine proxies." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
				nullptr,
				"EHoudiniProxyRefineResult",
				"EHoudiniProxyRefineResult",
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
	static UEnum* EHoudiniProxyRefineRequestResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineRequestResult, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniProxyRefineRequestResult"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>()
	{
		return EHoudiniProxyRefineRequestResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniProxyRefineRequestResult(EHoudiniProxyRefineRequestResult_StaticEnum, TEXT("/Script/HoudiniEngineEditor"), TEXT("EHoudiniProxyRefineRequestResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineRequestResult_Hash() { return 1759596611U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineRequestResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniProxyRefineRequestResult"), 0, Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniProxyRefineRequestResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniProxyRefineRequestResult::Invalid", (int64)EHoudiniProxyRefineRequestResult::Invalid },
				{ "EHoudiniProxyRefineRequestResult::None", (int64)EHoudiniProxyRefineRequestResult::None },
				{ "EHoudiniProxyRefineRequestResult::PendingCooks", (int64)EHoudiniProxyRefineRequestResult::PendingCooks },
				{ "EHoudiniProxyRefineRequestResult::Refined", (int64)EHoudiniProxyRefineRequestResult::Refined },
				{ "EHoudiniProxyRefineRequestResult::Max", (int64)EHoudiniProxyRefineRequestResult::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// When attempting to refine proxy mesh outputs it is a possible that a cook is needed. The enum\n// defines the possible return values on a request to refine proxies.\n" },
				{ "Invalid.Name", "EHoudiniProxyRefineRequestResult::Invalid" },
				{ "Max.Name", "EHoudiniProxyRefineRequestResult::Max" },
				{ "ModuleRelativePath", "Private/HoudiniEngineCommands.h" },
				{ "None.Comment", "// No refinement is needed\n" },
				{ "None.Name", "EHoudiniProxyRefineRequestResult::None" },
				{ "None.ToolTip", "No refinement is needed" },
				{ "PendingCooks.Comment", "// A cook is needed, refinement will commence automatically after the cook\n" },
				{ "PendingCooks.Name", "EHoudiniProxyRefineRequestResult::PendingCooks" },
				{ "PendingCooks.ToolTip", "A cook is needed, refinement will commence automatically after the cook" },
				{ "Refined.Comment", "// Successfully refined\n" },
				{ "Refined.Name", "EHoudiniProxyRefineRequestResult::Refined" },
				{ "Refined.ToolTip", "Successfully refined" },
				{ "ToolTip", "When attempting to refine proxy mesh outputs it is a possible that a cook is needed. The enum\ndefines the possible return values on a request to refine proxies." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
				nullptr,
				"EHoudiniProxyRefineRequestResult",
				"EHoudiniProxyRefineRequestResult",
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

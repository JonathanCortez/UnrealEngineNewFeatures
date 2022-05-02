// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetStateTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetStateTypes() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState();
// End Cross Module References
	static UEnum* EHoudiniAssetStateResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetStateResult"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>()
	{
		return EHoudiniAssetStateResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniAssetStateResult(EHoudiniAssetStateResult_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniAssetStateResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Hash() { return 628356567U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniAssetStateResult"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniAssetStateResult::None", (int64)EHoudiniAssetStateResult::None },
				{ "EHoudiniAssetStateResult::Working", (int64)EHoudiniAssetStateResult::Working },
				{ "EHoudiniAssetStateResult::Success", (int64)EHoudiniAssetStateResult::Success },
				{ "EHoudiniAssetStateResult::FinishedWithError", (int64)EHoudiniAssetStateResult::FinishedWithError },
				{ "EHoudiniAssetStateResult::FinishedWithFatalError", (int64)EHoudiniAssetStateResult::FinishedWithFatalError },
				{ "EHoudiniAssetStateResult::Aborted", (int64)EHoudiniAssetStateResult::Aborted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Name", "EHoudiniAssetStateResult::Aborted" },
				{ "FinishedWithError.Name", "EHoudiniAssetStateResult::FinishedWithError" },
				{ "FinishedWithFatalError.Name", "EHoudiniAssetStateResult::FinishedWithFatalError" },
				{ "ModuleRelativePath", "Private/HoudiniAssetStateTypes.h" },
				{ "None.Name", "EHoudiniAssetStateResult::None" },
				{ "Success.Name", "EHoudiniAssetStateResult::Success" },
				{ "Working.Name", "EHoudiniAssetStateResult::Working" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniAssetStateResult",
				"EHoudiniAssetStateResult",
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
	static UEnum* EHoudiniAssetState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetState"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetState>()
	{
		return EHoudiniAssetState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniAssetState(EHoudiniAssetState_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniAssetState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Hash() { return 1299457852U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniAssetState"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniAssetState::NeedInstantiation", (int64)EHoudiniAssetState::NeedInstantiation },
				{ "EHoudiniAssetState::NewHDA", (int64)EHoudiniAssetState::NewHDA },
				{ "EHoudiniAssetState::PreInstantiation", (int64)EHoudiniAssetState::PreInstantiation },
				{ "EHoudiniAssetState::Instantiating", (int64)EHoudiniAssetState::Instantiating },
				{ "EHoudiniAssetState::PreCook", (int64)EHoudiniAssetState::PreCook },
				{ "EHoudiniAssetState::Cooking", (int64)EHoudiniAssetState::Cooking },
				{ "EHoudiniAssetState::PostCook", (int64)EHoudiniAssetState::PostCook },
				{ "EHoudiniAssetState::PreProcess", (int64)EHoudiniAssetState::PreProcess },
				{ "EHoudiniAssetState::Processing", (int64)EHoudiniAssetState::Processing },
				{ "EHoudiniAssetState::None", (int64)EHoudiniAssetState::None },
				{ "EHoudiniAssetState::NeedRebuild", (int64)EHoudiniAssetState::NeedRebuild },
				{ "EHoudiniAssetState::NeedDelete", (int64)EHoudiniAssetState::NeedDelete },
				{ "EHoudiniAssetState::Deleting", (int64)EHoudiniAssetState::Deleting },
				{ "EHoudiniAssetState::ProcessTemplate", (int64)EHoudiniAssetState::ProcessTemplate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cooking.Comment", "// Cooking task in progress\n" },
				{ "Cooking.Name", "EHoudiniAssetState::Cooking" },
				{ "Cooking.ToolTip", "Cooking task in progress" },
				{ "Deleting.Comment", "// Deleting\n" },
				{ "Deleting.Name", "EHoudiniAssetState::Deleting" },
				{ "Deleting.ToolTip", "Deleting" },
				{ "Instantiating.Comment", "// Instantiating task in progress\n" },
				{ "Instantiating.Name", "EHoudiniAssetState::Instantiating" },
				{ "Instantiating.ToolTip", "Instantiating task in progress" },
				{ "ModuleRelativePath", "Private/HoudiniAssetStateTypes.h" },
				{ "NeedDelete.Comment", "// Asset needs to be deleted\n" },
				{ "NeedDelete.Name", "EHoudiniAssetState::NeedDelete" },
				{ "NeedDelete.ToolTip", "Asset needs to be deleted" },
				{ "NeedInstantiation.Comment", "// Loaded / Duplicated HDA,\n// Will need to be instantiated upon change/update\n" },
				{ "NeedInstantiation.Name", "EHoudiniAssetState::NeedInstantiation" },
				{ "NeedInstantiation.ToolTip", "Loaded / Duplicated HDA,\nWill need to be instantiated upon change/update" },
				{ "NeedRebuild.Comment", "// Asset needs to be rebuilt (Deleted/Instantiated/Cooked)\n" },
				{ "NeedRebuild.Name", "EHoudiniAssetState::NeedRebuild" },
				{ "NeedRebuild.ToolTip", "Asset needs to be rebuilt (Deleted/Instantiated/Cooked)" },
				{ "NewHDA.Comment", "// Newly created HDA, fetch its default parameters then proceed to PreInstantiation\n" },
				{ "NewHDA.Name", "EHoudiniAssetState::NewHDA" },
				{ "NewHDA.ToolTip", "Newly created HDA, fetch its default parameters then proceed to PreInstantiation" },
				{ "None.Comment", "// Processed / Updated HDA\n// Will need to be cooked upon change/update\n" },
				{ "None.Name", "EHoudiniAssetState::None" },
				{ "None.ToolTip", "Processed / Updated HDA\nWill need to be cooked upon change/update" },
				{ "PostCook.Comment", "// Cooking has finished\n" },
				{ "PostCook.Name", "EHoudiniAssetState::PostCook" },
				{ "PostCook.ToolTip", "Cooking has finished" },
				{ "PreCook.Comment", "// Instantiated HDA, needs to be cooked immediately\n" },
				{ "PreCook.Name", "EHoudiniAssetState::PreCook" },
				{ "PreCook.ToolTip", "Instantiated HDA, needs to be cooked immediately" },
				{ "PreInstantiation.Comment", "// Newly created HDA, after default parameters fetch, needs to be instantiated immediately\n" },
				{ "PreInstantiation.Name", "EHoudiniAssetState::PreInstantiation" },
				{ "PreInstantiation.ToolTip", "Newly created HDA, after default parameters fetch, needs to be instantiated immediately" },
				{ "PreProcess.Comment", "// Cooked HDA, needs to be processed immediately\n" },
				{ "PreProcess.Name", "EHoudiniAssetState::PreProcess" },
				{ "PreProcess.ToolTip", "Cooked HDA, needs to be processed immediately" },
				{ "Processing.Comment", "// Processing task in progress\n" },
				{ "Processing.Name", "EHoudiniAssetState::Processing" },
				{ "Processing.ToolTip", "Processing task in progress" },
				{ "ProcessTemplate.Comment", "// Process component template. This is ticking has very limited\n// functionality, typically limited to checking for parameter updates\n// in order to trigger PostEditChange() to run construction scripts again.\n" },
				{ "ProcessTemplate.Name", "EHoudiniAssetState::ProcessTemplate" },
				{ "ProcessTemplate.ToolTip", "Process component template. This is ticking has very limited\nfunctionality, typically limited to checking for parameter updates\nin order to trigger PostEditChange() to run construction scripts again." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniAssetState",
				"EHoudiniAssetState",
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

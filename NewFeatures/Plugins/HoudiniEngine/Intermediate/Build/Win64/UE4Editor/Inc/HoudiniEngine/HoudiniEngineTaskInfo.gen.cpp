// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniEngineTaskInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineTaskInfo() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static UEnum* EHoudiniEngineTaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniEngineTaskState"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniEngineTaskState>()
	{
		return EHoudiniEngineTaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniEngineTaskState(EHoudiniEngineTaskState_StaticEnum, TEXT("/Script/HoudiniEngine"), TEXT("EHoudiniEngineTaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Hash() { return 2544041144U; }
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniEngineTaskState"), 0, Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniEngineTaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniEngineTaskState::None", (int64)EHoudiniEngineTaskState::None },
				{ "EHoudiniEngineTaskState::Working", (int64)EHoudiniEngineTaskState::Working },
				{ "EHoudiniEngineTaskState::Success", (int64)EHoudiniEngineTaskState::Success },
				{ "EHoudiniEngineTaskState::FinishedWithError", (int64)EHoudiniEngineTaskState::FinishedWithError },
				{ "EHoudiniEngineTaskState::FinishedWithFatalError", (int64)EHoudiniEngineTaskState::FinishedWithFatalError },
				{ "EHoudiniEngineTaskState::Aborted", (int64)EHoudiniEngineTaskState::Aborted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Comment", "// Indicates the task has been aborted (unused)\n" },
				{ "Aborted.Name", "EHoudiniEngineTaskState::Aborted" },
				{ "Aborted.ToolTip", "Indicates the task has been aborted (unused)" },
				{ "FinishedWithError.Comment", "// Indicates the task has finished with non fatal errors\n" },
				{ "FinishedWithError.Name", "EHoudiniEngineTaskState::FinishedWithError" },
				{ "FinishedWithError.ToolTip", "Indicates the task has finished with non fatal errors" },
				{ "FinishedWithFatalError.Comment", "// Indicates the task has finished with fatal errors and should be terminated\n" },
				{ "FinishedWithFatalError.Name", "EHoudiniEngineTaskState::FinishedWithFatalError" },
				{ "FinishedWithFatalError.ToolTip", "Indicates the task has finished with fatal errors and should be terminated" },
				{ "ModuleRelativePath", "Private/HoudiniEngineTaskInfo.h" },
				{ "None.Name", "EHoudiniEngineTaskState::None" },
				{ "Success.Comment", "// Indicates the task has successfully finished\n" },
				{ "Success.Name", "EHoudiniEngineTaskState::Success" },
				{ "Success.ToolTip", "Indicates the task has successfully finished" },
				{ "Working.Comment", "// Indicates the current task is still running\n" },
				{ "Working.Name", "EHoudiniEngineTaskState::Working" },
				{ "Working.ToolTip", "Indicates the current task is still running" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
				nullptr,
				"EHoudiniEngineTaskState",
				"EHoudiniEngineTaskState",
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

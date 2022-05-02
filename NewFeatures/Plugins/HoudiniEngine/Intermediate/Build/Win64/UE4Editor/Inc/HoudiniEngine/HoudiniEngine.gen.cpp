// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngine() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static UEnum* EHoudiniSessionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniSessionStatus"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSessionStatus>()
	{
		return EHoudiniSessionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniSessionStatus(EHoudiniSessionStatus_StaticEnum, TEXT("/Script/HoudiniEngine"), TEXT("EHoudiniSessionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Hash() { return 3502814315U; }
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniSessionStatus"), 0, Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniSessionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniSessionStatus::Invalid", (int64)EHoudiniSessionStatus::Invalid },
				{ "EHoudiniSessionStatus::NotStarted", (int64)EHoudiniSessionStatus::NotStarted },
				{ "EHoudiniSessionStatus::Connected", (int64)EHoudiniSessionStatus::Connected },
				{ "EHoudiniSessionStatus::None", (int64)EHoudiniSessionStatus::None },
				{ "EHoudiniSessionStatus::Stopped", (int64)EHoudiniSessionStatus::Stopped },
				{ "EHoudiniSessionStatus::Failed", (int64)EHoudiniSessionStatus::Failed },
				{ "EHoudiniSessionStatus::Lost", (int64)EHoudiniSessionStatus::Lost },
				{ "EHoudiniSessionStatus::NoLicense", (int64)EHoudiniSessionStatus::NoLicense },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Connected.Comment", "// Session not initialized yet\n" },
				{ "Connected.Name", "EHoudiniSessionStatus::Connected" },
				{ "Connected.ToolTip", "Session not initialized yet" },
				{ "Failed.Comment", "// Session stopped\n" },
				{ "Failed.Name", "EHoudiniSessionStatus::Failed" },
				{ "Failed.ToolTip", "Session stopped" },
				{ "Invalid.Name", "EHoudiniSessionStatus::Invalid" },
				{ "Lost.Comment", "// Session failed to connect\n" },
				{ "Lost.Name", "EHoudiniSessionStatus::Lost" },
				{ "Lost.ToolTip", "Session failed to connect" },
				{ "ModuleRelativePath", "Private/HoudiniEngine.h" },
				{ "NoLicense.Comment", "// Session Lost (HARS/Houdini Crash?)\n" },
				{ "NoLicense.Name", "EHoudiniSessionStatus::NoLicense" },
				{ "NoLicense.ToolTip", "Session Lost (HARS/Houdini Crash?)" },
				{ "None.Comment", "// Session successfully started\n" },
				{ "None.Name", "EHoudiniSessionStatus::None" },
				{ "None.ToolTip", "Session successfully started" },
				{ "NotStarted.Name", "EHoudiniSessionStatus::NotStarted" },
				{ "Stopped.Comment", "// Session type set to None\n" },
				{ "Stopped.Name", "EHoudiniSessionStatus::Stopped" },
				{ "Stopped.ToolTip", "Session type set to None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
				nullptr,
				"EHoudiniSessionStatus",
				"EHoudiniSessionStatus",
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

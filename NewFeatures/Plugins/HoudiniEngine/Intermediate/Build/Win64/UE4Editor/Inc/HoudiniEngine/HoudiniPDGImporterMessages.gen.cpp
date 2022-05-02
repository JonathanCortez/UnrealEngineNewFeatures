// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniPDGImporterMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPDGImporterMessages() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributes();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPackageParams();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EHoudiniPDGImportBGEOResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniPDGImportBGEOResult"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniPDGImportBGEOResult>()
	{
		return EHoudiniPDGImportBGEOResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniPDGImportBGEOResult(EHoudiniPDGImportBGEOResult_StaticEnum, TEXT("/Script/HoudiniEngine"), TEXT("EHoudiniPDGImportBGEOResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Hash() { return 2288518937U; }
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniPDGImportBGEOResult"), 0, Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniPDGImportBGEOResult::HPIBR_Failed", (int64)EHoudiniPDGImportBGEOResult::HPIBR_Failed },
				{ "EHoudiniPDGImportBGEOResult::HPIBR_Success", (int64)EHoudiniPDGImportBGEOResult::HPIBR_Success },
				{ "EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess", (int64)EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess },
				{ "EHoudiniPDGImportBGEOResult::HIBPR_MAX", (int64)EHoudiniPDGImportBGEOResult::HIBPR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HIBPR_MAX.Name", "EHoudiniPDGImportBGEOResult::HIBPR_MAX" },
				{ "HPIBR_Failed.Comment", "// Create uassets from the bgeo completely failed.\n" },
				{ "HPIBR_Failed.DisplayName", "Failed" },
				{ "HPIBR_Failed.Name", "EHoudiniPDGImportBGEOResult::HPIBR_Failed" },
				{ "HPIBR_Failed.ToolTip", "Create uassets from the bgeo completely failed." },
				{ "HPIBR_PartialSuccess.Comment", "// Some uassets were created, but there were unsupported objects in the bgeo as well\n" },
				{ "HPIBR_PartialSuccess.DisplayName", "Partial Success" },
				{ "HPIBR_PartialSuccess.Name", "EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess" },
				{ "HPIBR_PartialSuccess.ToolTip", "Some uassets were created, but there were unsupported objects in the bgeo as well" },
				{ "HPIBR_Success.Comment", "// Successfully created uassets for all content in the bgeo\n" },
				{ "HPIBR_Success.DisplayName", "Success" },
				{ "HPIBR_Success.Name", "EHoudiniPDGImportBGEOResult::HPIBR_Success" },
				{ "HPIBR_Success.ToolTip", "Successfully created uassets for all content in the bgeo" },
				{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
				nullptr,
				"EHoudiniPDGImportBGEOResult",
				"EHoudiniPDGImportBGEOResult",
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

static_assert(std::is_polymorphic<FHoudiniPDGImportBGEOResultMessage>() == std::is_polymorphic<FHoudiniPDGImportBGEOMessage>(), "USTRUCT FHoudiniPDGImportBGEOResultMessage cannot be polymorphic unless super FHoudiniPDGImportBGEOMessage is polymorphic");

class UScriptStruct* FHoudiniPDGImportBGEOResultMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEOResultMessage"), sizeof(FHoudiniPDGImportBGEOResultMessage), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEOResultMessage>()
{
	return FHoudiniPDGImportBGEOResultMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage(FHoudiniPDGImportBGEOResultMessage::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniPDGImportBGEOResultMessage"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEOResultMessage
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEOResultMessage()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniPDGImportBGEOResultMessage>(FName(TEXT("HoudiniPDGImportBGEOResultMessage")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEOResultMessage;
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImportResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEOResultMessage>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData[] = {
		{ "Comment", "// Result of the bgeo import -> uassets\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Result of the bgeo import -> uassets" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult = { "ImportResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOResultMessage, ImportResult), Z_Construct_UEnum_HoudiniEngine_EHoudiniPDGImportBGEOResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOResultMessage, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_ImportResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::NewProp_Outputs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage,
		&NewStructOps,
		"HoudiniPDGImportBGEOResultMessage",
		sizeof(FHoudiniPDGImportBGEOResultMessage),
		alignof(FHoudiniPDGImportBGEOResultMessage),
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPDGImportBGEOResultMessage"), sizeof(FHoudiniPDGImportBGEOResultMessage), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Hash() { return 2838809442U; }
class UScriptStruct* FHoudiniPDGImportNodeOutput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportNodeOutput"), sizeof(FHoudiniPDGImportNodeOutput), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportNodeOutput>()
{
	return FHoudiniPDGImportNodeOutput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPDGImportNodeOutput(FHoudiniPDGImportNodeOutput::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniPDGImportNodeOutput"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportNodeOutput
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportNodeOutput()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniPDGImportNodeOutput>(FName(TEXT("HoudiniPDGImportNodeOutput")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportNodeOutput;
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniGeoPartObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniGeoPartObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HoudiniGeoPartObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstancedOutputPartData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedOutputPartData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancedOutputPartData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportNodeOutput>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniGeoPartObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, HoudiniGeoPartObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_Inner = { "OutputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects = { "OutputObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, OutputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_Inner = { "InstancedOutputPartData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData = { "InstancedOutputPartData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutput, InstancedOutputPartData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_HoudiniGeoPartObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_OutputObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::NewProp_InstancedOutputPartData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportNodeOutput",
		sizeof(FHoudiniPDGImportNodeOutput),
		alignof(FHoudiniPDGImportNodeOutput),
		Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPDGImportNodeOutput"), sizeof(FHoudiniPDGImportNodeOutput), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Hash() { return 2710340969U; }
class UScriptStruct* FHoudiniPDGImportNodeOutputObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportNodeOutputObject"), sizeof(FHoudiniPDGImportNodeOutputObject), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportNodeOutputObject>()
{
	return FHoudiniPDGImportNodeOutputObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPDGImportNodeOutputObject(FHoudiniPDGImportNodeOutputObject::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniPDGImportNodeOutputObject"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportNodeOutputObject
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportNodeOutputObject()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniPDGImportNodeOutputObject>(FName(TEXT("HoudiniPDGImportNodeOutputObject")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportNodeOutputObject;
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenericAttributes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportNodeOutputObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, Identifier), Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, PackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes = { "GenericAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, GenericAttributes), Z_Construct_UScriptStruct_FHoudiniGenericAttributes, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_ValueProp = { "CachedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp = { "CachedAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes = { "CachedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportNodeOutputObject, CachedAttributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_PackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_GenericAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::NewProp_CachedAttributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportNodeOutputObject",
		sizeof(FHoudiniPDGImportNodeOutputObject),
		alignof(FHoudiniPDGImportNodeOutputObject),
		Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPDGImportNodeOutputObject"), sizeof(FHoudiniPDGImportNodeOutputObject), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Hash() { return 3916914312U; }
class UScriptStruct* FHoudiniGenericAttributes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGenericAttributes, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniGenericAttributes"), sizeof(FHoudiniGenericAttributes), Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniGenericAttributes>()
{
	return FHoudiniGenericAttributes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniGenericAttributes(FHoudiniGenericAttributes::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniGenericAttributes"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniGenericAttributes
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniGenericAttributes()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniGenericAttributes>(FName(TEXT("HoudiniGenericAttributes")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniGenericAttributes;
	struct Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGenericAttributes>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_Inner = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes = { "PropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniGenericAttributes, PropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::NewProp_PropertyAttributes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniGenericAttributes",
		sizeof(FHoudiniGenericAttributes),
		alignof(FHoudiniGenericAttributes),
		Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttributes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniGenericAttributes"), sizeof(FHoudiniGenericAttributes), Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Hash() { return 774746534U; }
class UScriptStruct* FHoudiniPDGImportBGEOMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEOMessage"), sizeof(FHoudiniPDGImportBGEOMessage), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEOMessage>()
{
	return FHoudiniPDGImportBGEOMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPDGImportBGEOMessage(FHoudiniPDGImportBGEOMessage::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniPDGImportBGEOMessage"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEOMessage
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEOMessage()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniPDGImportBGEOMessage>(FName(TEXT("HoudiniPDGImportBGEOMessage")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEOMessage;
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TOPNodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TOPNodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorkItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackageParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEOMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData[] = {
		{ "Comment", "// BGEO file path\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "BGEO file path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, FilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// PDG work item name\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "PDG work item name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData[] = {
		{ "Comment", "// TOP/PDG info\n// TOP node ID\n// HAPI_NodeId TOPNodeId;\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "TOP/PDG info\nTOP node ID\nHAPI_NodeId TOPNodeId;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId = { "TOPNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, TOPNodeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData[] = {
		{ "Comment", "// Work item id\n// HAPI_PDG_WorkitemId WorkItemId;\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Work item id\nHAPI_PDG_WorkitemId WorkItemId;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId = { "WorkItemId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, WorkItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData[] = {
		{ "Comment", "// Package params for the asset \n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Package params for the asset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams = { "PackageParams", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEOMessage, PackageParams), Z_Construct_UScriptStruct_FHoudiniPackageParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_TOPNodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_WorkItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::NewProp_PackageParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportBGEOMessage",
		sizeof(FHoudiniPDGImportBGEOMessage),
		alignof(FHoudiniPDGImportBGEOMessage),
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPDGImportBGEOMessage"), sizeof(FHoudiniPDGImportBGEOMessage), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Hash() { return 1641782147U; }
class UScriptStruct* FHoudiniPDGImportBGEODiscoverMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniPDGImportBGEODiscoverMessage"), sizeof(FHoudiniPDGImportBGEODiscoverMessage), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniPDGImportBGEODiscoverMessage>()
{
	return FHoudiniPDGImportBGEODiscoverMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage(FHoudiniPDGImportBGEODiscoverMessage::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniPDGImportBGEODiscoverMessage"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEODiscoverMessage
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEODiscoverMessage()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniPDGImportBGEODiscoverMessage>(FName(TEXT("HoudiniPDGImportBGEODiscoverMessage")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniPDGImportBGEODiscoverMessage;
	struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandletGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommandletGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Message used to find/discover running commandlets\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "Message used to find/discover running commandlets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGImportBGEODiscoverMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData[] = {
		{ "Comment", "// The GUID of the commandlet we are looking for\n" },
		{ "ModuleRelativePath", "Private/HoudiniPDGImporterMessages.h" },
		{ "ToolTip", "The GUID of the commandlet we are looking for" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid = { "CommandletGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPDGImportBGEODiscoverMessage, CommandletGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::NewProp_CommandletGuid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniPDGImportBGEODiscoverMessage",
		sizeof(FHoudiniPDGImportBGEODiscoverMessage),
		alignof(FHoudiniPDGImportBGEODiscoverMessage),
		Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPDGImportBGEODiscoverMessage"), sizeof(FHoudiniPDGImportBGEODiscoverMessage), Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Hash() { return 3228057386U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

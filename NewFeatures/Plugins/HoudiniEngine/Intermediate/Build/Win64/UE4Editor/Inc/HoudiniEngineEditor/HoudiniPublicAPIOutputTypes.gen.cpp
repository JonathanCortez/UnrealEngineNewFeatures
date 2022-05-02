// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIOutputTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIOutputTypes() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
// End Cross Module References
class UScriptStruct* FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("HoudiniPublicAPIOutputObjectIdentifier"), sizeof(FHoudiniPublicAPIOutputObjectIdentifier), Get_Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<FHoudiniPublicAPIOutputObjectIdentifier>()
{
	return FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier(FHoudiniPublicAPIOutputObjectIdentifier::StaticStruct, TEXT("/Script/HoudiniEngineEditor"), TEXT("HoudiniPublicAPIOutputObjectIdentifier"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineEditor_StaticRegisterNativesFHoudiniPublicAPIOutputObjectIdentifier
{
	FScriptStruct_HoudiniEngineEditor_StaticRegisterNativesFHoudiniPublicAPIOutputObjectIdentifier()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniPublicAPIOutputObjectIdentifier>(FName(TEXT("HoudiniPublicAPIOutputObjectIdentifier")));
	}
} ScriptStruct_HoudiniEngineEditor_StaticRegisterNativesFHoudiniPublicAPIOutputObjectIdentifier;
	struct Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Outputs" },
		{ "Comment", "/**\n * This class represents an output object identifier for an output object of a wrapped Houdini asset in the\n * public API.\n */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "This class represents an output object identifier for an output object of a wrapped Houdini asset in the\npublic API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPublicAPIOutputObjectIdentifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Outputs" },
		{ "Comment", "/** String identifier for the split that created the output object identified by this identifier. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "String identifier for the split that created the output object identified by this identifier." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Outputs" },
		{ "Comment", "/** Name of the part used to generate the output object identified by this identifier. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "Name of the part used to generate the output object identified by this identifier." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, PartName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_Identifier_MetaData[] = {
		{ "Comment", "/** The internal output object identifier. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIOutputTypes.h" },
		{ "ToolTip", "The internal output object identifier." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniPublicAPIOutputObjectIdentifier, Identifier), Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_Identifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_PartName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::NewProp_Identifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
		nullptr,
		&NewStructOps,
		"HoudiniPublicAPIOutputObjectIdentifier",
		sizeof(FHoudiniPublicAPIOutputObjectIdentifier),
		alignof(FHoudiniPublicAPIOutputObjectIdentifier),
		Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniPublicAPIOutputObjectIdentifier"), sizeof(FHoudiniPublicAPIOutputObjectIdentifier), Get_Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniPublicAPIOutputObjectIdentifier_Hash() { return 2335308588U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniStringResolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniStringResolver() {}
// Cross Module References
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeResolver();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStringResolver();
// End Cross Module References

static_assert(std::is_polymorphic<FHoudiniAttributeResolver>() == std::is_polymorphic<FHoudiniStringResolver>(), "USTRUCT FHoudiniAttributeResolver cannot be polymorphic unless super FHoudiniStringResolver is polymorphic");

class UScriptStruct* FHoudiniAttributeResolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAttributeResolver, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniAttributeResolver"), sizeof(FHoudiniAttributeResolver), Get_Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniAttributeResolver>()
{
	return FHoudiniAttributeResolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniAttributeResolver(FHoudiniAttributeResolver::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniAttributeResolver"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniAttributeResolver
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniAttributeResolver()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniAttributeResolver>(FName(TEXT("HoudiniAttributeResolver")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniAttributeResolver;
	struct Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStringResolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAttributeResolver>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		Z_Construct_UScriptStruct_FHoudiniStringResolver,
		&NewStructOps,
		"HoudiniAttributeResolver",
		sizeof(FHoudiniAttributeResolver),
		alignof(FHoudiniAttributeResolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeResolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniAttributeResolver"), sizeof(FHoudiniAttributeResolver), Get_Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniAttributeResolver_Hash() { return 1463457403U; }
class UScriptStruct* FHoudiniStringResolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniStringResolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniStringResolver, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniStringResolver"), sizeof(FHoudiniStringResolver), Get_Z_Construct_UScriptStruct_FHoudiniStringResolver_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniStringResolver>()
{
	return FHoudiniStringResolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniStringResolver(FHoudiniStringResolver::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniStringResolver"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniStringResolver
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniStringResolver()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniStringResolver>(FName(TEXT("HoudiniStringResolver")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniStringResolver;
	struct Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniStringResolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniStringResolver>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniStringResolver",
		sizeof(FHoudiniStringResolver),
		alignof(FHoudiniStringResolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniStringResolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniStringResolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniStringResolver"), sizeof(FHoudiniStringResolver), Get_Z_Construct_UScriptStruct_FHoudiniStringResolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniStringResolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniStringResolver_Hash() { return 1151177937U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

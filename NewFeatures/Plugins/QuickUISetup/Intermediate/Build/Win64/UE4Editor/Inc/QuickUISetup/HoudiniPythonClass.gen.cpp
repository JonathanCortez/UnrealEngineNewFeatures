// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickUISetup/Public/HoudiniPythonClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPythonClass() {}
// Cross Module References
	QUICKUISETUP_API UScriptStruct* Z_Construct_UScriptStruct_FLayoutSetup();
	UPackage* Z_Construct_UPackage__Script_QuickUISetup();
	QUICKUISETUP_API UScriptStruct* Z_Construct_UScriptStruct_FFolderListSetup();
	QUICKUISETUP_API UScriptStruct* Z_Construct_UScriptStruct_FFolderSetup();
	QUICKUISETUP_API UScriptStruct* Z_Construct_UScriptStruct_FParameterConditions();
	QUICKUISETUP_API UScriptStruct* Z_Construct_UScriptStruct_FParameterSetup();
	QUICKUISETUP_API UScriptStruct* Z_Construct_UScriptStruct_FParameterSettingSetup();
	QUICKUISETUP_API UClass* Z_Construct_UClass_UHoudiniPythonClass_NoRegister();
	QUICKUISETUP_API UClass* Z_Construct_UClass_UHoudiniPythonClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FLayoutSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUICKUISETUP_API uint32 Get_Z_Construct_UScriptStruct_FLayoutSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayoutSetup, Z_Construct_UPackage__Script_QuickUISetup(), TEXT("LayoutSetup"), sizeof(FLayoutSetup), Get_Z_Construct_UScriptStruct_FLayoutSetup_Hash());
	}
	return Singleton;
}
template<> QUICKUISETUP_API UScriptStruct* StaticStruct<FLayoutSetup>()
{
	return FLayoutSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLayoutSetup(FLayoutSetup::StaticStruct, TEXT("/Script/QuickUISetup"), TEXT("LayoutSetup"), false, nullptr, nullptr);
static struct FScriptStruct_QuickUISetup_StaticRegisterNativesFLayoutSetup
{
	FScriptStruct_QuickUISetup_StaticRegisterNativesFLayoutSetup()
	{
		UScriptStruct::DeferCppStructOps<FLayoutSetup>(FName(TEXT("LayoutSetup")));
	}
} ScriptStruct_QuickUISetup_StaticRegisterNativesFLayoutSetup;
	struct Z_Construct_UScriptStruct_FLayoutSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterTypes_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParameterTypes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ParameterTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayoutSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayoutSetup>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes_ValueProp = { "ParameterTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes_Key_KeyProp = { "ParameterTypes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes = { "ParameterTypes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayoutSetup, ParameterTypes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayoutSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayoutSetup_Statics::NewProp_ParameterTypes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayoutSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
		nullptr,
		&NewStructOps,
		"LayoutSetup",
		sizeof(FLayoutSetup),
		alignof(FLayoutSetup),
		Z_Construct_UScriptStruct_FLayoutSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayoutSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayoutSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayoutSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayoutSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLayoutSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuickUISetup();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LayoutSetup"), sizeof(FLayoutSetup), Get_Z_Construct_UScriptStruct_FLayoutSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLayoutSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLayoutSetup_Hash() { return 3635708880U; }
class UScriptStruct* FFolderListSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUICKUISETUP_API uint32 Get_Z_Construct_UScriptStruct_FFolderListSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFolderListSetup, Z_Construct_UPackage__Script_QuickUISetup(), TEXT("FolderListSetup"), sizeof(FFolderListSetup), Get_Z_Construct_UScriptStruct_FFolderListSetup_Hash());
	}
	return Singleton;
}
template<> QUICKUISETUP_API UScriptStruct* StaticStruct<FFolderListSetup>()
{
	return FFolderListSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFolderListSetup(FFolderListSetup::StaticStruct, TEXT("/Script/QuickUISetup"), TEXT("FolderListSetup"), false, nullptr, nullptr);
static struct FScriptStruct_QuickUISetup_StaticRegisterNativesFFolderListSetup
{
	FScriptStruct_QuickUISetup_StaticRegisterNativesFFolderListSetup()
	{
		UScriptStruct::DeferCppStructOps<FFolderListSetup>(FName(TEXT("FolderListSetup")));
	}
} ScriptStruct_QuickUISetup_StaticRegisterNativesFFolderListSetup;
	struct Z_Construct_UScriptStruct_FFolderListSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderListType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderListType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TabsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTab_MetaData[];
#endif
		static void NewProp_bIsTab_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTab;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderSetups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderSetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FolderSetups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderListSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFolderListSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentID_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderListSetup, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderListSetup, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderListType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderListType = { "FolderListType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderListSetup, FolderListType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderListType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderListType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_TabsCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_TabsCount = { "TabsCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderListSetup, TabsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_TabsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_TabsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_bIsTab_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_bIsTab_SetBit(void* Obj)
	{
		((FFolderListSetup*)Obj)->bIsTab = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_bIsTab = { "bIsTab", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFolderListSetup), &Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_bIsTab_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_bIsTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_bIsTab_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderSetups_Inner = { "FolderSetups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFolderSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderSetups_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderSetups = { "FolderSetups", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderListSetup, FolderSetups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderSetups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderSetups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFolderListSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_ParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderListType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_TabsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_bIsTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderSetups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderListSetup_Statics::NewProp_FolderSetups,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFolderListSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
		nullptr,
		&NewStructOps,
		"FolderListSetup",
		sizeof(FFolderListSetup),
		alignof(FFolderListSetup),
		Z_Construct_UScriptStruct_FFolderListSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderListSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderListSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderListSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFolderListSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFolderListSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuickUISetup();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FolderListSetup"), sizeof(FFolderListSetup), Get_Z_Construct_UScriptStruct_FFolderListSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFolderListSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFolderListSetup_Hash() { return 3280090168U; }
class UScriptStruct* FFolderSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUICKUISETUP_API uint32 Get_Z_Construct_UScriptStruct_FFolderSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFolderSetup, Z_Construct_UPackage__Script_QuickUISetup(), TEXT("FolderSetup"), sizeof(FFolderSetup), Get_Z_Construct_UScriptStruct_FFolderSetup_Hash());
	}
	return Singleton;
}
template<> QUICKUISETUP_API UScriptStruct* StaticStruct<FFolderSetup>()
{
	return FFolderSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFolderSetup(FFolderSetup::StaticStruct, TEXT("/Script/QuickUISetup"), TEXT("FolderSetup"), false, nullptr, nullptr);
static struct FScriptStruct_QuickUISetup_StaticRegisterNativesFFolderSetup
{
	FScriptStruct_QuickUISetup_StaticRegisterNativesFFolderSetup()
	{
		UScriptStruct::DeferCppStructOps<FFolderSetup>(FName(TEXT("FolderSetup")));
	}
} ScriptStruct_QuickUISetup_StaticRegisterNativesFFolderSetup;
	struct Z_Construct_UScriptStruct_FFolderSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderVisible_MetaData[];
#endif
		static void NewProp_FolderVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FolderVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderDisable_MetaData[];
#endif
		static void NewProp_FolderDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FolderDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderExpression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderExpression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderEndGroup_MetaData[];
#endif
		static void NewProp_FolderEndGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FolderEndGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FolderID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FolderParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFolderSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFolderSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderSetup, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderLabel = { "FolderLabel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderSetup, FolderLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderType = { "FolderType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderSetup, FolderType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderVisible_SetBit(void* Obj)
	{
		((FFolderSetup*)Obj)->FolderVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderVisible = { "FolderVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFolderSetup), &Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderDisable_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderDisable_SetBit(void* Obj)
	{
		((FFolderSetup*)Obj)->FolderDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderDisable = { "FolderDisable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFolderSetup), &Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderDisable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderDisable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderExpression_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderExpression = { "FolderExpression", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderSetup, FolderExpression), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderExpression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderConditions_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderConditions = { "FolderConditions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderSetup, FolderConditions), Z_Construct_UScriptStruct_FParameterConditions, METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderEndGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderEndGroup_SetBit(void* Obj)
	{
		((FFolderSetup*)Obj)->FolderEndGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderEndGroup = { "FolderEndGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFolderSetup), &Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderEndGroup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderEndGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderEndGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderID_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderID = { "FolderID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderSetup, FolderID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderParameters_Inner = { "FolderParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParameterSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderParameters = { "FolderParameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFolderSetup, FolderParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFolderSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderExpression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderEndGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFolderSetup_Statics::NewProp_FolderParameters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFolderSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
		nullptr,
		&NewStructOps,
		"FolderSetup",
		sizeof(FFolderSetup),
		alignof(FFolderSetup),
		Z_Construct_UScriptStruct_FFolderSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFolderSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFolderSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFolderSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuickUISetup();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FolderSetup"), sizeof(FFolderSetup), Get_Z_Construct_UScriptStruct_FFolderSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFolderSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFolderSetup_Hash() { return 4175043141U; }
class UScriptStruct* FParameterSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUICKUISETUP_API uint32 Get_Z_Construct_UScriptStruct_FParameterSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterSetup, Z_Construct_UPackage__Script_QuickUISetup(), TEXT("ParameterSetup"), sizeof(FParameterSetup), Get_Z_Construct_UScriptStruct_FParameterSetup_Hash());
	}
	return Singleton;
}
template<> QUICKUISETUP_API UScriptStruct* StaticStruct<FParameterSetup>()
{
	return FParameterSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameterSetup(FParameterSetup::StaticStruct, TEXT("/Script/QuickUISetup"), TEXT("ParameterSetup"), false, nullptr, nullptr);
static struct FScriptStruct_QuickUISetup_StaticRegisterNativesFParameterSetup
{
	FScriptStruct_QuickUISetup_StaticRegisterNativesFParameterSetup()
	{
		UScriptStruct::DeferCppStructOps<FParameterSetup>(FName(TEXT("ParameterSetup")));
	}
} ScriptStruct_QuickUISetup_StaticRegisterNativesFParameterSetup;
	struct Z_Construct_UScriptStruct_FParameterSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterExpression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterExpression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParameterSettings_MetaData[];
#endif
		static void NewProp_bParameterSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParameterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParameterID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterVisible_MetaData[];
#endif
		static void NewProp_ParameterVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParameterVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterDisable_MetaData[];
#endif
		static void NewProp_ParameterDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParameterDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterNeighbour_MetaData[];
#endif
		static void NewProp_ParameterNeighbour_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParameterNeighbour;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSetup, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterLabel = { "ParameterLabel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSetup, ParameterLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterType = { "ParameterType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSetup, ParameterType), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSetup, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterExpression_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterExpression = { "ParameterExpression", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSetup, ParameterExpression), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterExpression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterConditions_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterConditions = { "ParameterConditions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSetup, ParameterConditions), Z_Construct_UScriptStruct_FParameterConditions, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_bParameterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_bParameterSettings_SetBit(void* Obj)
	{
		((FParameterSetup*)Obj)->bParameterSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_bParameterSettings = { "bParameterSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FParameterSetup), &Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_bParameterSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_bParameterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_bParameterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterSettings = { "ParameterSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSetup, ParameterSettings), Z_Construct_UScriptStruct_FParameterSettingSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterID_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterID = { "ParameterID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSetup, ParameterID), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterVisible_SetBit(void* Obj)
	{
		((FParameterSetup*)Obj)->ParameterVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterVisible = { "ParameterVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FParameterSetup), &Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterDisable_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterDisable_SetBit(void* Obj)
	{
		((FParameterSetup*)Obj)->ParameterDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterDisable = { "ParameterDisable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FParameterSetup), &Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterDisable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterDisable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterNeighbour_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterNeighbour_SetBit(void* Obj)
	{
		((FParameterSetup*)Obj)->ParameterNeighbour = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterNeighbour = { "ParameterNeighbour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FParameterSetup), &Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterNeighbour_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterNeighbour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterNeighbour_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterExpression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_bParameterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSetup_Statics::NewProp_ParameterNeighbour,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
		nullptr,
		&NewStructOps,
		"ParameterSetup",
		sizeof(FParameterSetup),
		alignof(FParameterSetup),
		Z_Construct_UScriptStruct_FParameterSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameterSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuickUISetup();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParameterSetup"), sizeof(FParameterSetup), Get_Z_Construct_UScriptStruct_FParameterSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameterSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameterSetup_Hash() { return 486861442U; }
class UScriptStruct* FParameterConditions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUICKUISETUP_API uint32 Get_Z_Construct_UScriptStruct_FParameterConditions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterConditions, Z_Construct_UPackage__Script_QuickUISetup(), TEXT("ParameterConditions"), sizeof(FParameterConditions), Get_Z_Construct_UScriptStruct_FParameterConditions_Hash());
	}
	return Singleton;
}
template<> QUICKUISETUP_API UScriptStruct* StaticStruct<FParameterConditions>()
{
	return FParameterConditions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameterConditions(FParameterConditions::StaticStruct, TEXT("/Script/QuickUISetup"), TEXT("ParameterConditions"), false, nullptr, nullptr);
static struct FScriptStruct_QuickUISetup_StaticRegisterNativesFParameterConditions
{
	FScriptStruct_QuickUISetup_StaticRegisterNativesFParameterConditions()
	{
		UScriptStruct::DeferCppStructOps<FParameterConditions>(FName(TEXT("ParameterConditions")));
	}
} ScriptStruct_QuickUISetup_StaticRegisterNativesFParameterConditions;
	struct Z_Construct_UScriptStruct_FParameterConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HideCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisableCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterConditions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterConditions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterConditions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_HideCondition_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_HideCondition = { "HideCondition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterConditions, HideCondition), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_HideCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_HideCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_DisableCondition_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_DisableCondition = { "DisableCondition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterConditions, DisableCondition), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_DisableCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_DisableCondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_HideCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterConditions_Statics::NewProp_DisableCondition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterConditions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
		nullptr,
		&NewStructOps,
		"ParameterConditions",
		sizeof(FParameterConditions),
		alignof(FParameterConditions),
		Z_Construct_UScriptStruct_FParameterConditions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterConditions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterConditions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterConditions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterConditions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameterConditions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuickUISetup();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParameterConditions"), sizeof(FParameterConditions), Get_Z_Construct_UScriptStruct_FParameterConditions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameterConditions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameterConditions_Hash() { return 1258756224U; }
class UScriptStruct* FParameterSettingSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUICKUISETUP_API uint32 Get_Z_Construct_UScriptStruct_FParameterSettingSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterSettingSetup, Z_Construct_UPackage__Script_QuickUISetup(), TEXT("ParameterSettingSetup"), sizeof(FParameterSettingSetup), Get_Z_Construct_UScriptStruct_FParameterSettingSetup_Hash());
	}
	return Singleton;
}
template<> QUICKUISETUP_API UScriptStruct* StaticStruct<FParameterSettingSetup>()
{
	return FParameterSettingSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameterSettingSetup(FParameterSettingSetup::StaticStruct, TEXT("/Script/QuickUISetup"), TEXT("ParameterSettingSetup"), false, nullptr, nullptr);
static struct FScriptStruct_QuickUISetup_StaticRegisterNativesFParameterSettingSetup
{
	FScriptStruct_QuickUISetup_StaticRegisterNativesFParameterSettingSetup()
	{
		UScriptStruct::DeferCppStructOps<FParameterSettingSetup>(FName(TEXT("ParameterSettingSetup")));
	}
} ScriptStruct_QuickUISetup_StaticRegisterNativesFParameterSettingSetup;
	struct Z_Construct_UScriptStruct_FParameterSettingSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_minValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_maxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasMin_MetaData[];
#endif
		static void NewProp_hasMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasMax_MetaData[];
#endif
		static void NewProp_hasMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterSettingSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_CountValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_CountValues = { "CountValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSettingSetup, CountValues), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_CountValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_CountValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_minValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_minValue = { "minValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSettingSetup, minValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_minValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_minValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_maxValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_maxValue = { "maxValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSettingSetup, maxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_maxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_maxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMin_SetBit(void* Obj)
	{
		((FParameterSettingSetup*)Obj)->hasMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMin = { "hasMin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FParameterSettingSetup), &Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMax_SetBit(void* Obj)
	{
		((FParameterSettingSetup*)Obj)->hasMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMax = { "hasMax", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FParameterSettingSetup), &Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterSettingSetup, Values), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_CountValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_minValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_maxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_hasMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::NewProp_Values,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
		nullptr,
		&NewStructOps,
		"ParameterSettingSetup",
		sizeof(FParameterSettingSetup),
		alignof(FParameterSettingSetup),
		Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterSettingSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameterSettingSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuickUISetup();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParameterSettingSetup"), sizeof(FParameterSettingSetup), Get_Z_Construct_UScriptStruct_FParameterSettingSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameterSettingSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameterSettingSetup_Hash() { return 3588659469U; }
	void UHoudiniPythonClass::StaticRegisterNativesUHoudiniPythonClass()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniPythonClass_NoRegister()
	{
		return UHoudiniPythonClass::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPythonClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassHoudiniAssetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClassHoudiniAssetComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayoutSetup_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LayoutSetup_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LayoutSetup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootLayout_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RootLayout_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RootLayout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderLayout_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FolderLayout_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FolderLayout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderListLayout_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FolderListLayout_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderListLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FolderListLayout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParameterCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniAssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniPythonJsonFullPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoudiniPythonJsonFullPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPythonClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPythonClass.h" },
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ClassHoudiniAssetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ClassHoudiniAssetComponent = { "ClassHoudiniAssetComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPythonClass, ClassHoudiniAssetComponent), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ClassHoudiniAssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ClassHoudiniAssetComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup_ValueProp = { "LayoutSetup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLayoutSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup_Key_KeyProp = { "LayoutSetup_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup = { "LayoutSetup", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPythonClass, LayoutSetup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout_ValueProp = { "RootLayout", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FParameterSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout_Key_KeyProp = { "RootLayout_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout = { "RootLayout", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPythonClass, RootLayout), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout_ValueProp = { "FolderLayout", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFolderSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout_Key_KeyProp = { "FolderLayout_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout = { "FolderLayout", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPythonClass, FolderLayout), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout_ValueProp = { "FolderListLayout", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFolderListSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout_Key_KeyProp = { "FolderListLayout_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout = { "FolderListLayout", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPythonClass, FolderListLayout), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ParameterCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ParameterCount = { "ParameterCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPythonClass, ParameterCount), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ParameterCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ParameterCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniAssetName = { "HoudiniAssetName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPythonClass, HoudiniAssetName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniAssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniPythonJsonFullPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoudiniPythonClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniPythonJsonFullPath = { "HoudiniPythonJsonFullPath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPythonClass, HoudiniPythonJsonFullPath), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniPythonJsonFullPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniPythonJsonFullPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPythonClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ClassHoudiniAssetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_LayoutSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_RootLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_FolderListLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_ParameterCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPythonClass_Statics::NewProp_HoudiniPythonJsonFullPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPythonClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPythonClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPythonClass_Statics::ClassParams = {
		&UHoudiniPythonClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPythonClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPythonClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPythonClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPythonClass, 2192092495);
	template<> QUICKUISETUP_API UClass* StaticClass<UHoudiniPythonClass>()
	{
		return UHoudiniPythonClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPythonClass(Z_Construct_UClass_UHoudiniPythonClass, &UHoudiniPythonClass::StaticClass, TEXT("/Script/QuickUISetup"), TEXT("UHoudiniPythonClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPythonClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

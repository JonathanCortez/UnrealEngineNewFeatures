// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIBlueprintLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIBlueprintLib() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPI_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniPublicAPIBlueprintLib::execGetAPI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniPublicAPI**)Z_Param__Result=UHoudiniPublicAPIBlueprintLib::GetAPI();
		P_NATIVE_END;
	}
	void UHoudiniPublicAPIBlueprintLib::StaticRegisterNativesUHoudiniPublicAPIBlueprintLib()
	{
		UClass* Class = UHoudiniPublicAPIBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAPI", &UHoudiniPublicAPIBlueprintLib::execGetAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics
	{
		struct HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms
		{
			UHoudiniPublicAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms, ReturnValue), Z_Construct_UClass_UHoudiniPublicAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine" },
		{ "Comment", "/** Returns the Houdini Public API instance. */" },
		{ "DisplayName", "GetHoudiniEnginePublicAPI" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIBlueprintLib.h" },
		{ "ToolTip", "Returns the Houdini Public API instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib, nullptr, "GetAPI", nullptr, nullptr, sizeof(HoudiniPublicAPIBlueprintLib_eventGetAPI_Parms), Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister()
	{
		return UHoudiniPublicAPIBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIBlueprintLib_GetAPI, "GetAPI" }, // 1281139322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "Category", "Houdini Engine|Public API" },
		{ "Comment", "/**\n * Houdini Public API Blueprint function library\n */" },
		{ "IncludePath", "HoudiniPublicAPIBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIBlueprintLib.h" },
		{ "ToolTip", "Houdini Public API Blueprint function library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIBlueprintLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::ClassParams = {
		&UHoudiniPublicAPIBlueprintLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPIBlueprintLib, 396415174);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIBlueprintLib>()
	{
		return UHoudiniPublicAPIBlueprintLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPIBlueprintLib(Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib, &UHoudiniPublicAPIBlueprintLib::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPIBlueprintLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIBlueprintLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickUISetup/Public/HoudiniUIBridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniUIBridge() {}
// Cross Module References
	QUICKUISETUP_API UClass* Z_Construct_UClass_UHoudiniUIBridge_NoRegister();
	QUICKUISETUP_API UClass* Z_Construct_UClass_UHoudiniUIBridge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_QuickUISetup();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniUIBridge::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoudiniUIBridge**)Z_Param__Result=UHoudiniUIBridge::Get();
		P_NATIVE_END;
	}
	static FName NAME_UHoudiniUIBridge_HoudiniUIWrap = FName(TEXT("HoudiniUIWrap"));
	void UHoudiniUIBridge::HoudiniUIWrap(const FString& file_path, const FString& hda_name, UHoudiniAssetComponent* HoudiniAssetWrapper) const
	{
		HoudiniUIBridge_eventHoudiniUIWrap_Parms Parms;
		Parms.file_path=file_path;
		Parms.hda_name=hda_name;
		Parms.HoudiniAssetWrapper=HoudiniAssetWrapper;
		const_cast<UHoudiniUIBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniUIBridge_HoudiniUIWrap),&Parms);
	}
	static FName NAME_UHoudiniUIBridge_UpdateWrapper = FName(TEXT("UpdateWrapper"));
	void UHoudiniUIBridge::UpdateWrapper(const FString& file_path, const FString& hda_name) const
	{
		HoudiniUIBridge_eventUpdateWrapper_Parms Parms;
		Parms.file_path=file_path;
		Parms.hda_name=hda_name;
		const_cast<UHoudiniUIBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniUIBridge_UpdateWrapper),&Parms);
	}
	void UHoudiniUIBridge::StaticRegisterNativesUHoudiniUIBridge()
	{
		UClass* Class = UHoudiniUIBridge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UHoudiniUIBridge::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics
	{
		struct HoudiniUIBridge_eventGet_Parms
		{
			UHoudiniUIBridge* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniUIBridge_eventGet_Parms, ReturnValue), Z_Construct_UClass_UHoudiniUIBridge_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoudiniPython" },
		{ "ModuleRelativePath", "Public/HoudiniUIBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniUIBridge, nullptr, "Get", nullptr, nullptr, sizeof(HoudiniUIBridge_eventGet_Parms), Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniUIBridge_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniUIBridge_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_file_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hda_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hda_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_file_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_file_path = { "file_path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniUIBridge_eventHoudiniUIWrap_Parms, file_path), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_file_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_file_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_hda_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_hda_name = { "hda_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniUIBridge_eventHoudiniUIWrap_Parms, hda_name), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_hda_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_hda_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_HoudiniAssetWrapper_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_HoudiniAssetWrapper = { "HoudiniAssetWrapper", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniUIBridge_eventHoudiniUIWrap_Parms, HoudiniAssetWrapper), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_HoudiniAssetWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_HoudiniAssetWrapper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_file_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_hda_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::NewProp_HoudiniAssetWrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoudiniPython" },
		{ "ModuleRelativePath", "Public/HoudiniUIBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniUIBridge, nullptr, "HoudiniUIWrap", nullptr, nullptr, sizeof(HoudiniUIBridge_eventHoudiniUIWrap_Parms), Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_file_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hda_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hda_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_file_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_file_path = { "file_path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniUIBridge_eventUpdateWrapper_Parms, file_path), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_file_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_file_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_hda_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_hda_name = { "hda_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniUIBridge_eventUpdateWrapper_Parms, hda_name), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_hda_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_hda_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_file_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::NewProp_hda_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoudiniPython" },
		{ "ModuleRelativePath", "Public/HoudiniUIBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniUIBridge, nullptr, "UpdateWrapper", nullptr, nullptr, sizeof(HoudiniUIBridge_eventUpdateWrapper_Parms), Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniUIBridge_NoRegister()
	{
		return UHoudiniUIBridge::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniUIBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniUIBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniUIBridge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniUIBridge_Get, "Get" }, // 2030430239
		{ &Z_Construct_UFunction_UHoudiniUIBridge_HoudiniUIWrap, "HoudiniUIWrap" }, // 1213554633
		{ &Z_Construct_UFunction_UHoudiniUIBridge_UpdateWrapper, "UpdateWrapper" }, // 2215185653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniUIBridge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniUIBridge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniUIBridge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniUIBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniUIBridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniUIBridge_Statics::ClassParams = {
		&UHoudiniUIBridge::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniUIBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniUIBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniUIBridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniUIBridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniUIBridge, 1333098871);
	template<> QUICKUISETUP_API UClass* StaticClass<UHoudiniUIBridge>()
	{
		return UHoudiniUIBridge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniUIBridge(Z_Construct_UClass_UHoudiniUIBridge, &UHoudiniUIBridge::StaticClass, TEXT("/Script/QuickUISetup"), TEXT("UHoudiniUIBridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniUIBridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

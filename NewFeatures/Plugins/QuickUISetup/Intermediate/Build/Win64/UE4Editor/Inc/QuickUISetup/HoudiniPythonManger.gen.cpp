// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickUISetup/Public/HoudiniPythonManger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPythonManger() {}
// Cross Module References
	QUICKUISETUP_API UClass* Z_Construct_UClass_UHoudiniPythonManger_NoRegister();
	QUICKUISETUP_API UClass* Z_Construct_UClass_UHoudiniPythonManger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_QuickUISetup();
// End Cross Module References
	void UHoudiniPythonManger::StaticRegisterNativesUHoudiniPythonManger()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniPythonManger_NoRegister()
	{
		return UHoudiniPythonManger::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPythonManger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPythonManger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPythonManger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniPythonManger.h" },
		{ "ModuleRelativePath", "Public/HoudiniPythonManger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPythonManger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPythonManger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPythonManger_Statics::ClassParams = {
		&UHoudiniPythonManger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPythonManger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPythonManger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPythonManger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPythonManger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPythonManger, 3229915848);
	template<> QUICKUISETUP_API UClass* StaticClass<UHoudiniPythonManger>()
	{
		return UHoudiniPythonManger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPythonManger(Z_Construct_UClass_UHoudiniPythonManger, &UHoudiniPythonManger::StaticClass, TEXT("/Script/QuickUISetup"), TEXT("UHoudiniPythonManger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPythonManger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

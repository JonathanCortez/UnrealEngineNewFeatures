// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniParameterDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterDetails() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniFloatRampCurve_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniFloatRampCurve();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniColorRampCurve_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniColorRampCurve();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor();
// End Cross Module References
	void UHoudiniFloatRampCurve::StaticRegisterNativesUHoudiniFloatRampCurve()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniFloatRampCurve_NoRegister()
	{
		return UHoudiniFloatRampCurve::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniFloatRampCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterDetails.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterDetails.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniFloatRampCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::ClassParams = {
		&UHoudiniFloatRampCurve::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniFloatRampCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniFloatRampCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniFloatRampCurve, 4045871494);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniFloatRampCurve>()
	{
		return UHoudiniFloatRampCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniFloatRampCurve(Z_Construct_UClass_UHoudiniFloatRampCurve, &UHoudiniFloatRampCurve::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniFloatRampCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniFloatRampCurve);
	void UHoudiniColorRampCurve::StaticRegisterNativesUHoudiniColorRampCurve()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniColorRampCurve_NoRegister()
	{
		return UHoudiniColorRampCurve::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniColorRampCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniColorRampCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveLinearColor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniColorRampCurve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "FilePath" },
		{ "IncludePath", "HoudiniParameterDetails.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterDetails.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniColorRampCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniColorRampCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniColorRampCurve_Statics::ClassParams = {
		&UHoudiniColorRampCurve::StaticClass,
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
		0x008020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniColorRampCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniColorRampCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniColorRampCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniColorRampCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniColorRampCurve, 1647396629);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniColorRampCurve>()
	{
		return UHoudiniColorRampCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniColorRampCurve(Z_Construct_UClass_UHoudiniColorRampCurve, &UHoudiniColorRampCurve::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniColorRampCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniColorRampCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

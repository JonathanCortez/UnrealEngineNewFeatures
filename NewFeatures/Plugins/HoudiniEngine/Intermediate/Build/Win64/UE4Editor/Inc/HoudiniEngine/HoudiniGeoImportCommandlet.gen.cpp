// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniGeoImportCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoImportCommandlet() {}
// Cross Module References
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet_NoRegister();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	void UHoudiniGeoImportCommandlet::StaticRegisterNativesUHoudiniGeoImportCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet_NoRegister()
	{
		return UHoudiniGeoImportCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniGeoImportCommandlet.h" },
		{ "ModuleRelativePath", "Private/HoudiniGeoImportCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniGeoImportCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::ClassParams = {
		&UHoudiniGeoImportCommandlet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniGeoImportCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniGeoImportCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniGeoImportCommandlet, 3910652737);
	template<> HOUDINIENGINE_API UClass* StaticClass<UHoudiniGeoImportCommandlet>()
	{
		return UHoudiniGeoImportCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniGeoImportCommandlet(Z_Construct_UClass_UHoudiniGeoImportCommandlet, &UHoudiniGeoImportCommandlet::StaticClass, TEXT("/Script/HoudiniEngine"), TEXT("UHoudiniGeoImportCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniGeoImportCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

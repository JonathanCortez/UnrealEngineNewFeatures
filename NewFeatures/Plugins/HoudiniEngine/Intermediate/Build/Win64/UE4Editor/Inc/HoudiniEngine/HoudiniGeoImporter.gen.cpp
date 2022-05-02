// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniGeoImporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoImporter() {}
// Cross Module References
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImporter_NoRegister();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImporter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	void UHoudiniGeoImporter::StaticRegisterNativesUHoudiniGeoImporter()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniGeoImporter_NoRegister()
	{
		return UHoudiniGeoImporter::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniGeoImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniGeoImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniGeoImporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniGeoImporter.h" },
		{ "ModuleRelativePath", "Private/HoudiniGeoImporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniGeoImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniGeoImporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniGeoImporter_Statics::ClassParams = {
		&UHoudiniGeoImporter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniGeoImporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniGeoImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniGeoImporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniGeoImporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniGeoImporter, 3355170018);
	template<> HOUDINIENGINE_API UClass* StaticClass<UHoudiniGeoImporter>()
	{
		return UHoudiniGeoImporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniGeoImporter(Z_Construct_UClass_UHoudiniGeoImporter, &UHoudiniGeoImporter::StaticClass, TEXT("/Script/HoudiniEngine"), TEXT("UHoudiniGeoImporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniGeoImporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniAssetEditorFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetEditorFactory() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetEditorFactory_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetEditorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	void UHoudiniAssetEditorFactory::StaticRegisterNativesUHoudiniAssetEditorFactory()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetEditorFactory_NoRegister()
	{
		return UHoudiniAssetEditorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetEditorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetEditorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HoudiniAssetEditorFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetEditorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetEditorFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetEditorFactory_Statics::ClassParams = {
		&UHoudiniAssetEditorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetEditorFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAssetEditorFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetEditorFactory, 3733458396);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniAssetEditorFactory>()
	{
		return UHoudiniAssetEditorFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetEditorFactory(Z_Construct_UClass_UHoudiniAssetEditorFactory, &UHoudiniAssetEditorFactory::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniAssetEditorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetEditorFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniAssetEditorActorFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetEditorActorFactory() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetEditorActorFactory_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetEditorActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	void UHoudiniAssetEditorActorFactory::StaticRegisterNativesUHoudiniAssetEditorActorFactory()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetEditorActorFactory_NoRegister()
	{
		return UHoudiniAssetEditorActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetEditorActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetEditorActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "HoudiniAssetEditorActorFactory.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetEditorActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetEditorActorFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetEditorActorFactory_Statics::ClassParams = {
		&UHoudiniAssetEditorActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetEditorActorFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAssetEditorActorFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetEditorActorFactory, 163839828);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniAssetEditorActorFactory>()
	{
		return UHoudiniAssetEditorActorFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetEditorActorFactory(Z_Construct_UClass_UHoudiniAssetEditorActorFactory, &UHoudiniAssetEditorActorFactory::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniAssetEditorActorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetEditorActorFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HCsgUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHCsgUtils() {}
// Cross Module References
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHCsgUtils_NoRegister();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHCsgUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
// End Cross Module References
	void UHCsgUtils::StaticRegisterNativesUHCsgUtils()
	{
	}
	UClass* Z_Construct_UClass_UHCsgUtils_NoRegister()
	{
		return UHCsgUtils::StaticClass();
	}
	struct Z_Construct_UClass_UHCsgUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TempModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHCsgUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHCsgUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This HCsgUtils is one big fork of the codebase located UnrealEd/Private/EditorBsp.cpp.\n// The main purpose was to remove parts of the code that store state in global/static variables as well\n// as dependency on editor state (such as retrieving selected brushes).\n" },
		{ "IncludePath", "HCsgUtils.h" },
		{ "ModuleRelativePath", "Private/HCsgUtils.h" },
		{ "ToolTip", "This HCsgUtils is one big fork of the codebase located UnrealEd/Private/EditorBsp.cpp.\nThe main purpose was to remove parts of the code that store state in global/static variables as well\nas dependency on editor state (such as retrieving selected brushes)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel_MetaData[] = {
		{ "Comment", "// Number of Bsp nodes at start of AddWorldToBrush.\n" },
		{ "ModuleRelativePath", "Private/HCsgUtils.h" },
		{ "ToolTip", "Number of Bsp nodes at start of AddWorldToBrush." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel = { "GModel", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHCsgUtils, GModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel_MetaData[] = {
		{ "Comment", "// Level map Model we're adding to.\n" },
		{ "ModuleRelativePath", "Private/HCsgUtils.h" },
		{ "ToolTip", "Level map Model we're adding to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel = { "TempModel", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHCsgUtils, TempModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHCsgUtils_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHCsgUtils_Statics::NewProp_GModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHCsgUtils_Statics::NewProp_TempModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHCsgUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHCsgUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHCsgUtils_Statics::ClassParams = {
		&UHCsgUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHCsgUtils_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHCsgUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHCsgUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHCsgUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHCsgUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHCsgUtils, 685985422);
	template<> HOUDINIENGINE_API UClass* StaticClass<UHCsgUtils>()
	{
		return UHCsgUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHCsgUtils(Z_Construct_UClass_UHCsgUtils, &UHCsgUtils::StaticClass, TEXT("/Script/HoudiniEngine"), TEXT("UHCsgUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHCsgUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

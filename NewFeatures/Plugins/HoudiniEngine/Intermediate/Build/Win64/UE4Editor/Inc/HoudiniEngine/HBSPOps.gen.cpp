// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HBSPOps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHBSPOps() {}
// Cross Module References
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHBspPointsGrid_NoRegister();
	HOUDINIENGINE_API UClass* Z_Construct_UClass_UHBspPointsGrid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	void UHBspPointsGrid::StaticRegisterNativesUHBspPointsGrid()
	{
	}
	UClass* Z_Construct_UClass_UHBspPointsGrid_NoRegister()
	{
		return UHBspPointsGrid::StaticClass();
	}
	struct Z_Construct_UClass_UHBspPointsGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHBspPointsGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHBspPointsGrid_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Represents a sparse granular 3D grid into which points are added for quick (~O(1)) lookup.\n// The 3D space is divided into a grid with a given granularity.\n// Points are considered to have a given radius (threshold) and are added to the grid cube they fall in, and to up to seven neighbours if they overlap.\n" },
		{ "IncludePath", "HBSPOps.h" },
		{ "ModuleRelativePath", "Private/HBSPOps.h" },
		{ "ToolTip", "Represents a sparse granular 3D grid into which points are added for quick (~O(1)) lookup.\nThe 3D space is divided into a grid with a given granularity.\nPoints are considered to have a given radius (threshold) and are added to the grid cube they fall in, and to up to seven neighbours if they overlap." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHBspPointsGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHBspPointsGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHBspPointsGrid_Statics::ClassParams = {
		&UHBspPointsGrid::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHBspPointsGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHBspPointsGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHBspPointsGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHBspPointsGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHBspPointsGrid, 561880003);
	template<> HOUDINIENGINE_API UClass* StaticClass<UHBspPointsGrid>()
	{
		return UHBspPointsGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHBspPointsGrid(Z_Construct_UClass_UHBspPointsGrid, &UHBspPointsGrid::StaticClass, TEXT("/Script/HoudiniEngine"), TEXT("UHBspPointsGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHBspPointsGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

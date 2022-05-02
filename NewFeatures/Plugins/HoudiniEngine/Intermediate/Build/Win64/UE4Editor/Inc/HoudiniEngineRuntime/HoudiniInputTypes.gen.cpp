// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInputTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputTypes() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
// End Cross Module References
	static UEnum* EHoudiniLandscapeExportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeExportType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeExportType>()
	{
		return EHoudiniLandscapeExportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniLandscapeExportType(EHoudiniLandscapeExportType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniLandscapeExportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Hash() { return 1531302007U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniLandscapeExportType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniLandscapeExportType::Heightfield", (int64)EHoudiniLandscapeExportType::Heightfield },
				{ "EHoudiniLandscapeExportType::Mesh", (int64)EHoudiniLandscapeExportType::Mesh },
				{ "EHoudiniLandscapeExportType::Points", (int64)EHoudiniLandscapeExportType::Points },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Heightfield.Name", "EHoudiniLandscapeExportType::Heightfield" },
				{ "Mesh.Name", "EHoudiniLandscapeExportType::Mesh" },
				{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
				{ "Points.Name", "EHoudiniLandscapeExportType::Points" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniLandscapeExportType",
				"EHoudiniLandscapeExportType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoudiniXformType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniXformType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniXformType>()
	{
		return EHoudiniXformType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniXformType(EHoudiniXformType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniXformType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Hash() { return 566851518U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniXformType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniXformType::None", (int64)EHoudiniXformType::None },
				{ "EHoudiniXformType::IntoThisObject", (int64)EHoudiniXformType::IntoThisObject },
				{ "EHoudiniXformType::Auto", (int64)EHoudiniXformType::Auto },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "EHoudiniXformType::Auto" },
				{ "IntoThisObject.Name", "EHoudiniXformType::IntoThisObject" },
				{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
				{ "None.Name", "EHoudiniXformType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniXformType",
				"EHoudiniXformType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoudiniInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>()
	{
		return EHoudiniInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniInputType(EHoudiniInputType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Hash() { return 2549792841U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniInputType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniInputType::Invalid", (int64)EHoudiniInputType::Invalid },
				{ "EHoudiniInputType::Geometry", (int64)EHoudiniInputType::Geometry },
				{ "EHoudiniInputType::Curve", (int64)EHoudiniInputType::Curve },
				{ "EHoudiniInputType::Asset", (int64)EHoudiniInputType::Asset },
				{ "EHoudiniInputType::Landscape", (int64)EHoudiniInputType::Landscape },
				{ "EHoudiniInputType::World", (int64)EHoudiniInputType::World },
				{ "EHoudiniInputType::Skeletal", (int64)EHoudiniInputType::Skeletal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Asset.Name", "EHoudiniInputType::Asset" },
				{ "Curve.Name", "EHoudiniInputType::Curve" },
				{ "Geometry.Name", "EHoudiniInputType::Geometry" },
				{ "Invalid.Name", "EHoudiniInputType::Invalid" },
				{ "Landscape.Name", "EHoudiniInputType::Landscape" },
				{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
				{ "Skeletal.Name", "EHoudiniInputType::Skeletal" },
				{ "World.Name", "EHoudiniInputType::World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniInputType",
				"EHoudiniInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

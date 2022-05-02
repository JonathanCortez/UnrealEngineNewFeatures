// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniMeshTranslator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshTranslator() {}
// Cross Module References
	HOUDINIENGINE_API UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
// End Cross Module References
	static UEnum* EHoudiniSplitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("EHoudiniSplitType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniSplitType>()
	{
		return EHoudiniSplitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniSplitType(EHoudiniSplitType_StaticEnum, TEXT("/Script/HoudiniEngine"), TEXT("EHoudiniSplitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Hash() { return 3029202927U; }
	UEnum* Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniSplitType"), 0, Get_Z_Construct_UEnum_HoudiniEngine_EHoudiniSplitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniSplitType::Invalid", (int64)EHoudiniSplitType::Invalid },
				{ "EHoudiniSplitType::Normal", (int64)EHoudiniSplitType::Normal },
				{ "EHoudiniSplitType::LOD", (int64)EHoudiniSplitType::LOD },
				{ "EHoudiniSplitType::RenderedComplexCollider", (int64)EHoudiniSplitType::RenderedComplexCollider },
				{ "EHoudiniSplitType::InvisibleComplexCollider", (int64)EHoudiniSplitType::InvisibleComplexCollider },
				{ "EHoudiniSplitType::RenderedUCXCollider", (int64)EHoudiniSplitType::RenderedUCXCollider },
				{ "EHoudiniSplitType::InvisibleUCXCollider", (int64)EHoudiniSplitType::InvisibleUCXCollider },
				{ "EHoudiniSplitType::RenderedSimpleCollider", (int64)EHoudiniSplitType::RenderedSimpleCollider },
				{ "EHoudiniSplitType::InvisibleSimpleCollider", (int64)EHoudiniSplitType::InvisibleSimpleCollider },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Invalid.Name", "EHoudiniSplitType::Invalid" },
				{ "InvisibleComplexCollider.Name", "EHoudiniSplitType::InvisibleComplexCollider" },
				{ "InvisibleSimpleCollider.Name", "EHoudiniSplitType::InvisibleSimpleCollider" },
				{ "InvisibleUCXCollider.Name", "EHoudiniSplitType::InvisibleUCXCollider" },
				{ "LOD.Name", "EHoudiniSplitType::LOD" },
				{ "ModuleRelativePath", "Private/HoudiniMeshTranslator.h" },
				{ "Normal.Name", "EHoudiniSplitType::Normal" },
				{ "RenderedComplexCollider.Name", "EHoudiniSplitType::RenderedComplexCollider" },
				{ "RenderedSimpleCollider.Name", "EHoudiniSplitType::RenderedSimpleCollider" },
				{ "RenderedUCXCollider.Name", "EHoudiniSplitType::RenderedUCXCollider" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngine,
				nullptr,
				"EHoudiniSplitType",
				"EHoudiniSplitType",
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

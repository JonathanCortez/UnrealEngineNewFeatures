// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Private/HoudiniEngineBakeUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineBakeUtils() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
// End Cross Module References
	static UEnum* EHoudiniInstancerComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniInstancerComponentType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniInstancerComponentType>()
	{
		return EHoudiniInstancerComponentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniInstancerComponentType(EHoudiniInstancerComponentType_StaticEnum, TEXT("/Script/HoudiniEngineEditor"), TEXT("EHoudiniInstancerComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Hash() { return 2394538180U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniInstancerComponentType"), 0, Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniInstancerComponentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniInstancerComponentType::StaticMeshComponent", (int64)EHoudiniInstancerComponentType::StaticMeshComponent },
				{ "EHoudiniInstancerComponentType::InstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::InstancedStaticMeshComponent },
				{ "EHoudiniInstancerComponentType::MeshSplitInstancerComponent", (int64)EHoudiniInstancerComponentType::MeshSplitInstancerComponent },
				{ "EHoudiniInstancerComponentType::InstancedActorComponent", (int64)EHoudiniInstancerComponentType::InstancedActorComponent },
				{ "EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent },
				{ "EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent", (int64)EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// An enum of the different types for instancer component/bake types\n" },
				{ "FoliageAsHierarchicalInstancedStaticMeshComponent.Comment", "// Baking foliage as HISMC\n" },
				{ "FoliageAsHierarchicalInstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent" },
				{ "FoliageAsHierarchicalInstancedStaticMeshComponent.ToolTip", "Baking foliage as HISMC" },
				{ "FoliageInstancedStaticMeshComponent.Comment", "// For baking foliage as foliage\n" },
				{ "FoliageInstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent" },
				{ "FoliageInstancedStaticMeshComponent.ToolTip", "For baking foliage as foliage" },
				{ "InstancedActorComponent.Name", "EHoudiniInstancerComponentType::InstancedActorComponent" },
				{ "InstancedStaticMeshComponent.Comment", "// (Hierarichal)InstancedStaticMeshComponent\n" },
				{ "InstancedStaticMeshComponent.Name", "EHoudiniInstancerComponentType::InstancedStaticMeshComponent" },
				{ "InstancedStaticMeshComponent.ToolTip", "(Hierarichal)InstancedStaticMeshComponent" },
				{ "MeshSplitInstancerComponent.Name", "EHoudiniInstancerComponentType::MeshSplitInstancerComponent" },
				{ "ModuleRelativePath", "Private/HoudiniEngineBakeUtils.h" },
				{ "StaticMeshComponent.Comment", "// Single static mesh component\n" },
				{ "StaticMeshComponent.Name", "EHoudiniInstancerComponentType::StaticMeshComponent" },
				{ "StaticMeshComponent.ToolTip", "Single static mesh component" },
				{ "ToolTip", "An enum of the different types for instancer component/bake types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
				nullptr,
				"EHoudiniInstancerComponentType",
				"EHoudiniInstancerComponentType",
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

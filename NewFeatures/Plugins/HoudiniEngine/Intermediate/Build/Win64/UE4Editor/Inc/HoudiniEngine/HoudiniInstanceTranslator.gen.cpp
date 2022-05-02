// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngine/Private/HoudiniInstanceTranslator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInstanceTranslator() {}
// Cross Module References
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGenericAttribute();
	HOUDINIENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes();
// End Cross Module References
class UScriptStruct* FHoudiniInstancedOutputPartData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancedOutputPartData"), sizeof(FHoudiniInstancedOutputPartData), Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniInstancedOutputPartData>()
{
	return FHoudiniInstancedOutputPartData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniInstancedOutputPartData(FHoudiniInstancedOutputPartData::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniInstancedOutputPartData"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniInstancedOutputPartData
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniInstancedOutputPartData()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniInstancedOutputPartData>(FName(TEXT("HoudiniInstancedOutputPartData")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniInstancedOutputPartData;
	struct Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceHISM_MetaData[];
#endif
		static void NewProp_bForceHISM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceHISM;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalInstancedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedObjects;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginalInstanceObjectPackagePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalInstanceObjectPackagePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalInstanceObjectPackagePaths;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInstancedTransformsPerObject_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInstancedTransformsPerObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NumInstancedTransformsPerObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalInstancedTransformsFlat_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedTransformsFlat_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedTransformsFlat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInstancedIndicesPerObject_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInstancedIndicesPerObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NumInstancedIndicesPerObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OriginalInstancedIndicesFlat_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalInstancedIndicesFlat_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginalInstancedIndicesFlat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitAttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SplitAttributeName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SplitAttributeValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitAttributeValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplitAttributeValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplitMeshInstancer_MetaData[];
#endif
		static void NewProp_bSplitMeshInstancer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplitMeshInstancer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFoliageInstancer_MetaData[];
#endif
		static void NewProp_bIsFoliageInstancer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFoliageInstancer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllPropertyAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPropertyAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPropertyAttributes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllLevelPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllLevelPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllLevelPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllBakeActorNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllBakeActorNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllBakeActorNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllBakeFolders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllBakeFolders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllBakeFolders;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllBakeOutlinerFolders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllBakeOutlinerFolders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllBakeOutlinerFolders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerSplitAttributes_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerSplitAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerSplitAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerSplitAttributes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TileValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaterialOverrideNeedsCreateInstance_MetaData[];
#endif
		static void NewProp_bMaterialOverrideNeedsCreateInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaterialOverrideNeedsCreateInstance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPerInstanceCustomDataPerObject_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPerInstanceCustomDataPerObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NumPerInstanceCustomDataPerObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerInstanceCustomDataFlat_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceCustomDataFlat_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerInstanceCustomDataFlat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutputPartData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bForceHISM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM = { "bForceHISM", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_Inner = { "OriginalInstancedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects = { "OriginalInstancedObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_Inner = { "OriginalInstanceObjectPackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_MetaData[] = {
		{ "Comment", "// Object paths of OriginalInstancedObjects. Used by message passing system\n// when sending messages from the async importer to the PDG manager. UObject*/references\n// are not directly supported by the messaging system. See BuildFlatInstancedTransformsAndObjectPaths().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Object paths of OriginalInstancedObjects. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. UObject*/references\nare not directly supported by the messaging system. See BuildFlatInstancedTransformsAndObjectPaths()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths = { "OriginalInstanceObjectPackagePaths", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstanceObjectPackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_Inner = { "NumInstancedTransformsPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_MetaData[] = {
		{ "Comment", "// Number of entries in OriginalInstancedTransforms. Populated when building\n// OriginalInstancedTransformsFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// OriginalInstancedTransforms from OriginalInstancedTransformsFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Number of entries in OriginalInstancedTransforms. Populated when building\nOriginalInstancedTransformsFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nOriginalInstancedTransforms from OriginalInstancedTransformsFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject = { "NumInstancedTransformsPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumInstancedTransformsPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_Inner = { "OriginalInstancedTransformsFlat", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_MetaData[] = {
		{ "Comment", "// Flattened version of OriginalInstancedTransforms. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system.\n// See BuildFlatInstancedTransformsAndObjectPaths().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Flattened version of OriginalInstancedTransforms. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system.\nSee BuildFlatInstancedTransformsAndObjectPaths()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat = { "OriginalInstancedTransformsFlat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedTransformsFlat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_Inner = { "NumInstancedIndicesPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_MetaData[] = {
		{ "Comment", "// Number of entries in OriginalInstancedIndices. Populated when building\n// OriginalInstancedIndicesFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// OriginalInstancedIndices from OriginalInstancedIndicesFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Number of entries in OriginalInstancedIndices. Populated when building\nOriginalInstancedIndicesFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nOriginalInstancedIndices from OriginalInstancedIndicesFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject = { "NumInstancedIndicesPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumInstancedIndicesPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_Inner = { "OriginalInstancedIndicesFlat", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_MetaData[] = {
		{ "Comment", "// Flattened version of OriginalInstancedIndices. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system. See\n// BuildFlatInstancedTransformsAndObjectPaths().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Flattened version of OriginalInstancedIndices. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system. See\nBuildFlatInstancedTransformsAndObjectPaths()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat = { "OriginalInstancedIndicesFlat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OriginalInstancedIndicesFlat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName = { "SplitAttributeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, SplitAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_Inner = { "SplitAttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues = { "SplitAttributeValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, SplitAttributeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bSplitMeshInstancer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer = { "bSplitMeshInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bIsFoliageInstancer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer = { "bIsFoliageInstancer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_Inner = { "AllPropertyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniGenericAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes = { "AllPropertyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllPropertyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_Inner = { "AllLevelPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_MetaData[] = {
		{ "Comment", "// All level path attributes from the first attribute owner we could find\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All level path attributes from the first attribute owner we could find" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths = { "AllLevelPaths", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllLevelPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_Inner = { "AllBakeActorNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_MetaData[] = {
		{ "Comment", "// All bake actor name attributes from the first attribute owner we could find\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All bake actor name attributes from the first attribute owner we could find" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames = { "AllBakeActorNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeActorNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_Inner = { "AllBakeFolders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_MetaData[] = {
		{ "Comment", "// All unreal_bake_folder attributes (prim attr is checked first then detail)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All unreal_bake_folder attributes (prim attr is checked first then detail)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders = { "AllBakeFolders", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_Inner = { "AllBakeOutlinerFolders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_MetaData[] = {
		{ "Comment", "// All bake outliner folder attributes from the first attribute owner we could find\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "All bake outliner folder attributes from the first attribute owner we could find" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders = { "AllBakeOutlinerFolders", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, AllBakeOutlinerFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_ValueProp = { "PerSplitAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_Key_KeyProp = { "PerSplitAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_MetaData[] = {
		{ "Comment", "// A map of split value to attribute values that are valid per split (unreal_bake_actor, unreal_level_path,\n// unreal_bake_outliner_folder)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "A map of split value to attribute values that are valid per split (unreal_bake_actor, unreal_level_path,\nunreal_bake_outliner_folder)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes = { "PerSplitAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, PerSplitAttributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, OutputNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_Inner = { "TileValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues = { "TileValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, TileValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_Inner = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, MaterialAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_MetaData[] = {
		{ "Comment", "// Specifies that the materials in MaterialAttributes are to be created as an instance\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Specifies that the materials in MaterialAttributes are to be created as an instance" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutputPartData*)Obj)->bMaterialOverrideNeedsCreateInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance = { "bMaterialOverrideNeedsCreateInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniInstancedOutputPartData), &Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_Inner = { "NumPerInstanceCustomDataPerObject", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_MetaData[] = {
		{ "Comment", "// Number of entries in PerInstanceCustomData. Populated when building\n// PerInstanceCustomDataFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\n// PerInstanceCustomData from PerInstanceCustomDataFlat in BuildOriginalInstancedTransformsAndObjectArrays().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Number of entries in PerInstanceCustomData. Populated when building\nPerInstanceCustomDataFlat in BuildFlatInstancedTransformsAndObjectPaths() and used when rebuilding\nPerInstanceCustomData from PerInstanceCustomDataFlat in BuildOriginalInstancedTransformsAndObjectArrays()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject = { "NumPerInstanceCustomDataPerObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, NumPerInstanceCustomDataPerObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_Inner = { "PerInstanceCustomDataFlat", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_MetaData[] = {
		{ "Comment", "// Flattened version of OriginalInstancedTransforms. Used by message passing system\n// when sending messages from the async importer to the PDG manager. Nested arrays\n// are not supported by UPROPERTIES and thus not by the messaging system.\n// See BuildFlatInstancedTransformsAndObjectPaths().\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Flattened version of OriginalInstancedTransforms. Used by message passing system\nwhen sending messages from the async importer to the PDG manager. Nested arrays\nare not supported by UPROPERTIES and thus not by the messaging system.\nSee BuildFlatInstancedTransformsAndObjectPaths()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat = { "PerInstanceCustomDataFlat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPartData, PerInstanceCustomDataFlat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bForceHISM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstanceObjectPackagePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedTransformsPerObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedTransformsFlat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumInstancedIndicesPerObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OriginalInstancedIndicesFlat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_SplitAttributeValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bSplitMeshInstancer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bIsFoliageInstancer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllPropertyAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllLevelPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeActorNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeFolders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_AllBakeOutlinerFolders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerSplitAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_OutputNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_TileValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_MaterialAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_bMaterialOverrideNeedsCreateInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_NumPerInstanceCustomDataPerObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::NewProp_PerInstanceCustomDataFlat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniInstancedOutputPartData",
		sizeof(FHoudiniInstancedOutputPartData),
		alignof(FHoudiniInstancedOutputPartData),
		Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniInstancedOutputPartData"), sizeof(FHoudiniInstancedOutputPartData), Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPartData_Hash() { return 2964929068U; }
class UScriptStruct* FHoudiniInstancedOutputPerSplitAttributes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes, Z_Construct_UPackage__Script_HoudiniEngine(), TEXT("HoudiniInstancedOutputPerSplitAttributes"), sizeof(FHoudiniInstancedOutputPerSplitAttributes), Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<FHoudiniInstancedOutputPerSplitAttributes>()
{
	return FHoudiniInstancedOutputPerSplitAttributes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes(FHoudiniInstancedOutputPerSplitAttributes::StaticStruct, TEXT("/Script/HoudiniEngine"), TEXT("HoudiniInstancedOutputPerSplitAttributes"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniInstancedOutputPerSplitAttributes
{
	FScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniInstancedOutputPerSplitAttributes()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniInstancedOutputPerSplitAttributes>(FName(TEXT("HoudiniInstancedOutputPerSplitAttributes")));
	}
} ScriptStruct_HoudiniEngine_StaticRegisterNativesFHoudiniInstancedOutputPerSplitAttributes;
	struct Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BakeActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeOutlinerFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BakeOutlinerFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutputPerSplitAttributes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath_MetaData[] = {
		{ "Comment", "// level path attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "level path attribute value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, LevelPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName_MetaData[] = {
		{ "Comment", "// Bake actor name attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "Bake actor name attribute value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName = { "BakeActorName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder_MetaData[] = {
		{ "Comment", "// bake outliner folder attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "bake outliner folder attribute value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder = { "BakeOutlinerFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeOutlinerFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "Comment", "// unreal_bake_folder attribute value\n" },
		{ "ModuleRelativePath", "Private/HoudiniInstanceTranslator.h" },
		{ "ToolTip", "unreal_bake_folder attribute value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstancedOutputPerSplitAttributes, BakeFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_LevelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeOutlinerFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::NewProp_BakeFolder,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngine,
		nullptr,
		&NewStructOps,
		"HoudiniInstancedOutputPerSplitAttributes",
		sizeof(FHoudiniInstancedOutputPerSplitAttributes),
		alignof(FHoudiniInstancedOutputPerSplitAttributes),
		Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniInstancedOutputPerSplitAttributes"), sizeof(FHoudiniInstancedOutputPerSplitAttributes), Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstancedOutputPerSplitAttributes_Hash() { return 158432100U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

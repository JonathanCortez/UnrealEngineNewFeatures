// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetEditorObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetEditorObject() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetEditorObject_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetEditorObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetEditorActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();
// End Cross Module References
class UScriptStruct* FHoudiniAssetEditorOrbitCameraPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniAssetEditorOrbitCameraPosition"), sizeof(FHoudiniAssetEditorOrbitCameraPosition), Get_Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniAssetEditorOrbitCameraPosition>()
{
	return FHoudiniAssetEditorOrbitCameraPosition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition(FHoudiniAssetEditorOrbitCameraPosition::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniAssetEditorOrbitCameraPosition"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniAssetEditorOrbitCameraPosition
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniAssetEditorOrbitCameraPosition()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniAssetEditorOrbitCameraPosition>(FName(TEXT("HoudiniAssetEditorOrbitCameraPosition")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniAssetEditorOrbitCameraPosition;
	struct Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[];
#endif
		static void NewProp_bIsSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAssetEditorOrbitCameraPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData[] = {
		{ "Comment", "/** Whether or not this has been set to a valid value */" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
		{ "ToolTip", "Whether or not this has been set to a valid value" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit(void* Obj)
	{
		((FHoudiniAssetEditorOrbitCameraPosition*)Obj)->bIsSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet = { "bIsSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoudiniAssetEditorOrbitCameraPosition), &Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData[] = {
		{ "Comment", "/** The position to orbit the camera around */" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
		{ "ToolTip", "The position to orbit the camera around" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint = { "CamOrbitPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetEditorOrbitCameraPosition, CamOrbitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData[] = {
		{ "Comment", "/** The distance of the camera from the orbit point */" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
		{ "ToolTip", "The distance of the camera from the orbit point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom = { "CamOrbitZoom", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetEditorOrbitCameraPosition, CamOrbitZoom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData[] = {
		{ "Comment", "/** The rotation to apply around the orbit point */" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
		{ "ToolTip", "The rotation to apply around the orbit point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation = { "CamOrbitRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniAssetEditorOrbitCameraPosition, CamOrbitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniAssetEditorOrbitCameraPosition",
		sizeof(FHoudiniAssetEditorOrbitCameraPosition),
		alignof(FHoudiniAssetEditorOrbitCameraPosition),
		Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniAssetEditorOrbitCameraPosition"), sizeof(FHoudiniAssetEditorOrbitCameraPosition), Get_Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition_Hash() { return 1434913097U; }
class UScriptStruct* FHoudiniInstanceComponentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniInstanceComponentInfo"), sizeof(FHoudiniInstanceComponentInfo), Get_Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Hash());
	}
	return Singleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniInstanceComponentInfo>()
{
	return FHoudiniInstanceComponentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniInstanceComponentInfo(FHoudiniInstanceComponentInfo::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniInstanceComponentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniInstanceComponentInfo
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniInstanceComponentInfo()
	{
		UScriptStruct::DeferCppStructOps<FHoudiniInstanceComponentInfo>(FName(TEXT("HoudiniInstanceComponentInfo")));
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniInstanceComponentInfo;
	struct Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceTransform_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstanceComponentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceMesh_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceMesh = { "InstanceMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstanceComponentInfo, InstanceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceCount = { "InstanceCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstanceComponentInfo, InstanceCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_MeshName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstanceComponentInfo, MeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_MeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_MeshName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceTransform_Inner = { "InstanceTransform", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceTransform_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceTransform = { "InstanceTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoudiniInstanceComponentInfo, InstanceTransform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_MeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceTransform_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::NewProp_InstanceTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniInstanceComponentInfo",
		sizeof(FHoudiniInstanceComponentInfo),
		alignof(FHoudiniInstanceComponentInfo),
		Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniInstanceComponentInfo"), sizeof(FHoudiniInstanceComponentInfo), Get_Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo_Hash() { return 301653834U; }
	void UHoudiniAssetEditorObject::StaticRegisterNativesUHoudiniAssetEditorObject()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAssetEditorObject_NoRegister()
	{
		return UHoudiniAssetEditorObject::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniAssetEditorObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCameraPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorCameraPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoudiniInstanceData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniInstanceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HoudiniInstanceData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetEditorActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetEditorActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HoudiniAssetEditorActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasViewportRef_MetaData[];
#endif
		static void NewProp_bHasViewportRef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasViewportRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HoudiniAssetEditorObject.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_EditorCameraPosition_MetaData[] = {
		{ "Comment", "/** The stored camera position to use as a default for the Houdini Mesh Editor Window*/" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
		{ "ToolTip", "The stored camera position to use as a default for the Houdini Mesh Editor Window" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_EditorCameraPosition = { "EditorCameraPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetEditorObject, EditorCameraPosition), Z_Construct_UScriptStruct_FHoudiniAssetEditorOrbitCameraPosition, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_EditorCameraPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_EditorCameraPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniInstanceData_Inner = { "HoudiniInstanceData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHoudiniInstanceComponentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniInstanceData_MetaData[] = {
		{ "Comment", "/** Store Houdini Asset Instance Components Info */" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
		{ "ToolTip", "Store Houdini Asset Instance Components Info" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniInstanceData = { "HoudiniInstanceData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetEditorObject, HoudiniInstanceData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniInstanceData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetEditorActors_Inner = { "HoudiniAssetEditorActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHoudiniAssetEditorActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetEditorActors_MetaData[] = {
		{ "Comment", "/* Actor that is placed in the Level Editor Scene */" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
		{ "ToolTip", "Actor that is placed in the Level Editor Scene" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetEditorActors = { "HoudiniAssetEditorActors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetEditorObject, HoudiniAssetEditorActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetEditorActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetEditorActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAsset = { "HoudiniAsset", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetEditorObject, HoudiniAsset), Z_Construct_UClass_UHoudiniAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetComponent_MetaData[] = {
		{ "Category", "HoudiniAssetEditorObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetComponent = { "HoudiniAssetComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetEditorObject, HoudiniAssetComponent), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetActor = { "HoudiniAssetActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetEditorObject, HoudiniAssetActor), Z_Construct_UClass_AHoudiniAssetActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniAssetEditorObject, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_StaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_StaticMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_bHasViewportRef_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorObject.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_bHasViewportRef_SetBit(void* Obj)
	{
		((UHoudiniAssetEditorObject*)Obj)->bHasViewportRef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_bHasViewportRef = { "bHasViewportRef", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniAssetEditorObject), &Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_bHasViewportRef_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_bHasViewportRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_bHasViewportRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_EditorCameraPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniInstanceData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetEditorActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetEditorActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_HoudiniAssetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_StaticMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_StaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::NewProp_bHasViewportRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniAssetEditorObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::ClassParams = {
		&UHoudiniAssetEditorObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniAssetEditorObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniAssetEditorObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetEditorObject, 474971448);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniAssetEditorObject>()
	{
		return UHoudiniAssetEditorObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetEditorObject(Z_Construct_UClass_UHoudiniAssetEditorObject, &UHoudiniAssetEditorObject::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetEditorObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetEditorObject);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniAssetEditorObject)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

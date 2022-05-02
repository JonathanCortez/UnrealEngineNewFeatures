// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniAssetEditorActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetEditorActor() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetEditorActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetEditorActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetEditorObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AHoudiniAssetEditorActor::StaticRegisterNativesAHoudiniAssetEditorActor()
	{
	}
	UClass* Z_Construct_UClass_AHoudiniAssetEditorActor_NoRegister()
	{
		return AHoudiniAssetEditorActor::StaticClass();
	}
	struct Z_Construct_UClass_AHoudiniAssetEditorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetEditorObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetEditorObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideInputs_MetaData[];
#endif
		static void NewProp_bOverrideInputs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideInputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniAssetEditorObjPrev_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoudiniAssetEditorObjPrev;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponentRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponentRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniAssetEditorActor.h" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObj_MetaData[] = {
		{ "Category", "HoudiniAssetEditor" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObj = { "HoudiniAssetEditorObj", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoudiniAssetEditorActor, HoudiniAssetEditorObj), Z_Construct_UClass_UHoudiniAssetEditorObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_bOverrideInputs_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorActor.h" },
	};
#endif
	void Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_bOverrideInputs_SetBit(void* Obj)
	{
		((AHoudiniAssetEditorActor*)Obj)->bOverrideInputs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_bOverrideInputs = { "bOverrideInputs", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoudiniAssetEditorActor), &Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_bOverrideInputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_bOverrideInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_bOverrideInputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObjPrev_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObjPrev = { "HoudiniAssetEditorObjPrev", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoudiniAssetEditorActor, HoudiniAssetEditorObjPrev), Z_Construct_UClass_UHoudiniAssetEditorObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObjPrev_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObjPrev_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_SceneComponentRoot_MetaData[] = {
		{ "Category", "HoudiniAssetEditorActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniAssetEditorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_SceneComponentRoot = { "SceneComponentRoot", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoudiniAssetEditorActor, SceneComponentRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_SceneComponentRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_SceneComponentRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_bOverrideInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_HoudiniAssetEditorObjPrev,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::NewProp_SceneComponentRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoudiniAssetEditorActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::ClassParams = {
		&AHoudiniAssetEditorActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHoudiniAssetEditorActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHoudiniAssetEditorActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoudiniAssetEditorActor, 3225169571);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<AHoudiniAssetEditorActor>()
	{
		return AHoudiniAssetEditorActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoudiniAssetEditorActor(Z_Construct_UClass_AHoudiniAssetEditorActor, &AHoudiniAssetEditorActor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("AHoudiniAssetEditorActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniAssetEditorActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

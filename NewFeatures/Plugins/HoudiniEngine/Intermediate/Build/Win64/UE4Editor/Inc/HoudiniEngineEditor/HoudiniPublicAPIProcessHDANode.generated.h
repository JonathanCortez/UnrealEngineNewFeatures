// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHoudiniPublicAPIAssetWrapper;
class UHoudiniAsset;
struct FTransform;
 struct FHoudiniParameterTuple;
 class UHoudiniPublicAPIInput;
class UObject;
class ULevel;
enum class EHoudiniEngineBakeOption : uint8;
class UHoudiniPublicAPIProcessHDANode;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIProcessHDANode_generated_h
#error "HoudiniPublicAPIProcessHDANode.generated.h already included, missing '#pragma once' in HoudiniPublicAPIProcessHDANode.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIProcessHDANode_generated_h

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_43_DELEGATE \
struct _Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms \
{ \
	UHoudiniPublicAPIAssetWrapper* AssetWrapper; \
	bool bCookSuccess; \
	bool bBakeSuccess; \
}; \
static inline void FOnProcessHDANodeOutputPinDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProcessHDANodeOutputPinDelegate, UHoudiniPublicAPIAssetWrapper* AssetWrapper, bool bCookSuccess, bool bBakeSuccess) \
{ \
	_Script_HoudiniEngineEditor_eventOnProcessHDANodeOutputPinDelegate_Parms Parms; \
	Parms.AssetWrapper=AssetWrapper; \
	Parms.bCookSuccess=bCookSuccess ? true : false; \
	Parms.bBakeSuccess=bBakeSuccess ? true : false; \
	OnProcessHDANodeOutputPinDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_SPARSE_DATA
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePostAutoBake); \
	DECLARE_FUNCTION(execHandlePostProcessing); \
	DECLARE_FUNCTION(execHandlePreProcess); \
	DECLARE_FUNCTION(execHandlePostAutoCook); \
	DECLARE_FUNCTION(execHandlePostInstantiation); \
	DECLARE_FUNCTION(execHandlePreInstantiation); \
	DECLARE_FUNCTION(execHandleComplete); \
	DECLARE_FUNCTION(execHandleFailure); \
	DECLARE_FUNCTION(execProcessHDA);


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePostAutoBake); \
	DECLARE_FUNCTION(execHandlePostProcessing); \
	DECLARE_FUNCTION(execHandlePreProcess); \
	DECLARE_FUNCTION(execHandlePostAutoCook); \
	DECLARE_FUNCTION(execHandlePostInstantiation); \
	DECLARE_FUNCTION(execHandlePreInstantiation); \
	DECLARE_FUNCTION(execHandleComplete); \
	DECLARE_FUNCTION(execHandleFailure); \
	DECLARE_FUNCTION(execProcessHDA);


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIProcessHDANode(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIProcessHDANode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIProcessHDANode)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIProcessHDANode(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIProcessHDANode_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIProcessHDANode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIProcessHDANode)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIProcessHDANode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIProcessHDANode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIProcessHDANode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIProcessHDANode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIProcessHDANode(UHoudiniPublicAPIProcessHDANode&&); \
	NO_API UHoudiniPublicAPIProcessHDANode(const UHoudiniPublicAPIProcessHDANode&); \
public:


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIProcessHDANode(UHoudiniPublicAPIProcessHDANode&&); \
	NO_API UHoudiniPublicAPIProcessHDANode(const UHoudiniPublicAPIProcessHDANode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIProcessHDANode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIProcessHDANode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIProcessHDANode)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssetWrapper() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, AssetWrapper); } \
	FORCEINLINE static uint32 __PPO__bCookSuccess() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, bCookSuccess); } \
	FORCEINLINE static uint32 __PPO__bBakeSuccess() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, bBakeSuccess); } \
	FORCEINLINE static uint32 __PPO__HoudiniAsset() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, HoudiniAsset); } \
	FORCEINLINE static uint32 __PPO__InstantiateAt() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, InstantiateAt); } \
	FORCEINLINE static uint32 __PPO__Parameters() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, Parameters); } \
	FORCEINLINE static uint32 __PPO__NodeInputs() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, NodeInputs); } \
	FORCEINLINE static uint32 __PPO__ParameterInputs() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, ParameterInputs); } \
	FORCEINLINE static uint32 __PPO__WorldContextObject() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, WorldContextObject); } \
	FORCEINLINE static uint32 __PPO__SpawnInLevelOverride() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, SpawnInLevelOverride); } \
	FORCEINLINE static uint32 __PPO__bEnableAutoCook() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, bEnableAutoCook); } \
	FORCEINLINE static uint32 __PPO__bEnableAutoBake() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, bEnableAutoBake); } \
	FORCEINLINE static uint32 __PPO__BakeDirectoryPath() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, BakeDirectoryPath); } \
	FORCEINLINE static uint32 __PPO__BakeMethod() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, BakeMethod); } \
	FORCEINLINE static uint32 __PPO__bRemoveOutputAfterBake() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, bRemoveOutputAfterBake); } \
	FORCEINLINE static uint32 __PPO__bRecenterBakedActors() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, bRecenterBakedActors); } \
	FORCEINLINE static uint32 __PPO__bReplacePreviousBake() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, bReplacePreviousBake); } \
	FORCEINLINE static uint32 __PPO__bDeleteInstantiatedAssetOnCompletionOrFailure() { return STRUCT_OFFSET(UHoudiniPublicAPIProcessHDANode, bDeleteInstantiatedAssetOnCompletionOrFailure); }


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_49_PROLOG
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_SPARSE_DATA \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_RPC_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_INCLASS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_SPARSE_DATA \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_INCLASS_NO_PURE_DECLS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIProcessHDANode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIProcessHDANode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

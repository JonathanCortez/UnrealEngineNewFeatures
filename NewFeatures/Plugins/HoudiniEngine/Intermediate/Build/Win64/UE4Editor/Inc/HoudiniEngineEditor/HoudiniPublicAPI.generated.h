// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHoudiniPublicAPIInput;
class UObject;
class UHoudiniPublicAPIAssetWrapper;
class UHoudiniAsset;
struct FTransform;
class ULevel;
enum class EHoudiniEngineBakeOption : uint8;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPI_generated_h
#error "HoudiniPublicAPI.generated.h already included, missing '#pragma once' in HoudiniPublicAPI.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPI_generated_h

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_SPARSE_DATA
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_RPC_WRAPPERS \
	virtual UHoudiniPublicAPIInput* CreateEmptyInput_Implementation(TSubclassOf<UHoudiniPublicAPIInput>  InInputClass, UObject* InOuter); \
	virtual void ResumeAssetCooking_Implementation(); \
	virtual void PauseAssetCooking_Implementation(); \
	virtual bool IsAssetCookingPaused_Implementation() const; \
	virtual bool InstantiateAssetWithExistingWrapper_Implementation(UHoudiniPublicAPIAssetWrapper* InWrapper, UHoudiniAsset* InHoudiniAsset, FTransform const& InInstantiateAt, UObject* InWorldContextObject, ULevel* InSpawnInLevelOverride, bool bInEnableAutoCook, bool bInEnableAutoBake, const FString& InBakeDirectoryPath, const EHoudiniEngineBakeOption InBakeMethod, bool bInRemoveOutputAfterBake, bool bInRecenterBakedActors, bool bInReplacePreviousBake); \
	virtual UHoudiniPublicAPIAssetWrapper* InstantiateAsset_Implementation(UHoudiniAsset* InHoudiniAsset, FTransform const& InInstantiateAt, UObject* InWorldContextObject, ULevel* InSpawnInLevelOverride, bool bInEnableAutoCook, bool bInEnableAutoBake, const FString& InBakeDirectoryPath, const EHoudiniEngineBakeOption InBakeMethod, bool bInRemoveOutputAfterBake, bool bInRecenterBakedActors, bool bInReplacePreviousBake); \
	virtual void RestartSession_Implementation(); \
	virtual void StopSession_Implementation(); \
	virtual void CreateSession_Implementation(); \
	virtual bool IsSessionValid_Implementation() const; \
 \
	DECLARE_FUNCTION(execCreateEmptyInput); \
	DECLARE_FUNCTION(execResumeAssetCooking); \
	DECLARE_FUNCTION(execPauseAssetCooking); \
	DECLARE_FUNCTION(execIsAssetCookingPaused); \
	DECLARE_FUNCTION(execInstantiateAssetWithExistingWrapper); \
	DECLARE_FUNCTION(execInstantiateAsset); \
	DECLARE_FUNCTION(execRestartSession); \
	DECLARE_FUNCTION(execStopSession); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execIsSessionValid);


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UHoudiniPublicAPIInput* CreateEmptyInput_Implementation(TSubclassOf<UHoudiniPublicAPIInput>  InInputClass, UObject* InOuter); \
	virtual void ResumeAssetCooking_Implementation(); \
	virtual void PauseAssetCooking_Implementation(); \
	virtual bool InstantiateAssetWithExistingWrapper_Implementation(UHoudiniPublicAPIAssetWrapper* InWrapper, UHoudiniAsset* InHoudiniAsset, FTransform const& InInstantiateAt, UObject* InWorldContextObject, ULevel* InSpawnInLevelOverride, bool bInEnableAutoCook, bool bInEnableAutoBake, const FString& InBakeDirectoryPath, const EHoudiniEngineBakeOption InBakeMethod, bool bInRemoveOutputAfterBake, bool bInRecenterBakedActors, bool bInReplacePreviousBake); \
	virtual UHoudiniPublicAPIAssetWrapper* InstantiateAsset_Implementation(UHoudiniAsset* InHoudiniAsset, FTransform const& InInstantiateAt, UObject* InWorldContextObject, ULevel* InSpawnInLevelOverride, bool bInEnableAutoCook, bool bInEnableAutoBake, const FString& InBakeDirectoryPath, const EHoudiniEngineBakeOption InBakeMethod, bool bInRemoveOutputAfterBake, bool bInRecenterBakedActors, bool bInReplacePreviousBake); \
	virtual void RestartSession_Implementation(); \
	virtual void StopSession_Implementation(); \
	virtual void CreateSession_Implementation(); \
 \
	DECLARE_FUNCTION(execCreateEmptyInput); \
	DECLARE_FUNCTION(execResumeAssetCooking); \
	DECLARE_FUNCTION(execPauseAssetCooking); \
	DECLARE_FUNCTION(execIsAssetCookingPaused); \
	DECLARE_FUNCTION(execInstantiateAssetWithExistingWrapper); \
	DECLARE_FUNCTION(execInstantiateAsset); \
	DECLARE_FUNCTION(execRestartSession); \
	DECLARE_FUNCTION(execStopSession); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execIsSessionValid);


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_EVENT_PARMS \
	struct HoudiniPublicAPI_eventCreateEmptyInput_Parms \
	{ \
		TSubclassOf<UHoudiniPublicAPIInput>  InInputClass; \
		UObject* InOuter; \
		UHoudiniPublicAPIInput* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPI_eventCreateEmptyInput_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPI_eventInstantiateAsset_Parms \
	{ \
		UHoudiniAsset* InHoudiniAsset; \
		FTransform InInstantiateAt; \
		UObject* InWorldContextObject; \
		ULevel* InSpawnInLevelOverride; \
		bool bInEnableAutoCook; \
		bool bInEnableAutoBake; \
		FString InBakeDirectoryPath; \
		EHoudiniEngineBakeOption InBakeMethod; \
		bool bInRemoveOutputAfterBake; \
		bool bInRecenterBakedActors; \
		bool bInReplacePreviousBake; \
		UHoudiniPublicAPIAssetWrapper* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPI_eventInstantiateAsset_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms \
	{ \
		UHoudiniPublicAPIAssetWrapper* InWrapper; \
		UHoudiniAsset* InHoudiniAsset; \
		FTransform InInstantiateAt; \
		UObject* InWorldContextObject; \
		ULevel* InSpawnInLevelOverride; \
		bool bInEnableAutoCook; \
		bool bInEnableAutoBake; \
		FString InBakeDirectoryPath; \
		EHoudiniEngineBakeOption InBakeMethod; \
		bool bInRemoveOutputAfterBake; \
		bool bInRecenterBakedActors; \
		bool bInReplacePreviousBake; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPI_eventInstantiateAssetWithExistingWrapper_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPI_eventIsAssetCookingPaused_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPI_eventIsAssetCookingPaused_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPI_eventIsSessionValid_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPI_eventIsSessionValid_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_CALLBACK_WRAPPERS
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPI(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPI_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPI, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPI)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPI(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPI_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPI, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPI)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPI(UHoudiniPublicAPI&&); \
	NO_API UHoudiniPublicAPI(const UHoudiniPublicAPI&); \
public:


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPI(UHoudiniPublicAPI&&); \
	NO_API UHoudiniPublicAPI(const UHoudiniPublicAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPI)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_PRIVATE_PROPERTY_OFFSET
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_69_PROLOG \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_EVENT_PARMS


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_SPARSE_DATA \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_RPC_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_INCLASS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_SPARSE_DATA \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_INCLASS_NO_PURE_DECLS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPI_h


#define FOREACH_ENUM_EHOUDINIPUBLICAPIRAMPINTERPOLATIONTYPE(op) \
	op(EHoudiniPublicAPIRampInterpolationType::InValid) \
	op(EHoudiniPublicAPIRampInterpolationType::CONSTANT) \
	op(EHoudiniPublicAPIRampInterpolationType::LINEAR) \
	op(EHoudiniPublicAPIRampInterpolationType::CATMULL_ROM) \
	op(EHoudiniPublicAPIRampInterpolationType::MONOTONE_CUBIC) \
	op(EHoudiniPublicAPIRampInterpolationType::BEZIER) \
	op(EHoudiniPublicAPIRampInterpolationType::BSPLINE) \
	op(EHoudiniPublicAPIRampInterpolationType::HERMITE) 

enum class EHoudiniPublicAPIRampInterpolationType : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPIRampInterpolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

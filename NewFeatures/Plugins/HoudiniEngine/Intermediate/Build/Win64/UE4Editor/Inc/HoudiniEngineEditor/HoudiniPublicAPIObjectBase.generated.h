// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHoudiniPublicAPIErrorLogOption : uint8;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIObjectBase_generated_h
#error "HoudiniPublicAPIObjectBase.generated.h already included, missing '#pragma once' in HoudiniPublicAPIObjectBase.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIObjectBase_generated_h

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_SPARSE_DATA
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_RPC_WRAPPERS \
	virtual void SetErrorMessage_Implementation(const FString& InErrorMessage, const EHoudiniPublicAPIErrorLogOption InLoggingOption) const; \
	virtual void SetLoggingErrorsEnabled_Implementation(bool bInEnabled); \
	virtual bool IsLoggingErrors_Implementation() const; \
	virtual void ClearErrorMessages_Implementation(); \
	virtual bool GetLastErrorMessage_Implementation(FString& OutLastErrorMessage) const; \
 \
	DECLARE_FUNCTION(execSetErrorMessage); \
	DECLARE_FUNCTION(execSetLoggingErrorsEnabled); \
	DECLARE_FUNCTION(execIsLoggingErrors); \
	DECLARE_FUNCTION(execClearErrorMessages); \
	DECLARE_FUNCTION(execGetLastErrorMessage);


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetErrorMessage_Implementation(const FString& InErrorMessage, const EHoudiniPublicAPIErrorLogOption InLoggingOption) const; \
	virtual void ClearErrorMessages_Implementation(); \
	virtual bool GetLastErrorMessage_Implementation(FString& OutLastErrorMessage) const; \
 \
	DECLARE_FUNCTION(execSetErrorMessage); \
	DECLARE_FUNCTION(execSetLoggingErrorsEnabled); \
	DECLARE_FUNCTION(execIsLoggingErrors); \
	DECLARE_FUNCTION(execClearErrorMessages); \
	DECLARE_FUNCTION(execGetLastErrorMessage);


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_EVENT_PARMS \
	struct HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms \
	{ \
		FString OutLastErrorMessage; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms \
	{ \
		FString InErrorMessage; \
		EHoudiniPublicAPIErrorLogOption InLoggingOption; \
	}; \
	struct HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms \
	{ \
		bool bInEnabled; \
	};


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_CALLBACK_WRAPPERS
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIObjectBase(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIObjectBase)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIObjectBase(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIObjectBase)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIObjectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIObjectBase(UHoudiniPublicAPIObjectBase&&); \
	NO_API UHoudiniPublicAPIObjectBase(const UHoudiniPublicAPIObjectBase&); \
public:


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIObjectBase(UHoudiniPublicAPIObjectBase&&); \
	NO_API UHoudiniPublicAPIObjectBase(const UHoudiniPublicAPIObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIObjectBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIObjectBase)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastErrorMessage() { return STRUCT_OFFSET(UHoudiniPublicAPIObjectBase, LastErrorMessage); } \
	FORCEINLINE static uint32 __PPO__bHasError() { return STRUCT_OFFSET(UHoudiniPublicAPIObjectBase, bHasError); } \
	FORCEINLINE static uint32 __PPO__bIsLoggingErrors() { return STRUCT_OFFSET(UHoudiniPublicAPIObjectBase, bIsLoggingErrors); }


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_46_PROLOG \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_EVENT_PARMS


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_SPARSE_DATA \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_RPC_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_INCLASS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_SPARSE_DATA \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_INCLASS_NO_PURE_DECLS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIObjectBase_h


#define FOREACH_ENUM_EHOUDINIPUBLICAPIERRORLOGOPTION(op) \
	op(EHoudiniPublicAPIErrorLogOption::Invalid) \
	op(EHoudiniPublicAPIErrorLogOption::Auto) \
	op(EHoudiniPublicAPIErrorLogOption::Log) \
	op(EHoudiniPublicAPIErrorLogOption::NoLog) 

enum class EHoudiniPublicAPIErrorLogOption : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPIErrorLogOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

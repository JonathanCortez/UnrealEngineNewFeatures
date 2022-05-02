// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHoudiniUIBridge;
class UHoudiniAssetComponent;
#ifdef QUICKUISETUP_HoudiniUIBridge_generated_h
#error "HoudiniUIBridge.generated.h already included, missing '#pragma once' in HoudiniUIBridge.h"
#endif
#define QUICKUISETUP_HoudiniUIBridge_generated_h

#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_SPARSE_DATA
#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet);


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet);


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_EVENT_PARMS \
	struct HoudiniUIBridge_eventHoudiniUIWrap_Parms \
	{ \
		FString file_path; \
		FString hda_name; \
		UHoudiniAssetComponent* HoudiniAssetWrapper; \
	}; \
	struct HoudiniUIBridge_eventUpdateWrapper_Parms \
	{ \
		FString file_path; \
		FString hda_name; \
	};


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_CALLBACK_WRAPPERS
#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniUIBridge(); \
	friend struct Z_Construct_UClass_UHoudiniUIBridge_Statics; \
public: \
	DECLARE_CLASS(UHoudiniUIBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuickUISetup"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniUIBridge)


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniUIBridge(); \
	friend struct Z_Construct_UClass_UHoudiniUIBridge_Statics; \
public: \
	DECLARE_CLASS(UHoudiniUIBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuickUISetup"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniUIBridge)


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniUIBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniUIBridge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniUIBridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniUIBridge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniUIBridge(UHoudiniUIBridge&&); \
	NO_API UHoudiniUIBridge(const UHoudiniUIBridge&); \
public:


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniUIBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniUIBridge(UHoudiniUIBridge&&); \
	NO_API UHoudiniUIBridge(const UHoudiniUIBridge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniUIBridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniUIBridge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniUIBridge)


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_PRIVATE_PROPERTY_OFFSET
#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_11_PROLOG \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_EVENT_PARMS


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_SPARSE_DATA \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_RPC_WRAPPERS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_INCLASS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_SPARSE_DATA \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_INCLASS_NO_PURE_DECLS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUICKUISETUP_API UClass* StaticClass<class UHoudiniUIBridge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_HoudiniUIBridge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

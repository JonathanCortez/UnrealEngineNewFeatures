// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIPythonBridge;
#ifdef QUICKUISETUP_UIPythonBridge_generated_h
#error "UIPythonBridge.generated.h already included, missing '#pragma once' in UIPythonBridge.h"
#endif
#define QUICKUISETUP_UIPythonBridge_generated_h

#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_SPARSE_DATA
#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet);


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet);


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_EVENT_PARMS \
	struct UIPythonBridge_eventCheckUIName_Parms \
	{ \
		FString find_name; \
		FString category_name; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UIPythonBridge_eventCheckUIName_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UIPythonBridge_eventLoadedCategories_Parms \
	{ \
		TArray<FString> ReturnValue; \
	}; \
	struct UIPythonBridge_eventLoadedUI_Parms \
	{ \
		TArray<FString> ReturnValue; \
	}; \
	struct UIPythonBridge_eventOpenUI_Parms \
	{ \
		FString name; \
		FString WinType; \
		FString CategoryName; \
	}; \
	struct UIPythonBridge_eventSetFileRoot_Parms \
	{ \
		FString file_dir; \
	};


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_CALLBACK_WRAPPERS
#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIPythonBridge(); \
	friend struct Z_Construct_UClass_UUIPythonBridge_Statics; \
public: \
	DECLARE_CLASS(UUIPythonBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuickUISetup"), NO_API) \
	DECLARE_SERIALIZER(UUIPythonBridge)


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUIPythonBridge(); \
	friend struct Z_Construct_UClass_UUIPythonBridge_Statics; \
public: \
	DECLARE_CLASS(UUIPythonBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuickUISetup"), NO_API) \
	DECLARE_SERIALIZER(UUIPythonBridge)


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIPythonBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIPythonBridge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIPythonBridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIPythonBridge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIPythonBridge(UUIPythonBridge&&); \
	NO_API UUIPythonBridge(const UUIPythonBridge&); \
public:


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIPythonBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIPythonBridge(UUIPythonBridge&&); \
	NO_API UUIPythonBridge(const UUIPythonBridge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIPythonBridge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIPythonBridge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIPythonBridge)


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_PRIVATE_PROPERTY_OFFSET
#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_14_PROLOG \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_EVENT_PARMS


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_SPARSE_DATA \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_RPC_WRAPPERS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_INCLASS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_SPARSE_DATA \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_INCLASS_NO_PURE_DECLS \
	NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUICKUISETUP_API UClass* StaticClass<class UUIPythonBridge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_QuickUISetup_Source_QuickUISetup_Public_UIPythonBridge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

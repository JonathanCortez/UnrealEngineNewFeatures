// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniPackageParams_generated_h
#error "HoudiniPackageParams.generated.h already included, missing '#pragma once' in HoudiniPackageParams.h"
#endif
#define HOUDINIENGINE_HoudiniPackageParams_generated_h

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPackageParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPackageParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPackageParams_h


#define FOREACH_ENUM_EPACKAGEREPLACEMODE(op) \
	op(EPackageReplaceMode::CreateNewAssets) \
	op(EPackageReplaceMode::ReplaceExistingAssets) 

enum class EPackageReplaceMode : int8;
template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageReplaceMode>();

#define FOREACH_ENUM_EPACKAGEMODE(op) \
	op(EPackageMode::CookToLevel) \
	op(EPackageMode::CookToTemp) \
	op(EPackageMode::Bake) 

enum class EPackageMode : int8;
template<> HOUDINIENGINE_API UEnum* StaticEnum<EPackageMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

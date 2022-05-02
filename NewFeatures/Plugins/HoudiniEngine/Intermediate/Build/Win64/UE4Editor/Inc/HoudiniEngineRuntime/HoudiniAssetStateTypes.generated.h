// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniAssetStateTypes_generated_h
#error "HoudiniAssetStateTypes.generated.h already included, missing '#pragma once' in HoudiniAssetStateTypes.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetStateTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetStateTypes_h


#define FOREACH_ENUM_EHOUDINIASSETSTATERESULT(op) \
	op(EHoudiniAssetStateResult::None) \
	op(EHoudiniAssetStateResult::Working) \
	op(EHoudiniAssetStateResult::Success) \
	op(EHoudiniAssetStateResult::FinishedWithError) \
	op(EHoudiniAssetStateResult::FinishedWithFatalError) \
	op(EHoudiniAssetStateResult::Aborted) 

enum class EHoudiniAssetStateResult : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>();

#define FOREACH_ENUM_EHOUDINIASSETSTATE(op) \
	op(EHoudiniAssetState::NeedInstantiation) \
	op(EHoudiniAssetState::NewHDA) \
	op(EHoudiniAssetState::PreInstantiation) \
	op(EHoudiniAssetState::Instantiating) \
	op(EHoudiniAssetState::PreCook) \
	op(EHoudiniAssetState::Cooking) \
	op(EHoudiniAssetState::PostCook) \
	op(EHoudiniAssetState::PreProcess) \
	op(EHoudiniAssetState::Processing) \
	op(EHoudiniAssetState::None) \
	op(EHoudiniAssetState::NeedRebuild) \
	op(EHoudiniAssetState::NeedDelete) \
	op(EHoudiniAssetState::Deleting) \
	op(EHoudiniAssetState::ProcessTemplate) 

enum class EHoudiniAssetState : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

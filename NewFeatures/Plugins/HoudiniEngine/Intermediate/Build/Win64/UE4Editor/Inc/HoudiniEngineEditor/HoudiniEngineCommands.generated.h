// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_HoudiniEngineCommands_generated_h
#error "HoudiniEngineCommands.generated.h already included, missing '#pragma once' in HoudiniEngineCommands.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniEngineCommands_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineCommands_h


#define FOREACH_ENUM_EHOUDINIPROXYREFINERESULT(op) \
	op(EHoudiniProxyRefineResult::Invalid) \
	op(EHoudiniProxyRefineResult::Failed) \
	op(EHoudiniProxyRefineResult::Success) \
	op(EHoudiniProxyRefineResult::Skipped) \
	op(EHoudiniProxyRefineResult::Max) 

enum class EHoudiniProxyRefineResult : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniProxyRefineResult>();

#define FOREACH_ENUM_EHOUDINIPROXYREFINEREQUESTRESULT(op) \
	op(EHoudiniProxyRefineRequestResult::Invalid) \
	op(EHoudiniProxyRefineRequestResult::None) \
	op(EHoudiniProxyRefineRequestResult::PendingCooks) \
	op(EHoudiniProxyRefineRequestResult::Refined) \
	op(EHoudiniProxyRefineRequestResult::Max) 

enum class EHoudiniProxyRefineRequestResult : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

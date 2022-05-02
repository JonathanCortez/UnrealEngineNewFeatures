// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINE_HoudiniPDGImporterMessages_generated_h
#error "HoudiniPDGImporterMessages.generated.h already included, missing '#pragma once' in HoudiniPDGImporterMessages.h"
#endif
#define HOUDINIENGINE_HoudiniPDGImporterMessages_generated_h

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOResultMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FHoudiniPDGImportBGEOMessage Super;


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportBGEOResultMessage>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportNodeOutput>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportNodeOutputObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportNodeOutputObject>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGenericAttributes_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniGenericAttributes>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEOMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportBGEOMessage>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGImportBGEODiscoverMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINE_API UScriptStruct* StaticStruct<struct FHoudiniPDGImportBGEODiscoverMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPDGImporterMessages_h


#define FOREACH_ENUM_EHOUDINIPDGIMPORTBGEORESULT(op) \
	op(EHoudiniPDGImportBGEOResult::HPIBR_Failed) \
	op(EHoudiniPDGImportBGEOResult::HPIBR_Success) \
	op(EHoudiniPDGImportBGEOResult::HPIBR_PartialSuccess) \
	op(EHoudiniPDGImportBGEOResult::HIBPR_MAX) 

enum class EHoudiniPDGImportBGEOResult : uint8;
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniPDGImportBGEOResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

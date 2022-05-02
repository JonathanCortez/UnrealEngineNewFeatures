// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniGeoPartObject_generated_h
#error "HoudiniGeoPartObject.generated.h already included, missing '#pragma once' in HoudiniGeoPartObject.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniGeoPartObject_generated_h

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_273_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniGeoPartObject>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniMeshSocket>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniCurveInfo>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniVolumeInfo>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniPartInfo>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniGeoInfo>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<struct FHoudiniObjectInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h


#define FOREACH_ENUM_EHOUDINICURVEMETHOD(op) \
	op(EHoudiniCurveMethod::Invalid) \
	op(EHoudiniCurveMethod::CVs) \
	op(EHoudiniCurveMethod::Breakpoints) \
	op(EHoudiniCurveMethod::Freehand) 

enum class EHoudiniCurveMethod : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveMethod>();

#define FOREACH_ENUM_EHOUDINICURVETYPE(op) \
	op(EHoudiniCurveType::Invalid) \
	op(EHoudiniCurveType::Polygon) \
	op(EHoudiniCurveType::Nurbs) \
	op(EHoudiniCurveType::Bezier) \
	op(EHoudiniCurveType::Points) 

enum class EHoudiniCurveType : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>();

#define FOREACH_ENUM_EHOUDINIINSTANCERTYPE(op) \
	op(EHoudiniInstancerType::Invalid) \
	op(EHoudiniInstancerType::ObjectInstancer) \
	op(EHoudiniInstancerType::PackedPrimitive) \
	op(EHoudiniInstancerType::AttributeInstancer) \
	op(EHoudiniInstancerType::OldSchoolAttributeInstancer) 

enum class EHoudiniInstancerType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInstancerType>();

#define FOREACH_ENUM_EHOUDINIPARTTYPE(op) \
	op(EHoudiniPartType::Invalid) \
	op(EHoudiniPartType::Mesh) \
	op(EHoudiniPartType::Instancer) \
	op(EHoudiniPartType::Curve) \
	op(EHoudiniPartType::Volume) 

enum class EHoudiniPartType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniPartType>();

#define FOREACH_ENUM_EHOUDINIGEOTYPE(op) \
	op(EHoudiniGeoType::Invalid) \
	op(EHoudiniGeoType::Default) \
	op(EHoudiniGeoType::Intermediate) \
	op(EHoudiniGeoType::Input) \
	op(EHoudiniGeoType::Curve) 

enum class EHoudiniGeoType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniGeoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

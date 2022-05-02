// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHoudiniPublicAPIAssetWrapper;
enum class EHoudiniProxyRefineResult : uint8;
class UHoudiniAssetComponent;
class UHoudiniPDGAssetLink;
class UTOPNetwork;
enum class EHoudiniAssetState : uint8;
enum class EPDGBakePackageReplaceModeOption : uint8;
enum class EPDGBakeSelectionOption : uint8;
enum class EHoudiniEngineBakeOption : uint8;
enum class EHoudiniProxyRefineRequestResult : uint8;
struct FHoudiniPublicAPIOutputObjectIdentifier;
enum class EHoudiniLandscapeOutputBakeType : uint8;
class UObject;
enum class EHoudiniOutputType : uint8;
 class UHoudiniPublicAPIInput;
class UHoudiniPublicAPIInput;
 struct FHoudiniParameterTuple;
struct FHoudiniPublicAPIColorRampPoint;
struct FLinearColor;
enum class EHoudiniPublicAPIRampInterpolationType : uint8;
struct FHoudiniPublicAPIFloatRampPoint;
struct FDirectoryPath;
class AHoudiniAssetActor;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIAssetWrapper_generated_h
#error "HoudiniPublicAPIAssetWrapper.generated.h already included, missing '#pragma once' in HoudiniPublicAPIAssetWrapper.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIAssetWrapper_generated_h

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniParameterTuple_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniParameterTuple>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPublicAPIColorRampPoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FHoudiniPublicAPIRampPoint Super;


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniPublicAPIColorRampPoint>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPublicAPIFloatRampPoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FHoudiniPublicAPIRampPoint Super;


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniPublicAPIFloatRampPoint>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPublicAPIRampPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOUDINIENGINEEDITOR_API UScriptStruct* StaticStruct<struct FHoudiniPublicAPIRampPoint>();

#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_251_DELEGATE \
struct HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetProxyMeshesRefinedDelegate_Parms \
{ \
	const UHoudiniPublicAPIAssetWrapper* InAssetWrapper; \
	EHoudiniProxyRefineResult InResult; \
}; \
static inline void FOnHoudiniAssetProxyMeshesRefinedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHoudiniAssetProxyMeshesRefinedDelegate, const UHoudiniPublicAPIAssetWrapper* InAssetWrapper, const EHoudiniProxyRefineResult InResult) \
{ \
	HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetProxyMeshesRefinedDelegate_Parms Parms; \
	Parms.InAssetWrapper=InAssetWrapper; \
	Parms.InResult=InResult; \
	OnHoudiniAssetProxyMeshesRefinedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_250_DELEGATE \
struct HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostBake_Parms \
{ \
	UHoudiniPublicAPIAssetWrapper* InAssetWrapper; \
	bool bInBakeSuccess; \
}; \
static inline void FOnHoudiniAssetPostBake_DelegateWrapper(const FMulticastScriptDelegate& OnHoudiniAssetPostBake, UHoudiniPublicAPIAssetWrapper* InAssetWrapper, bool bInBakeSuccess) \
{ \
	HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostBake_Parms Parms; \
	Parms.InAssetWrapper=InAssetWrapper; \
	Parms.bInBakeSuccess=bInBakeSuccess ? true : false; \
	OnHoudiniAssetPostBake.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_249_DELEGATE \
struct HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostCook_Parms \
{ \
	UHoudiniPublicAPIAssetWrapper* InAssetWrapper; \
	bool bInCookSuccess; \
}; \
static inline void FOnHoudiniAssetPostCook_DelegateWrapper(const FMulticastScriptDelegate& OnHoudiniAssetPostCook, UHoudiniPublicAPIAssetWrapper* InAssetWrapper, bool bInCookSuccess) \
{ \
	HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetPostCook_Parms Parms; \
	Parms.InAssetWrapper=InAssetWrapper; \
	Parms.bInCookSuccess=bInCookSuccess ? true : false; \
	OnHoudiniAssetPostCook.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_248_DELEGATE \
struct HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetStateChange_Parms \
{ \
	UHoudiniPublicAPIAssetWrapper* InAssetWrapper; \
}; \
static inline void FOnHoudiniAssetStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnHoudiniAssetStateChange, UHoudiniPublicAPIAssetWrapper* InAssetWrapper) \
{ \
	HoudiniPublicAPIAssetWrapper_eventOnHoudiniAssetStateChange_Parms Parms; \
	Parms.InAssetWrapper=InAssetWrapper; \
	OnHoudiniAssetStateChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_SPARSE_DATA
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_RPC_WRAPPERS \
	virtual void ClearHoudiniAssetObject_Implementation(); \
	virtual bool GetPDGBakingReplacementMode_Implementation(EPDGBakePackageReplaceModeOption& OutBakingReplacementMode) const; \
	virtual bool SetPDGBakingReplacementMode_Implementation(const EPDGBakePackageReplaceModeOption InBakingReplacementMode); \
	virtual bool GetPDGRecenterBakedActors_Implementation() const; \
	virtual bool SetPDGRecenterBakedActors_Implementation(bool bInRecenterBakedActors); \
	virtual bool GetPDGBakeSelection_Implementation(EPDGBakeSelectionOption& OutBakeSelection); \
	virtual bool SetPDGBakeSelection_Implementation(const EPDGBakeSelectionOption InBakeSelection); \
	virtual bool GetPDGBakeMethod_Implementation(EHoudiniEngineBakeOption& OutBakeMethod); \
	virtual bool SetPDGBakeMethod_Implementation(const EHoudiniEngineBakeOption InBakeMethod); \
	virtual bool IsPDGAutoBakeEnabled_Implementation() const; \
	virtual bool SetPDGAutoBakeEnabled_Implementation(bool bInAutoBakeEnabled); \
	virtual bool PDGBakeAllOutputsWithSettings_Implementation(const EHoudiniEngineBakeOption InBakeOption, const EPDGBakeSelectionOption InBakeSelection, const EPDGBakePackageReplaceModeOption InBakeReplacementMode, bool bInRecenterBakedActors); \
	virtual bool PDGBakeAllOutputs_Implementation(); \
	virtual bool PDGCookNode_Implementation(const FString& InNetworkRelativePath, const FString& InNodeRelativePath); \
	virtual bool PDGCookOutputsForNetwork_Implementation(const FString& InNetworkRelativePath); \
	virtual bool PDGDirtyNode_Implementation(const FString& InNetworkRelativePath, const FString& InNodeRelativePath); \
	virtual bool PDGDirtyNetwork_Implementation(const FString& InNetworkRelativePath); \
	virtual bool PDGDirtyAllNetworks_Implementation(); \
	virtual bool GetPDGTOPNodePaths_Implementation(const FString& InNetworkRelativePath, TArray<FString>& OutTOPNodePaths) const; \
	virtual bool GetPDGTOPNetworkPaths_Implementation(TArray<FString>& OutTOPNetworkPaths) const; \
	virtual bool HasPDGAssetLink_Implementation() const; \
	virtual EHoudiniProxyRefineRequestResult RefineAllCurrentProxyOutputs_Implementation(bool bInSilent); \
	virtual bool IsOutputCurrentProxyAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual bool HasAnyCurrentProxyOutputAt_Implementation(const int32 InIndex) const; \
	virtual bool HasAnyCurrentProxyOutput_Implementation() const; \
	virtual bool BakeOutputObjectAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, const FName InBakeName, const EHoudiniLandscapeOutputBakeType InLandscapeBakeType); \
	virtual bool SetOutputBakeNameFallbackAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, const FString& InBakeName); \
	virtual bool GetOutputBakeNameFallbackAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, FString& OutBakeName) const; \
	virtual UObject* GetOutputComponentAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual UObject* GetOutputObjectAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual bool GetOutputIdentifiersAt_Implementation(const int32 InIndex, TArray<FHoudiniPublicAPIOutputObjectIdentifier>& OutIdentifiers) const; \
	virtual EHoudiniOutputType GetOutputTypeAt_Implementation(const int32 InIndex) const; \
	virtual int32 GetNumOutputs_Implementation() const; \
	virtual bool GetInputParameters_Implementation(TMap<FName,UHoudiniPublicAPIInput*>& OutInputs); \
	virtual bool SetInputParameters_Implementation(TMap<FName,UHoudiniPublicAPIInput*> const& InInputs); \
	virtual bool GetInputParameter_Implementation(FName const& InParameterName, UHoudiniPublicAPIInput*& OutInput); \
	virtual bool SetInputParameter_Implementation(FName const& InParameterName, const UHoudiniPublicAPIInput* InInput); \
	virtual bool GetInputsAtIndices_Implementation(TMap<int32,UHoudiniPublicAPIInput*>& OutInputs); \
	virtual bool SetInputsAtIndices_Implementation(TMap<int32,UHoudiniPublicAPIInput*> const& InInputs); \
	virtual bool GetInputAtIndex_Implementation(const int32 InNodeInputIndex, UHoudiniPublicAPIInput*& OutInput); \
	virtual bool SetInputAtIndex_Implementation(const int32 InNodeInputIndex, const UHoudiniPublicAPIInput* InInput); \
	virtual int32 GetNumNodeInputs_Implementation() const; \
	virtual UHoudiniPublicAPIInput* CreateEmptyInput_Implementation(TSubclassOf<UHoudiniPublicAPIInput>  InInputClass); \
	virtual bool SetParameterTuples_Implementation(TMap<FName,FHoudiniParameterTuple> const& InParameterTuples); \
	virtual bool GetParameterTuples_Implementation(TMap<FName,FHoudiniParameterTuple>& OutParameterTuples) const; \
	virtual bool TriggerButtonParameter_Implementation(FName InButtonParameterName); \
	virtual bool GetColorRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIColorRampPoint>& OutRampPoints) const; \
	virtual bool SetColorRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIColorRampPoint> const& InRampPoints, bool bInMarkChanged); \
	virtual bool GetColorRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, float& OutPointPosition, FLinearColor& OutPointValue, EHoudiniPublicAPIRampInterpolationType& OutInterpolationType) const; \
	virtual bool SetColorRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, const float InPointPosition, FLinearColor const& InPointValue, const EHoudiniPublicAPIRampInterpolationType InInterpolationType, bool bInMarkChanged); \
	virtual bool GetFloatRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIFloatRampPoint>& OutRampPoints) const; \
	virtual bool SetFloatRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIFloatRampPoint> const& InRampPoints, bool bInMarkChanged); \
	virtual bool GetFloatRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, float& OutPointPosition, float& OutPointValue, EHoudiniPublicAPIRampInterpolationType& OutInterpolationType) const; \
	virtual bool SetFloatRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, const float InPointPosition, const float InPointValue, const EHoudiniPublicAPIRampInterpolationType InInterpolationType, bool bInMarkChanged); \
	virtual bool GetRampParameterNumPoints_Implementation(FName InParameterTupleName, int32& OutNumPoints) const; \
	virtual bool SetRampParameterNumPoints_Implementation(FName InParameterTupleName, const int32 InNumPoints) const; \
	virtual bool GetAssetRefParameterValue_Implementation(FName InParameterTupleName, UObject*& OutValue, int32 InAtIndex) const; \
	virtual bool SetAssetRefParameterValue_Implementation(FName InParameterTupleName, UObject* InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetStringParameterValue_Implementation(FName InParameterTupleName, FString& OutValue, int32 InAtIndex) const; \
	virtual bool SetStringParameterValue_Implementation(FName InParameterTupleName, const FString& InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetBoolParameterValue_Implementation(FName InParameterTupleName, bool& OutValue, int32 InAtIndex) const; \
	virtual bool SetBoolParameterValue_Implementation(FName InParameterTupleName, bool InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetIntParameterValue_Implementation(FName InParameterTupleName, int32& OutValue, int32 InAtIndex) const; \
	virtual bool SetIntParameterValue_Implementation(FName InParameterTupleName, int32 InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetColorParameterValue_Implementation(FName InParameterTupleName, FLinearColor& OutValue) const; \
	virtual bool SetColorParameterValue_Implementation(FName InParameterTupleName, FLinearColor const& InValue, bool bInMarkChanged); \
	virtual bool GetFloatParameterValue_Implementation(FName InParameterTupleName, float& OutValue, int32 InAtIndex) const; \
	virtual bool SetFloatParameterValue_Implementation(FName InParameterTupleName, float InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetReplacePreviousBake_Implementation() const; \
	virtual bool SetReplacePreviousBake_Implementation(bool bInReplacePreviousBake); \
	virtual bool GetRecenterBakedActors_Implementation() const; \
	virtual bool SetRecenterBakedActors_Implementation(bool bInRecenterBakedActors); \
	virtual bool GetRemoveOutputAfterBake_Implementation() const; \
	virtual bool SetRemoveOutputAfterBake_Implementation(bool bInRemoveOutputAfterBake); \
	virtual bool GetBakeMethod_Implementation(EHoudiniEngineBakeOption& OutBakeMethod); \
	virtual bool SetBakeMethod_Implementation(const EHoudiniEngineBakeOption InBakeMethod); \
	virtual bool IsAutoBakeEnabled_Implementation() const; \
	virtual bool SetAutoBakeEnabled_Implementation(bool bInAutoBakeEnabled); \
	virtual bool BakeAllOutputsWithSettings_Implementation(EHoudiniEngineBakeOption InBakeOption, bool bInReplacePreviousBake, bool bInRemoveTempOutputsOnSuccess, bool bInRecenterBakedActors); \
	virtual bool BakeAllOutputs_Implementation(); \
	virtual bool IsAutoCookingEnabled_Implementation() const; \
	virtual bool SetAutoCookingEnabled_Implementation(bool bInSetEnabled); \
	virtual bool Recook_Implementation(); \
	virtual bool Rebuild_Implementation(); \
	virtual bool DeleteInstantiatedAsset_Implementation(); \
	virtual bool SetBakeFolder_Implementation(FDirectoryPath const& InDirectoryPath) const; \
	virtual bool GetBakeFolder_Implementation(FDirectoryPath& OutDirectoryPath) const; \
	virtual bool SetTemporaryCookFolder_Implementation(FDirectoryPath const& InDirectoryPath) const; \
	virtual bool GetTemporaryCookFolder_Implementation(FDirectoryPath& OutDirectoryPath) const; \
	virtual UHoudiniAssetComponent* GetHoudiniAssetComponent_Implementation() const; \
	virtual AHoudiniAssetActor* GetHoudiniAssetActor_Implementation() const; \
	virtual UObject* GetHoudiniAssetObject_Implementation() const; \
	virtual bool WrapHoudiniAssetObject_Implementation(UObject* InHoudiniAssetObjectToWrap); \
 \
	DECLARE_FUNCTION(execHandleOnHoudiniProxyMeshesRefinedGlobal); \
	DECLARE_FUNCTION(execHandleOnHoudiniPDGAssetLinkPostBake); \
	DECLARE_FUNCTION(execHandleOnHoudiniPDGAssetLinkTOPNetPostCook); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentPostBake); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentPostCook); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentStateChange); \
	DECLARE_FUNCTION(execBindToPDGAssetLink); \
	DECLARE_FUNCTION(execClearHoudiniAssetObject); \
	DECLARE_FUNCTION(execGetPDGBakingReplacementMode); \
	DECLARE_FUNCTION(execSetPDGBakingReplacementMode); \
	DECLARE_FUNCTION(execGetPDGRecenterBakedActors); \
	DECLARE_FUNCTION(execSetPDGRecenterBakedActors); \
	DECLARE_FUNCTION(execGetPDGBakeSelection); \
	DECLARE_FUNCTION(execSetPDGBakeSelection); \
	DECLARE_FUNCTION(execGetPDGBakeMethod); \
	DECLARE_FUNCTION(execSetPDGBakeMethod); \
	DECLARE_FUNCTION(execIsPDGAutoBakeEnabled); \
	DECLARE_FUNCTION(execSetPDGAutoBakeEnabled); \
	DECLARE_FUNCTION(execPDGBakeAllOutputsWithSettings); \
	DECLARE_FUNCTION(execPDGBakeAllOutputs); \
	DECLARE_FUNCTION(execPDGCookNode); \
	DECLARE_FUNCTION(execPDGCookOutputsForNetwork); \
	DECLARE_FUNCTION(execPDGDirtyNode); \
	DECLARE_FUNCTION(execPDGDirtyNetwork); \
	DECLARE_FUNCTION(execPDGDirtyAllNetworks); \
	DECLARE_FUNCTION(execGetPDGTOPNodePaths); \
	DECLARE_FUNCTION(execGetPDGTOPNetworkPaths); \
	DECLARE_FUNCTION(execHasPDGAssetLink); \
	DECLARE_FUNCTION(execRefineAllCurrentProxyOutputs); \
	DECLARE_FUNCTION(execIsOutputCurrentProxyAt); \
	DECLARE_FUNCTION(execHasAnyCurrentProxyOutputAt); \
	DECLARE_FUNCTION(execHasAnyCurrentProxyOutput); \
	DECLARE_FUNCTION(execBakeOutputObjectAt); \
	DECLARE_FUNCTION(execSetOutputBakeNameFallbackAt); \
	DECLARE_FUNCTION(execGetOutputBakeNameFallbackAt); \
	DECLARE_FUNCTION(execGetOutputComponentAt); \
	DECLARE_FUNCTION(execGetOutputObjectAt); \
	DECLARE_FUNCTION(execGetOutputIdentifiersAt); \
	DECLARE_FUNCTION(execGetOutputTypeAt); \
	DECLARE_FUNCTION(execGetNumOutputs); \
	DECLARE_FUNCTION(execGetInputParameters); \
	DECLARE_FUNCTION(execSetInputParameters); \
	DECLARE_FUNCTION(execGetInputParameter); \
	DECLARE_FUNCTION(execSetInputParameter); \
	DECLARE_FUNCTION(execGetInputsAtIndices); \
	DECLARE_FUNCTION(execSetInputsAtIndices); \
	DECLARE_FUNCTION(execGetInputAtIndex); \
	DECLARE_FUNCTION(execSetInputAtIndex); \
	DECLARE_FUNCTION(execGetNumNodeInputs); \
	DECLARE_FUNCTION(execCreateEmptyInput); \
	DECLARE_FUNCTION(execSetParameterTuples); \
	DECLARE_FUNCTION(execGetParameterTuples); \
	DECLARE_FUNCTION(execTriggerButtonParameter); \
	DECLARE_FUNCTION(execGetColorRampParameterPoints); \
	DECLARE_FUNCTION(execSetColorRampParameterPoints); \
	DECLARE_FUNCTION(execGetColorRampParameterPointValue); \
	DECLARE_FUNCTION(execSetColorRampParameterPointValue); \
	DECLARE_FUNCTION(execGetFloatRampParameterPoints); \
	DECLARE_FUNCTION(execSetFloatRampParameterPoints); \
	DECLARE_FUNCTION(execGetFloatRampParameterPointValue); \
	DECLARE_FUNCTION(execSetFloatRampParameterPointValue); \
	DECLARE_FUNCTION(execGetRampParameterNumPoints); \
	DECLARE_FUNCTION(execSetRampParameterNumPoints); \
	DECLARE_FUNCTION(execGetAssetRefParameterValue); \
	DECLARE_FUNCTION(execSetAssetRefParameterValue); \
	DECLARE_FUNCTION(execGetStringParameterValue); \
	DECLARE_FUNCTION(execSetStringParameterValue); \
	DECLARE_FUNCTION(execGetBoolParameterValue); \
	DECLARE_FUNCTION(execSetBoolParameterValue); \
	DECLARE_FUNCTION(execGetIntParameterValue); \
	DECLARE_FUNCTION(execSetIntParameterValue); \
	DECLARE_FUNCTION(execGetColorParameterValue); \
	DECLARE_FUNCTION(execSetColorParameterValue); \
	DECLARE_FUNCTION(execGetFloatParameterValue); \
	DECLARE_FUNCTION(execSetFloatParameterValue); \
	DECLARE_FUNCTION(execGetReplacePreviousBake); \
	DECLARE_FUNCTION(execSetReplacePreviousBake); \
	DECLARE_FUNCTION(execGetRecenterBakedActors); \
	DECLARE_FUNCTION(execSetRecenterBakedActors); \
	DECLARE_FUNCTION(execGetRemoveOutputAfterBake); \
	DECLARE_FUNCTION(execSetRemoveOutputAfterBake); \
	DECLARE_FUNCTION(execGetBakeMethod); \
	DECLARE_FUNCTION(execSetBakeMethod); \
	DECLARE_FUNCTION(execIsAutoBakeEnabled); \
	DECLARE_FUNCTION(execSetAutoBakeEnabled); \
	DECLARE_FUNCTION(execBakeAllOutputsWithSettings); \
	DECLARE_FUNCTION(execBakeAllOutputs); \
	DECLARE_FUNCTION(execIsAutoCookingEnabled); \
	DECLARE_FUNCTION(execSetAutoCookingEnabled); \
	DECLARE_FUNCTION(execRecook); \
	DECLARE_FUNCTION(execRebuild); \
	DECLARE_FUNCTION(execDeleteInstantiatedAsset); \
	DECLARE_FUNCTION(execSetBakeFolder); \
	DECLARE_FUNCTION(execGetBakeFolder); \
	DECLARE_FUNCTION(execSetTemporaryCookFolder); \
	DECLARE_FUNCTION(execGetTemporaryCookFolder); \
	DECLARE_FUNCTION(execGetHoudiniAssetComponent); \
	DECLARE_FUNCTION(execGetHoudiniAssetActor); \
	DECLARE_FUNCTION(execGetHoudiniAssetObject); \
	DECLARE_FUNCTION(execWrapHoudiniAssetObject); \
	DECLARE_FUNCTION(execCanWrapHoudiniObject); \
	DECLARE_FUNCTION(execCreateEmptyWrapper); \
	DECLARE_FUNCTION(execCreateWrapper);


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearHoudiniAssetObject_Implementation(); \
	virtual bool GetPDGBakingReplacementMode_Implementation(EPDGBakePackageReplaceModeOption& OutBakingReplacementMode) const; \
	virtual bool SetPDGBakingReplacementMode_Implementation(const EPDGBakePackageReplaceModeOption InBakingReplacementMode); \
	virtual bool GetPDGRecenterBakedActors_Implementation() const; \
	virtual bool SetPDGRecenterBakedActors_Implementation(bool bInRecenterBakedActors); \
	virtual bool GetPDGBakeSelection_Implementation(EPDGBakeSelectionOption& OutBakeSelection); \
	virtual bool SetPDGBakeSelection_Implementation(const EPDGBakeSelectionOption InBakeSelection); \
	virtual bool GetPDGBakeMethod_Implementation(EHoudiniEngineBakeOption& OutBakeMethod); \
	virtual bool SetPDGBakeMethod_Implementation(const EHoudiniEngineBakeOption InBakeMethod); \
	virtual bool IsPDGAutoBakeEnabled_Implementation() const; \
	virtual bool SetPDGAutoBakeEnabled_Implementation(bool bInAutoBakeEnabled); \
	virtual bool PDGBakeAllOutputsWithSettings_Implementation(const EHoudiniEngineBakeOption InBakeOption, const EPDGBakeSelectionOption InBakeSelection, const EPDGBakePackageReplaceModeOption InBakeReplacementMode, bool bInRecenterBakedActors); \
	virtual bool PDGBakeAllOutputs_Implementation(); \
	virtual bool PDGCookNode_Implementation(const FString& InNetworkRelativePath, const FString& InNodeRelativePath); \
	virtual bool PDGCookOutputsForNetwork_Implementation(const FString& InNetworkRelativePath); \
	virtual bool PDGDirtyNode_Implementation(const FString& InNetworkRelativePath, const FString& InNodeRelativePath); \
	virtual bool PDGDirtyNetwork_Implementation(const FString& InNetworkRelativePath); \
	virtual bool PDGDirtyAllNetworks_Implementation(); \
	virtual bool GetPDGTOPNodePaths_Implementation(const FString& InNetworkRelativePath, TArray<FString>& OutTOPNodePaths) const; \
	virtual bool GetPDGTOPNetworkPaths_Implementation(TArray<FString>& OutTOPNetworkPaths) const; \
	virtual bool HasPDGAssetLink_Implementation() const; \
	virtual EHoudiniProxyRefineRequestResult RefineAllCurrentProxyOutputs_Implementation(bool bInSilent); \
	virtual bool IsOutputCurrentProxyAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual bool HasAnyCurrentProxyOutputAt_Implementation(const int32 InIndex) const; \
	virtual bool HasAnyCurrentProxyOutput_Implementation() const; \
	virtual bool BakeOutputObjectAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, const FName InBakeName, const EHoudiniLandscapeOutputBakeType InLandscapeBakeType); \
	virtual bool SetOutputBakeNameFallbackAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, const FString& InBakeName); \
	virtual bool GetOutputBakeNameFallbackAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier, FString& OutBakeName) const; \
	virtual UObject* GetOutputComponentAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual UObject* GetOutputObjectAt_Implementation(const int32 InIndex, FHoudiniPublicAPIOutputObjectIdentifier const& InIdentifier) const; \
	virtual bool GetOutputIdentifiersAt_Implementation(const int32 InIndex, TArray<FHoudiniPublicAPIOutputObjectIdentifier>& OutIdentifiers) const; \
	virtual EHoudiniOutputType GetOutputTypeAt_Implementation(const int32 InIndex) const; \
	virtual int32 GetNumOutputs_Implementation() const; \
	virtual bool GetInputParameters_Implementation(TMap<FName,UHoudiniPublicAPIInput*>& OutInputs); \
	virtual bool SetInputParameters_Implementation(TMap<FName,UHoudiniPublicAPIInput*> const& InInputs); \
	virtual bool GetInputParameter_Implementation(FName const& InParameterName, UHoudiniPublicAPIInput*& OutInput); \
	virtual bool SetInputParameter_Implementation(FName const& InParameterName, const UHoudiniPublicAPIInput* InInput); \
	virtual bool GetInputsAtIndices_Implementation(TMap<int32,UHoudiniPublicAPIInput*>& OutInputs); \
	virtual bool SetInputsAtIndices_Implementation(TMap<int32,UHoudiniPublicAPIInput*> const& InInputs); \
	virtual bool GetInputAtIndex_Implementation(const int32 InNodeInputIndex, UHoudiniPublicAPIInput*& OutInput); \
	virtual bool SetInputAtIndex_Implementation(const int32 InNodeInputIndex, const UHoudiniPublicAPIInput* InInput); \
	virtual int32 GetNumNodeInputs_Implementation() const; \
	virtual UHoudiniPublicAPIInput* CreateEmptyInput_Implementation(TSubclassOf<UHoudiniPublicAPIInput>  InInputClass); \
	virtual bool SetParameterTuples_Implementation(TMap<FName,FHoudiniParameterTuple> const& InParameterTuples); \
	virtual bool GetParameterTuples_Implementation(TMap<FName,FHoudiniParameterTuple>& OutParameterTuples) const; \
	virtual bool TriggerButtonParameter_Implementation(FName InButtonParameterName); \
	virtual bool GetColorRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIColorRampPoint>& OutRampPoints) const; \
	virtual bool SetColorRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIColorRampPoint> const& InRampPoints, bool bInMarkChanged); \
	virtual bool GetColorRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, float& OutPointPosition, FLinearColor& OutPointValue, EHoudiniPublicAPIRampInterpolationType& OutInterpolationType) const; \
	virtual bool SetColorRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, const float InPointPosition, FLinearColor const& InPointValue, const EHoudiniPublicAPIRampInterpolationType InInterpolationType, bool bInMarkChanged); \
	virtual bool GetFloatRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIFloatRampPoint>& OutRampPoints) const; \
	virtual bool SetFloatRampParameterPoints_Implementation(FName InParameterTupleName, TArray<FHoudiniPublicAPIFloatRampPoint> const& InRampPoints, bool bInMarkChanged); \
	virtual bool GetFloatRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, float& OutPointPosition, float& OutPointValue, EHoudiniPublicAPIRampInterpolationType& OutInterpolationType) const; \
	virtual bool SetFloatRampParameterPointValue_Implementation(FName InParameterTupleName, const int32 InPointIndex, const float InPointPosition, const float InPointValue, const EHoudiniPublicAPIRampInterpolationType InInterpolationType, bool bInMarkChanged); \
	virtual bool GetRampParameterNumPoints_Implementation(FName InParameterTupleName, int32& OutNumPoints) const; \
	virtual bool SetRampParameterNumPoints_Implementation(FName InParameterTupleName, const int32 InNumPoints) const; \
	virtual bool GetAssetRefParameterValue_Implementation(FName InParameterTupleName, UObject*& OutValue, int32 InAtIndex) const; \
	virtual bool SetAssetRefParameterValue_Implementation(FName InParameterTupleName, UObject* InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetStringParameterValue_Implementation(FName InParameterTupleName, FString& OutValue, int32 InAtIndex) const; \
	virtual bool SetStringParameterValue_Implementation(FName InParameterTupleName, const FString& InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetBoolParameterValue_Implementation(FName InParameterTupleName, bool& OutValue, int32 InAtIndex) const; \
	virtual bool SetBoolParameterValue_Implementation(FName InParameterTupleName, bool InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetIntParameterValue_Implementation(FName InParameterTupleName, int32& OutValue, int32 InAtIndex) const; \
	virtual bool SetIntParameterValue_Implementation(FName InParameterTupleName, int32 InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetColorParameterValue_Implementation(FName InParameterTupleName, FLinearColor& OutValue) const; \
	virtual bool SetColorParameterValue_Implementation(FName InParameterTupleName, FLinearColor const& InValue, bool bInMarkChanged); \
	virtual bool GetFloatParameterValue_Implementation(FName InParameterTupleName, float& OutValue, int32 InAtIndex) const; \
	virtual bool SetFloatParameterValue_Implementation(FName InParameterTupleName, float InValue, int32 InAtIndex, bool bInMarkChanged); \
	virtual bool GetReplacePreviousBake_Implementation() const; \
	virtual bool SetReplacePreviousBake_Implementation(bool bInReplacePreviousBake); \
	virtual bool GetRecenterBakedActors_Implementation() const; \
	virtual bool SetRecenterBakedActors_Implementation(bool bInRecenterBakedActors); \
	virtual bool GetRemoveOutputAfterBake_Implementation() const; \
	virtual bool SetRemoveOutputAfterBake_Implementation(bool bInRemoveOutputAfterBake); \
	virtual bool GetBakeMethod_Implementation(EHoudiniEngineBakeOption& OutBakeMethod); \
	virtual bool SetBakeMethod_Implementation(const EHoudiniEngineBakeOption InBakeMethod); \
	virtual bool IsAutoBakeEnabled_Implementation() const; \
	virtual bool SetAutoBakeEnabled_Implementation(bool bInAutoBakeEnabled); \
	virtual bool BakeAllOutputsWithSettings_Implementation(EHoudiniEngineBakeOption InBakeOption, bool bInReplacePreviousBake, bool bInRemoveTempOutputsOnSuccess, bool bInRecenterBakedActors); \
	virtual bool BakeAllOutputs_Implementation(); \
	virtual bool IsAutoCookingEnabled_Implementation() const; \
	virtual bool SetAutoCookingEnabled_Implementation(bool bInSetEnabled); \
	virtual bool Recook_Implementation(); \
	virtual bool Rebuild_Implementation(); \
	virtual bool DeleteInstantiatedAsset_Implementation(); \
	virtual bool SetBakeFolder_Implementation(FDirectoryPath const& InDirectoryPath) const; \
	virtual bool GetBakeFolder_Implementation(FDirectoryPath& OutDirectoryPath) const; \
	virtual bool SetTemporaryCookFolder_Implementation(FDirectoryPath const& InDirectoryPath) const; \
	virtual bool GetTemporaryCookFolder_Implementation(FDirectoryPath& OutDirectoryPath) const; \
	virtual bool WrapHoudiniAssetObject_Implementation(UObject* InHoudiniAssetObjectToWrap); \
 \
	DECLARE_FUNCTION(execHandleOnHoudiniProxyMeshesRefinedGlobal); \
	DECLARE_FUNCTION(execHandleOnHoudiniPDGAssetLinkPostBake); \
	DECLARE_FUNCTION(execHandleOnHoudiniPDGAssetLinkTOPNetPostCook); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentPostBake); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentPostCook); \
	DECLARE_FUNCTION(execHandleOnHoudiniAssetComponentStateChange); \
	DECLARE_FUNCTION(execBindToPDGAssetLink); \
	DECLARE_FUNCTION(execClearHoudiniAssetObject); \
	DECLARE_FUNCTION(execGetPDGBakingReplacementMode); \
	DECLARE_FUNCTION(execSetPDGBakingReplacementMode); \
	DECLARE_FUNCTION(execGetPDGRecenterBakedActors); \
	DECLARE_FUNCTION(execSetPDGRecenterBakedActors); \
	DECLARE_FUNCTION(execGetPDGBakeSelection); \
	DECLARE_FUNCTION(execSetPDGBakeSelection); \
	DECLARE_FUNCTION(execGetPDGBakeMethod); \
	DECLARE_FUNCTION(execSetPDGBakeMethod); \
	DECLARE_FUNCTION(execIsPDGAutoBakeEnabled); \
	DECLARE_FUNCTION(execSetPDGAutoBakeEnabled); \
	DECLARE_FUNCTION(execPDGBakeAllOutputsWithSettings); \
	DECLARE_FUNCTION(execPDGBakeAllOutputs); \
	DECLARE_FUNCTION(execPDGCookNode); \
	DECLARE_FUNCTION(execPDGCookOutputsForNetwork); \
	DECLARE_FUNCTION(execPDGDirtyNode); \
	DECLARE_FUNCTION(execPDGDirtyNetwork); \
	DECLARE_FUNCTION(execPDGDirtyAllNetworks); \
	DECLARE_FUNCTION(execGetPDGTOPNodePaths); \
	DECLARE_FUNCTION(execGetPDGTOPNetworkPaths); \
	DECLARE_FUNCTION(execHasPDGAssetLink); \
	DECLARE_FUNCTION(execRefineAllCurrentProxyOutputs); \
	DECLARE_FUNCTION(execIsOutputCurrentProxyAt); \
	DECLARE_FUNCTION(execHasAnyCurrentProxyOutputAt); \
	DECLARE_FUNCTION(execHasAnyCurrentProxyOutput); \
	DECLARE_FUNCTION(execBakeOutputObjectAt); \
	DECLARE_FUNCTION(execSetOutputBakeNameFallbackAt); \
	DECLARE_FUNCTION(execGetOutputBakeNameFallbackAt); \
	DECLARE_FUNCTION(execGetOutputComponentAt); \
	DECLARE_FUNCTION(execGetOutputObjectAt); \
	DECLARE_FUNCTION(execGetOutputIdentifiersAt); \
	DECLARE_FUNCTION(execGetOutputTypeAt); \
	DECLARE_FUNCTION(execGetNumOutputs); \
	DECLARE_FUNCTION(execGetInputParameters); \
	DECLARE_FUNCTION(execSetInputParameters); \
	DECLARE_FUNCTION(execGetInputParameter); \
	DECLARE_FUNCTION(execSetInputParameter); \
	DECLARE_FUNCTION(execGetInputsAtIndices); \
	DECLARE_FUNCTION(execSetInputsAtIndices); \
	DECLARE_FUNCTION(execGetInputAtIndex); \
	DECLARE_FUNCTION(execSetInputAtIndex); \
	DECLARE_FUNCTION(execGetNumNodeInputs); \
	DECLARE_FUNCTION(execCreateEmptyInput); \
	DECLARE_FUNCTION(execSetParameterTuples); \
	DECLARE_FUNCTION(execGetParameterTuples); \
	DECLARE_FUNCTION(execTriggerButtonParameter); \
	DECLARE_FUNCTION(execGetColorRampParameterPoints); \
	DECLARE_FUNCTION(execSetColorRampParameterPoints); \
	DECLARE_FUNCTION(execGetColorRampParameterPointValue); \
	DECLARE_FUNCTION(execSetColorRampParameterPointValue); \
	DECLARE_FUNCTION(execGetFloatRampParameterPoints); \
	DECLARE_FUNCTION(execSetFloatRampParameterPoints); \
	DECLARE_FUNCTION(execGetFloatRampParameterPointValue); \
	DECLARE_FUNCTION(execSetFloatRampParameterPointValue); \
	DECLARE_FUNCTION(execGetRampParameterNumPoints); \
	DECLARE_FUNCTION(execSetRampParameterNumPoints); \
	DECLARE_FUNCTION(execGetAssetRefParameterValue); \
	DECLARE_FUNCTION(execSetAssetRefParameterValue); \
	DECLARE_FUNCTION(execGetStringParameterValue); \
	DECLARE_FUNCTION(execSetStringParameterValue); \
	DECLARE_FUNCTION(execGetBoolParameterValue); \
	DECLARE_FUNCTION(execSetBoolParameterValue); \
	DECLARE_FUNCTION(execGetIntParameterValue); \
	DECLARE_FUNCTION(execSetIntParameterValue); \
	DECLARE_FUNCTION(execGetColorParameterValue); \
	DECLARE_FUNCTION(execSetColorParameterValue); \
	DECLARE_FUNCTION(execGetFloatParameterValue); \
	DECLARE_FUNCTION(execSetFloatParameterValue); \
	DECLARE_FUNCTION(execGetReplacePreviousBake); \
	DECLARE_FUNCTION(execSetReplacePreviousBake); \
	DECLARE_FUNCTION(execGetRecenterBakedActors); \
	DECLARE_FUNCTION(execSetRecenterBakedActors); \
	DECLARE_FUNCTION(execGetRemoveOutputAfterBake); \
	DECLARE_FUNCTION(execSetRemoveOutputAfterBake); \
	DECLARE_FUNCTION(execGetBakeMethod); \
	DECLARE_FUNCTION(execSetBakeMethod); \
	DECLARE_FUNCTION(execIsAutoBakeEnabled); \
	DECLARE_FUNCTION(execSetAutoBakeEnabled); \
	DECLARE_FUNCTION(execBakeAllOutputsWithSettings); \
	DECLARE_FUNCTION(execBakeAllOutputs); \
	DECLARE_FUNCTION(execIsAutoCookingEnabled); \
	DECLARE_FUNCTION(execSetAutoCookingEnabled); \
	DECLARE_FUNCTION(execRecook); \
	DECLARE_FUNCTION(execRebuild); \
	DECLARE_FUNCTION(execDeleteInstantiatedAsset); \
	DECLARE_FUNCTION(execSetBakeFolder); \
	DECLARE_FUNCTION(execGetBakeFolder); \
	DECLARE_FUNCTION(execSetTemporaryCookFolder); \
	DECLARE_FUNCTION(execGetTemporaryCookFolder); \
	DECLARE_FUNCTION(execGetHoudiniAssetComponent); \
	DECLARE_FUNCTION(execGetHoudiniAssetActor); \
	DECLARE_FUNCTION(execGetHoudiniAssetObject); \
	DECLARE_FUNCTION(execWrapHoudiniAssetObject); \
	DECLARE_FUNCTION(execCanWrapHoudiniObject); \
	DECLARE_FUNCTION(execCreateEmptyWrapper); \
	DECLARE_FUNCTION(execCreateWrapper);


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_EVENT_PARMS \
	struct HoudiniPublicAPIAssetWrapper_eventBakeAllOutputs_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventBakeAllOutputs_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms \
	{ \
		EHoudiniEngineBakeOption InBakeOption; \
		bool bInReplacePreviousBake; \
		bool bInRemoveTempOutputsOnSuccess; \
		bool bInRecenterBakedActors; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventBakeAllOutputsWithSettings_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms \
	{ \
		int32 InIndex; \
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier; \
		FName InBakeName; \
		EHoudiniLandscapeOutputBakeType InLandscapeBakeType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventBakeOutputObjectAt_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventCreateEmptyInput_Parms \
	{ \
		TSubclassOf<UHoudiniPublicAPIInput>  InInputClass; \
		UHoudiniPublicAPIInput* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventCreateEmptyInput_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventDeleteInstantiatedAsset_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventDeleteInstantiatedAsset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		UObject* OutValue; \
		int32 InAtIndex; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetAssetRefParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms \
	{ \
		FDirectoryPath OutDirectoryPath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetBakeFolder_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms \
	{ \
		EHoudiniEngineBakeOption OutBakeMethod; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetBakeMethod_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		bool OutValue; \
		int32 InAtIndex; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetBoolParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		FLinearColor OutValue; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetColorParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms \
	{ \
		FName InParameterTupleName; \
		TArray<FHoudiniPublicAPIColorRampPoint> OutRampPoints; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPoints_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms \
	{ \
		FName InParameterTupleName; \
		int32 InPointIndex; \
		float OutPointPosition; \
		FLinearColor OutPointValue; \
		EHoudiniPublicAPIRampInterpolationType OutInterpolationType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetColorRampParameterPointValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		float OutValue; \
		int32 InAtIndex; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetFloatParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms \
	{ \
		FName InParameterTupleName; \
		TArray<FHoudiniPublicAPIFloatRampPoint> OutRampPoints; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPoints_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms \
	{ \
		FName InParameterTupleName; \
		int32 InPointIndex; \
		float OutPointPosition; \
		float OutPointValue; \
		EHoudiniPublicAPIRampInterpolationType OutInterpolationType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetFloatRampParameterPointValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetActor_Parms \
	{ \
		AHoudiniAssetActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetActor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetComponent_Parms \
	{ \
		UHoudiniAssetComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetObject_Parms \
	{ \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetHoudiniAssetObject_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms \
	{ \
		int32 InNodeInputIndex; \
		UHoudiniPublicAPIInput* OutInput; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetInputAtIndex_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms \
	{ \
		FName InParameterName; \
		UHoudiniPublicAPIInput* OutInput; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetInputParameter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms \
	{ \
		TMap<FName,UHoudiniPublicAPIInput*> OutInputs; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetInputParameters_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms \
	{ \
		TMap<int32,UHoudiniPublicAPIInput*> OutInputs; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetInputsAtIndices_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		int32 OutValue; \
		int32 InAtIndex; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetIntParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetNumNodeInputs_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetNumNodeInputs_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetNumOutputs_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetNumOutputs_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms \
	{ \
		int32 InIndex; \
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier; \
		FString OutBakeName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetOutputBakeNameFallbackAt_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms \
	{ \
		int32 InIndex; \
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier; \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetOutputComponentAt_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms \
	{ \
		int32 InIndex; \
		TArray<FHoudiniPublicAPIOutputObjectIdentifier> OutIdentifiers; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetOutputIdentifiersAt_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms \
	{ \
		int32 InIndex; \
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier; \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetOutputObjectAt_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetOutputTypeAt_Parms \
	{ \
		int32 InIndex; \
		EHoudiniOutputType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetOutputTypeAt_Parms() \
			: ReturnValue((EHoudiniOutputType)0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms \
	{ \
		TMap<FName,FHoudiniParameterTuple> OutParameterTuples; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetParameterTuples_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms \
	{ \
		EHoudiniEngineBakeOption OutBakeMethod; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakeMethod_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms \
	{ \
		EPDGBakeSelectionOption OutBakeSelection; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakeSelection_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms \
	{ \
		EPDGBakePackageReplaceModeOption OutBakingReplacementMode; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetPDGBakingReplacementMode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGRecenterBakedActors_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetPDGRecenterBakedActors_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms \
	{ \
		TArray<FString> OutTOPNetworkPaths; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNetworkPaths_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms \
	{ \
		FString InNetworkRelativePath; \
		TArray<FString> OutTOPNodePaths; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetPDGTOPNodePaths_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms \
	{ \
		FName InParameterTupleName; \
		int32 OutNumPoints; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetRampParameterNumPoints_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetRecenterBakedActors_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetRecenterBakedActors_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetRemoveOutputAfterBake_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetRemoveOutputAfterBake_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetReplacePreviousBake_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetReplacePreviousBake_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		FString OutValue; \
		int32 InAtIndex; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetStringParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms \
	{ \
		FDirectoryPath OutDirectoryPath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventGetTemporaryCookFolder_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutput_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutput_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms \
	{ \
		int32 InIndex; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventHasAnyCurrentProxyOutputAt_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventHasPDGAssetLink_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventHasPDGAssetLink_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventIsAutoBakeEnabled_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventIsAutoBakeEnabled_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventIsAutoCookingEnabled_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventIsAutoCookingEnabled_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms \
	{ \
		int32 InIndex; \
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventIsOutputCurrentProxyAt_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventIsPDGAutoBakeEnabled_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventIsPDGAutoBakeEnabled_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputs_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputs_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms \
	{ \
		EHoudiniEngineBakeOption InBakeOption; \
		EPDGBakeSelectionOption InBakeSelection; \
		EPDGBakePackageReplaceModeOption InBakeReplacementMode; \
		bool bInRecenterBakedActors; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventPDGBakeAllOutputsWithSettings_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms \
	{ \
		FString InNetworkRelativePath; \
		FString InNodeRelativePath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventPDGCookNode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms \
	{ \
		FString InNetworkRelativePath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventPDGCookOutputsForNetwork_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventPDGDirtyAllNetworks_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyAllNetworks_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms \
	{ \
		FString InNetworkRelativePath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyNetwork_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms \
	{ \
		FString InNetworkRelativePath; \
		FString InNodeRelativePath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventPDGDirtyNode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventRebuild_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventRebuild_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventRecook_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventRecook_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms \
	{ \
		bool bInSilent; \
		EHoudiniProxyRefineRequestResult ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventRefineAllCurrentProxyOutputs_Parms() \
			: ReturnValue((EHoudiniProxyRefineRequestResult)0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		UObject* InValue; \
		int32 InAtIndex; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetAssetRefParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms \
	{ \
		bool bInAutoBakeEnabled; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetAutoBakeEnabled_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms \
	{ \
		bool bInSetEnabled; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetAutoCookingEnabled_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms \
	{ \
		FDirectoryPath InDirectoryPath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetBakeFolder_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms \
	{ \
		EHoudiniEngineBakeOption InBakeMethod; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetBakeMethod_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		bool InValue; \
		int32 InAtIndex; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetBoolParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		FLinearColor InValue; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetColorParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms \
	{ \
		FName InParameterTupleName; \
		TArray<FHoudiniPublicAPIColorRampPoint> InRampPoints; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPoints_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms \
	{ \
		FName InParameterTupleName; \
		int32 InPointIndex; \
		float InPointPosition; \
		FLinearColor InPointValue; \
		EHoudiniPublicAPIRampInterpolationType InInterpolationType; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetColorRampParameterPointValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		float InValue; \
		int32 InAtIndex; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetFloatParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms \
	{ \
		FName InParameterTupleName; \
		TArray<FHoudiniPublicAPIFloatRampPoint> InRampPoints; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPoints_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms \
	{ \
		FName InParameterTupleName; \
		int32 InPointIndex; \
		float InPointPosition; \
		float InPointValue; \
		EHoudiniPublicAPIRampInterpolationType InInterpolationType; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetFloatRampParameterPointValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms \
	{ \
		int32 InNodeInputIndex; \
		const UHoudiniPublicAPIInput* InInput; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetInputAtIndex_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms \
	{ \
		FName InParameterName; \
		const UHoudiniPublicAPIInput* InInput; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetInputParameter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms \
	{ \
		TMap<FName,UHoudiniPublicAPIInput*> InInputs; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetInputParameters_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms \
	{ \
		TMap<int32,UHoudiniPublicAPIInput*> InInputs; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetInputsAtIndices_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		int32 InValue; \
		int32 InAtIndex; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetIntParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms \
	{ \
		int32 InIndex; \
		FHoudiniPublicAPIOutputObjectIdentifier InIdentifier; \
		FString InBakeName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetOutputBakeNameFallbackAt_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms \
	{ \
		TMap<FName,FHoudiniParameterTuple> InParameterTuples; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetParameterTuples_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms \
	{ \
		bool bInAutoBakeEnabled; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetPDGAutoBakeEnabled_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms \
	{ \
		EHoudiniEngineBakeOption InBakeMethod; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakeMethod_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms \
	{ \
		EPDGBakeSelectionOption InBakeSelection; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakeSelection_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms \
	{ \
		EPDGBakePackageReplaceModeOption InBakingReplacementMode; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetPDGBakingReplacementMode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms \
	{ \
		bool bInRecenterBakedActors; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetPDGRecenterBakedActors_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms \
	{ \
		FName InParameterTupleName; \
		int32 InNumPoints; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetRampParameterNumPoints_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms \
	{ \
		bool bInRecenterBakedActors; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetRecenterBakedActors_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms \
	{ \
		bool bInRemoveOutputAfterBake; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetRemoveOutputAfterBake_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms \
	{ \
		bool bInReplacePreviousBake; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetReplacePreviousBake_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms \
	{ \
		FName InParameterTupleName; \
		FString InValue; \
		int32 InAtIndex; \
		bool bInMarkChanged; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetStringParameterValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms \
	{ \
		FDirectoryPath InDirectoryPath; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventSetTemporaryCookFolder_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms \
	{ \
		FName InButtonParameterName; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventTriggerButtonParameter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms \
	{ \
		UObject* InHoudiniAssetObjectToWrap; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIAssetWrapper_eventWrapHoudiniAssetObject_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_CALLBACK_WRAPPERS
#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIAssetWrapper(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIAssetWrapper, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIAssetWrapper)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIAssetWrapper(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIAssetWrapper_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIAssetWrapper, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIAssetWrapper)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIAssetWrapper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIAssetWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIAssetWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIAssetWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIAssetWrapper(UHoudiniPublicAPIAssetWrapper&&); \
	NO_API UHoudiniPublicAPIAssetWrapper(const UHoudiniPublicAPIAssetWrapper&); \
public:


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIAssetWrapper(UHoudiniPublicAPIAssetWrapper&&); \
	NO_API UHoudiniPublicAPIAssetWrapper(const UHoudiniPublicAPIAssetWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIAssetWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIAssetWrapper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIAssetWrapper)


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HoudiniAssetObject() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, HoudiniAssetObject); } \
	FORCEINLINE static uint32 __PPO__CachedHoudiniAssetActor() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, CachedHoudiniAssetActor); } \
	FORCEINLINE static uint32 __PPO__CachedHoudiniAssetComponent() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, CachedHoudiniAssetComponent); } \
	FORCEINLINE static uint32 __PPO__OnPreInstantiationDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPreInstantiationDelegate); } \
	FORCEINLINE static uint32 __PPO__OnPostInstantiationDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostInstantiationDelegate); } \
	FORCEINLINE static uint32 __PPO__OnPostCookDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostCookDelegate); } \
	FORCEINLINE static uint32 __PPO__OnPreProcessStateExitedDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPreProcessStateExitedDelegate); } \
	FORCEINLINE static uint32 __PPO__OnPostProcessingDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostProcessingDelegate); } \
	FORCEINLINE static uint32 __PPO__OnPostBakeDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostBakeDelegate); } \
	FORCEINLINE static uint32 __PPO__OnPostPDGTOPNetworkCookDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostPDGTOPNetworkCookDelegate); } \
	FORCEINLINE static uint32 __PPO__OnPostPDGBakeDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnPostPDGBakeDelegate); } \
	FORCEINLINE static uint32 __PPO__OnProxyMeshesRefinedDelegate() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, OnProxyMeshesRefinedDelegate); } \
	FORCEINLINE static uint32 __PPO__bAssetLinkSetupAttemptComplete() { return STRUCT_OFFSET(UHoudiniPublicAPIAssetWrapper, bAssetLinkSetupAttemptComplete); }


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_238_PROLOG \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_EVENT_PARMS


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_SPARSE_DATA \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_RPC_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_INCLASS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_PRIVATE_PROPERTY_OFFSET \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_SPARSE_DATA \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_CALLBACK_WRAPPERS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_INCLASS_NO_PURE_DECLS \
	NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIAssetWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewFeatures_Plugins_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIAssetWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

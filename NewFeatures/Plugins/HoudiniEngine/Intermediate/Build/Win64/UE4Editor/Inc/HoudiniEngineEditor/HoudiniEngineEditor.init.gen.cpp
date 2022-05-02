// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineEditor_init() {}
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature();
	HOUDINIENGINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetStateChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostCook__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetPostBake__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHoudiniPublicAPIAssetWrapper_OnHoudiniAssetProxyMeshesRefinedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HoudiniEngineEditor_OnProcessHDANodeOutputPinDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/HoudiniEngineEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0xF30E538B,
				0xAEF2DBA9,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

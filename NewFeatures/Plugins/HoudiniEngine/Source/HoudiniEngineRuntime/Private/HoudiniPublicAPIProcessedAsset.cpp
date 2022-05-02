// Fill out your copyright notice in the Description page of Project Settings.


#include "HoudiniPublicAPIProcessedAsset.h"

UHoudiniPublicAPIProcessedAsset*
UHoudiniPublicAPIProcessedAsset::HoudiniPublicAPIProcessedAssetInstance = nullptr;

UHoudiniPublicAPIProcessedAsset::UHoudiniPublicAPIProcessedAsset()
{
	HoudiniPublicAPIProcessedAssetInstance = this;
}

UHoudiniPublicAPIProcessedAsset::~UHoudiniPublicAPIProcessedAsset()
{
}

UHoudiniPublicAPIProcessedAsset& UHoudiniPublicAPIProcessedAsset::Get()
{
	return *HoudiniPublicAPIProcessedAssetInstance;
}

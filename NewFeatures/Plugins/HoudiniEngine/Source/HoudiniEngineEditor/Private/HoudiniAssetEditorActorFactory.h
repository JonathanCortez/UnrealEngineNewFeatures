// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActorFactories/ActorFactory.h"
#include "HoudiniAssetEditorActorFactory.generated.h"

UCLASS()
class UHoudiniAssetEditorActorFactory : public UActorFactory
{
	GENERATED_UCLASS_BODY()

public:
	// Sets default values for this actor's properties
	UHoudiniAssetEditorActorFactory();

	public:
	// UActorFactory methods:
	// Return true if Actor can be created from a given asset.
	virtual bool CanCreateActorFrom(const FAssetData & AssetData, FText & OutErrorMsg) override;
	// Given an instance of an actor pertaining to this factory, find the asset that should be used to create a new actor.
	virtual UObject * GetAssetFromActorInstance(AActor * Instance) override;
	// Modify the actor after it has been spawned.
	virtual void PostSpawnActor(UObject * Asset, AActor * NewActor) override;
	// Called after a blueprint is created by this factory to update the blueprint's CDO properties
	// with state from the asset for this factory.
	virtual void PostCreateBlueprint(UObject * Asset, AActor * CDO) override;

};

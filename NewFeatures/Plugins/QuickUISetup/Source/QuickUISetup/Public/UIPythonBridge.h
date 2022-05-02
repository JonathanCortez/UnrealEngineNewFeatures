// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIPythonBridge.generated.h"

/**
 * 
 */


UCLASS(Blueprintable)
class QUICKUISETUP_API UUIPythonBridge : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Python")
	static UUIPythonBridge* Get();
	
	UFUNCTION(BlueprintImplementableEvent, Category= "Python | UI")
	void SetFileRoot(const FString& file_dir);

	UFUNCTION(BlueprintImplementableEvent, Category= "Python | UI")
	void SetupInitCall() const;

	UFUNCTION(BlueprintImplementableEvent, Category = "Python | UI")
	void LoadUI() const;

	UFUNCTION(BlueprintImplementableEvent, Category= "Python | UI")
	void OpenUI(const FString& name, const FString& WinType, const FString& CategoryName) const;
	
	UFUNCTION(BlueprintImplementableEvent,Category = "Python | UI")
	TArray<FString> LoadedUI() const;

	UFUNCTION(BlueprintImplementableEvent,Category = "Python | UI")
	TArray<FString> LoadedCategories() const;

	UFUNCTION(BlueprintImplementableEvent,Category = "Python | UI")
	bool CheckUIName(const FString& find_name, const FString& category_name) const;
};

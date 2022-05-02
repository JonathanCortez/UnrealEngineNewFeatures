// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickUISetup/Public/UIPythonBridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIPythonBridge() {}
// Cross Module References
	QUICKUISETUP_API UClass* Z_Construct_UClass_UUIPythonBridge_NoRegister();
	QUICKUISETUP_API UClass* Z_Construct_UClass_UUIPythonBridge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_QuickUISetup();
// End Cross Module References
	DEFINE_FUNCTION(UUIPythonBridge::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUIPythonBridge**)Z_Param__Result=UUIPythonBridge::Get();
		P_NATIVE_END;
	}
	static FName NAME_UUIPythonBridge_CheckUIName = FName(TEXT("CheckUIName"));
	bool UUIPythonBridge::CheckUIName(const FString& find_name, const FString& category_name) const
	{
		UIPythonBridge_eventCheckUIName_Parms Parms;
		Parms.find_name=find_name;
		Parms.category_name=category_name;
		const_cast<UUIPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUIPythonBridge_CheckUIName),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUIPythonBridge_LoadedCategories = FName(TEXT("LoadedCategories"));
	TArray<FString> UUIPythonBridge::LoadedCategories() const
	{
		UIPythonBridge_eventLoadedCategories_Parms Parms;
		const_cast<UUIPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUIPythonBridge_LoadedCategories),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUIPythonBridge_LoadedUI = FName(TEXT("LoadedUI"));
	TArray<FString> UUIPythonBridge::LoadedUI() const
	{
		UIPythonBridge_eventLoadedUI_Parms Parms;
		const_cast<UUIPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUIPythonBridge_LoadedUI),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUIPythonBridge_LoadUI = FName(TEXT("LoadUI"));
	void UUIPythonBridge::LoadUI() const
	{
		const_cast<UUIPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUIPythonBridge_LoadUI),NULL);
	}
	static FName NAME_UUIPythonBridge_OpenUI = FName(TEXT("OpenUI"));
	void UUIPythonBridge::OpenUI(const FString& name, const FString& WinType, const FString& CategoryName) const
	{
		UIPythonBridge_eventOpenUI_Parms Parms;
		Parms.name=name;
		Parms.WinType=WinType;
		Parms.CategoryName=CategoryName;
		const_cast<UUIPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUIPythonBridge_OpenUI),&Parms);
	}
	static FName NAME_UUIPythonBridge_SetFileRoot = FName(TEXT("SetFileRoot"));
	void UUIPythonBridge::SetFileRoot(const FString& file_dir)
	{
		UIPythonBridge_eventSetFileRoot_Parms Parms;
		Parms.file_dir=file_dir;
		ProcessEvent(FindFunctionChecked(NAME_UUIPythonBridge_SetFileRoot),&Parms);
	}
	static FName NAME_UUIPythonBridge_SetupInitCall = FName(TEXT("SetupInitCall"));
	void UUIPythonBridge::SetupInitCall() const
	{
		const_cast<UUIPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUIPythonBridge_SetupInitCall),NULL);
	}
	void UUIPythonBridge::StaticRegisterNativesUUIPythonBridge()
	{
		UClass* Class = UUIPythonBridge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UUIPythonBridge::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_find_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_find_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category_name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_find_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_find_name = { "find_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventCheckUIName_Parms, find_name), METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_find_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_find_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_category_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_category_name = { "category_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventCheckUIName_Parms, category_name), METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_category_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_category_name_MetaData)) };
	void Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIPythonBridge_eventCheckUIName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIPythonBridge_eventCheckUIName_Parms), &Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_find_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_category_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python | UI" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIPythonBridge, nullptr, "CheckUIName", nullptr, nullptr, sizeof(UIPythonBridge_eventCheckUIName_Parms), Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIPythonBridge_CheckUIName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIPythonBridge_CheckUIName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIPythonBridge_Get_Statics
	{
		struct UIPythonBridge_eventGet_Parms
		{
			UUIPythonBridge* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIPythonBridge_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventGet_Parms, ReturnValue), Z_Construct_UClass_UUIPythonBridge_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIPythonBridge_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIPythonBridge_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIPythonBridge, nullptr, "Get", nullptr, nullptr, sizeof(UIPythonBridge_eventGet_Parms), Z_Construct_UFunction_UUIPythonBridge_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIPythonBridge_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIPythonBridge_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventLoadedCategories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python | UI" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIPythonBridge, nullptr, "LoadedCategories", nullptr, nullptr, sizeof(UIPythonBridge_eventLoadedCategories_Parms), Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIPythonBridge_LoadedCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIPythonBridge_LoadedCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventLoadedUI_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python | UI" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIPythonBridge, nullptr, "LoadedUI", nullptr, nullptr, sizeof(UIPythonBridge_eventLoadedUI_Parms), Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIPythonBridge_LoadedUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIPythonBridge_LoadedUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIPythonBridge_LoadUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_LoadUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python | UI" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIPythonBridge_LoadUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIPythonBridge, nullptr, "LoadUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_LoadUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_LoadUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIPythonBridge_LoadUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIPythonBridge_LoadUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventOpenUI_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_WinType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_WinType = { "WinType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventOpenUI_Parms, WinType), METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_WinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_WinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventOpenUI_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_WinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python | UI" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIPythonBridge, nullptr, "OpenUI", nullptr, nullptr, sizeof(UIPythonBridge_eventOpenUI_Parms), Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIPythonBridge_OpenUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIPythonBridge_OpenUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_file_dir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file_dir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::NewProp_file_dir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::NewProp_file_dir = { "file_dir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPythonBridge_eventSetFileRoot_Parms, file_dir), METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::NewProp_file_dir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::NewProp_file_dir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::NewProp_file_dir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python | UI" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIPythonBridge, nullptr, "SetFileRoot", nullptr, nullptr, sizeof(UIPythonBridge_eventSetFileRoot_Parms), Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIPythonBridge_SetFileRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIPythonBridge_SetFileRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIPythonBridge_SetupInitCall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIPythonBridge_SetupInitCall_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python | UI" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIPythonBridge_SetupInitCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIPythonBridge, nullptr, "SetupInitCall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIPythonBridge_SetupInitCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIPythonBridge_SetupInitCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIPythonBridge_SetupInitCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIPythonBridge_SetupInitCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIPythonBridge_NoRegister()
	{
		return UUIPythonBridge::StaticClass();
	}
	struct Z_Construct_UClass_UUIPythonBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIPythonBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIPythonBridge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIPythonBridge_CheckUIName, "CheckUIName" }, // 4027055370
		{ &Z_Construct_UFunction_UUIPythonBridge_Get, "Get" }, // 231407408
		{ &Z_Construct_UFunction_UUIPythonBridge_LoadedCategories, "LoadedCategories" }, // 1598037682
		{ &Z_Construct_UFunction_UUIPythonBridge_LoadedUI, "LoadedUI" }, // 4282021627
		{ &Z_Construct_UFunction_UUIPythonBridge_LoadUI, "LoadUI" }, // 4220017088
		{ &Z_Construct_UFunction_UUIPythonBridge_OpenUI, "OpenUI" }, // 2801374273
		{ &Z_Construct_UFunction_UUIPythonBridge_SetFileRoot, "SetFileRoot" }, // 1807723432
		{ &Z_Construct_UFunction_UUIPythonBridge_SetupInitCall, "SetupInitCall" }, // 3358336064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIPythonBridge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UIPythonBridge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIPythonBridge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIPythonBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIPythonBridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIPythonBridge_Statics::ClassParams = {
		&UUIPythonBridge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIPythonBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIPythonBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIPythonBridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIPythonBridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIPythonBridge, 4199246597);
	template<> QUICKUISETUP_API UClass* StaticClass<UUIPythonBridge>()
	{
		return UUIPythonBridge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIPythonBridge(Z_Construct_UClass_UUIPythonBridge, &UUIPythonBridge::StaticClass, TEXT("/Script/QuickUISetup"), TEXT("UUIPythonBridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIPythonBridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

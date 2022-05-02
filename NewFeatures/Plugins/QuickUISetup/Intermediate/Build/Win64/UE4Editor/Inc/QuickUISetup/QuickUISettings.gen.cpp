// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickUISetup/Public/QuickUISettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickUISettings() {}
// Cross Module References
	QUICKUISETUP_API UClass* Z_Construct_UClass_UQuickUISettings_NoRegister();
	QUICKUISETUP_API UClass* Z_Construct_UClass_UQuickUISettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_QuickUISetup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UQuickUISettings::StaticRegisterNativesUQuickUISettings()
	{
	}
	UClass* Z_Construct_UClass_UQuickUISettings_NoRegister()
	{
		return UQuickUISettings::StaticClass();
	}
	struct Z_Construct_UClass_UQuickUISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoudiniWins_MetaData[];
#endif
		static void NewProp_HoudiniWins_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HoudiniWins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveJson_MetaData[];
#endif
		static void NewProp_SaveJson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JsonPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuickUISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickUISetup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickUISettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuickUISettings.h" },
		{ "ModuleRelativePath", "Public/QuickUISettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickUISettings_Statics::NewProp_BaseDir_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Root Save" },
		{ "ModuleRelativePath", "Public/QuickUISettings.h" },
		{ "ToolTip", "Directory were constructed UI will be safed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuickUISettings_Statics::NewProp_BaseDir = { "BaseDir", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuickUISettings, BaseDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UQuickUISettings_Statics::NewProp_BaseDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickUISettings_Statics::NewProp_BaseDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickUISettings_Statics::NewProp_HoudiniWins_MetaData[] = {
		{ "Category", "Houdini" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Houdini and Python UI" },
		{ "ModuleRelativePath", "Public/QuickUISettings.h" },
		{ "ToolTip", "Enable Python UI to make layout for Houdini Digital Asset." },
	};
#endif
	void Z_Construct_UClass_UQuickUISettings_Statics::NewProp_HoudiniWins_SetBit(void* Obj)
	{
		((UQuickUISettings*)Obj)->HoudiniWins = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuickUISettings_Statics::NewProp_HoudiniWins = { "HoudiniWins", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuickUISettings), &Z_Construct_UClass_UQuickUISettings_Statics::NewProp_HoudiniWins_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuickUISettings_Statics::NewProp_HoudiniWins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickUISettings_Statics::NewProp_HoudiniWins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickUISettings_Statics::NewProp_SaveJson_MetaData[] = {
		{ "Category", "Houdini" },
		{ "DisplayName", "Keep Json File" },
		{ "ModuleRelativePath", "Public/QuickUISettings.h" },
		{ "ToolTip", "Keep Json file when constructed." },
	};
#endif
	void Z_Construct_UClass_UQuickUISettings_Statics::NewProp_SaveJson_SetBit(void* Obj)
	{
		((UQuickUISettings*)Obj)->SaveJson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuickUISettings_Statics::NewProp_SaveJson = { "SaveJson", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuickUISettings), &Z_Construct_UClass_UQuickUISettings_Statics::NewProp_SaveJson_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuickUISettings_Statics::NewProp_SaveJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickUISettings_Statics::NewProp_SaveJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickUISettings_Statics::NewProp_JsonPath_MetaData[] = {
		{ "Category", "Houdini" },
		{ "DisplayName", "Save Path" },
		{ "EditCondition", "SaveJson" },
		{ "ModuleRelativePath", "Public/QuickUISettings.h" },
		{ "ToolTop", "Path directory for json file save." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuickUISettings_Statics::NewProp_JsonPath = { "JsonPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuickUISettings, JsonPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UQuickUISettings_Statics::NewProp_JsonPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickUISettings_Statics::NewProp_JsonPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickUISettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickUISettings_Statics::NewProp_BaseDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickUISettings_Statics::NewProp_HoudiniWins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickUISettings_Statics::NewProp_SaveJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickUISettings_Statics::NewProp_JsonPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuickUISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickUISettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuickUISettings_Statics::ClassParams = {
		&UQuickUISettings::StaticClass,
		"MySetting",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuickUISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuickUISettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuickUISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickUISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuickUISettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuickUISettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuickUISettings, 1270677758);
	template<> QUICKUISETUP_API UClass* StaticClass<UQuickUISettings>()
	{
		return UQuickUISettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuickUISettings(Z_Construct_UClass_UQuickUISettings, &UQuickUISettings::StaticClass, TEXT("/Script/QuickUISetup"), TEXT("UQuickUISettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickUISettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

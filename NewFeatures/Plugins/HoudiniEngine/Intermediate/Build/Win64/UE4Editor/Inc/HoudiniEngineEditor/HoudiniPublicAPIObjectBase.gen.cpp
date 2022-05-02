// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIObjectBase() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EHoudiniPublicAPIErrorLogOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPIErrorLogOption"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPIErrorLogOption>()
	{
		return EHoudiniPublicAPIErrorLogOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniPublicAPIErrorLogOption(EHoudiniPublicAPIErrorLogOption_StaticEnum, TEXT("/Script/HoudiniEngineEditor"), TEXT("EHoudiniPublicAPIErrorLogOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Hash() { return 267380038U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniPublicAPIErrorLogOption"), 0, Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniPublicAPIErrorLogOption::Invalid", (int64)EHoudiniPublicAPIErrorLogOption::Invalid },
				{ "EHoudiniPublicAPIErrorLogOption::Auto", (int64)EHoudiniPublicAPIErrorLogOption::Auto },
				{ "EHoudiniPublicAPIErrorLogOption::Log", (int64)EHoudiniPublicAPIErrorLogOption::Log },
				{ "EHoudiniPublicAPIErrorLogOption::NoLog", (int64)EHoudiniPublicAPIErrorLogOption::NoLog },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "EHoudiniPublicAPIErrorLogOption::Auto" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** An enum with values that determine if API errors are logged. */" },
				{ "Invalid.Name", "EHoudiniPublicAPIErrorLogOption::Invalid" },
				{ "Log.Name", "EHoudiniPublicAPIErrorLogOption::Log" },
				{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
				{ "NoLog.Name", "EHoudiniPublicAPIErrorLogOption::NoLog" },
				{ "ToolTip", "An enum with values that determine if API errors are logged." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
				nullptr,
				"EHoudiniPublicAPIErrorLogOption",
				"EHoudiniPublicAPIErrorLogOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execSetErrorMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InErrorMessage);
		P_GET_ENUM(EHoudiniPublicAPIErrorLogOption,Z_Param_InLoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetErrorMessage_Implementation(Z_Param_InErrorMessage,EHoudiniPublicAPIErrorLogOption(Z_Param_InLoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execSetLoggingErrorsEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoggingErrorsEnabled_Implementation(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execIsLoggingErrors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoggingErrors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execClearErrorMessages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearErrorMessages_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIObjectBase::execGetLastErrorMessage)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutLastErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastErrorMessage_Implementation(Z_Param_Out_OutLastErrorMessage);
		P_NATIVE_END;
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_ClearErrorMessages = FName(TEXT("ClearErrorMessages"));
	void UHoudiniPublicAPIObjectBase::ClearErrorMessages()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_ClearErrorMessages),NULL);
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_GetLastErrorMessage = FName(TEXT("GetLastErrorMessage"));
	bool UHoudiniPublicAPIObjectBase::GetLastErrorMessage(FString& OutLastErrorMessage) const
	{
		HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms Parms;
		Parms.OutLastErrorMessage=OutLastErrorMessage;
		const_cast<UHoudiniPublicAPIObjectBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_GetLastErrorMessage),&Parms);
		OutLastErrorMessage=Parms.OutLastErrorMessage;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_IsLoggingErrors = FName(TEXT("IsLoggingErrors"));
	bool UHoudiniPublicAPIObjectBase::IsLoggingErrors() const
	{
		HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms Parms;
		const_cast<UHoudiniPublicAPIObjectBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_IsLoggingErrors),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_SetErrorMessage = FName(TEXT("SetErrorMessage"));
	void UHoudiniPublicAPIObjectBase::SetErrorMessage(const FString& InErrorMessage, const EHoudiniPublicAPIErrorLogOption InLoggingOption) const
	{
		HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms Parms;
		Parms.InErrorMessage=InErrorMessage;
		Parms.InLoggingOption=InLoggingOption;
		const_cast<UHoudiniPublicAPIObjectBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_SetErrorMessage),&Parms);
	}
	static FName NAME_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled = FName(TEXT("SetLoggingErrorsEnabled"));
	void UHoudiniPublicAPIObjectBase::SetLoggingErrorsEnabled(bool bInEnabled)
	{
		HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms Parms;
		Parms.bInEnabled=bInEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled),&Parms);
	}
	void UHoudiniPublicAPIObjectBase::StaticRegisterNativesUHoudiniPublicAPIObjectBase()
	{
		UClass* Class = UHoudiniPublicAPIObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearErrorMessages", &UHoudiniPublicAPIObjectBase::execClearErrorMessages },
			{ "GetLastErrorMessage", &UHoudiniPublicAPIObjectBase::execGetLastErrorMessage },
			{ "IsLoggingErrors", &UHoudiniPublicAPIObjectBase::execIsLoggingErrors },
			{ "SetErrorMessage", &UHoudiniPublicAPIObjectBase::execSetErrorMessage },
			{ "SetLoggingErrorsEnabled", &UHoudiniPublicAPIObjectBase::execSetLoggingErrorsEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/** Clear any error messages that have been set. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Clear any error messages that have been set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "ClearErrorMessages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutLastErrorMessage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_OutLastErrorMessage = { "OutLastErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms, OutLastErrorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_OutLastErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/**\n\x09 * Gets the last error message recorded.\n\x09 * @param OutLastErrorMessage Set to the last error message recorded, or the empty string if there are no errors\n\x09 * messages.\n\x09 * @return true if there was an error message to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Gets the last error message recorded.\n@param OutLastErrorMessage Set to the last error message recorded, or the empty string if there are no errors\nmessages.\n@return true if there was an error message to set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "GetLastErrorMessage", nullptr, nullptr, sizeof(HoudiniPublicAPIObjectBase_eventGetLastErrorMessage_Parms), Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/**\n\x09 * Returns whether or not API errors are written to the log.\n\x09 * @return true if API errors are logged as warnings, false if API errors are not logged.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Returns whether or not API errors are written to the log.\n@return true if API errors are logged as warnings, false if API errors are not logged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "IsLoggingErrors", nullptr, nullptr, sizeof(HoudiniPublicAPIObjectBase_eventIsLoggingErrors_Parms), Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InErrorMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLoggingOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoggingOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InLoggingOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage = { "InErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms, InErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption = { "InLoggingOption", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms, InLoggingOption), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPIErrorLogOption, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::NewProp_InLoggingOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/**\n\x09 * Set an error message. This is recorded as the current/last error message.\n\x09 * @param InErrorMessage The error message to set.\n\x09 * @param InLoggingOption Determines the behavior around logging the error message. If\n\x09 * EHoudiniPublicAPIErrorLogOption.Invalid or EHoudiniPublicAPIErrorLogOption.Auto then IsLoggingErrors() is used to\n\x09 * determine if the error message should be logged. If EHoudiniPublicAPIErrorLogOption.Log, then the error message\n\x09 * is logged as a warning. If EHoudiniPublicAPIErrorLogOption.NoLog then the error message is not logged.\n\x09 */" },
		{ "CPP_Default_InLoggingOption", "Auto" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Set an error message. This is recorded as the current/last error message.\n@param InErrorMessage The error message to set.\n@param InLoggingOption Determines the behavior around logging the error message. If\nEHoudiniPublicAPIErrorLogOption.Invalid or EHoudiniPublicAPIErrorLogOption.Auto then IsLoggingErrors() is used to\ndetermine if the error message should be logged. If EHoudiniPublicAPIErrorLogOption.Log, then the error message\nis logged as a warning. If EHoudiniPublicAPIErrorLogOption.NoLog then the error message is not logged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "SetErrorMessage", nullptr, nullptr, sizeof(HoudiniPublicAPIObjectBase_eventSetErrorMessage_Parms), Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInEnabled_MetaData[];
#endif
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Errors" },
		{ "Comment", "/**\n\x09 * Sets whether or not API errors are written to the log.\n\x09 * @param bInEnabled True if API errors should be logged as warnings, false if API errors should not logged.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Sets whether or not API errors are written to the log.\n@param bInEnabled True if API errors should be logged as warnings, false if API errors should not logged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase, nullptr, "SetLoggingErrorsEnabled", nullptr, nullptr, sizeof(HoudiniPublicAPIObjectBase_eventSetLoggingErrorsEnabled_Parms), Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase_NoRegister()
	{
		return UHoudiniPublicAPIObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasError_MetaData[];
#endif
		static void NewProp_bHasError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoggingErrors_MetaData[];
#endif
		static void NewProp_bIsLoggingErrors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoggingErrors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_ClearErrorMessages, "ClearErrorMessages" }, // 2821915618
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_GetLastErrorMessage, "GetLastErrorMessage" }, // 3648564500
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_IsLoggingErrors, "IsLoggingErrors" }, // 86949035
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetErrorMessage, "SetErrorMessage" }, // 2366144362
		{ &Z_Construct_UFunction_UHoudiniPublicAPIObjectBase_SetLoggingErrorsEnabled, "SetLoggingErrorsEnabled" }, // 1477410423
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for API UObjects. Implements error logging: record and get a error messages for Houdini Public API objects. \n */" },
		{ "IncludePath", "HoudiniPublicAPIObjectBase.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "Base class for API UObjects. Implements error logging: record and get a error messages for Houdini Public API objects." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage_MetaData[] = {
		{ "Comment", "/** The last error message that was set. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "The last error message that was set." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage = { "LastErrorMessage", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPIObjectBase, LastErrorMessage), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_MetaData[] = {
		{ "Comment", "/** True if an errors have been set and not yet cleared. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "True if an errors have been set and not yet cleared." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIObjectBase*)Obj)->bHasError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError = { "bHasError", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIObjectBase), &Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_MetaData[] = {
		{ "Comment", "/** If true, API errors logged with SetErrorMessage are written to the log as warnings by default. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIObjectBase.h" },
		{ "ToolTip", "If true, API errors logged with SetErrorMessage are written to the log as warnings by default." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIObjectBase*)Obj)->bIsLoggingErrors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors = { "bIsLoggingErrors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIObjectBase), &Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_LastErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bHasError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::NewProp_bIsLoggingErrors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::ClassParams = {
		&UHoudiniPublicAPIObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPIObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPIObjectBase, 68684208);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIObjectBase>()
	{
		return UHoudiniPublicAPIObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPIObjectBase(Z_Construct_UClass_UHoudiniPublicAPIObjectBase, &UHoudiniPublicAPIObjectBase::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPIObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

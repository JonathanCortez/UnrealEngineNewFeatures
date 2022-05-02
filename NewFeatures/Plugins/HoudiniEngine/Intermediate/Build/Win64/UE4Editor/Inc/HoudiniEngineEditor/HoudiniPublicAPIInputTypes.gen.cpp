// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineEditor/Public/HoudiniPublicAPIInputTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPublicAPIInputTypes() {}
// Cross Module References
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineEditor();
	HOUDINIENGINEEDITOR_API UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIObjectBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetInput();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_NoRegister();
	HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPILandscapeInput();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
// End Cross Module References
	static UEnum* EHoudiniPublicAPICurveMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPICurveMethod"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveMethod>()
	{
		return EHoudiniPublicAPICurveMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniPublicAPICurveMethod(EHoudiniPublicAPICurveMethod_StaticEnum, TEXT("/Script/HoudiniEngineEditor"), TEXT("EHoudiniPublicAPICurveMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Hash() { return 3927083026U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniPublicAPICurveMethod"), 0, Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniPublicAPICurveMethod::Invalid", (int64)EHoudiniPublicAPICurveMethod::Invalid },
				{ "EHoudiniPublicAPICurveMethod::CVs", (int64)EHoudiniPublicAPICurveMethod::CVs },
				{ "EHoudiniPublicAPICurveMethod::Breakpoints", (int64)EHoudiniPublicAPICurveMethod::Breakpoints },
				{ "EHoudiniPublicAPICurveMethod::Freehand", (int64)EHoudiniPublicAPICurveMethod::Freehand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Breakpoints.Name", "EHoudiniPublicAPICurveMethod::Breakpoints" },
				{ "CVs.Name", "EHoudiniPublicAPICurveMethod::CVs" },
				{ "Freehand.Name", "EHoudiniPublicAPICurveMethod::Freehand" },
				{ "Invalid.Name", "EHoudiniPublicAPICurveMethod::Invalid" },
				{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
				nullptr,
				"EHoudiniPublicAPICurveMethod",
				"EHoudiniPublicAPICurveMethod",
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
	static UEnum* EHoudiniPublicAPICurveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, Z_Construct_UPackage__Script_HoudiniEngineEditor(), TEXT("EHoudiniPublicAPICurveType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveType>()
	{
		return EHoudiniPublicAPICurveType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniPublicAPICurveType(EHoudiniPublicAPICurveType_StaticEnum, TEXT("/Script/HoudiniEngineEditor"), TEXT("EHoudiniPublicAPICurveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Hash() { return 1731824514U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniPublicAPICurveType"), 0, Get_Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniPublicAPICurveType::Invalid", (int64)EHoudiniPublicAPICurveType::Invalid },
				{ "EHoudiniPublicAPICurveType::Polygon", (int64)EHoudiniPublicAPICurveType::Polygon },
				{ "EHoudiniPublicAPICurveType::Nurbs", (int64)EHoudiniPublicAPICurveType::Nurbs },
				{ "EHoudiniPublicAPICurveType::Bezier", (int64)EHoudiniPublicAPICurveType::Bezier },
				{ "EHoudiniPublicAPICurveType::Points", (int64)EHoudiniPublicAPICurveType::Points },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bezier.Name", "EHoudiniPublicAPICurveType::Bezier" },
				{ "BlueprintType", "true" },
				{ "Invalid.Name", "EHoudiniPublicAPICurveType::Invalid" },
				{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
				{ "Nurbs.Name", "EHoudiniPublicAPICurveType::Nurbs" },
				{ "Points.Name", "EHoudiniPublicAPICurveType::Points" },
				{ "Polygon.Name", "EHoudiniPublicAPICurveType::Polygon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
				nullptr,
				"EHoudiniPublicAPICurveType",
				"EHoudiniPublicAPICurveType",
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
	DEFINE_FUNCTION(UHoudiniPublicAPIInput::execGetInputObjects)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputObjects_Implementation(Z_Param_Out_OutObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIInput::execSetInputObjects)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputObjects_Implementation(Z_Param_Out_InObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIInput::execIsAcceptableObjectForInput)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAcceptableObjectForInput_Implementation(Z_Param_InObject);
		P_NATIVE_END;
	}
	static FName NAME_UHoudiniPublicAPIInput_GetInputObjects = FName(TEXT("GetInputObjects"));
	bool UHoudiniPublicAPIInput::GetInputObjects(TArray<UObject*>& OutObjects)
	{
		HoudiniPublicAPIInput_eventGetInputObjects_Parms Parms;
		Parms.OutObjects=OutObjects;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_GetInputObjects),&Parms);
		OutObjects=Parms.OutObjects;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIInput_IsAcceptableObjectForInput = FName(TEXT("IsAcceptableObjectForInput"));
	bool UHoudiniPublicAPIInput::IsAcceptableObjectForInput(UObject* InObject) const
	{
		HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms Parms;
		Parms.InObject=InObject;
		const_cast<UHoudiniPublicAPIInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_IsAcceptableObjectForInput),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIInput_SetInputObjects = FName(TEXT("SetInputObjects"));
	bool UHoudiniPublicAPIInput::SetInputObjects(TArray<UObject*> const& InObjects)
	{
		HoudiniPublicAPIInput_eventSetInputObjects_Parms Parms;
		Parms.InObjects=InObjects;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIInput_SetInputObjects),&Parms);
		return !!Parms.ReturnValue;
	}
	void UHoudiniPublicAPIInput::StaticRegisterNativesUHoudiniPublicAPIInput()
	{
		UClass* Class = UHoudiniPublicAPIInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputObjects", &UHoudiniPublicAPIInput::execGetInputObjects },
			{ "IsAcceptableObjectForInput", &UHoudiniPublicAPIInput::execIsAcceptableObjectForInput },
			{ "SetInputObjects", &UHoudiniPublicAPIInput::execSetInputObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIInput_eventGetInputObjects_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIInput_eventGetInputObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventGetInputObjects_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_OutObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Gets the currently assigned input objects.\n\x09 * @param OutObjects The current input objects of this input.\n\x09 * @return true if input objects were successfully added to OutObjects (even if there are no input objects).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Gets the currently assigned input objects.\n@param OutObjects The current input objects of this input.\n@return true if input objects were successfully added to OutObjects (even if there are no input objects)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "GetInputObjects", nullptr, nullptr, sizeof(HoudiniPublicAPIInput_eventGetInputObjects_Parms), Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_InObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Returns true if InObject is acceptable for this input type.\n\x09 * @param InObject The object to check for acceptance as an input object on this input.\n\x09 * @return true if InObject is acceptable for this input type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Returns true if InObject is acceptable for this input type.\n@param InObject The object to check for acceptance as an input object on this input.\n@return true if InObject is acceptable for this input type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "IsAcceptableObjectForInput", nullptr, nullptr, sizeof(HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms), Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InObjects;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_Inner = { "InObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects = { "InObjects", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIInput_eventSetInputObjects_Parms, InObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIInput_eventSetInputObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPIInput_eventSetInputObjects_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_InObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Sets the specified objects as the input objects.\n\x09 * @param InObjects The objects to set as input objects for this input.\n\x09 * @return false if any object was incompatible (all compatible objects are added).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Sets the specified objects as the input objects.\n@param InObjects The objects to set as input objects for this input.\n@return false if any object was incompatible (all compatible objects are added)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIInput, nullptr, "SetInputObjects", nullptr, nullptr, sizeof(HoudiniPublicAPIInput_eventSetInputObjects_Parms), Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister()
	{
		return UHoudiniPublicAPIInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepWorldTransform_MetaData[];
#endif
		static void NewProp_bKeepWorldTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepWorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[];
#endif
		static void NewProp_bImportAsReference_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_GetInputObjects, "GetInputObjects" }, // 1036976153
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_IsAcceptableObjectForInput, "IsAcceptableObjectForInput" }, // 993216717
		{ &Z_Construct_UFunction_UHoudiniPublicAPIInput_SetInputObjects, "SetInputObjects" }, // 1755116020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * This class is the base class of a hierarchy that represents an input to an HDA in the public API.\n *\n * Each type of input has a derived class:\n *   - Geometry: UHoudiniPublicAPIGeoInput\n *   - Asset: UHoudiniPublicAPIAssetInput\n *   - Curve: UHoudiniPublicAPICurveInput\n *   - World: UHoudiniPublicAPIWorldInput\n *   - Landscape: UHoudiniPublicAPILandscapeInput\n *\n * Each instance of one of these classes represents the configuration of an input and wraps the actor/object/asset\n * used as the input. These instances are always treated as copies of the actual state of the HDA's input: changing\n * a property of one of these instances does not immediately affect the instantiated HDA: one has to pass the input\n * instances as arguments to UHoudiniPublicAPIAssetWrapper::SetInputAtIndex() or\n * UHoudiniPublicAPIAssetWrapper::SetInputParameter() functions to actually change the inputs on the instantiated asset.\n * A copy of the existing input state of an instantiated HDA can be fetched via\n * UHoudiniPublicAPIAssetWrapper::GetInputAtIndex() and UHoudiniPublicAPIAssetWrapper::GetInputParameter().\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "This class is the base class of a hierarchy that represents an input to an HDA in the public API.\n\nEach type of input has a derived class:\n  - Geometry: UHoudiniPublicAPIGeoInput\n  - Asset: UHoudiniPublicAPIAssetInput\n  - Curve: UHoudiniPublicAPICurveInput\n  - World: UHoudiniPublicAPIWorldInput\n  - Landscape: UHoudiniPublicAPILandscapeInput\n\nEach instance of one of these classes represents the configuration of an input and wraps the actor/object/asset\nused as the input. These instances are always treated as copies of the actual state of the HDA's input: changing\na property of one of these instances does not immediately affect the instantiated HDA: one has to pass the input\ninstances as arguments to UHoudiniPublicAPIAssetWrapper::SetInputAtIndex() or\nUHoudiniPublicAPIAssetWrapper::SetInputParameter() functions to actually change the inputs on the instantiated asset.\nA copy of the existing input state of an instantiated HDA can be fetched via\nUHoudiniPublicAPIAssetWrapper::GetInputAtIndex() and UHoudiniPublicAPIAssetWrapper::GetInputParameter()." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when this input's Transform Type is set to NONE, 2 will use the input's default value .*/" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when this input's Transform Type is set to NONE, 2 will use the input's default value ." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIInput*)Obj)->bKeepWorldTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform = { "bKeepWorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Indicates that all the input objects are imported to Houdini as references instead of actual geo\n\x09 * (for Geo/World/Asset input types only)\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that all the input objects are imported to Houdini as references instead of actual geo\n(for Geo/World/Asset input types only)" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIInput*)Obj)->bImportAsReference = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIInput), &Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_Inner = { "InputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_MetaData[] = {
		{ "Comment", "/** The input objects for this input. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The input objects for this input." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects = { "InputObjects", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPIInput, InputObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bKeepWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_bImportAsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::NewProp_InputObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::ClassParams = {
		&UHoudiniPublicAPIInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPIInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPIInput, 2736434160);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIInput>()
	{
		return UHoudiniPublicAPIInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPIInput(Z_Construct_UClass_UHoudiniPublicAPIInput, &UHoudiniPublicAPIInput::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPIInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIInput);
	DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execGetObjectTransformOffset)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetObjectTransformOffset_Implementation(Z_Param_InObject,Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPIGeoInput::execSetObjectTransformOffset)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetObjectTransformOffset_Implementation(Z_Param_InObject,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	static FName NAME_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset = FName(TEXT("GetObjectTransformOffset"));
	bool UHoudiniPublicAPIGeoInput::GetObjectTransformOffset(UObject* InObject, FTransform& OutTransform) const
	{
		HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms Parms;
		Parms.InObject=InObject;
		Parms.OutTransform=OutTransform;
		const_cast<UHoudiniPublicAPIGeoInput*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset),&Parms);
		OutTransform=Parms.OutTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset = FName(TEXT("SetObjectTransformOffset"));
	bool UHoudiniPublicAPIGeoInput::SetObjectTransformOffset(UObject* InObject, FTransform const& InTransform)
	{
		HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms Parms;
		Parms.InObject=InObject;
		Parms.InTransform=InTransform;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset),&Parms);
		return !!Parms.ReturnValue;
	}
	void UHoudiniPublicAPIGeoInput::StaticRegisterNativesUHoudiniPublicAPIGeoInput()
	{
		UClass* Class = UHoudiniPublicAPIGeoInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectTransformOffset", &UHoudiniPublicAPIGeoInput::execGetObjectTransformOffset },
			{ "SetObjectTransformOffset", &UHoudiniPublicAPIGeoInput::execSetObjectTransformOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_InObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_OutTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InTransform" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Get the transform offset of the specified input object InObject (must already have been set via SetInputObjects()).\n\x09 * @param InObject The input object to get a transform offset for.\n\x09 * @param OutTransform The transform offset that was fetched.\n\x09 * @return true if the object was found and the transform offset fetched.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get the transform offset of the specified input object InObject (must already have been set via SetInputObjects()).\n@param InObject The input object to get a transform offset for.\n@param OutTransform The transform offset that was fetched.\n@return true if the object was found and the transform offset fetched." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "GetObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms), &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_InTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InTransform" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n\x09 * Set the transform offset of the specified input object InObject (must already have been set via SetInputObjects()).\n\x09 * @param InObject The input object to set a transform offset for.\n\x09 * @param InTransform The transform offset to set.\n\x09 * @return true if the object was found and the transform offset set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the transform offset of the specified input object InObject (must already have been set via SetInputObjects()).\n@param InObject The input object to set a transform offset for.\n@param InTransform The transform offset to set.\n@return true if the object was found and the transform offset set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput, nullptr, "SetObjectTransformOffset", nullptr, nullptr, sizeof(HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms), Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister()
	{
		return UHoudiniPublicAPIGeoInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPackBeforeMerge_MetaData[];
#endif
		static void NewProp_bPackBeforeMerge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPackBeforeMerge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportLODs_MetaData[];
#endif
		static void NewProp_bExportLODs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportSockets_MetaData[];
#endif
		static void NewProp_bExportSockets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportSockets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportColliders_MetaData[];
#endif
		static void NewProp_bExportColliders_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportColliders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputObjectTransformOffsets_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputObjectTransformOffsets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputObjectTransformOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InputObjectTransformOffsets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_GetObjectTransformOffset, "GetObjectTransformOffset" }, // 2427990717
		{ &Z_Construct_UFunction_UHoudiniPublicAPIGeoInput_SetObjectTransformOffset, "SetObjectTransformOffset" }, // 749438392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for geometry inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for geometry inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that the geometry must be packed before merging it into the input */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that the geometry must be packed before merging it into the input" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIGeoInput*)Obj)->bPackBeforeMerge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge = { "bPackBeforeMerge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that all LODs in the input should be marshalled to Houdini */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that all LODs in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIGeoInput*)Obj)->bExportLODs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that all sockets in the input should be marshalled to Houdini */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that all sockets in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIGeoInput*)Obj)->bExportSockets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that all colliders in the input should be marshalled to Houdini */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that all colliders in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIGeoInput*)Obj)->bExportColliders = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIGeoInput), &Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_ValueProp = { "InputObjectTransformOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_Key_KeyProp = { "InputObjectTransformOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_MetaData[] = {
		{ "Comment", "/** Per-Input-Object data: the transform offset per input object. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Per-Input-Object data: the transform offset per input object." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets = { "InputObjectTransformOffsets", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPIGeoInput, InputObjectTransformOffsets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bPackBeforeMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportSockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_bExportColliders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::NewProp_InputObjectTransformOffsets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIGeoInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::ClassParams = {
		&UHoudiniPublicAPIGeoInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPIGeoInput, 1469738825);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIGeoInput>()
	{
		return UHoudiniPublicAPIGeoInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPIGeoInput(Z_Construct_UClass_UHoudiniPublicAPIGeoInput, &UHoudiniPublicAPIGeoInput::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPIGeoInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIGeoInput);
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurveMethod)
	{
		P_GET_ENUM(EHoudiniPublicAPICurveMethod,Z_Param_InCurveMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurveMethod_Implementation(EHoudiniPublicAPICurveMethod(Z_Param_InCurveMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurveMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHoudiniPublicAPICurveMethod*)Z_Param__Result=P_THIS->GetCurveMethod_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurveType)
	{
		P_GET_ENUM(EHoudiniPublicAPICurveType,Z_Param_InCurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurveType_Implementation(EHoudiniPublicAPICurveType(Z_Param_InCurveType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurveType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHoudiniPublicAPICurveType*)Z_Param__Result=P_THIS->GetCurveType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetReversed)
	{
		P_GET_UBOOL(Z_Param_bInReversed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReversed_Implementation(Z_Param_bInReversed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execIsReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReversed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetClosed)
	{
		P_GET_UBOOL(Z_Param_bInClosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClosed_Implementation(Z_Param_bInClosed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execIsClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClosed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execGetCurvePoints)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutCurvePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurvePoints_Implementation(Z_Param_Out_OutCurvePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execClearCurvePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCurvePoints_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execAppendCurvePoint)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InCurvePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendCurvePoint_Implementation(Z_Param_Out_InCurvePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPublicAPICurveInputObject::execSetCurvePoints)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_InCurvePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurvePoints_Implementation(Z_Param_Out_InCurvePoints);
		P_NATIVE_END;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_AppendCurvePoint = FName(TEXT("AppendCurvePoint"));
	void UHoudiniPublicAPICurveInputObject::AppendCurvePoint(FTransform const& InCurvePoint)
	{
		HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms Parms;
		Parms.InCurvePoint=InCurvePoint;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_AppendCurvePoint),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_ClearCurvePoints = FName(TEXT("ClearCurvePoints"));
	void UHoudiniPublicAPICurveInputObject::ClearCurvePoints()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_ClearCurvePoints),NULL);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurveMethod = FName(TEXT("GetCurveMethod"));
	EHoudiniPublicAPICurveMethod UHoudiniPublicAPICurveInputObject::GetCurveMethod() const
	{
		HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurveMethod),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurvePoints = FName(TEXT("GetCurvePoints"));
	void UHoudiniPublicAPICurveInputObject::GetCurvePoints(TArray<FTransform>& OutCurvePoints) const
	{
		HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms Parms;
		Parms.OutCurvePoints=OutCurvePoints;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurvePoints),&Parms);
		OutCurvePoints=Parms.OutCurvePoints;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_GetCurveType = FName(TEXT("GetCurveType"));
	EHoudiniPublicAPICurveType UHoudiniPublicAPICurveInputObject::GetCurveType() const
	{
		HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_GetCurveType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_IsClosed = FName(TEXT("IsClosed"));
	bool UHoudiniPublicAPICurveInputObject::IsClosed() const
	{
		HoudiniPublicAPICurveInputObject_eventIsClosed_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_IsClosed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_IsReversed = FName(TEXT("IsReversed"));
	bool UHoudiniPublicAPICurveInputObject::IsReversed() const
	{
		HoudiniPublicAPICurveInputObject_eventIsReversed_Parms Parms;
		const_cast<UHoudiniPublicAPICurveInputObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_IsReversed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetClosed = FName(TEXT("SetClosed"));
	void UHoudiniPublicAPICurveInputObject::SetClosed(bool bInClosed)
	{
		HoudiniPublicAPICurveInputObject_eventSetClosed_Parms Parms;
		Parms.bInClosed=bInClosed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetClosed),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurveMethod = FName(TEXT("SetCurveMethod"));
	void UHoudiniPublicAPICurveInputObject::SetCurveMethod(const EHoudiniPublicAPICurveMethod InCurveMethod)
	{
		HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms Parms;
		Parms.InCurveMethod=InCurveMethod;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurveMethod),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurvePoints = FName(TEXT("SetCurvePoints"));
	void UHoudiniPublicAPICurveInputObject::SetCurvePoints(TArray<FTransform> const& InCurvePoints)
	{
		HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms Parms;
		Parms.InCurvePoints=InCurvePoints;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurvePoints),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetCurveType = FName(TEXT("SetCurveType"));
	void UHoudiniPublicAPICurveInputObject::SetCurveType(const EHoudiniPublicAPICurveType InCurveType)
	{
		HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms Parms;
		Parms.InCurveType=InCurveType;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetCurveType),&Parms);
	}
	static FName NAME_UHoudiniPublicAPICurveInputObject_SetReversed = FName(TEXT("SetReversed"));
	void UHoudiniPublicAPICurveInputObject::SetReversed(bool bInReversed)
	{
		HoudiniPublicAPICurveInputObject_eventSetReversed_Parms Parms;
		Parms.bInReversed=bInReversed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UHoudiniPublicAPICurveInputObject_SetReversed),&Parms);
	}
	void UHoudiniPublicAPICurveInputObject::StaticRegisterNativesUHoudiniPublicAPICurveInputObject()
	{
		UClass* Class = UHoudiniPublicAPICurveInputObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendCurvePoint", &UHoudiniPublicAPICurveInputObject::execAppendCurvePoint },
			{ "ClearCurvePoints", &UHoudiniPublicAPICurveInputObject::execClearCurvePoints },
			{ "GetCurveMethod", &UHoudiniPublicAPICurveInputObject::execGetCurveMethod },
			{ "GetCurvePoints", &UHoudiniPublicAPICurveInputObject::execGetCurvePoints },
			{ "GetCurveType", &UHoudiniPublicAPICurveInputObject::execGetCurveType },
			{ "IsClosed", &UHoudiniPublicAPICurveInputObject::execIsClosed },
			{ "IsReversed", &UHoudiniPublicAPICurveInputObject::execIsReversed },
			{ "SetClosed", &UHoudiniPublicAPICurveInputObject::execSetClosed },
			{ "SetCurveMethod", &UHoudiniPublicAPICurveInputObject::execSetCurveMethod },
			{ "SetCurvePoints", &UHoudiniPublicAPICurveInputObject::execSetCurvePoints },
			{ "SetCurveType", &UHoudiniPublicAPICurveInputObject::execSetCurveType },
			{ "SetReversed", &UHoudiniPublicAPICurveInputObject::execSetReversed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCurvePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCurvePoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint = { "InCurvePoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms, InCurvePoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::NewProp_InCurvePoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InCurvePoint" },
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Append a point to the end of this curve.\n\x09 * @param InCurvePoint The point to append.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Append a point to the end of this curve.\n@param InCurvePoint The point to append." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "AppendCurvePoint", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Remove all points from the curve. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Remove all points from the curve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "ClearCurvePoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Get the curve method, for example CVs, or freehand. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get the curve method, for example CVs, or freehand." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurveMethod", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCurvePoints_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutCurvePoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints_Inner = { "OutCurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints = { "OutCurvePoints", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms, OutCurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::NewProp_OutCurvePoints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Get all points of the curve.\n\x09 * @param OutCurvePoints Set to a copy of all of the points of the curve.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Get all points of the curve.\n@param OutCurvePoints Set to a copy of all of the points of the curve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurvePoints", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms, ReturnValue), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Returns the curve type (for example: polygon, nurbs, bezier) */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Returns the curve type (for example: polygon, nurbs, bezier)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "GetCurveType", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPICurveInputObject_eventIsClosed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventIsClosed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Returns true if this is a closed curve. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Returns true if this is a closed curve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "IsClosed", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventIsClosed_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPublicAPICurveInputObject_eventIsReversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventIsReversed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Returns true if the curve is reversed. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Returns true if the curve is reversed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "IsReversed", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventIsReversed_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInClosed_MetaData[];
#endif
		static void NewProp_bInClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInClosed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_SetBit(void* Obj)
	{
		((HoudiniPublicAPICurveInputObject_eventSetClosed_Parms*)Obj)->bInClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed = { "bInClosed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventSetClosed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::NewProp_bInClosed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set whether the curve is closed or not.\n\x09 * @param bInClosed The new closed setting for the curve: set to true if the curve is closed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set whether the curve is closed or not.\n@param bInClosed The new closed setting for the curve: set to true if the curve is closed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetClosed", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetClosed_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCurveMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCurveMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCurveMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod = { "InCurveMethod", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms, InCurveMethod), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::NewProp_InCurveMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set the curve method, for example CVs, or freehand.\n\x09 * @param InCurveMethod The new curve method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the curve method, for example CVs, or freehand.\n@param InCurveMethod The new curve method." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurveMethod", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCurvePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCurvePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCurvePoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_Inner = { "InCurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints = { "InCurvePoints", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms, InCurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::NewProp_InCurvePoints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set the points of the curve (replacing any previously set points with InCurvePoints).\n\x09 * @param InCurvePoints The new points to set / replace the curve's points with.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the points of the curve (replacing any previously set points with InCurvePoints).\n@param InCurvePoints The new points to set / replace the curve's points with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurvePoints", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCurveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCurveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCurveType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType = { "InCurveType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms, InCurveType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::NewProp_InCurveType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set the curve type (for example: polygon, nurbs, bezier).\n\x09 * @param InCurveType The new curve type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set the curve type (for example: polygon, nurbs, bezier).\n@param InCurveType The new curve type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetCurveType", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInReversed_MetaData[];
#endif
		static void NewProp_bInReversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReversed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_SetBit(void* Obj)
	{
		((HoudiniPublicAPICurveInputObject_eventSetReversed_Parms*)Obj)->bInReversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed = { "bInReversed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoudiniPublicAPICurveInputObject_eventSetReversed_Parms), &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::NewProp_bInReversed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n\x09 * Set whether the curve is reversed or not.\n\x09 * @param bInReversed The new reversed setting for the curve: set to true if the curve is reversed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set whether the curve is reversed or not.\n@param bInReversed The new reversed setting for the curve: set to true if the curve is reversed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, nullptr, "SetReversed", nullptr, nullptr, sizeof(HoudiniPublicAPICurveInputObject_eventSetReversed_Parms), Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister()
	{
		return UHoudiniPublicAPICurveInputObject::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[];
#endif
		static void NewProp_bClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversed_MetaData[];
#endif
		static void NewProp_bReversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_AppendCurvePoint, "AppendCurvePoint" }, // 274050250
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_ClearCurvePoints, "ClearCurvePoints" }, // 842421099
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveMethod, "GetCurveMethod" }, // 1478383644
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurvePoints, "GetCurvePoints" }, // 1503553244
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_GetCurveType, "GetCurveType" }, // 22055777
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsClosed, "IsClosed" }, // 4155933494
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_IsReversed, "IsReversed" }, // 1177155848
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetClosed, "SetClosed" }, // 713499770
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveMethod, "SetCurveMethod" }, // 1801725844
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurvePoints, "SetCurvePoints" }, // 1936797269
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetCurveType, "SetCurveType" }, // 1017234285
		{ &Z_Construct_UFunction_UHoudiniPublicAPICurveInputObject_SetReversed, "SetReversed" }, // 1795642855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/**\n * API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** The control points of the curve. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The control points of the curve." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Whether the curve is closed (true) or not. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Whether the curve is closed (true) or not." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInputObject*)Obj)->bClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInputObject), &Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** Whether the curve is reversed (true) or not. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Whether the curve is reversed (true) or not." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInputObject*)Obj)->bReversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed = { "bReversed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInputObject), &Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** The curve type (for example: polygon, nurbs, bezier). */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The curve type (for example: polygon, nurbs, bezier)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveType), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs | Input Objects" },
		{ "Comment", "/** The curve method, for example CVs, or freehand. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "The curve method, for example CVs, or freehand." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveMethod), Z_Construct_UEnum_HoudiniEngineEditor_EHoudiniPublicAPICurveMethod, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurvePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_bReversed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::NewProp_CurveMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPICurveInputObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::ClassParams = {
		&UHoudiniPublicAPICurveInputObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPICurveInputObject, 2082058946);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPICurveInputObject>()
	{
		return UHoudiniPublicAPICurveInputObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPICurveInputObject(Z_Construct_UClass_UHoudiniPublicAPICurveInputObject, &UHoudiniPublicAPICurveInputObject::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPICurveInputObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPICurveInputObject);
	void UHoudiniPublicAPICurveInput::StaticRegisterNativesUHoudiniPublicAPICurveInput()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister()
	{
		return UHoudiniPublicAPICurveInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookOnCurveChanged_MetaData[];
#endif
		static void NewProp_bCookOnCurveChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookOnCurveChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[];
#endif
		static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for curve inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that if trigger cook automatically on curve Input spline modified */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that if trigger cook automatically on curve Input spline modified" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInput*)Obj)->bCookOnCurveChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged = { "bCookOnCurveChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInput), &Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Set this to true to add rot and scale attributes on curve inputs. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Set this to true to add rot and scale attributes on curve inputs." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
	{
		((UHoudiniPublicAPICurveInput*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPICurveInput), &Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bCookOnCurveChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPICurveInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::ClassParams = {
		&UHoudiniPublicAPICurveInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPICurveInput, 2181845378);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPICurveInput>()
	{
		return UHoudiniPublicAPICurveInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPICurveInput(Z_Construct_UClass_UHoudiniPublicAPICurveInput, &UHoudiniPublicAPICurveInput::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPICurveInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPICurveInput);
	void UHoudiniPublicAPIAssetInput::StaticRegisterNativesUHoudiniPublicAPIAssetInput()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetInput_NoRegister()
	{
		return UHoudiniPublicAPIAssetInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for asset inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for asset inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIAssetInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::ClassParams = {
		&UHoudiniPublicAPIAssetInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIAssetInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPIAssetInput, 796710085);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIAssetInput>()
	{
		return UHoudiniPublicAPIAssetInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPIAssetInput(Z_Construct_UClass_UHoudiniPublicAPIAssetInput, &UHoudiniPublicAPIAssetInput::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPIAssetInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIAssetInput);
	void UHoudiniPublicAPIWorldInput::StaticRegisterNativesUHoudiniPublicAPIWorldInput()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister()
	{
		return UHoudiniPublicAPIWorldInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldInputBoundSelectorObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldInputBoundSelectorObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldInputBoundSelectorObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWorldInputBoundSelector_MetaData[];
#endif
		static void NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWorldInputBoundSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[];
#endif
		static void NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldInputBoundSelectorAutoUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrealSplineResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnrealSplineResolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIGeoInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for world inputs. Derived from UHoudiniPublicAPIGeoInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for world inputs. Derived from UHoudiniPublicAPIGeoInput." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Objects used for automatic bound selection */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Objects used for automatic bound selection" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects = { "WorldInputBoundSelectorObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPIWorldInput, WorldInputBoundSelectorObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that this world input is in \"BoundSelector\" mode */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that this world input is in \"BoundSelector\" mode" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIWorldInput*)Obj)->bIsWorldInputBoundSelector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector = { "bIsWorldInputBoundSelector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that selected actors by the bound selectors should update automatically */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that selected actors by the bound selectors should update automatically" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit(void* Obj)
	{
		((UHoudiniPublicAPIWorldInput*)Obj)->bWorldInputBoundSelectorAutoUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate = { "bWorldInputBoundSelectorAutoUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPIWorldInput), &Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Resolution used when converting unreal splines to houdini curves */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Resolution used when converting unreal splines to houdini curves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution = { "UnrealSplineResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPIWorldInput, UnrealSplineResolution), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_WorldInputBoundSelectorObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bIsWorldInputBoundSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_bWorldInputBoundSelectorAutoUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::NewProp_UnrealSplineResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPIWorldInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::ClassParams = {
		&UHoudiniPublicAPIWorldInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPIWorldInput, 453436494);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPIWorldInput>()
	{
		return UHoudiniPublicAPIWorldInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPIWorldInput(Z_Construct_UClass_UHoudiniPublicAPIWorldInput, &UHoudiniPublicAPIWorldInput::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPIWorldInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPIWorldInput);
	void UHoudiniPublicAPILandscapeInput::StaticRegisterNativesUHoudiniPublicAPILandscapeInput()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_NoRegister()
	{
		return UHoudiniPublicAPILandscapeInput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateInputLandscape_MetaData[];
#endif
		static void NewProp_bUpdateInputLandscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateInputLandscape;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LandscapeExportType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LandscapeExportType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportSelectionOnly_MetaData[];
#endif
		static void NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportSelectionOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectComponent_MetaData[];
#endif
		static void NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportMaterials_MetaData[];
#endif
		static void NewProp_bLandscapeExportMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportLighting_MetaData[];
#endif
		static void NewProp_bLandscapeExportLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportNormalizedUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportNormalizedUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportTileUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportTileUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportTileUVs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniPublicAPIInput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/**\n * API wrapper input class for landscape inputs. Derived from UHoudiniPublicAPIInput.\n */" },
		{ "IncludePath", "HoudiniPublicAPIInputTypes.h" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "API wrapper input class for landscape inputs. Derived from UHoudiniPublicAPIInput." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates that the landscape input's source landscape should be updated instead of creating a new component */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates that the landscape input's source landscape should be updated instead of creating a new component" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bUpdateInputLandscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape = { "bUpdateInputLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Indicates if the landscape should be exported as heightfield, mesh or points */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Indicates if the landscape should be exported as heightfield, mesh or points" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType = { "LandscapeExportType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniPublicAPILandscapeInput, LandscapeExportType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when landscape input is set to selection only. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when landscape input is set to selection only." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportSelectionOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly = { "bLandscapeExportSelectionOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when the automatic selection of landscape component is active */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when the automatic selection of landscape component is active" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeAutoSelectComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent = { "bLandscapeAutoSelectComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when materials are to be exported. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when materials are to be exported." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials = { "bLandscapeExportMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when lightmap information export is desired. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when lightmap information export is desired." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting = { "bLandscapeExportLighting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when uvs should be exported in [0,1] space. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when uvs should be exported in [0,1] space." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportNormalizedUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs = { "bLandscapeExportNormalizedUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData[] = {
		{ "Category", "Houdini Engine | Public API | Inputs" },
		{ "Comment", "/** Is set to true when uvs should be exported for each tile separately. */" },
		{ "ModuleRelativePath", "Public/HoudiniPublicAPIInputTypes.h" },
		{ "ToolTip", "Is set to true when uvs should be exported for each tile separately." },
	};
#endif
	void Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_SetBit(void* Obj)
	{
		((UHoudiniPublicAPILandscapeInput*)Obj)->bLandscapeExportTileUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs = { "bLandscapeExportTileUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniPublicAPILandscapeInput), &Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bUpdateInputLandscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_LandscapeExportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportSelectionOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeAutoSelectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportNormalizedUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::NewProp_bLandscapeExportTileUVs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPublicAPILandscapeInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::ClassParams = {
		&UHoudiniPublicAPILandscapeInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPublicAPILandscapeInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniPublicAPILandscapeInput, 2553975596);
	template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<UHoudiniPublicAPILandscapeInput>()
	{
		return UHoudiniPublicAPILandscapeInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniPublicAPILandscapeInput(Z_Construct_UClass_UHoudiniPublicAPILandscapeInput, &UHoudiniPublicAPILandscapeInput::StaticClass, TEXT("/Script/HoudiniEngineEditor"), TEXT("UHoudiniPublicAPILandscapeInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPublicAPILandscapeInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

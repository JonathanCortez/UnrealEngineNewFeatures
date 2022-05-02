// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterRamp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterRamp() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFloat_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterChoice_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloat_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampFloat();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterRampColor();
// End Cross Module References
	static UEnum* EHoudiniRampPointConstructStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampPointConstructStatus"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampPointConstructStatus>()
	{
		return EHoudiniRampPointConstructStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRampPointConstructStatus(EHoudiniRampPointConstructStatus_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRampPointConstructStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Hash() { return 2192634172U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRampPointConstructStatus"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniRampPointConstructStatus::None", (int64)EHoudiniRampPointConstructStatus::None },
				{ "EHoudiniRampPointConstructStatus::INITIALIZED", (int64)EHoudiniRampPointConstructStatus::INITIALIZED },
				{ "EHoudiniRampPointConstructStatus::POSITION_INSERTED", (int64)EHoudiniRampPointConstructStatus::POSITION_INSERTED },
				{ "EHoudiniRampPointConstructStatus::VALUE_INSERTED", (int64)EHoudiniRampPointConstructStatus::VALUE_INSERTED },
				{ "EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED", (int64)EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "INITIALIZED.Name", "EHoudiniRampPointConstructStatus::INITIALIZED" },
				{ "INTERPTYPE_INSERTED.Name", "EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED" },
				{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
				{ "None.Name", "EHoudiniRampPointConstructStatus::None" },
				{ "POSITION_INSERTED.Name", "EHoudiniRampPointConstructStatus::POSITION_INSERTED" },
				{ "VALUE_INSERTED.Name", "EHoudiniRampPointConstructStatus::VALUE_INSERTED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniRampPointConstructStatus",
				"EHoudiniRampPointConstructStatus",
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
	void UHoudiniParameterRampModificationEvent::StaticRegisterNativesUHoudiniParameterRampModificationEvent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister()
	{
		return UHoudiniParameterRampModificationEvent::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInsertEvent_MetaData[];
#endif
		static void NewProp_bIsInsertEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInsertEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFloatRamp_MetaData[];
#endif
		static void NewProp_bIsFloatRamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFloatRamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteInstanceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeleteInstanceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InsertPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InsertFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InsertColor;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_InsertInterpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertInterpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InsertInterpolation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit(void* Obj)
	{
		((UHoudiniParameterRampModificationEvent*)Obj)->bIsInsertEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent = { "bIsInsertEvent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit(void* Obj)
	{
		((UHoudiniParameterRampModificationEvent*)Obj)->bIsFloatRamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp = { "bIsFloatRamp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampModificationEvent), &Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex = { "DeleteInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, DeleteInstanceIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertPosition), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat = { "InsertFloat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertFloat), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor = { "InsertColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation = { "InsertInterpolation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampModificationEvent, InsertInterpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsInsertEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_bIsFloatRamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_DeleteInstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::NewProp_InsertInterpolation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampModificationEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams = {
		&UHoudiniParameterRampModificationEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampModificationEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterRampModificationEvent, 3426949642);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampModificationEvent>()
	{
		return UHoudiniParameterRampModificationEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterRampModificationEvent(Z_Construct_UClass_UHoudiniParameterRampModificationEvent, &UHoudiniParameterRampModificationEvent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterRampModificationEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampModificationEvent);
	void UHoudiniParameterRampFloatPoint::StaticRegisterNativesUHoudiniParameterRampFloatPoint()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister()
	{
		return UHoudiniParameterRampFloatPoint::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PositionParentParm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValueParentParm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpolationParentParm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Position), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Value), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, InstanceIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm = { "PositionParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, PositionParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm = { "ValueParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, ValueParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm = { "InterpolationParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloatPoint, InterpolationParentParm), Z_Construct_UClass_UHoudiniParameterChoice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_Interpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_PositionParentParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_ValueParentParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::NewProp_InterpolationParentParm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampFloatPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::ClassParams = {
		&UHoudiniParameterRampFloatPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampFloatPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterRampFloatPoint, 2922301354);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampFloatPoint>()
	{
		return UHoudiniParameterRampFloatPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterRampFloatPoint(Z_Construct_UClass_UHoudiniParameterRampFloatPoint, &UHoudiniParameterRampFloatPoint::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterRampFloatPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampFloatPoint);
	void UHoudiniParameterRampColorPoint::StaticRegisterNativesUHoudiniParameterRampColorPoint()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister()
	{
		return UHoudiniParameterRampColorPoint::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PositionParentParm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValueParentParm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationParentParm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpolationParentParm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Position), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, Interpolation), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InstanceIndex), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm = { "PositionParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, PositionParentParm), Z_Construct_UClass_UHoudiniParameterFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm = { "ValueParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, ValueParentParm), Z_Construct_UClass_UHoudiniParameterColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm = { "InterpolationParentParm", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColorPoint, InterpolationParentParm), Z_Construct_UClass_UHoudiniParameterChoice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_Interpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InstanceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_PositionParentParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_ValueParentParm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::NewProp_InterpolationParentParm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampColorPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams = {
		&UHoudiniParameterRampColorPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampColorPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterRampColorPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterRampColorPoint, 2207311682);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampColorPoint>()
	{
		return UHoudiniParameterRampColorPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterRampColorPoint(Z_Construct_UClass_UHoudiniParameterRampColorPoint, &UHoudiniParameterRampColorPoint::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterRampColorPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampColorPoint);
	void UHoudiniParameterRampFloat::StaticRegisterNativesUHoudiniParameterRampFloat()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterRampFloat_NoRegister()
	{
		return UHoudiniParameterRampFloat::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedPoints;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultPositions;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultChoices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultChoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDefaultPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDefaultPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaching_MetaData[];
#endif
		static void NewProp_bCaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaching;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModificationEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameterMultiParm,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_Inner = { "CachedPoints", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampFloatPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints = { "CachedPoints", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, CachedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_Inner = { "DefaultPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions = { "DefaultPositions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_Inner = { "DefaultChoices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices = { "DefaultChoices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, DefaultChoices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints = { "NumDefaultPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, NumDefaultPoints), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_SetBit(void* Obj)
	{
		((UHoudiniParameterRampFloat*)Obj)->bCaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching = { "bCaching", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampFloat), &Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_Inner = { "ModificationEvents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents = { "ModificationEvents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampFloat, ModificationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_CachedPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_DefaultChoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_NumDefaultPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_bCaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::NewProp_ModificationEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::ClassParams = {
		&UHoudiniParameterRampFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterRampFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterRampFloat, 4036462534);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampFloat>()
	{
		return UHoudiniParameterRampFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterRampFloat(Z_Construct_UClass_UHoudiniParameterRampFloat, &UHoudiniParameterRampFloat::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterRampFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampFloat);
	void UHoudiniParameterRampColor::StaticRegisterNativesUHoudiniParameterRampColor()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniParameterRampColor_NoRegister()
	{
		return UHoudiniParameterRampColor::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterRampColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaching_MetaData[];
#endif
		static void NewProp_bCaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedPoints;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultChoices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultChoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDefaultPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDefaultPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModificationEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModificationEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterRampColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameterMultiParm,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterRamp.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_SetBit(void* Obj)
	{
		((UHoudiniParameterRampColor*)Obj)->bCaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching = { "bCaching", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHoudiniParameterRampColor), &Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner = { "CachedPoints", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampColorPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints = { "CachedPoints", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, CachedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_Inner = { "DefaultPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions = { "DefaultPositions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_Inner = { "DefaultChoices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices = { "DefaultChoices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, DefaultChoices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints = { "NumDefaultPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, NumDefaultPoints), METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_Inner = { "ModificationEvents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoudiniParameterRampModificationEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniParameterRamp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents = { "ModificationEvents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoudiniParameterRampColor, ModificationEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_bCaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_CachedPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_DefaultChoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_NumDefaultPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniParameterRampColor_Statics::NewProp_ModificationEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterRampColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterRampColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterRampColor_Statics::ClassParams = {
		&UHoudiniParameterRampColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterRampColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterRampColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoudiniParameterRampColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniParameterRampColor, 3275728184);
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterRampColor>()
	{
		return UHoudiniParameterRampColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniParameterRampColor(Z_Construct_UClass_UHoudiniParameterRampColor, &UHoudiniParameterRampColor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniParameterRampColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterRampColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridSubsystem();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridSubsystem_NoRegister();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGridState();
UPackage* Z_Construct_UPackage__Script_GridPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGridState ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGridState;
class UScriptStruct* FGridState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGridState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGridState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridState, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("GridState"));
	}
	return Z_Registration_Info_UScriptStruct_FGridState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGridState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// State to differentiate Editor and Runtime.\n/// When accessing grid data, it's always state specific.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nState to differentiate Editor and Runtime.\nWhen accessing grid data, it's always state specific.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
	nullptr,
	&NewStructOps,
	"GridState",
	nullptr,
	0,
	sizeof(FGridState),
	alignof(FGridState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridState()
{
	if (!Z_Registration_Info_UScriptStruct_FGridState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGridState.InnerSingleton, Z_Construct_UScriptStruct_FGridState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGridState.InnerSingleton;
}
// ********** End ScriptStruct FGridState **********************************************************

// ********** Begin Class UGridSubsystem Function CreateSaveData ***********************************
struct Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics
{
	struct GridSubsystem_eventCreateSaveData_Parms
	{
		FString SaveName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Creates a new .sav file of the given name.\n/// </summary>\n/// <param name=\"SaveName\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCreates a new .sav file of the given name.\n</summary>\n<param name=\"SaveName\"></param>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSubsystem_eventCreateSaveData_Parms, SaveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::NewProp_SaveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridSubsystem, nullptr, "CreateSaveData", Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::GridSubsystem_eventCreateSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::GridSubsystem_eventCreateSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridSubsystem_CreateSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSubsystem_CreateSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridSubsystem::execCreateSaveData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSaveData(Z_Param_SaveName);
	P_NATIVE_END;
}
// ********** End Class UGridSubsystem Function CreateSaveData *************************************

// ********** Begin Class UGridSubsystem Function GetIsRuntime *************************************
struct Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics
{
	struct GridSubsystem_eventGetIsRuntime_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Returns bIsRuntime.\n/// </summary>\n/// <returns></returns>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nReturns bIsRuntime.\n</summary>\n<returns></returns>" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridSubsystem_eventGetIsRuntime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridSubsystem_eventGetIsRuntime_Parms), &Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridSubsystem, nullptr, "GetIsRuntime", Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::GridSubsystem_eventGetIsRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::GridSubsystem_eventGetIsRuntime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridSubsystem_GetIsRuntime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSubsystem_GetIsRuntime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridSubsystem::execGetIsRuntime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsRuntime();
	P_NATIVE_END;
}
// ********** End Class UGridSubsystem Function GetIsRuntime ***************************************

// ********** Begin Class UGridSubsystem Function LoadGridData *************************************
struct Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics
{
	struct GridSubsystem_eventLoadGridData_Parms
	{
		FString SaveName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Loads all grid related data from the given save file.\n/// </summary>\n/// <param name=\"SaveName\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nLoads all grid related data from the given save file.\n</summary>\n<param name=\"SaveName\"></param>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSubsystem_eventLoadGridData_Parms, SaveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::NewProp_SaveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridSubsystem, nullptr, "LoadGridData", Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::GridSubsystem_eventLoadGridData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::GridSubsystem_eventLoadGridData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridSubsystem_LoadGridData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSubsystem_LoadGridData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridSubsystem::execLoadGridData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGridData(Z_Param_SaveName);
	P_NATIVE_END;
}
// ********** End Class UGridSubsystem Function LoadGridData ***************************************

// ********** Begin Class UGridSubsystem Function SaveGridData *************************************
struct Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics
{
	struct GridSubsystem_eventSaveGridData_Parms
	{
		FString SaveName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Saves all grid related data to the given save file.\n/// </summary>\n/// <param name=\"SaveName\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nSaves all grid related data to the given save file.\n</summary>\n<param name=\"SaveName\"></param>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSubsystem_eventSaveGridData_Parms, SaveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::NewProp_SaveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridSubsystem, nullptr, "SaveGridData", Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::GridSubsystem_eventSaveGridData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::GridSubsystem_eventSaveGridData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridSubsystem_SaveGridData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSubsystem_SaveGridData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridSubsystem::execSaveGridData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGridData(Z_Param_SaveName);
	P_NATIVE_END;
}
// ********** End Class UGridSubsystem Function SaveGridData ***************************************

// ********** Begin Class UGridSubsystem Function SetRuntimeMode ***********************************
struct Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics
{
	struct GridSubsystem_eventSetRuntimeMode_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Sets bIsRuntime.\n/// </summary>\n/// <param name=\"bEnable\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nSets bIsRuntime.\n</summary>\n<param name=\"bEnable\"></param>" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GridSubsystem_eventSetRuntimeMode_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridSubsystem_eventSetRuntimeMode_Parms), &Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridSubsystem, nullptr, "SetRuntimeMode", Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::GridSubsystem_eventSetRuntimeMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::GridSubsystem_eventSetRuntimeMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridSubsystem::execSetRuntimeMode)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeMode(Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class UGridSubsystem Function SetRuntimeMode *************************************

// ********** Begin Class UGridSubsystem ***********************************************************
void UGridSubsystem::StaticRegisterNativesUGridSubsystem()
{
	UClass* Class = UGridSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSaveData", &UGridSubsystem::execCreateSaveData },
		{ "GetIsRuntime", &UGridSubsystem::execGetIsRuntime },
		{ "LoadGridData", &UGridSubsystem::execLoadGridData },
		{ "SaveGridData", &UGridSubsystem::execSaveGridData },
		{ "SetRuntimeMode", &UGridSubsystem::execSetRuntimeMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGridSubsystem;
UClass* UGridSubsystem::GetPrivateStaticClass()
{
	using TClass = UGridSubsystem;
	if (!Z_Registration_Info_UClass_UGridSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridSubsystem"),
			Z_Registration_Info_UClass_UGridSubsystem.InnerSingleton,
			StaticRegisterNativesUGridSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGridSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UGridSubsystem_NoRegister()
{
	return UGridSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGridSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// GridSubsytem acts as the core for the grid.\n/// Managing and storing save specific grid data and more.\n/// </summary>\n" },
#endif
		{ "IncludePath", "GridSubsystem.h" },
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nGridSubsytem acts as the core for the grid.\nManaging and storing save specific grid data and more.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Start index for the hex grid.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nStart index for the hex grid.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// End index for the hex grid.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nEnd index for the hex grid.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastGridSize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Previous grid size\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nPrevious grid size\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Current grid size\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCurrent grid size\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Last saved offset\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nLast saved offset\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Current tile count\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCurrent tile count\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Is the grid a hex?\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nIs the grid a hex?\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastGridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCount;
	static void NewProp_bIsHex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOpacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridSubsystem_CreateSaveData, "CreateSaveData" }, // 1093272210
		{ &Z_Construct_UFunction_UGridSubsystem_GetIsRuntime, "GetIsRuntime" }, // 3386083423
		{ &Z_Construct_UFunction_UGridSubsystem_LoadGridData, "LoadGridData" }, // 3863460583
		{ &Z_Construct_UFunction_UGridSubsystem_SaveGridData, "SaveGridData" }, // 3222334042
		{ &Z_Construct_UFunction_UGridSubsystem_SetRuntimeMode, "SetRuntimeMode" }, // 2955215335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, StartIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartIndex_MetaData), NewProp_StartIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, EndIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndIndex_MetaData), NewProp_EndIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_LastGridSize = { "LastGridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, LastGridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastGridSize_MetaData), NewProp_LastGridSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, GridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, GridOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOffset_MetaData), NewProp_GridOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_TileCount = { "TileCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, TileCount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCount_MetaData), NewProp_TileCount_MetaData) };
void Z_Construct_UClass_UGridSubsystem_Statics::NewProp_bIsHex_SetBit(void* Obj)
{
	((UGridSubsystem*)Obj)->bIsHex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_bIsHex = { "bIsHex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridSubsystem), &Z_Construct_UClass_UGridSubsystem_Statics::NewProp_bIsHex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHex_MetaData), NewProp_bIsHex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_LineWidth = { "LineWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, LineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineWidth_MetaData), NewProp_LineWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_LineOpacity = { "LineOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, LineOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOpacity_MetaData), NewProp_LineOpacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_TileOpacity = { "TileOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, TileOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileOpacity_MetaData), NewProp_TileOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_TileColor = { "TileColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, TileColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileColor_MetaData), NewProp_TileColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSubsystem_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSubsystem, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_EndIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_LastGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_GridOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_TileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_bIsHex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_LineWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_LineOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_TileOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_TileColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSubsystem_Statics::NewProp_LineColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridSubsystem_Statics::ClassParams = {
	&UGridSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGridSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridSubsystem()
{
	if (!Z_Registration_Info_UClass_UGridSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridSubsystem.OuterSingleton, Z_Construct_UClass_UGridSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSubsystem);
UGridSubsystem::~UGridSubsystem() {}
// ********** End Class UGridSubsystem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h__Script_GridPlugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridState::StaticStruct, Z_Construct_UScriptStruct_FGridState_Statics::NewStructOps, TEXT("GridState"), &Z_Registration_Info_UScriptStruct_FGridState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridState), 846174277U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridSubsystem, UGridSubsystem::StaticClass, TEXT("UGridSubsystem"), &Z_Registration_Info_UClass_UGridSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridSubsystem), 980176607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h__Script_GridPlugin_232387121(TEXT("/Script/GridPlugin"),
	Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h__Script_GridPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h__Script_GridPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h__Script_GridPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h__Script_GridPlugin_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

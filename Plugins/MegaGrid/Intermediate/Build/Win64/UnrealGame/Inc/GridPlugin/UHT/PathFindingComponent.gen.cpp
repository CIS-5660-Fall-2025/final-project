// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFindingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePathFindingComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UPathFindingComponent();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UPathFindingComponent_NoRegister();
GRIDPLUGIN_API UEnum* Z_Construct_UEnum_GridPlugin_EPathCompleteReason();
GRIDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature();
GRIDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPathStruct();
UPackage* Z_Construct_UPackage__Script_GridPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPathCompleteReason *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathCompleteReason;
static UEnum* EPathCompleteReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathCompleteReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathCompleteReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridPlugin_EPathCompleteReason, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("EPathCompleteReason"));
	}
	return Z_Registration_Info_UEnum_EPathCompleteReason.OuterSingleton;
}
template<> GRIDPLUGIN_API UEnum* StaticEnum<EPathCompleteReason>()
{
	return EPathCompleteReason_StaticEnum();
}
struct Z_Construct_UEnum_GridPlugin_EPathCompleteReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Pathfinding complete reason. Why did the pathfinding stop?\n/// </summary>\n" },
#endif
		{ "GridNotGenerated.DisplayName", "GridNotGenerated" },
		{ "GridNotGenerated.Name", "EPathCompleteReason::GridNotGenerated" },
		{ "InvalidStartOrEnd.DisplayName", "InvalidStartOrEnd" },
		{ "InvalidStartOrEnd.Name", "EPathCompleteReason::InvalidStartOrEnd" },
		{ "MaxIterationsReached.DisplayName", "MaxIterationsReached" },
		{ "MaxIterationsReached.Name", "EPathCompleteReason::MaxIterationsReached" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
		{ "PathFound.DisplayName", "PathFound" },
		{ "PathFound.Name", "EPathCompleteReason::PathFound" },
		{ "PathNotFound.DisplayName", "PathNotFound" },
		{ "PathNotFound.Name", "EPathCompleteReason::PathNotFound" },
		{ "TargetTooFar.DisplayName", "TargetTooFar" },
		{ "TargetTooFar.Name", "EPathCompleteReason::TargetTooFar" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nPathfinding complete reason. Why did the pathfinding stop?\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathCompleteReason::PathFound", (int64)EPathCompleteReason::PathFound },
		{ "EPathCompleteReason::MaxIterationsReached", (int64)EPathCompleteReason::MaxIterationsReached },
		{ "EPathCompleteReason::InvalidStartOrEnd", (int64)EPathCompleteReason::InvalidStartOrEnd },
		{ "EPathCompleteReason::PathNotFound", (int64)EPathCompleteReason::PathNotFound },
		{ "EPathCompleteReason::GridNotGenerated", (int64)EPathCompleteReason::GridNotGenerated },
		{ "EPathCompleteReason::TargetTooFar", (int64)EPathCompleteReason::TargetTooFar },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridPlugin_EPathCompleteReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GridPlugin,
	nullptr,
	"EPathCompleteReason",
	"EPathCompleteReason",
	Z_Construct_UEnum_GridPlugin_EPathCompleteReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GridPlugin_EPathCompleteReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GridPlugin_EPathCompleteReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GridPlugin_EPathCompleteReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GridPlugin_EPathCompleteReason()
{
	if (!Z_Registration_Info_UEnum_EPathCompleteReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathCompleteReason.InnerSingleton, Z_Construct_UEnum_GridPlugin_EPathCompleteReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathCompleteReason.InnerSingleton;
}
// ********** End Enum EPathCompleteReason *********************************************************

// ********** Begin ScriptStruct FPathStruct *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPathStruct;
class UScriptStruct* FPathStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPathStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathStruct, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("PathStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FPathStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPathStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Struct that holds the returning path and the complete reason.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nStruct that holds the returning path and the complete reason.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Member variables\n" },
#endif
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Member variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathCompleteReason_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathCompleteReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathCompleteReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathStruct_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPathStruct_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathStruct, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPathStruct_Statics::NewProp_PathCompleteReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPathStruct_Statics::NewProp_PathCompleteReason = { "PathCompleteReason", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathStruct, PathCompleteReason), Z_Construct_UEnum_GridPlugin_EPathCompleteReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathCompleteReason_MetaData), NewProp_PathCompleteReason_MetaData) }; // 4014011902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathStruct_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathStruct_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathStruct_Statics::NewProp_PathCompleteReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathStruct_Statics::NewProp_PathCompleteReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
	nullptr,
	&NewStructOps,
	"PathStruct",
	Z_Construct_UScriptStruct_FPathStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathStruct_Statics::PropPointers),
	sizeof(FPathStruct),
	alignof(FPathStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPathStruct.InnerSingleton, Z_Construct_UScriptStruct_FPathStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPathStruct.InnerSingleton;
}
// ********** End ScriptStruct FPathStruct *********************************************************

// ********** Begin Delegate FPathCompleteDelegate *************************************************
struct Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics
{
	struct _Script_GridPlugin_eventPathCompleteDelegate_Parms
	{
		FPathStruct PathOut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Used to notify others when async pathfinding is complete.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nUsed to notify others when async pathfinding is complete.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOut_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::NewProp_PathOut = { "PathOut", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GridPlugin_eventPathCompleteDelegate_Parms, PathOut), Z_Construct_UScriptStruct_FPathStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOut_MetaData), NewProp_PathOut_MetaData) }; // 3874805776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::NewProp_PathOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GridPlugin, nullptr, "PathCompleteDelegate__DelegateSignature", Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::_Script_GridPlugin_eventPathCompleteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::_Script_GridPlugin_eventPathCompleteDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPathCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& PathCompleteDelegate, FPathStruct const& PathOut)
{
	struct _Script_GridPlugin_eventPathCompleteDelegate_Parms
	{
		FPathStruct PathOut;
	};
	_Script_GridPlugin_eventPathCompleteDelegate_Parms Parms;
	Parms.PathOut=PathOut;
	PathCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPathCompleteDelegate ***************************************************

// ********** Begin Delegate FPathFollowDelegate ***************************************************
struct Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics
{
	struct _Script_GridPlugin_eventPathFollowDelegate_Parms
	{
		FTransform Transform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Called every iteration through StartMovingOnPath. If you're using you're own\n/// movement functions, this is of little interest.\n/// </summary>\n/// \n" },
#endif
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCalled every iteration through StartMovingOnPath. If you're using you're own\nmovement functions, this is of little interest.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GridPlugin_eventPathFollowDelegate_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GridPlugin, nullptr, "PathFollowDelegate__DelegateSignature", Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::_Script_GridPlugin_eventPathFollowDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::_Script_GridPlugin_eventPathFollowDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPathFollowDelegate_DelegateWrapper(const FMulticastScriptDelegate& PathFollowDelegate, FTransform Transform)
{
	struct _Script_GridPlugin_eventPathFollowDelegate_Parms
	{
		FTransform Transform;
	};
	_Script_GridPlugin_eventPathFollowDelegate_Parms Parms;
	Parms.Transform=Transform;
	PathFollowDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPathFollowDelegate *****************************************************

// ********** Begin Class UPathFindingComponent Function ClearSplinePath ***************************
struct Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics
{
	struct PathFindingComponent_eventClearSplinePath_Parms
	{
		USplineComponent* PathSpline;
		bool bHideMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline Path" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the existing path of a given spline." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSpline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathSpline;
	static void NewProp_bHideMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::NewProp_PathSpline = { "PathSpline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventClearSplinePath_Parms, PathSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSpline_MetaData), NewProp_PathSpline_MetaData) };
void Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::NewProp_bHideMesh_SetBit(void* Obj)
{
	((PathFindingComponent_eventClearSplinePath_Parms*)Obj)->bHideMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::NewProp_bHideMesh = { "bHideMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathFindingComponent_eventClearSplinePath_Parms), &Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::NewProp_bHideMesh_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::NewProp_PathSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::NewProp_bHideMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "ClearSplinePath", Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::PathFindingComponent_eventClearSplinePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::PathFindingComponent_eventClearSplinePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execClearSplinePath)
{
	P_GET_OBJECT(USplineComponent,Z_Param_PathSpline);
	P_GET_UBOOL(Z_Param_bHideMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSplinePath(Z_Param_PathSpline,Z_Param_bHideMesh);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function ClearSplinePath *****************************

// ********** Begin Class UPathFindingComponent Function DrawSplinePath ****************************
struct Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics
{
	struct PathFindingComponent_eventDrawSplinePath_Parms
	{
		USplineComponent* PathSpline;
		TArray<FVector> Path;
		float HeightOffset;
		int32 NumSamples;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Path Movement" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws Spline Path. NOTE: Quite slow, avoid high frequency calls!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSpline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathSpline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_PathSpline = { "PathSpline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventDrawSplinePath_Parms, PathSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSpline_MetaData), NewProp_PathSpline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventDrawSplinePath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventDrawSplinePath_Parms, HeightOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventDrawSplinePath_Parms, NumSamples), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_PathSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_HeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::NewProp_NumSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "DrawSplinePath", Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::PathFindingComponent_eventDrawSplinePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::PathFindingComponent_eventDrawSplinePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execDrawSplinePath)
{
	P_GET_OBJECT(USplineComponent,Z_Param_PathSpline);
	P_GET_TARRAY(FVector,Z_Param_Path);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HeightOffset);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSamples);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawSplinePath(Z_Param_PathSpline,Z_Param_Path,Z_Param_HeightOffset,Z_Param_NumSamples);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function DrawSplinePath ******************************

// ********** Begin Class UPathFindingComponent Function FindPath **********************************
struct Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics
{
	struct PathFindingComponent_eventFindPath_Parms
	{
		FIntPoint StartIndex;
		FIntPoint TargetIndex;
		FPathStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sync pathfinding, long paths may bog down FPS!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventFindPath_Parms, StartIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventFindPath_Parms, TargetIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventFindPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FPathStruct, METADATA_PARAMS(0, nullptr) }; // 3874805776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "FindPath", Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::PathFindingComponent_eventFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::PathFindingComponent_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execFindPath)
{
	P_GET_STRUCT(FIntPoint,Z_Param_StartIndex);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPathStruct*)Z_Param__Result=P_THIS->FindPath(Z_Param_StartIndex,Z_Param_TargetIndex);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function FindPath ************************************

// ********** Begin Class UPathFindingComponent Function FindPathAsync *****************************
struct Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics
{
	struct PathFindingComponent_eventFindPathAsync_Parms
	{
		FIntPoint StartIndex;
		FIntPoint TargetIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Async pathfinding, 60FPS guaranteed! (T&C applies, haha)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventFindPathAsync_Parms, StartIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventFindPathAsync_Parms, TargetIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::NewProp_TargetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "FindPathAsync", Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::PathFindingComponent_eventFindPathAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::PathFindingComponent_eventFindPathAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_FindPathAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_FindPathAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execFindPathAsync)
{
	P_GET_STRUCT(FIntPoint,Z_Param_StartIndex);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindPathAsync(Z_Param_StartIndex,Z_Param_TargetIndex);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function FindPathAsync *******************************

// ********** Begin Class UPathFindingComponent Function FindPathAsyncConditioning *****************
struct Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics
{
	struct PathFindingComponent_eventFindPathAsyncConditioning_Parms
	{
		FIntPoint StartIndex;
		FIntPoint TargetIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test Only" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Development ONLY." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventFindPathAsyncConditioning_Parms, StartIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventFindPathAsyncConditioning_Parms, TargetIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::NewProp_TargetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "FindPathAsyncConditioning", Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::PathFindingComponent_eventFindPathAsyncConditioning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::PathFindingComponent_eventFindPathAsyncConditioning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execFindPathAsyncConditioning)
{
	P_GET_STRUCT(FIntPoint,Z_Param_StartIndex);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindPathAsyncConditioning(Z_Param_StartIndex,Z_Param_TargetIndex);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function FindPathAsyncConditioning *******************

// ********** Begin Class UPathFindingComponent Function GetDistance *******************************
struct Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics
{
	struct PathFindingComponent_eventGetDistance_Parms
	{
		FIntPoint CurrentIndex;
		FIntPoint TargetIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get distance between two tiles. Heuristic or HCost" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventGetDistance_Parms, CurrentIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventGetDistance_Parms, TargetIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventGetDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::NewProp_CurrentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "GetDistance", Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::PathFindingComponent_eventGetDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::PathFindingComponent_eventGetDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_GetDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_GetDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execGetDistance)
{
	P_GET_STRUCT(FIntPoint,Z_Param_CurrentIndex);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistance(Z_Param_CurrentIndex,Z_Param_TargetIndex);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function GetDistance *********************************

// ********** Begin Class UPathFindingComponent Function GetHexDistance ****************************
struct Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics
{
	struct PathFindingComponent_eventGetHexDistance_Parms
	{
		FIntPoint CurrentIndex;
		FIntPoint TargetIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get hex distance between two tiles. Heuristic or HCost" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventGetHexDistance_Parms, CurrentIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventGetHexDistance_Parms, TargetIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventGetHexDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::NewProp_CurrentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "GetHexDistance", Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::PathFindingComponent_eventGetHexDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::PathFindingComponent_eventGetHexDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_GetHexDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_GetHexDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execGetHexDistance)
{
	P_GET_STRUCT(FIntPoint,Z_Param_CurrentIndex);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHexDistance(Z_Param_CurrentIndex,Z_Param_TargetIndex);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function GetHexDistance ******************************

// ********** Begin Class UPathFindingComponent Function GetTotalMovementCost **********************
struct Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics
{
	struct PathFindingComponent_eventGetTotalMovementCost_Parms
	{
		TArray<FIntPoint> Path;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the cost to traverse the given path." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventGetTotalMovementCost_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventGetTotalMovementCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "GetTotalMovementCost", Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::PathFindingComponent_eventGetTotalMovementCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::PathFindingComponent_eventGetTotalMovementCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execGetTotalMovementCost)
{
	P_GET_TARRAY(FIntPoint,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTotalMovementCost(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function GetTotalMovementCost ************************

// ********** Begin Class UPathFindingComponent Function IsTileValid *******************************
struct Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics
{
	struct PathFindingComponent_eventIsTileValid_Parms
	{
		FIntPoint TileIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tells if the given tile is walkable or not." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventIsTileValid_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PathFindingComponent_eventIsTileValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathFindingComponent_eventIsTileValid_Parms), &Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "IsTileValid", Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::PathFindingComponent_eventIsTileValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::PathFindingComponent_eventIsTileValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_IsTileValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_IsTileValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execIsTileValid)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTileValid(Z_Param_TileIndex);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function IsTileValid *********************************

// ********** Begin Class UPathFindingComponent Function PrecomputeMovementCosts *******************
struct Z_Construct_UFunction_UPathFindingComponent_PrecomputeMovementCosts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pre-Loads movement costs for each tile into TypeMovementCostMap." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_PrecomputeMovementCosts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "PrecomputeMovementCosts", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_PrecomputeMovementCosts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_PrecomputeMovementCosts_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPathFindingComponent_PrecomputeMovementCosts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_PrecomputeMovementCosts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execPrecomputeMovementCosts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrecomputeMovementCosts();
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function PrecomputeMovementCosts *********************

// ********** Begin Class UPathFindingComponent Function StartMovingOnPath *************************
struct Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics
{
	struct PathFindingComponent_eventStartMovingOnPath_Parms
	{
		TArray<FVector> Path;
		double Interval;
		double LerpSpeed;
		double Delay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Path Movement" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts calculating interval transforms. Returned in the OnFollowPath event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Interval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LerpSpeed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Delay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventStartMovingOnPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventStartMovingOnPath_Parms, Interval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_LerpSpeed = { "LerpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventStartMovingOnPath_Parms, LerpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFindingComponent_eventStartMovingOnPath_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_Interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_LerpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::NewProp_Delay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathFindingComponent, nullptr, "StartMovingOnPath", Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::PathFindingComponent_eventStartMovingOnPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::PathFindingComponent_eventStartMovingOnPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFindingComponent::execStartMovingOnPath)
{
	P_GET_TARRAY(FVector,Z_Param_Path);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Interval);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_LerpSpeed);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Delay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMovingOnPath(Z_Param_Path,Z_Param_Interval,Z_Param_LerpSpeed,Z_Param_Delay);
	P_NATIVE_END;
}
// ********** End Class UPathFindingComponent Function StartMovingOnPath ***************************

// ********** Begin Class UPathFindingComponent ****************************************************
void UPathFindingComponent::StaticRegisterNativesUPathFindingComponent()
{
	UClass* Class = UPathFindingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearSplinePath", &UPathFindingComponent::execClearSplinePath },
		{ "DrawSplinePath", &UPathFindingComponent::execDrawSplinePath },
		{ "FindPath", &UPathFindingComponent::execFindPath },
		{ "FindPathAsync", &UPathFindingComponent::execFindPathAsync },
		{ "FindPathAsyncConditioning", &UPathFindingComponent::execFindPathAsyncConditioning },
		{ "GetDistance", &UPathFindingComponent::execGetDistance },
		{ "GetHexDistance", &UPathFindingComponent::execGetHexDistance },
		{ "GetTotalMovementCost", &UPathFindingComponent::execGetTotalMovementCost },
		{ "IsTileValid", &UPathFindingComponent::execIsTileValid },
		{ "PrecomputeMovementCosts", &UPathFindingComponent::execPrecomputeMovementCosts },
		{ "StartMovingOnPath", &UPathFindingComponent::execStartMovingOnPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPathFindingComponent;
UClass* UPathFindingComponent::GetPrivateStaticClass()
{
	using TClass = UPathFindingComponent;
	if (!Z_Registration_Info_UClass_UPathFindingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PathFindingComponent"),
			Z_Registration_Info_UClass_UPathFindingComponent.InnerSingleton,
			StaticRegisterNativesUPathFindingComponent,
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
	return Z_Registration_Info_UClass_UPathFindingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPathFindingComponent_NoRegister()
{
	return UPathFindingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPathFindingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "TerrainGrid" },
		{ "IncludePath", "Pathfinding/PathFindingComponent.h" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHex_MetaData[] = {
		{ "Category", "Pathfinding Data" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pathfinding Data" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many iterations before pathfinding stops. Higher values may be slower." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPathLength_MetaData[] = {
		{ "Category", "Pathfinding Data" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pathfinding will terminate if a path exceeds this length." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeap_MetaData[] = {
		{ "Category", "Pathfinding Data" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use heap optimization? Negligible performance difference. May improve accuracy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPathComplete_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every time async pathfinding completes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowPath_MetaData[] = {
		{ "Category", "Path Movement" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every time FTransform is calculated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPath_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last valid path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypesToBlock_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types to be treated as obstacles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypesToIgnore_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types to be treated with no movement costs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatesToBlock_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "States to be treated as obstacles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTypeMapping_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataTable containing Tile Name, Type, Color and Movement Costs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDiagonals_MetaData[] = {
		{ "Category", "Advanced Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use diagonals for Pathfinding?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWeightedDiagonals_MetaData[] = {
		{ "Category", "Advanced Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turning this ON will add DiagonalCost to diagonal movements." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiagonalCost_MetaData[] = {
		{ "Category", "Advanced Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increasing this will make diagonal movements more expensive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMovementCost_MetaData[] = {
		{ "Category", "Advanced Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tells the pathfinding to use MovementCosts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBias_MetaData[] = {
		{ "Category", "Advanced Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much bias does the pathfinder have towards Distance? Lower = Higher Accuracy (Slower). Higher = Lower Accuracy (Faster)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeuristicSizeMultiplier_MetaData[] = {
		{ "Category", "Advanced Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier for influencing Distance. Lower for TileCounts, Vice Versa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCostBias_MetaData[] = {
		{ "Category", "Advanced Pathfinding" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much bias does the pathfinder have towards MovementCost (GCost)? Lower = Higher Accuracy(Slower), Higher = Lower Accuracy(Faster)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCalls_MetaData[] = {
		{ "Category", "Test Only" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// These are only for stress testing.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThese are only for stress testing.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshMaterial_MetaData[] = {
		{ "Category", "Spline Path" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineEndMesh_MetaData[] = {
		{ "Category", "Spline Path" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The end mesh of a spline, think arrow head of an arrow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineBodyMesh_MetaData[] = {
		{ "Category", "Spline Path" },
		{ "ModuleRelativePath", "Pathfinding/PathFindingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsHex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPathLength;
	static void NewProp_bUseHeap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPathComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FollowPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypesToBlock_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypesToBlock;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypesToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypesToIgnore;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StatesToBlock_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatesToBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileTypeMapping;
	static void NewProp_bUseDiagonals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDiagonals;
	static void NewProp_bUseWeightedDiagonals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWeightedDiagonals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DiagonalCost;
	static void NewProp_bUseMovementCost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMovementCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeuristicSizeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementCostBias;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCalls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMeshMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineEndMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineBodyMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathFindingComponent_ClearSplinePath, "ClearSplinePath" }, // 1240158297
		{ &Z_Construct_UFunction_UPathFindingComponent_DrawSplinePath, "DrawSplinePath" }, // 679364741
		{ &Z_Construct_UFunction_UPathFindingComponent_FindPath, "FindPath" }, // 1770950598
		{ &Z_Construct_UFunction_UPathFindingComponent_FindPathAsync, "FindPathAsync" }, // 169582816
		{ &Z_Construct_UFunction_UPathFindingComponent_FindPathAsyncConditioning, "FindPathAsyncConditioning" }, // 2186889647
		{ &Z_Construct_UFunction_UPathFindingComponent_GetDistance, "GetDistance" }, // 3598306749
		{ &Z_Construct_UFunction_UPathFindingComponent_GetHexDistance, "GetHexDistance" }, // 3119410749
		{ &Z_Construct_UFunction_UPathFindingComponent_GetTotalMovementCost, "GetTotalMovementCost" }, // 1388882669
		{ &Z_Construct_UFunction_UPathFindingComponent_IsTileValid, "IsTileValid" }, // 65671298
		{ &Z_Construct_UFunction_UPathFindingComponent_PrecomputeMovementCosts, "PrecomputeMovementCosts" }, // 368757300
		{ &Z_Construct_UFunction_UPathFindingComponent_StartMovingOnPath, "StartMovingOnPath" }, // 545814486
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathFindingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bIsHex_SetBit(void* Obj)
{
	((UPathFindingComponent*)Obj)->bIsHex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bIsHex = { "bIsHex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathFindingComponent), &Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bIsHex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHex_MetaData), NewProp_bIsHex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_MaxPathLength = { "MaxPathLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, MaxPathLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPathLength_MetaData), NewProp_MaxPathLength_MetaData) };
void Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseHeap_SetBit(void* Obj)
{
	((UPathFindingComponent*)Obj)->bUseHeap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseHeap = { "bUseHeap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathFindingComponent), &Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseHeap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHeap_MetaData), NewProp_bUseHeap_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_OnPathComplete = { "OnPathComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, OnPathComplete), Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPathComplete_MetaData), NewProp_OnPathComplete_MetaData) }; // 2000434558
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_FollowPath = { "FollowPath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, FollowPath), Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowPath_MetaData), NewProp_FollowPath_MetaData) }; // 985164054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_LastPath_Inner = { "LastPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_LastPath = { "LastPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, LastPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPath_MetaData), NewProp_LastPath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TypesToBlock_Inner = { "TypesToBlock", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TypesToBlock = { "TypesToBlock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, TypesToBlock), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypesToBlock_MetaData), NewProp_TypesToBlock_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TypesToIgnore_Inner = { "TypesToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TypesToIgnore = { "TypesToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, TypesToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypesToIgnore_MetaData), NewProp_TypesToIgnore_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_StatesToBlock_Inner = { "StatesToBlock", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_StatesToBlock = { "StatesToBlock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, StatesToBlock), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatesToBlock_MetaData), NewProp_StatesToBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TileTypeMapping = { "TileTypeMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, TileTypeMapping), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTypeMapping_MetaData), NewProp_TileTypeMapping_MetaData) };
void Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseDiagonals_SetBit(void* Obj)
{
	((UPathFindingComponent*)Obj)->bUseDiagonals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseDiagonals = { "bUseDiagonals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathFindingComponent), &Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseDiagonals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDiagonals_MetaData), NewProp_bUseDiagonals_MetaData) };
void Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseWeightedDiagonals_SetBit(void* Obj)
{
	((UPathFindingComponent*)Obj)->bUseWeightedDiagonals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseWeightedDiagonals = { "bUseWeightedDiagonals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathFindingComponent), &Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseWeightedDiagonals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWeightedDiagonals_MetaData), NewProp_bUseWeightedDiagonals_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_DiagonalCost = { "DiagonalCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, DiagonalCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiagonalCost_MetaData), NewProp_DiagonalCost_MetaData) };
void Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseMovementCost_SetBit(void* Obj)
{
	((UPathFindingComponent*)Obj)->bUseMovementCost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseMovementCost = { "bUseMovementCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathFindingComponent), &Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseMovementCost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMovementCost_MetaData), NewProp_bUseMovementCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_DistanceBias = { "DistanceBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, DistanceBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceBias_MetaData), NewProp_DistanceBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_HeuristicSizeMultiplier = { "HeuristicSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, HeuristicSizeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeuristicSizeMultiplier_MetaData), NewProp_HeuristicSizeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_MovementCostBias = { "MovementCostBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, MovementCostBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCostBias_MetaData), NewProp_MovementCostBias_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_NumCalls = { "NumCalls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, NumCalls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCalls_MetaData), NewProp_NumCalls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_SplineMeshMaterial = { "SplineMeshMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, SplineMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshMaterial_MetaData), NewProp_SplineMeshMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_SplineEndMesh = { "SplineEndMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, SplineEndMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineEndMesh_MetaData), NewProp_SplineEndMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_SplineBodyMesh = { "SplineBodyMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFindingComponent, SplineBodyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineBodyMesh_MetaData), NewProp_SplineBodyMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathFindingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bIsHex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_MaxPathLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseHeap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_OnPathComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_FollowPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_LastPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_LastPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TypesToBlock_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TypesToBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TypesToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TypesToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_StatesToBlock_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_StatesToBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_TileTypeMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseDiagonals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseWeightedDiagonals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_DiagonalCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_bUseMovementCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_DistanceBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_HeuristicSizeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_MovementCostBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_NumCalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_SplineMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_SplineEndMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFindingComponent_Statics::NewProp_SplineBodyMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFindingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPathFindingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFindingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathFindingComponent_Statics::ClassParams = {
	&UPathFindingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPathFindingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPathFindingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFindingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathFindingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathFindingComponent()
{
	if (!Z_Registration_Info_UClass_UPathFindingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathFindingComponent.OuterSingleton, Z_Construct_UClass_UPathFindingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathFindingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathFindingComponent);
UPathFindingComponent::~UPathFindingComponent() {}
// ********** End Class UPathFindingComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h__Script_GridPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPathCompleteReason_StaticEnum, TEXT("EPathCompleteReason"), &Z_Registration_Info_UEnum_EPathCompleteReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4014011902U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPathStruct::StaticStruct, Z_Construct_UScriptStruct_FPathStruct_Statics::NewStructOps, TEXT("PathStruct"), &Z_Registration_Info_UScriptStruct_FPathStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathStruct), 3874805776U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathFindingComponent, UPathFindingComponent::StaticClass, TEXT("UPathFindingComponent"), &Z_Registration_Info_UClass_UPathFindingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathFindingComponent), 3704272540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h__Script_GridPlugin_2264664187(TEXT("/Script/GridPlugin"),
	Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h__Script_GridPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h__Script_GridPlugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h__Script_GridPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h__Script_GridPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h__Script_GridPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h__Script_GridPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

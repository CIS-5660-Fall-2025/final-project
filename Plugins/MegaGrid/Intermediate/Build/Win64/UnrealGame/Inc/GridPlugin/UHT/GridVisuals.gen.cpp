// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridVisuals.h"
#include "GridDataStructures.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridVisuals() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridVisuals();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridVisuals_NoRegister();
GRIDPLUGIN_API UEnum* Z_Construct_UEnum_GridPlugin_EGridShape();
GRIDPLUGIN_API UEnum* Z_Construct_UEnum_GridPlugin_EGridVisualContext();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTileData();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTileInstanceInfo();
UPackage* Z_Construct_UPackage__Script_GridPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGridShape ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridShape;
static UEnum* EGridShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridPlugin_EGridShape, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("EGridShape"));
	}
	return Z_Registration_Info_UEnum_EGridShape.OuterSingleton;
}
template<> GRIDPLUGIN_API UEnum* StaticEnum<EGridShape>()
{
	return EGridShape_StaticEnum();
}
struct Z_Construct_UEnum_GridPlugin_EGridShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Shape enum.\n/// </summary>\n" },
#endif
		{ "Hex.DisplayName", "Hex" },
		{ "Hex.Name", "EGridShape::Hex" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
		{ "Square.DisplayName", "Square" },
		{ "Square.Name", "EGridShape::Square" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nShape enum.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridShape::Hex", (int64)EGridShape::Hex },
		{ "EGridShape::Square", (int64)EGridShape::Square },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridPlugin_EGridShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GridPlugin,
	nullptr,
	"EGridShape",
	"EGridShape",
	Z_Construct_UEnum_GridPlugin_EGridShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GridPlugin_EGridShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GridPlugin_EGridShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GridPlugin_EGridShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GridPlugin_EGridShape()
{
	if (!Z_Registration_Info_UEnum_EGridShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridShape.InnerSingleton, Z_Construct_UEnum_GridPlugin_EGridShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridShape.InnerSingleton;
}
// ********** End Enum EGridShape ******************************************************************

// ********** Begin Class AGridVisuals Function AddTileVisualEditor ********************************
#if WITH_EDITOR
struct Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics
{
	struct GridVisuals_eventAddTileVisualEditor_Parms
	{
		FIntPoint TileIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds/Updates the HISMC instance corresponding to the tile index. Editor USE ONLY." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventAddTileVisualEditor_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::NewProp_TileIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "AddTileVisualEditor", Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::GridVisuals_eventAddTileVisualEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::GridVisuals_eventAddTileVisualEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AGridVisuals::execAddTileVisualEditor)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_TileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTileVisualEditor(Z_Param_Out_TileIndex);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class AGridVisuals Function AddTileVisualEditor **********************************

// ********** Begin Class AGridVisuals Function AddTileVisualRuntime *******************************
struct Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics
{
	struct GridVisuals_eventAddTileVisualRuntime_Parms
	{
		FIntPoint TileIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds/Updates the HISMC instance corresponding to the tile index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventAddTileVisualRuntime_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::NewProp_TileIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "AddTileVisualRuntime", Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::GridVisuals_eventAddTileVisualRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::GridVisuals_eventAddTileVisualRuntime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execAddTileVisualRuntime)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_TileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTileVisualRuntime(Z_Param_Out_TileIndex);
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function AddTileVisualRuntime *********************************

// ********** Begin Class AGridVisuals Function DestroyVisuals *************************************
struct Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics
{
	struct GridVisuals_eventDestroyVisuals_Parms
	{
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys all the HISMCs of the given context, resulting in an empty grid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventDestroyVisuals_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "DestroyVisuals", Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::GridVisuals_eventDestroyVisuals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::GridVisuals_eventDestroyVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_DestroyVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_DestroyVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execDestroyVisuals)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyVisuals(EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function DestroyVisuals ***************************************

// ********** Begin Class AGridVisuals Function GetChunkFromTileIndex ******************************
struct Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics
{
	struct GridVisuals_eventGetChunkFromTileIndex_Parms
	{
		FIntPoint TileIndex;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Procedurally calculate which ChunkIndex the given tile index belongs to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetChunkFromTileIndex_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetChunkFromTileIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "GetChunkFromTileIndex", Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::GridVisuals_eventGetChunkFromTileIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::GridVisuals_eventGetChunkFromTileIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execGetChunkFromTileIndex)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_TileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetChunkFromTileIndex(Z_Param_Out_TileIndex);
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function GetChunkFromTileIndex ********************************

// ********** Begin Class AGridVisuals Function GetColorFromState **********************************
struct Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics
{
	struct GridVisuals_eventGetColorFromState_Parms
	{
		FTileData TileData;
		FVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns color best suited for the tile. States take priority over Types." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::NewProp_TileData = { "TileData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetColorFromState_Parms, TileData), Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(0, nullptr) }; // 3156993325
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetColorFromState_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::NewProp_TileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "GetColorFromState", Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::GridVisuals_eventGetColorFromState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::GridVisuals_eventGetColorFromState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_GetColorFromState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_GetColorFromState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execGetColorFromState)
{
	P_GET_STRUCT(FTileData,Z_Param_TileData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector4*)Z_Param__Result=P_THIS->GetColorFromState(Z_Param_TileData);
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function GetColorFromState ************************************

// ********** Begin Class AGridVisuals Function GetColorFromType ***********************************
struct Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics
{
	struct GridVisuals_eventGetColorFromType_Parms
	{
		FName TileType;
		FVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the type color." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TileType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetColorFromType_Parms, TileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetColorFromType_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::NewProp_TileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "GetColorFromType", Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::GridVisuals_eventGetColorFromType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::GridVisuals_eventGetColorFromType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_GetColorFromType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_GetColorFromType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execGetColorFromType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector4*)Z_Param__Result=P_THIS->GetColorFromType(Z_Param_TileType);
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function GetColorFromType *************************************

// ********** Begin Class AGridVisuals Function GetInstanceInfoForTile *****************************
struct Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics
{
	struct GridVisuals_eventGetInstanceInfoForTile_Parms
	{
		FIntPoint TileIndex;
		FTileInstanceInfo OutInfo;
		TMap<FIntPoint,FTileInstanceInfo> InTileToInstanceMap;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the tile instance info for the given tile index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTileToInstanceMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTileToInstanceMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InTileToInstanceMap;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetInstanceInfoForTile_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_OutInfo = { "OutInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetInstanceInfoForTile_Parms, OutInfo), Z_Construct_UScriptStruct_FTileInstanceInfo, METADATA_PARAMS(0, nullptr) }; // 394013509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_InTileToInstanceMap_ValueProp = { "InTileToInstanceMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTileInstanceInfo, METADATA_PARAMS(0, nullptr) }; // 394013509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_InTileToInstanceMap_Key_KeyProp = { "InTileToInstanceMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_InTileToInstanceMap = { "InTileToInstanceMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetInstanceInfoForTile_Parms, InTileToInstanceMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 394013509
void Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridVisuals_eventGetInstanceInfoForTile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridVisuals_eventGetInstanceInfoForTile_Parms), &Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_OutInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_InTileToInstanceMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_InTileToInstanceMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_InTileToInstanceMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "GetInstanceInfoForTile", Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::GridVisuals_eventGetInstanceInfoForTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::GridVisuals_eventGetInstanceInfoForTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execGetInstanceInfoForTile)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_STRUCT_REF(FTileInstanceInfo,Z_Param_Out_OutInfo);
	P_GET_TMAP_REF(FIntPoint,FTileInstanceInfo,Z_Param_Out_InTileToInstanceMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInstanceInfoForTile(Z_Param_TileIndex,Z_Param_Out_OutInfo,Z_Param_Out_InTileToInstanceMap);
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function GetInstanceInfoForTile *******************************

// ********** Begin Class AGridVisuals Function GetOrCreateISMCForChunk ****************************
struct Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics
{
	struct GridVisuals_eventGetOrCreateISMCForChunk_Parms
	{
		FIntPoint ChunkIndex;
		EGridVisualContext Context;
		UHierarchicalInstancedStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamically create or get an HISMC for the given ChunkIndex." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::NewProp_ChunkIndex = { "ChunkIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetOrCreateISMCForChunk_Parms, ChunkIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetOrCreateISMCForChunk_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventGetOrCreateISMCForChunk_Parms, ReturnValue), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::NewProp_ChunkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "GetOrCreateISMCForChunk", Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::GridVisuals_eventGetOrCreateISMCForChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::GridVisuals_eventGetOrCreateISMCForChunk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execGetOrCreateISMCForChunk)
{
	P_GET_STRUCT(FIntPoint,Z_Param_ChunkIndex);
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHierarchicalInstancedStaticMeshComponent**)Z_Param__Result=P_THIS->GetOrCreateISMCForChunk(Z_Param_ChunkIndex,EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function GetOrCreateISMCForChunk ******************************

// ********** Begin Class AGridVisuals Function LoadAllVisuals *************************************
struct Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics
{
	struct GridVisuals_eventLoadAllVisuals_Parms
	{
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads all visuals from existing grid data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventLoadAllVisuals_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "LoadAllVisuals", Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::GridVisuals_eventLoadAllVisuals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::GridVisuals_eventLoadAllVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_LoadAllVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_LoadAllVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execLoadAllVisuals)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadAllVisuals(EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function LoadAllVisuals ***************************************

// ********** Begin Class AGridVisuals Function PrecomputeColors ***********************************
struct Z_Construct_UFunction_AGridVisuals_PrecomputeColors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Preloads colors from TileStateMapping and TileTypeMapping for faster lookups.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nPreloads colors from TileStateMapping and TileTypeMapping for faster lookups.\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_PrecomputeColors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "PrecomputeColors", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_PrecomputeColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_PrecomputeColors_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridVisuals_PrecomputeColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_PrecomputeColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execPrecomputeColors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrecomputeColors();
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function PrecomputeColors *************************************

// ********** Begin Class AGridVisuals Function ProcessVisualsAsync ********************************
struct Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics
{
	struct GridVisuals_eventProcessVisualsAsync_Parms
	{
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Process visuals for the entire grid data asynchronously." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventProcessVisualsAsync_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "ProcessVisualsAsync", Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::GridVisuals_eventProcessVisualsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::GridVisuals_eventProcessVisualsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execProcessVisualsAsync)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessVisualsAsync(EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function ProcessVisualsAsync **********************************

// ********** Begin Class AGridVisuals Function SetInstanceCulling *********************************
struct Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics
{
	struct GridVisuals_eventSetInstanceCulling_Parms
	{
		EGridVisualContext Context;
		float StartCullDistance;
		float EndCullDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamically set distance culling for the HISMC of the given context." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartCullDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndCullDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventSetInstanceCulling_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventSetInstanceCulling_Parms, StartCullDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventSetInstanceCulling_Parms, EndCullDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::NewProp_StartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::NewProp_EndCullDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "SetInstanceCulling", Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::GridVisuals_eventSetInstanceCulling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::GridVisuals_eventSetInstanceCulling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_SetInstanceCulling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_SetInstanceCulling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execSetInstanceCulling)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartCullDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndCullDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInstanceCulling(EGridVisualContext(Z_Param_Context),Z_Param_StartCullDistance,Z_Param_EndCullDistance);
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function SetInstanceCulling ***********************************

// ********** Begin Class AGridVisuals Function SetupDynamicMaterials ******************************
struct Z_Construct_UFunction_AGridVisuals_SetupDynamicMaterials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prepares all the dynamic grid materials." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_SetupDynamicMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "SetupDynamicMaterials", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SetupDynamicMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_SetupDynamicMaterials_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridVisuals_SetupDynamicMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_SetupDynamicMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execSetupDynamicMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupDynamicMaterials();
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function SetupDynamicMaterials ********************************

// ********** Begin Class AGridVisuals Function SetVisualsVisibility *******************************
struct Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics
{
	struct GridVisuals_eventSetVisualsVisibility_Parms
	{
		EGridVisualContext Context;
		bool Visibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hide/Unhide the visuals of the given context." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static void NewProp_Visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventSetVisualsVisibility_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
void Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::NewProp_Visibility_SetBit(void* Obj)
{
	((GridVisuals_eventSetVisualsVisibility_Parms*)Obj)->Visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridVisuals_eventSetVisualsVisibility_Parms), &Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::NewProp_Visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::NewProp_Visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "SetVisualsVisibility", Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::GridVisuals_eventSetVisualsVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::GridVisuals_eventSetVisualsVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execSetVisualsVisibility)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_GET_UBOOL(Z_Param_Visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisualsVisibility(EGridVisualContext(Z_Param_Context),Z_Param_Visibility);
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function SetVisualsVisibility *********************************

// ********** Begin Class AGridVisuals Function SwitchGridShape ************************************
struct Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics
{
	struct GridVisuals_eventSwitchGridShape_Parms
	{
		EGridShape GridShape;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switches DMIs to use the given grid shape." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GridShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GridShape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::NewProp_GridShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::NewProp_GridShape = { "GridShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventSwitchGridShape_Parms, GridShape), Z_Construct_UEnum_GridPlugin_EGridShape, METADATA_PARAMS(0, nullptr) }; // 2581557781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::NewProp_GridShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::NewProp_GridShape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "SwitchGridShape", Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::GridVisuals_eventSwitchGridShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::GridVisuals_eventSwitchGridShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_SwitchGridShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_SwitchGridShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execSwitchGridShape)
{
	P_GET_ENUM(EGridShape,Z_Param_GridShape);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchGridShape(EGridShape(Z_Param_GridShape));
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function SwitchGridShape **************************************

// ********** Begin Class AGridVisuals Function UpdateVisualTransform ******************************
struct Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics
{
	struct GridVisuals_eventUpdateVisualTransform_Parms
	{
		FIntPoint TileIndex;
		FTransform InTransform;
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Visuals" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the HISM instance transform of the given TileIndex." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventUpdateVisualTransform_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventUpdateVisualTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridVisuals_eventUpdateVisualTransform_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridVisuals, nullptr, "UpdateVisualTransform", Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::GridVisuals_eventUpdateVisualTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::GridVisuals_eventUpdateVisualTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridVisuals::execUpdateVisualTransform)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_TileIndex);
	P_GET_STRUCT(FTransform,Z_Param_InTransform);
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateVisualTransform(Z_Param_Out_TileIndex,Z_Param_InTransform,EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridVisuals Function UpdateVisualTransform ********************************

// ********** Begin Class AGridVisuals *************************************************************
void AGridVisuals::StaticRegisterNativesAGridVisuals()
{
	UClass* Class = AGridVisuals::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
		{ "AddTileVisualEditor", &AGridVisuals::execAddTileVisualEditor },
#endif // WITH_EDITOR
		{ "AddTileVisualRuntime", &AGridVisuals::execAddTileVisualRuntime },
		{ "DestroyVisuals", &AGridVisuals::execDestroyVisuals },
		{ "GetChunkFromTileIndex", &AGridVisuals::execGetChunkFromTileIndex },
		{ "GetColorFromState", &AGridVisuals::execGetColorFromState },
		{ "GetColorFromType", &AGridVisuals::execGetColorFromType },
		{ "GetInstanceInfoForTile", &AGridVisuals::execGetInstanceInfoForTile },
		{ "GetOrCreateISMCForChunk", &AGridVisuals::execGetOrCreateISMCForChunk },
		{ "LoadAllVisuals", &AGridVisuals::execLoadAllVisuals },
		{ "PrecomputeColors", &AGridVisuals::execPrecomputeColors },
		{ "ProcessVisualsAsync", &AGridVisuals::execProcessVisualsAsync },
		{ "SetInstanceCulling", &AGridVisuals::execSetInstanceCulling },
		{ "SetupDynamicMaterials", &AGridVisuals::execSetupDynamicMaterials },
		{ "SetVisualsVisibility", &AGridVisuals::execSetVisualsVisibility },
		{ "SwitchGridShape", &AGridVisuals::execSwitchGridShape },
		{ "UpdateVisualTransform", &AGridVisuals::execUpdateVisualTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGridVisuals;
UClass* AGridVisuals::GetPrivateStaticClass()
{
	using TClass = AGridVisuals;
	if (!Z_Registration_Info_UClass_AGridVisuals.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridVisuals"),
			Z_Registration_Info_UClass_AGridVisuals.InnerSingleton,
			StaticRegisterNativesAGridVisuals,
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
	return Z_Registration_Info_UClass_AGridVisuals.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridVisuals_NoRegister()
{
	return AGridVisuals::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Visuals/GridVisuals.h" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTypeMapping_MetaData[] = {
		{ "Category", "Core Dependencies" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
		{ "RequiredAsset", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileStateMapping_MetaData[] = {
		{ "Category", "Core Dependencies" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
		{ "RequiredAsset", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPostProcess_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Post-Process component that handles grid material.\n/// </summary>\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nPost-Process component that handles grid material.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SQHighlightScaleMultiplier_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale multiplier for square highlight material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexHighlightScaleMultiplier_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale multiplier for hex highlight material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomGridMaterial_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use a custom grid material. Assign to HexGridMaterial or SquareGridMaterial." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomHighlightMaterial_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use a custom highlight material. Assign to HexHighlightMaterial or SquareHighlightMaterial." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexGridMaterial_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent hex grid material." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquareGridMaterial_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent square grid material." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquareDMI_MetaData[] = {
		{ "Category", "Grid Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Dynamically created material instances for grid Post-Process.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nDynamically created material instances for grid Post-Process.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexDMI_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexHighlightMaterial_MetaData[] = {
		{ "Category", "Grid Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Parent materials used to create highlight DMIs. Can be Material Instances.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nParent materials used to create highlight DMIs. Can be Material Instances.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquareHighlightMaterial_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquareHighlightDMI_MetaData[] = {
		{ "Category", "Grid Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Dynamically created material instances for tile highlights or tile colors.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nDynamically created material instances for tile highlights or tile colors.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexHighlightDMI_MetaData[] = {
		{ "Category", "Grid Material" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileToInstanceMapEditor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Maps a tile index to its corresponding HISMC and instance index (FTileInstanceInfo).\n/// UPROPERTY() ensures compatibility and safety when switching between editor and runtime visuals.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nMaps a tile index to its corresponding HISMC and instance index (FTileInstanceInfo).\nUPROPERTY() ensures compatibility and safety when switching between editor and runtime visuals.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkToISMCMapEditor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Maps a chunk index to its associated HISMC (e.g., multiple chunks like 1,2 and 4,4 may share the same HISMC).\n/// UPROPERTY() ensures compatibility and safety when switching between editor and runtime visuals.\n/// </summary>\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nMaps a chunk index to its associated HISMC (e.g., multiple chunks like 1,2 and 4,4 may share the same HISMC).\nUPROPERTY() ensures compatibility and safety when switching between editor and runtime visuals.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh used for HISMC (Tiles)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many tiles belong to one HISMC? (e.g. 50 = 50x50 tiles per HISM)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquareTileScaleFactor_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaling factor for square tile instance (HISMC)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypesToNotRender_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types that are hidden will be temporarily stored here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateToNotRender_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "States that are hidden will be temporarily stored here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatePriority_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "Visuals/GridVisuals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Priority at which tile states are considered. First item gets highest priority." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileTypeMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileStateMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridPostProcess;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SQHighlightScaleMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HexHighlightScaleMultiplier;
	static void NewProp_bCustomGridMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomGridMaterial;
	static void NewProp_bCustomHighlightMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomHighlightMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HexGridMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SquareGridMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SquareDMI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HexDMI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HexHighlightMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SquareHighlightMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SquareHighlightDMI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HexHighlightDMI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileToInstanceMapEditor_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileToInstanceMapEditor_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TileToInstanceMapEditor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkToISMCMapEditor_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkToISMCMapEditor_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ChunkToISMCMapEditor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SquareTileScaleFactor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypesToNotRender_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypesToNotRender;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateToNotRender_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateToNotRender;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StatePriority_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatePriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AGridVisuals_AddTileVisualEditor, "AddTileVisualEditor" }, // 2952337131
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AGridVisuals_AddTileVisualRuntime, "AddTileVisualRuntime" }, // 722805224
		{ &Z_Construct_UFunction_AGridVisuals_DestroyVisuals, "DestroyVisuals" }, // 345532206
		{ &Z_Construct_UFunction_AGridVisuals_GetChunkFromTileIndex, "GetChunkFromTileIndex" }, // 3675174635
		{ &Z_Construct_UFunction_AGridVisuals_GetColorFromState, "GetColorFromState" }, // 1904644668
		{ &Z_Construct_UFunction_AGridVisuals_GetColorFromType, "GetColorFromType" }, // 2524422450
		{ &Z_Construct_UFunction_AGridVisuals_GetInstanceInfoForTile, "GetInstanceInfoForTile" }, // 2031634031
		{ &Z_Construct_UFunction_AGridVisuals_GetOrCreateISMCForChunk, "GetOrCreateISMCForChunk" }, // 3390504197
		{ &Z_Construct_UFunction_AGridVisuals_LoadAllVisuals, "LoadAllVisuals" }, // 239852925
		{ &Z_Construct_UFunction_AGridVisuals_PrecomputeColors, "PrecomputeColors" }, // 3212173767
		{ &Z_Construct_UFunction_AGridVisuals_ProcessVisualsAsync, "ProcessVisualsAsync" }, // 86264819
		{ &Z_Construct_UFunction_AGridVisuals_SetInstanceCulling, "SetInstanceCulling" }, // 958018436
		{ &Z_Construct_UFunction_AGridVisuals_SetupDynamicMaterials, "SetupDynamicMaterials" }, // 3144667664
		{ &Z_Construct_UFunction_AGridVisuals_SetVisualsVisibility, "SetVisualsVisibility" }, // 761981426
		{ &Z_Construct_UFunction_AGridVisuals_SwitchGridShape, "SwitchGridShape" }, // 1007180275
		{ &Z_Construct_UFunction_AGridVisuals_UpdateVisualTransform, "UpdateVisualTransform" }, // 505570128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridVisuals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileTypeMapping = { "TileTypeMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, TileTypeMapping), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTypeMapping_MetaData), NewProp_TileTypeMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileStateMapping = { "TileStateMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, TileStateMapping), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileStateMapping_MetaData), NewProp_TileStateMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_GridPostProcess = { "GridPostProcess", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, GridPostProcess), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPostProcess_MetaData), NewProp_GridPostProcess_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_SQHighlightScaleMultiplier = { "SQHighlightScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, SQHighlightScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SQHighlightScaleMultiplier_MetaData), NewProp_SQHighlightScaleMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexHighlightScaleMultiplier = { "HexHighlightScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, HexHighlightScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexHighlightScaleMultiplier_MetaData), NewProp_HexHighlightScaleMultiplier_MetaData) };
void Z_Construct_UClass_AGridVisuals_Statics::NewProp_bCustomGridMaterial_SetBit(void* Obj)
{
	((AGridVisuals*)Obj)->bCustomGridMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_bCustomGridMaterial = { "bCustomGridMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridVisuals), &Z_Construct_UClass_AGridVisuals_Statics::NewProp_bCustomGridMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomGridMaterial_MetaData), NewProp_bCustomGridMaterial_MetaData) };
void Z_Construct_UClass_AGridVisuals_Statics::NewProp_bCustomHighlightMaterial_SetBit(void* Obj)
{
	((AGridVisuals*)Obj)->bCustomHighlightMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_bCustomHighlightMaterial = { "bCustomHighlightMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridVisuals), &Z_Construct_UClass_AGridVisuals_Statics::NewProp_bCustomHighlightMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomHighlightMaterial_MetaData), NewProp_bCustomHighlightMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexGridMaterial = { "HexGridMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, HexGridMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexGridMaterial_MetaData), NewProp_HexGridMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareGridMaterial = { "SquareGridMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, SquareGridMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquareGridMaterial_MetaData), NewProp_SquareGridMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareDMI = { "SquareDMI", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, SquareDMI), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquareDMI_MetaData), NewProp_SquareDMI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexDMI = { "HexDMI", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, HexDMI), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexDMI_MetaData), NewProp_HexDMI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexHighlightMaterial = { "HexHighlightMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, HexHighlightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexHighlightMaterial_MetaData), NewProp_HexHighlightMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareHighlightMaterial = { "SquareHighlightMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, SquareHighlightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquareHighlightMaterial_MetaData), NewProp_SquareHighlightMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareHighlightDMI = { "SquareHighlightDMI", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, SquareHighlightDMI), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquareHighlightDMI_MetaData), NewProp_SquareHighlightDMI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexHighlightDMI = { "HexHighlightDMI", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, HexHighlightDMI), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexHighlightDMI_MetaData), NewProp_HexHighlightDMI_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileToInstanceMapEditor_ValueProp = { "TileToInstanceMapEditor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTileInstanceInfo, METADATA_PARAMS(0, nullptr) }; // 394013509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileToInstanceMapEditor_Key_KeyProp = { "TileToInstanceMapEditor_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileToInstanceMapEditor = { "TileToInstanceMapEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, TileToInstanceMapEditor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileToInstanceMapEditor_MetaData), NewProp_TileToInstanceMapEditor_MetaData) }; // 394013509
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_ChunkToISMCMapEditor_ValueProp = { "ChunkToISMCMapEditor", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_ChunkToISMCMapEditor_Key_KeyProp = { "ChunkToISMCMapEditor_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_ChunkToISMCMapEditor = { "ChunkToISMCMapEditor", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, ChunkToISMCMapEditor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkToISMCMapEditor_MetaData), NewProp_ChunkToISMCMapEditor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, TileMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMesh_MetaData), NewProp_TileMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, ChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSize_MetaData), NewProp_ChunkSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareTileScaleFactor = { "SquareTileScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, SquareTileScaleFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquareTileScaleFactor_MetaData), NewProp_SquareTileScaleFactor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_TypesToNotRender_Inner = { "TypesToNotRender", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_TypesToNotRender = { "TypesToNotRender", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, TypesToNotRender), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypesToNotRender_MetaData), NewProp_TypesToNotRender_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_StateToNotRender_Inner = { "StateToNotRender", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_StateToNotRender = { "StateToNotRender", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, StateToNotRender), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateToNotRender_MetaData), NewProp_StateToNotRender_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_StatePriority_Inner = { "StatePriority", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridVisuals_Statics::NewProp_StatePriority = { "StatePriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridVisuals, StatePriority), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatePriority_MetaData), NewProp_StatePriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileTypeMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileStateMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_GridPostProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_SQHighlightScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexHighlightScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_bCustomGridMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_bCustomHighlightMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexGridMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareGridMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareDMI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexDMI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexHighlightMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareHighlightMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareHighlightDMI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_HexHighlightDMI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileToInstanceMapEditor_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileToInstanceMapEditor_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileToInstanceMapEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_ChunkToISMCMapEditor_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_ChunkToISMCMapEditor_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_ChunkToISMCMapEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_TileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_ChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_SquareTileScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_TypesToNotRender_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_TypesToNotRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_StateToNotRender_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_StateToNotRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_StatePriority_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridVisuals_Statics::NewProp_StatePriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridVisuals_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridVisuals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridVisuals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridVisuals_Statics::ClassParams = {
	&AGridVisuals::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridVisuals_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridVisuals_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridVisuals_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridVisuals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridVisuals()
{
	if (!Z_Registration_Info_UClass_AGridVisuals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridVisuals.OuterSingleton, Z_Construct_UClass_AGridVisuals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridVisuals.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridVisuals);
AGridVisuals::~AGridVisuals() {}
// ********** End Class AGridVisuals ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h__Script_GridPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridShape_StaticEnum, TEXT("EGridShape"), &Z_Registration_Info_UEnum_EGridShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2581557781U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridVisuals, AGridVisuals::StaticClass, TEXT("AGridVisuals"), &Z_Registration_Info_UClass_AGridVisuals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridVisuals), 1411744244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h__Script_GridPlugin_996142962(TEXT("/Script/GridPlugin"),
	Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h__Script_GridPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h__Script_GridPlugin_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h__Script_GridPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h__Script_GridPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridManager.h"
#include "GridDataStructures.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridManager();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridVisuals_NoRegister();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridSubsystem_NoRegister();
GRIDPLUGIN_API UEnum* Z_Construct_UEnum_GridPlugin_EGridShape();
GRIDPLUGIN_API UEnum* Z_Construct_UEnum_GridPlugin_EGridVisualContext();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTileData();
UPackage* Z_Construct_UPackage__Script_GridPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGridManager Function AddStateToTile *************************************
struct Z_Construct_UFunction_AGridManager_AddStateToTile_Statics
{
	struct GridManager_eventAddStateToTile_Parms
	{
		FIntPoint TileIndex;
		FName State;
		bool bReloadTile;
		bool bScopeLock;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds the given state to the given tile. States are added uniquely. ScopeLock for async, see documentation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_State;
	static void NewProp_bReloadTile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadTile;
	static void NewProp_bScopeLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScopeLock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventAddStateToTile_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventAddStateToTile_Parms, State), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_bReloadTile_SetBit(void* Obj)
{
	((GridManager_eventAddStateToTile_Parms*)Obj)->bReloadTile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_bReloadTile = { "bReloadTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventAddStateToTile_Parms), &Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_bReloadTile_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_bScopeLock_SetBit(void* Obj)
{
	((GridManager_eventAddStateToTile_Parms*)Obj)->bScopeLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_bScopeLock = { "bScopeLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventAddStateToTile_Parms), &Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_bScopeLock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_bReloadTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::NewProp_bScopeLock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "AddStateToTile", Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::GridManager_eventAddStateToTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::GridManager_eventAddStateToTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_AddStateToTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_AddStateToTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execAddStateToTile)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_State);
	P_GET_UBOOL(Z_Param_bReloadTile);
	P_GET_UBOOL(Z_Param_bScopeLock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStateToTile(Z_Param_TileIndex,Z_Param_State,Z_Param_bReloadTile,Z_Param_bScopeLock);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function AddStateToTile ***************************************

// ********** Begin Class AGridManager Function AddTileVisualToGrid ********************************
struct Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics
{
	struct GridManager_eventAddTileVisualToGrid_Parms
	{
		FIntPoint TileIndex;
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds/updates the given tile's visual." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventAddTileVisualToGrid_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventAddTileVisualToGrid_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "AddTileVisualToGrid", Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::GridManager_eventAddTileVisualToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::GridManager_eventAddTileVisualToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_AddTileVisualToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_AddTileVisualToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execAddTileVisualToGrid)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTileVisualToGrid(Z_Param_TileIndex,EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridManager Function AddTileVisualToGrid **********************************

// ********** Begin Class AGridManager Function ClearAllStates *************************************
struct Z_Construct_UFunction_AGridManager_ClearAllStates_Statics
{
	struct GridManager_eventClearAllStates_Parms
	{
		bool bReloadTiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all tiles in the grid of all states." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bReloadTiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::NewProp_bReloadTiles_SetBit(void* Obj)
{
	((GridManager_eventClearAllStates_Parms*)Obj)->bReloadTiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::NewProp_bReloadTiles = { "bReloadTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventClearAllStates_Parms), &Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::NewProp_bReloadTiles_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::NewProp_bReloadTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ClearAllStates", Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::GridManager_eventClearAllStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::GridManager_eventClearAllStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ClearAllStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ClearAllStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execClearAllStates)
{
	P_GET_UBOOL(Z_Param_bReloadTiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllStates(Z_Param_bReloadTiles);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ClearAllStates ***************************************

// ********** Begin Class AGridManager Function ClearAllTilesOfState *******************************
struct Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics
{
	struct GridManager_eventClearAllTilesOfState_Parms
	{
		FName State;
		bool bReloadTiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all tiles in the grid of given state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_State;
	static void NewProp_bReloadTiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventClearAllTilesOfState_Parms, State), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::NewProp_bReloadTiles_SetBit(void* Obj)
{
	((GridManager_eventClearAllTilesOfState_Parms*)Obj)->bReloadTiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::NewProp_bReloadTiles = { "bReloadTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventClearAllTilesOfState_Parms), &Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::NewProp_bReloadTiles_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::NewProp_bReloadTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ClearAllTilesOfState", Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::GridManager_eventClearAllTilesOfState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::GridManager_eventClearAllTilesOfState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ClearAllTilesOfState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ClearAllTilesOfState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execClearAllTilesOfState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_State);
	P_GET_UBOOL(Z_Param_bReloadTiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllTilesOfState(Z_Param_State,Z_Param_bReloadTiles);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ClearAllTilesOfState *********************************

// ********** Begin Class AGridManager Function ClearAllTilesOfType ********************************
struct Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics
{
	struct GridManager_eventClearAllTilesOfType_Parms
	{
		FName Type;
		EGridVisualContext Context;
		bool bReloadTiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all tiles in the grid of the given type. Resets to Default." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static void NewProp_bReloadTiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventClearAllTilesOfType_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventClearAllTilesOfType_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
void Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_bReloadTiles_SetBit(void* Obj)
{
	((GridManager_eventClearAllTilesOfType_Parms*)Obj)->bReloadTiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_bReloadTiles = { "bReloadTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventClearAllTilesOfType_Parms), &Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_bReloadTiles_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::NewProp_bReloadTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ClearAllTilesOfType", Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::GridManager_eventClearAllTilesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::GridManager_eventClearAllTilesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ClearAllTilesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ClearAllTilesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execClearAllTilesOfType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Type);
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_GET_UBOOL(Z_Param_bReloadTiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllTilesOfType(Z_Param_Type,EGridVisualContext(Z_Param_Context),Z_Param_bReloadTiles);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ClearAllTilesOfType **********************************

// ********** Begin Class AGridManager Function ClearAllTypes **************************************
struct Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics
{
	struct GridManager_eventClearAllTypes_Parms
	{
		EGridVisualContext Context;
		bool bReloadTiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all tiles in the grid of all types. Resets to Default." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static void NewProp_bReloadTiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventClearAllTypes_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
void Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::NewProp_bReloadTiles_SetBit(void* Obj)
{
	((GridManager_eventClearAllTypes_Parms*)Obj)->bReloadTiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::NewProp_bReloadTiles = { "bReloadTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventClearAllTypes_Parms), &Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::NewProp_bReloadTiles_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::NewProp_bReloadTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ClearAllTypes", Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::GridManager_eventClearAllTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::GridManager_eventClearAllTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ClearAllTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ClearAllTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execClearAllTypes)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_GET_UBOOL(Z_Param_bReloadTiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllTypes(EGridVisualContext(Z_Param_Context),Z_Param_bReloadTiles);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ClearAllTypes ****************************************

// ********** Begin Class AGridManager Function DestroyGrid ****************************************
struct Z_Construct_UFunction_AGridManager_DestroyGrid_Statics
{
	struct GridManager_eventDestroyGrid_Parms
	{
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys grid data and visuals." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventDestroyGrid_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "DestroyGrid", Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::GridManager_eventDestroyGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::GridManager_eventDestroyGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_DestroyGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_DestroyGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execDestroyGrid)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyGrid(EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridManager Function DestroyGrid ******************************************

// ********** Begin Class AGridManager Function ForceReloadTiles ***********************************
struct Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics
{
	struct GridManager_eventForceReloadTiles_Parms
	{
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reloads the grid visuals." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventForceReloadTiles_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ForceReloadTiles", Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::GridManager_eventForceReloadTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::GridManager_eventForceReloadTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ForceReloadTiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ForceReloadTiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execForceReloadTiles)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceReloadTiles(EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridManager Function ForceReloadTiles *************************************

// ********** Begin Class AGridManager Function GenerateGrid ***************************************
struct Z_Construct_UFunction_AGridManager_GenerateGrid_Statics
{
	struct GridManager_eventGenerateGrid_Parms
	{
		FIntPoint TileCount;
		bool bAutoMapTiles;
		bool bRandomObstacles;
		bool bRemap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates grid data and visuals." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCount;
	static void NewProp_bAutoMapTiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoMapTiles;
	static void NewProp_bRandomObstacles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomObstacles;
	static void NewProp_bRemap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_TileCount = { "TileCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGenerateGrid_Parms, TileCount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bAutoMapTiles_SetBit(void* Obj)
{
	((GridManager_eventGenerateGrid_Parms*)Obj)->bAutoMapTiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bAutoMapTiles = { "bAutoMapTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventGenerateGrid_Parms), &Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bAutoMapTiles_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bRandomObstacles_SetBit(void* Obj)
{
	((GridManager_eventGenerateGrid_Parms*)Obj)->bRandomObstacles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bRandomObstacles = { "bRandomObstacles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventGenerateGrid_Parms), &Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bRandomObstacles_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bRemap_SetBit(void* Obj)
{
	((GridManager_eventGenerateGrid_Parms*)Obj)->bRemap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bRemap = { "bRemap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventGenerateGrid_Parms), &Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bRemap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_TileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bAutoMapTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bRandomObstacles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::NewProp_bRemap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GenerateGrid", Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::GridManager_eventGenerateGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::GridManager_eventGenerateGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GenerateGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGenerateGrid)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileCount);
	P_GET_UBOOL(Z_Param_bAutoMapTiles);
	P_GET_UBOOL(Z_Param_bRandomObstacles);
	P_GET_UBOOL(Z_Param_bRemap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateGrid(Z_Param_TileCount,Z_Param_bAutoMapTiles,Z_Param_bRandomObstacles,Z_Param_bRemap);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GenerateGrid *****************************************

// ********** Begin Class AGridManager Function GenerateGridLocations ******************************
struct Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics
{
	struct GridManager_eventGenerateGridLocations_Parms
	{
		FIntPoint TileCount;
		bool bUseSurface;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates tile locations of the grid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCount;
	static void NewProp_bUseSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSurface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_TileCount = { "TileCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGenerateGridLocations_Parms, TileCount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_bUseSurface_SetBit(void* Obj)
{
	((GridManager_eventGenerateGridLocations_Parms*)Obj)->bUseSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_bUseSurface = { "bUseSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventGenerateGridLocations_Parms), &Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_bUseSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGenerateGridLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_TileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_bUseSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GenerateGridLocations", Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::GridManager_eventGenerateGridLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::GridManager_eventGenerateGridLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GenerateGridLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GenerateGridLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGenerateGridLocations)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileCount);
	P_GET_UBOOL(Z_Param_bUseSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GenerateGridLocations(Z_Param_TileCount,Z_Param_bUseSurface);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GenerateGridLocations ********************************

// ********** Begin Class AGridManager Function GetAllTilesOfState *********************************
struct Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics
{
	struct GridManager_eventGetAllTilesOfState_Parms
	{
		FName State;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all tiles of given state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetAllTilesOfState_Parms, State), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetAllTilesOfState_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetAllTilesOfState", Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::GridManager_eventGetAllTilesOfState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::GridManager_eventGetAllTilesOfState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetAllTilesOfState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetAllTilesOfState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetAllTilesOfState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetAllTilesOfState(Z_Param_State);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetAllTilesOfState ***********************************

// ********** Begin Class AGridManager Function GetAllTilesOfType **********************************
struct Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics
{
	struct GridManager_eventGetAllTilesOfType_Parms
	{
		FName Type;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all tiles of given type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetAllTilesOfType_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetAllTilesOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetAllTilesOfType", Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::GridManager_eventGetAllTilesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::GridManager_eventGetAllTilesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetAllTilesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetAllTilesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetAllTilesOfType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetAllTilesOfType(Z_Param_Type);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetAllTilesOfType ************************************

// ********** Begin Class AGridManager Function GetGridData ****************************************
struct Z_Construct_UFunction_AGridManager_GetGridData_Statics
{
	struct GridManager_eventGetGridData_Parms
	{
		TMap<FIntPoint,FTileData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a copy of the grid data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetGridData_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(0, nullptr) }; // 3156993325
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetGridData_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AGridManager_GetGridData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetGridData_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3156993325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGridData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridData_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridData_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGridData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGridData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGridData", Z_Construct_UFunction_AGridManager_GetGridData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetGridData_Statics::GridManager_eventGetGridData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGridData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetGridData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetGridData_Statics::GridManager_eventGetGridData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetGridData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetGridData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetGridData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FIntPoint,FTileData>*)Z_Param__Result=P_THIS->GetGridData();
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetGridData ******************************************

// ********** Begin Class AGridManager Function GetMovementCost ************************************
struct Z_Construct_UFunction_AGridManager_GetMovementCost_Statics
{
	struct GridManager_eventGetMovementCost_Parms
	{
		FIntPoint TileIndex;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets movement cost from precomputed map. NOT USABLE FOR ASYNC/MULTITHREADING." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetMovementCost_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetMovementCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetMovementCost", Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::GridManager_eventGetMovementCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::GridManager_eventGetMovementCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetMovementCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetMovementCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetMovementCost)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementCost(Z_Param_TileIndex);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetMovementCost **************************************

// ********** Begin Class AGridManager Function GetTileData ****************************************
struct Z_Construct_UFunction_AGridManager_GetTileData_Statics
{
	struct GridManager_eventGetTileData_Parms
	{
		FIntPoint TileIndex;
		FTileData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a copy of the tile's data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetTileData_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetTileData_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetTileData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetTileData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(0, nullptr) }; // 3156993325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetTileData_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetTileData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetTileData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetTileData", Z_Construct_UFunction_AGridManager_GetTileData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetTileData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetTileData_Statics::GridManager_eventGetTileData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetTileData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetTileData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetTileData_Statics::GridManager_eventGetTileData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetTileData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetTileData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetTileData)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTileData*)Z_Param__Result=P_THIS->GetTileData(Z_Param_TileIndex);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function GetTileData ******************************************

// ********** Begin Class AGridManager Function NotifyGridChanged **********************************
struct Z_Construct_UFunction_AGridManager_NotifyGridChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Setters" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_NotifyGridChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "NotifyGridChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_NotifyGridChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_NotifyGridChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridManager_NotifyGridChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_NotifyGridChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execNotifyGridChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyGridChanged();
	P_NATIVE_END;
}
// ********** End Class AGridManager Function NotifyGridChanged ************************************

// ********** Begin Class AGridManager Function NotifyOnDataTableAssigned **************************
struct Z_Construct_UFunction_AGridManager_NotifyOnDataTableAssigned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate to notify when the Data Tables are assigned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_NotifyOnDataTableAssigned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "NotifyOnDataTableAssigned", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_NotifyOnDataTableAssigned_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_NotifyOnDataTableAssigned_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridManager_NotifyOnDataTableAssigned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_NotifyOnDataTableAssigned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execNotifyOnDataTableAssigned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyOnDataTableAssigned();
	P_NATIVE_END;
}
// ********** End Class AGridManager Function NotifyOnDataTableAssigned ****************************

// ********** Begin Class AGridManager Function PrecomputeMovementCosts ****************************
struct Z_Construct_UFunction_AGridManager_PrecomputeMovementCosts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pre-Loads movement costs for each tile into TypeMovementCostMap." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_PrecomputeMovementCosts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "PrecomputeMovementCosts", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_PrecomputeMovementCosts_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_PrecomputeMovementCosts_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridManager_PrecomputeMovementCosts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_PrecomputeMovementCosts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execPrecomputeMovementCosts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrecomputeMovementCosts();
	P_NATIVE_END;
}
// ********** End Class AGridManager Function PrecomputeMovementCosts ******************************

// ********** Begin Class AGridManager Function RecalculateTileLocations ***************************
struct Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics
{
	struct GridManager_eventRecalculateTileLocations_Parms
	{
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recalculates all instances' locations from a pre-existing grid data. Useful for terrain changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventRecalculateTileLocations_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "RecalculateTileLocations", Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::GridManager_eventRecalculateTileLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::GridManager_eventRecalculateTileLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_RecalculateTileLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_RecalculateTileLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execRecalculateTileLocations)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalculateTileLocations(EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridManager Function RecalculateTileLocations *****************************

// ********** Begin Class AGridManager Function RemapExistingTiles *********************************
struct Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics
{
	struct GridManager_eventRemapExistingTiles_Parms
	{
		EGridVisualContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remaps existing tile data into new grid. Useful after grid size or tile count changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventRemapExistingTiles_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "RemapExistingTiles", Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::GridManager_eventRemapExistingTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::GridManager_eventRemapExistingTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_RemapExistingTiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_RemapExistingTiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execRemapExistingTiles)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemapExistingTiles(EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class AGridManager Function RemapExistingTiles ***********************************

// ********** Begin Class AGridManager Function RemoveStateFromTile ********************************
struct Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics
{
	struct GridManager_eventRemoveStateFromTile_Parms
	{
		FIntPoint TileIndex;
		FName State;
		bool bReloadTile;
		bool bScopeLock;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the given state from tile if it exists. ScopeLock for async, see documentation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_State;
	static void NewProp_bReloadTile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadTile;
	static void NewProp_bScopeLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScopeLock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventRemoveStateFromTile_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventRemoveStateFromTile_Parms, State), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_bReloadTile_SetBit(void* Obj)
{
	((GridManager_eventRemoveStateFromTile_Parms*)Obj)->bReloadTile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_bReloadTile = { "bReloadTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventRemoveStateFromTile_Parms), &Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_bReloadTile_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_bScopeLock_SetBit(void* Obj)
{
	((GridManager_eventRemoveStateFromTile_Parms*)Obj)->bScopeLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_bScopeLock = { "bScopeLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventRemoveStateFromTile_Parms), &Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_bScopeLock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_bReloadTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::NewProp_bScopeLock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "RemoveStateFromTile", Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::GridManager_eventRemoveStateFromTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::GridManager_eventRemoveStateFromTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_RemoveStateFromTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_RemoveStateFromTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execRemoveStateFromTile)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_State);
	P_GET_UBOOL(Z_Param_bReloadTile);
	P_GET_UBOOL(Z_Param_bScopeLock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStateFromTile(Z_Param_TileIndex,Z_Param_State,Z_Param_bReloadTile,Z_Param_bScopeLock);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function RemoveStateFromTile **********************************

// ********** Begin Class AGridManager Function RemoveTileType *************************************
struct Z_Construct_UFunction_AGridManager_RemoveTileType_Statics
{
	struct GridManager_eventRemoveTileType_Parms
	{
		FIntPoint TileIndex;
		FName Type;
		EGridVisualContext Context;
		bool bReloadTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The given type is removed from the given tile. Resets type to Default." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static void NewProp_bReloadTile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventRemoveTileType_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventRemoveTileType_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventRemoveTileType_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
void Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_bReloadTile_SetBit(void* Obj)
{
	((GridManager_eventRemoveTileType_Parms*)Obj)->bReloadTile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_bReloadTile = { "bReloadTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventRemoveTileType_Parms), &Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_bReloadTile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::NewProp_bReloadTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "RemoveTileType", Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::GridManager_eventRemoveTileType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::GridManager_eventRemoveTileType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_RemoveTileType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_RemoveTileType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execRemoveTileType)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_Type);
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_GET_UBOOL(Z_Param_bReloadTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTileType(Z_Param_TileIndex,Z_Param_Type,EGridVisualContext(Z_Param_Context),Z_Param_bReloadTile);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function RemoveTileType ***************************************

// ********** Begin Class AGridManager Function SetAutoMapTraceChannel *****************************
struct Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics
{
	struct GridManager_eventSetAutoMapTraceChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> Channel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets auto map trace channel on GridSubsystem." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetAutoMapTraceChannel_Parms, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetAutoMapTraceChannel", Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::GridManager_eventSetAutoMapTraceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::GridManager_eventSetAutoMapTraceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetAutoMapTraceChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoMapTraceChannel(ECollisionChannel(Z_Param_Channel));
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetAutoMapTraceChannel *******************************

// ********** Begin Class AGridManager Function SetGridColor ***************************************
struct Z_Construct_UFunction_AGridManager_SetGridColor_Statics
{
	struct GridManager_eventSetGridColor_Parms
	{
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile Setters (Visuals)\n" },
#endif
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile Setters (Visuals)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetGridColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetGridColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetGridColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetGridColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetGridColor", Z_Construct_UFunction_AGridManager_SetGridColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetGridColor_Statics::GridManager_eventSetGridColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetGridColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetGridColor_Statics::GridManager_eventSetGridColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetGridColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetGridColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetGridColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGridColor(Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetGridColor *****************************************

// ********** Begin Class AGridManager Function SetGridData ****************************************
struct Z_Construct_UFunction_AGridManager_SetGridData_Statics
{
	struct GridManager_eventSetGridData_Parms
	{
		TMap<FIntPoint,FTileData> NewGridData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overwrites existing grid data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGridData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGridData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewGridData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetGridData_Statics::NewProp_NewGridData_ValueProp = { "NewGridData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(0, nullptr) }; // 3156993325
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetGridData_Statics::NewProp_NewGridData_Key_KeyProp = { "NewGridData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AGridManager_SetGridData_Statics::NewProp_NewGridData = { "NewGridData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetGridData_Parms, NewGridData), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3156993325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetGridData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridData_Statics::NewProp_NewGridData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridData_Statics::NewProp_NewGridData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridData_Statics::NewProp_NewGridData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetGridData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetGridData", Z_Construct_UFunction_AGridManager_SetGridData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetGridData_Statics::GridManager_eventSetGridData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetGridData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetGridData_Statics::GridManager_eventSetGridData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetGridData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetGridData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetGridData)
{
	P_GET_TMAP(FIntPoint,FTileData,Z_Param_NewGridData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGridData(Z_Param_NewGridData);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetGridData ******************************************

// ********** Begin Class AGridManager Function SetGridOpacity *************************************
struct Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics
{
	struct GridManager_eventSetGridOpacity_Parms
	{
		float Opacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Settings" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetGridOpacity_Parms, Opacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::NewProp_Opacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetGridOpacity", Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::GridManager_eventSetGridOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::GridManager_eventSetGridOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetGridOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetGridOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetGridOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Opacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGridOpacity(Z_Param_Opacity);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetGridOpacity ***************************************

// ********** Begin Class AGridManager Function SetGridShape ***************************************
struct Z_Construct_UFunction_AGridManager_SetGridShape_Statics
{
	struct GridManager_eventSetGridShape_Parms
	{
		EGridShape Shape;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Settings" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_SetGridShape_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_SetGridShape_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetGridShape_Parms, Shape), Z_Construct_UEnum_GridPlugin_EGridShape, METADATA_PARAMS(0, nullptr) }; // 2581557781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetGridShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridShape_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridShape_Statics::NewProp_Shape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetGridShape_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetGridShape", Z_Construct_UFunction_AGridManager_SetGridShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetGridShape_Statics::GridManager_eventSetGridShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetGridShape_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetGridShape_Statics::GridManager_eventSetGridShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetGridShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetGridShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetGridShape)
{
	P_GET_ENUM(EGridShape,Z_Param_Shape);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGridShape(EGridShape(Z_Param_Shape));
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetGridShape *****************************************

// ********** Begin Class AGridManager Function SetGridSize ****************************************
struct Z_Construct_UFunction_AGridManager_SetGridSize_Statics
{
	struct GridManager_eventSetGridSize_Parms
	{
		FVector2D GridSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set grid size." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetGridSize_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetGridSize_Parms, GridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetGridSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetGridSize_Statics::NewProp_GridSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetGridSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetGridSize", Z_Construct_UFunction_AGridManager_SetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetGridSize_Statics::GridManager_eventSetGridSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetGridSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetGridSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetGridSize_Statics::GridManager_eventSetGridSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetGridSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetGridSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetGridSize)
{
	P_GET_STRUCT(FVector2D,Z_Param_GridSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGridSize(Z_Param_GridSize);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetGridSize ******************************************

// ********** Begin Class AGridManager Function SetLineColor ***************************************
struct Z_Construct_UFunction_AGridManager_SetLineColor_Statics
{
	struct GridManager_eventSetLineColor_Parms
	{
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Settings" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetLineColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetLineColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetLineColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetLineColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetLineColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetLineColor", Z_Construct_UFunction_AGridManager_SetLineColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetLineColor_Statics::GridManager_eventSetLineColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetLineColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetLineColor_Statics::GridManager_eventSetLineColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetLineColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetLineColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetLineColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLineColor(Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetLineColor *****************************************

// ********** Begin Class AGridManager Function SetLineOpacity *************************************
struct Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics
{
	struct GridManager_eventSetLineOpacity_Parms
	{
		float Opacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Settings" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetLineOpacity_Parms, Opacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::NewProp_Opacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetLineOpacity", Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::GridManager_eventSetLineOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::GridManager_eventSetLineOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetLineOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetLineOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetLineOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Opacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLineOpacity(Z_Param_Opacity);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetLineOpacity ***************************************

// ********** Begin Class AGridManager Function SetLineWidth ***************************************
struct Z_Construct_UFunction_AGridManager_SetLineWidth_Statics
{
	struct GridManager_eventSetLineWidth_Parms
	{
		float Width;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Line Setters (Visuals)\n" },
#endif
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Line Setters (Visuals)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetLineWidth_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetLineWidth", Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::GridManager_eventSetLineWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::GridManager_eventSetLineWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetLineWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetLineWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetLineWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Width);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLineWidth(Z_Param_Width);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetLineWidth *****************************************

// ********** Begin Class AGridManager Function SetStateVisibility *********************************
struct Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics
{
	struct GridManager_eventSetStateVisibility_Parms
	{
		bool Visibility;
		FName State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hides/Unhides the given state." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::NewProp_Visibility_SetBit(void* Obj)
{
	((GridManager_eventSetStateVisibility_Parms*)Obj)->Visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventSetStateVisibility_Parms), &Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::NewProp_Visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetStateVisibility_Parms, State), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetStateVisibility", Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::GridManager_eventSetStateVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::GridManager_eventSetStateVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetStateVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetStateVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetStateVisibility)
{
	P_GET_UBOOL(Z_Param_Visibility);
	P_GET_PROPERTY(FNameProperty,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStateVisibility(Z_Param_Visibility,Z_Param_State);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetStateVisibility ***********************************

// ********** Begin Class AGridManager Function SetSurfaceTraceChannel *****************************
struct Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics
{
	struct GridManager_eventSetSurfaceTraceChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> Channel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets surface trace channel on GridSubsystem." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetSurfaceTraceChannel_Parms, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetSurfaceTraceChannel", Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::GridManager_eventSetSurfaceTraceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::GridManager_eventSetSurfaceTraceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetSurfaceTraceChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSurfaceTraceChannel(ECollisionChannel(Z_Param_Channel));
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetSurfaceTraceChannel *******************************

// ********** Begin Class AGridManager Function SetTileCount ***************************************
struct Z_Construct_UFunction_AGridManager_SetTileCount_Statics
{
	struct GridManager_eventSetTileCount_Parms
	{
		FVector2D TileCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set tile count." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetTileCount_Statics::NewProp_TileCount = { "TileCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetTileCount_Parms, TileCount), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetTileCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTileCount_Statics::NewProp_TileCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetTileCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetTileCount", Z_Construct_UFunction_AGridManager_SetTileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetTileCount_Statics::GridManager_eventSetTileCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetTileCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetTileCount_Statics::GridManager_eventSetTileCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetTileCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetTileCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetTileCount)
{
	P_GET_STRUCT(FVector2D,Z_Param_TileCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTileCount(Z_Param_TileCount);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetTileCount *****************************************

// ********** Begin Class AGridManager Function SetTileData ****************************************
struct Z_Construct_UFunction_AGridManager_SetTileData_Statics
{
	struct GridManager_eventSetTileData_Parms
	{
		FTileData NewTileData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overwrites the tile data at the new data's index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTileData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetTileData_Statics::NewProp_NewTileData = { "NewTileData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetTileData_Parms, NewTileData), Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(0, nullptr) }; // 3156993325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTileData_Statics::NewProp_NewTileData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetTileData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetTileData", Z_Construct_UFunction_AGridManager_SetTileData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetTileData_Statics::GridManager_eventSetTileData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetTileData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetTileData_Statics::GridManager_eventSetTileData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetTileData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetTileData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetTileData)
{
	P_GET_STRUCT(FTileData,Z_Param_NewTileData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTileData(Z_Param_NewTileData);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetTileData ******************************************

// ********** Begin Class AGridManager Function SetTileType ****************************************
struct Z_Construct_UFunction_AGridManager_SetTileType_Statics
{
	struct GridManager_eventSetTileType_Parms
	{
		FIntPoint TileIndex;
		FName Type;
		EGridVisualContext Context;
		bool bReloadTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the given type to the given tile. Types are overriden." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static void NewProp_bReloadTile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetTileType_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetTileType_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetTileType_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
void Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_bReloadTile_SetBit(void* Obj)
{
	((GridManager_eventSetTileType_Parms*)Obj)->bReloadTile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_bReloadTile = { "bReloadTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventSetTileType_Parms), &Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_bReloadTile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetTileType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTileType_Statics::NewProp_bReloadTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetTileType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetTileType", Z_Construct_UFunction_AGridManager_SetTileType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetTileType_Statics::GridManager_eventSetTileType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTileType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetTileType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetTileType_Statics::GridManager_eventSetTileType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetTileType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetTileType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetTileType)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_Type);
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_GET_UBOOL(Z_Param_bReloadTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTileType(Z_Param_TileIndex,Z_Param_Type,EGridVisualContext(Z_Param_Context),Z_Param_bReloadTile);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetTileType ******************************************

// ********** Begin Class AGridManager Function SetTypeVisibility **********************************
struct Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics
{
	struct GridManager_eventSetTypeVisibility_Parms
	{
		EGridVisualContext Context;
		bool Visibility;
		FName TileType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Add and Remove Tiles" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hides/Unhides the given type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static void NewProp_Visibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TileType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetTypeVisibility_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
void Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_Visibility_SetBit(void* Obj)
{
	((GridManager_eventSetTypeVisibility_Parms*)Obj)->Visibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventSetTypeVisibility_Parms), &Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_Visibility_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSetTypeVisibility_Parms, TileType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::NewProp_TileType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SetTypeVisibility", Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::GridManager_eventSetTypeVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::GridManager_eventSetTypeVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SetTypeVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SetTypeVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSetTypeVisibility)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_GET_UBOOL(Z_Param_Visibility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTypeVisibility(EGridVisualContext(Z_Param_Context),Z_Param_Visibility,Z_Param_TileType);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function SetTypeVisibility ************************************

// ********** Begin Class AGridManager Function UpdateTileTransform ********************************
struct Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics
{
	struct GridManager_eventUpdateTileTransform_Parms
	{
		EGridVisualContext Context;
		FIntPoint TileIndex;
		FTransform InTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the transform of the given TileIndex both visually and in data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventUpdateTileTransform_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventUpdateTileTransform_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventUpdateTileTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::NewProp_InTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "UpdateTileTransform", Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::GridManager_eventUpdateTileTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::GridManager_eventUpdateTileTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_UpdateTileTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_UpdateTileTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execUpdateTileTransform)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_STRUCT(FTransform,Z_Param_InTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTileTransform(EGridVisualContext(Z_Param_Context),Z_Param_TileIndex,Z_Param_InTransform);
	P_NATIVE_END;
}
// ********** End Class AGridManager Function UpdateTileTransform **********************************

// ********** Begin Class AGridManager *************************************************************
void AGridManager::StaticRegisterNativesAGridManager()
{
	UClass* Class = AGridManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddStateToTile", &AGridManager::execAddStateToTile },
		{ "AddTileVisualToGrid", &AGridManager::execAddTileVisualToGrid },
		{ "ClearAllStates", &AGridManager::execClearAllStates },
		{ "ClearAllTilesOfState", &AGridManager::execClearAllTilesOfState },
		{ "ClearAllTilesOfType", &AGridManager::execClearAllTilesOfType },
		{ "ClearAllTypes", &AGridManager::execClearAllTypes },
		{ "DestroyGrid", &AGridManager::execDestroyGrid },
		{ "ForceReloadTiles", &AGridManager::execForceReloadTiles },
		{ "GenerateGrid", &AGridManager::execGenerateGrid },
		{ "GenerateGridLocations", &AGridManager::execGenerateGridLocations },
		{ "GetAllTilesOfState", &AGridManager::execGetAllTilesOfState },
		{ "GetAllTilesOfType", &AGridManager::execGetAllTilesOfType },
		{ "GetGridData", &AGridManager::execGetGridData },
		{ "GetMovementCost", &AGridManager::execGetMovementCost },
		{ "GetTileData", &AGridManager::execGetTileData },
		{ "NotifyGridChanged", &AGridManager::execNotifyGridChanged },
		{ "NotifyOnDataTableAssigned", &AGridManager::execNotifyOnDataTableAssigned },
		{ "PrecomputeMovementCosts", &AGridManager::execPrecomputeMovementCosts },
		{ "RecalculateTileLocations", &AGridManager::execRecalculateTileLocations },
		{ "RemapExistingTiles", &AGridManager::execRemapExistingTiles },
		{ "RemoveStateFromTile", &AGridManager::execRemoveStateFromTile },
		{ "RemoveTileType", &AGridManager::execRemoveTileType },
		{ "SetAutoMapTraceChannel", &AGridManager::execSetAutoMapTraceChannel },
		{ "SetGridColor", &AGridManager::execSetGridColor },
		{ "SetGridData", &AGridManager::execSetGridData },
		{ "SetGridOpacity", &AGridManager::execSetGridOpacity },
		{ "SetGridShape", &AGridManager::execSetGridShape },
		{ "SetGridSize", &AGridManager::execSetGridSize },
		{ "SetLineColor", &AGridManager::execSetLineColor },
		{ "SetLineOpacity", &AGridManager::execSetLineOpacity },
		{ "SetLineWidth", &AGridManager::execSetLineWidth },
		{ "SetStateVisibility", &AGridManager::execSetStateVisibility },
		{ "SetSurfaceTraceChannel", &AGridManager::execSetSurfaceTraceChannel },
		{ "SetTileCount", &AGridManager::execSetTileCount },
		{ "SetTileData", &AGridManager::execSetTileData },
		{ "SetTileType", &AGridManager::execSetTileType },
		{ "SetTypeVisibility", &AGridManager::execSetTypeVisibility },
		{ "UpdateTileTransform", &AGridManager::execUpdateTileTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGridManager;
UClass* AGridManager::GetPrivateStaticClass()
{
	using TClass = AGridManager;
	if (!Z_Registration_Info_UClass_AGridManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridManager"),
			Z_Registration_Info_UClass_AGridManager.InnerSingleton,
			StaticRegisterNativesAGridManager,
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
	return Z_Registration_Info_UClass_AGridManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridManager_NoRegister()
{
	return AGridManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GridManager.h" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridVisuals_MetaData[] = {
		{ "Category", "Core Dependencies" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
		{ "RequiredAsset", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTypeMapping_MetaData[] = {
		{ "Category", "Core Dependencies" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
		{ "RequiredAsset", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataTable containing Tile Name, Type, Color and Movement Costs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypesToAutoMap_MetaData[] = {
		{ "Category", "Core Dependencies" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
		{ "RequiredAsset", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types to automatically map during grid generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexAutoMapExtent_MetaData[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier used for Sphere Trace, only used if bUseShapeTrace is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquareAutoMapExtent_MetaData[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier used for Box Trace, only used if bUseShapeTrace is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleSpawnRate_MetaData[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chances of obstacles spawning. [0,1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseShapeTrace_MetaData[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use shaped trace for auto mapping tiles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeMovementCostMap_MetaData[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precomputed Type to MovementCost map." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMinScale_MetaData[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min scale multiplier for tile instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMaxScale_MetaData[] = {
		{ "Category", "Grid Generation" },
		{ "ModuleRelativePath", "Public/GridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max scale multiplier for tile instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridVisuals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileTypeMapping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypesToAutoMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypesToAutoMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HexAutoMapExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SquareAutoMapExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleSpawnRate;
	static void NewProp_bUseShapeTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseShapeTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeMovementCostMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeMovementCostMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TypeMovementCostMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileMinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileMaxScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_AddStateToTile, "AddStateToTile" }, // 3677746013
		{ &Z_Construct_UFunction_AGridManager_AddTileVisualToGrid, "AddTileVisualToGrid" }, // 328426861
		{ &Z_Construct_UFunction_AGridManager_ClearAllStates, "ClearAllStates" }, // 2669653932
		{ &Z_Construct_UFunction_AGridManager_ClearAllTilesOfState, "ClearAllTilesOfState" }, // 1563556920
		{ &Z_Construct_UFunction_AGridManager_ClearAllTilesOfType, "ClearAllTilesOfType" }, // 2540807777
		{ &Z_Construct_UFunction_AGridManager_ClearAllTypes, "ClearAllTypes" }, // 2237432192
		{ &Z_Construct_UFunction_AGridManager_DestroyGrid, "DestroyGrid" }, // 1403978870
		{ &Z_Construct_UFunction_AGridManager_ForceReloadTiles, "ForceReloadTiles" }, // 2273846332
		{ &Z_Construct_UFunction_AGridManager_GenerateGrid, "GenerateGrid" }, // 3768860229
		{ &Z_Construct_UFunction_AGridManager_GenerateGridLocations, "GenerateGridLocations" }, // 283139944
		{ &Z_Construct_UFunction_AGridManager_GetAllTilesOfState, "GetAllTilesOfState" }, // 484864801
		{ &Z_Construct_UFunction_AGridManager_GetAllTilesOfType, "GetAllTilesOfType" }, // 1516098168
		{ &Z_Construct_UFunction_AGridManager_GetGridData, "GetGridData" }, // 1425025519
		{ &Z_Construct_UFunction_AGridManager_GetMovementCost, "GetMovementCost" }, // 1589405398
		{ &Z_Construct_UFunction_AGridManager_GetTileData, "GetTileData" }, // 3379974046
		{ &Z_Construct_UFunction_AGridManager_NotifyGridChanged, "NotifyGridChanged" }, // 785441645
		{ &Z_Construct_UFunction_AGridManager_NotifyOnDataTableAssigned, "NotifyOnDataTableAssigned" }, // 1040595799
		{ &Z_Construct_UFunction_AGridManager_PrecomputeMovementCosts, "PrecomputeMovementCosts" }, // 4040099451
		{ &Z_Construct_UFunction_AGridManager_RecalculateTileLocations, "RecalculateTileLocations" }, // 1040919093
		{ &Z_Construct_UFunction_AGridManager_RemapExistingTiles, "RemapExistingTiles" }, // 814373789
		{ &Z_Construct_UFunction_AGridManager_RemoveStateFromTile, "RemoveStateFromTile" }, // 4109110465
		{ &Z_Construct_UFunction_AGridManager_RemoveTileType, "RemoveTileType" }, // 2166948830
		{ &Z_Construct_UFunction_AGridManager_SetAutoMapTraceChannel, "SetAutoMapTraceChannel" }, // 1976588062
		{ &Z_Construct_UFunction_AGridManager_SetGridColor, "SetGridColor" }, // 4138996783
		{ &Z_Construct_UFunction_AGridManager_SetGridData, "SetGridData" }, // 2689399533
		{ &Z_Construct_UFunction_AGridManager_SetGridOpacity, "SetGridOpacity" }, // 1159636920
		{ &Z_Construct_UFunction_AGridManager_SetGridShape, "SetGridShape" }, // 2244722932
		{ &Z_Construct_UFunction_AGridManager_SetGridSize, "SetGridSize" }, // 4101907010
		{ &Z_Construct_UFunction_AGridManager_SetLineColor, "SetLineColor" }, // 1041435197
		{ &Z_Construct_UFunction_AGridManager_SetLineOpacity, "SetLineOpacity" }, // 784319988
		{ &Z_Construct_UFunction_AGridManager_SetLineWidth, "SetLineWidth" }, // 2807742903
		{ &Z_Construct_UFunction_AGridManager_SetStateVisibility, "SetStateVisibility" }, // 1730091394
		{ &Z_Construct_UFunction_AGridManager_SetSurfaceTraceChannel, "SetSurfaceTraceChannel" }, // 443467408
		{ &Z_Construct_UFunction_AGridManager_SetTileCount, "SetTileCount" }, // 960457590
		{ &Z_Construct_UFunction_AGridManager_SetTileData, "SetTileData" }, // 2450468836
		{ &Z_Construct_UFunction_AGridManager_SetTileType, "SetTileType" }, // 1574257053
		{ &Z_Construct_UFunction_AGridManager_SetTypeVisibility, "SetTypeVisibility" }, // 1334681260
		{ &Z_Construct_UFunction_AGridManager_UpdateTileTransform, "UpdateTileTransform" }, // 3019759182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridSubsystem = { "GridSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridSubsystem), Z_Construct_UClass_UGridSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSubsystem_MetaData), NewProp_GridSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridVisuals = { "GridVisuals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridVisuals), Z_Construct_UClass_AGridVisuals_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridVisuals_MetaData), NewProp_GridVisuals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TileTypeMapping = { "TileTypeMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, TileTypeMapping), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTypeMapping_MetaData), NewProp_TileTypeMapping_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TypesToAutoMap_Inner = { "TypesToAutoMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TypesToAutoMap = { "TypesToAutoMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, TypesToAutoMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypesToAutoMap_MetaData), NewProp_TypesToAutoMap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_HexAutoMapExtent = { "HexAutoMapExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, HexAutoMapExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexAutoMapExtent_MetaData), NewProp_HexAutoMapExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_SquareAutoMapExtent = { "SquareAutoMapExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, SquareAutoMapExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquareAutoMapExtent_MetaData), NewProp_SquareAutoMapExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_ObstacleSpawnRate = { "ObstacleSpawnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, ObstacleSpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleSpawnRate_MetaData), NewProp_ObstacleSpawnRate_MetaData) };
void Z_Construct_UClass_AGridManager_Statics::NewProp_bUseShapeTrace_SetBit(void* Obj)
{
	((AGridManager*)Obj)->bUseShapeTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_bUseShapeTrace = { "bUseShapeTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridManager), &Z_Construct_UClass_AGridManager_Statics::NewProp_bUseShapeTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseShapeTrace_MetaData), NewProp_bUseShapeTrace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TypeMovementCostMap_ValueProp = { "TypeMovementCostMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TypeMovementCostMap_Key_KeyProp = { "TypeMovementCostMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TypeMovementCostMap = { "TypeMovementCostMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, TypeMovementCostMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeMovementCostMap_MetaData), NewProp_TypeMovementCostMap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TileMinScale = { "TileMinScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, TileMinScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMinScale_MetaData), NewProp_TileMinScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TileMaxScale = { "TileMaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, TileMaxScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMaxScale_MetaData), NewProp_TileMaxScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TileTypeMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TypesToAutoMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TypesToAutoMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_HexAutoMapExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_SquareAutoMapExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_ObstacleSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_bUseShapeTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TypeMovementCostMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TypeMovementCostMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TypeMovementCostMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TileMinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TileMaxScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
	&AGridManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridManager()
{
	if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
AGridManager::~AGridManager() {}
// ********** End Class AGridManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h__Script_GridPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 510464056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h__Script_GridPlugin_2459866575(TEXT("/Script/GridPlugin"),
	Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h__Script_GridPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h__Script_GridPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

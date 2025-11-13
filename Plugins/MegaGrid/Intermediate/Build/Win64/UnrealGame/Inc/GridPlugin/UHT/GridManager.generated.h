// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridManager.h"

#ifdef GRIDPLUGIN_GridManager_generated_h
#error "GridManager.generated.h already included, missing '#pragma once' in GridManager.h"
#endif
#define GRIDPLUGIN_GridManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FTileData;
enum class EGridShape : uint8;
enum class EGridVisualContext : uint8;
struct FLinearColor;
struct FTileData;

// ********** Begin Class AGridManager *************************************************************
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemapExistingTiles); \
	DECLARE_FUNCTION(execGetMovementCost); \
	DECLARE_FUNCTION(execPrecomputeMovementCosts); \
	DECLARE_FUNCTION(execForceReloadTiles); \
	DECLARE_FUNCTION(execDestroyGrid); \
	DECLARE_FUNCTION(execRecalculateTileLocations); \
	DECLARE_FUNCTION(execGenerateGridLocations); \
	DECLARE_FUNCTION(execGenerateGrid); \
	DECLARE_FUNCTION(execNotifyOnDataTableAssigned); \
	DECLARE_FUNCTION(execSetTypeVisibility); \
	DECLARE_FUNCTION(execSetStateVisibility); \
	DECLARE_FUNCTION(execClearAllTilesOfType); \
	DECLARE_FUNCTION(execClearAllTypes); \
	DECLARE_FUNCTION(execClearAllStates); \
	DECLARE_FUNCTION(execClearAllTilesOfState); \
	DECLARE_FUNCTION(execRemoveTileType); \
	DECLARE_FUNCTION(execSetTileType); \
	DECLARE_FUNCTION(execRemoveStateFromTile); \
	DECLARE_FUNCTION(execAddStateToTile); \
	DECLARE_FUNCTION(execAddTileVisualToGrid); \
	DECLARE_FUNCTION(execNotifyGridChanged); \
	DECLARE_FUNCTION(execUpdateTileTransform); \
	DECLARE_FUNCTION(execSetGridShape); \
	DECLARE_FUNCTION(execSetGridOpacity); \
	DECLARE_FUNCTION(execSetGridColor); \
	DECLARE_FUNCTION(execSetLineOpacity); \
	DECLARE_FUNCTION(execSetLineColor); \
	DECLARE_FUNCTION(execSetLineWidth); \
	DECLARE_FUNCTION(execSetAutoMapTraceChannel); \
	DECLARE_FUNCTION(execSetSurfaceTraceChannel); \
	DECLARE_FUNCTION(execSetTileCount); \
	DECLARE_FUNCTION(execSetGridSize); \
	DECLARE_FUNCTION(execSetTileData); \
	DECLARE_FUNCTION(execSetGridData); \
	DECLARE_FUNCTION(execGetAllTilesOfState); \
	DECLARE_FUNCTION(execGetAllTilesOfType); \
	DECLARE_FUNCTION(execGetTileData); \
	DECLARE_FUNCTION(execGetGridData);


GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridManager_NoRegister();

#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridPlugin"), Z_Construct_UClass_AGridManager_NoRegister) \
	DECLARE_SERIALIZER(AGridManager)


#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridManager(AGridManager&&) = delete; \
	AGridManager(const AGridManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridManager) \
	NO_API virtual ~AGridManager();


#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h_40_PROLOG
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h_43_INCLASS_NO_PURE_DECLS \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridManager;

// ********** End Class AGridManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

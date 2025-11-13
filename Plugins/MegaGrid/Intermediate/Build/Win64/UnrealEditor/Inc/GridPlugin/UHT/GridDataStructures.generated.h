// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/GridDataStructures.h"

#ifdef GRIDPLUGIN_GridDataStructures_generated_h
#error "GridDataStructures.generated.h already included, missing '#pragma once' in GridDataStructures.h"
#endif
#define GRIDPLUGIN_GridDataStructures_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTileInstanceInfo *************************************************
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileInstanceInfo_Statics; \
	GRIDPLUGIN_API static class UScriptStruct* StaticStruct();


struct FTileInstanceInfo;
// ********** End ScriptStruct FTileInstanceInfo ***************************************************

// ********** Begin ScriptStruct FTileTypeMapping **************************************************
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileTypeMapping_Statics; \
	GRIDPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FTileTypeMapping;
// ********** End ScriptStruct FTileTypeMapping ****************************************************

// ********** Begin ScriptStruct FTileStateMapping *************************************************
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileStateMapping_Statics; \
	GRIDPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FTileStateMapping;
// ********** End ScriptStruct FTileStateMapping ***************************************************

// ********** Begin ScriptStruct FTileData *********************************************************
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileData_Statics; \
	GRIDPLUGIN_API static class UScriptStruct* StaticStruct();


struct FTileData;
// ********** End ScriptStruct FTileData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h

// ********** Begin Enum EGridVisualContext ********************************************************
#define FOREACH_ENUM_EGRIDVISUALCONTEXT(op) \
	op(EGridVisualContext::Auto) \
	op(EGridVisualContext::Editor) \
	op(EGridVisualContext::Runtime) 

enum class EGridVisualContext : uint8;
template<> struct TIsUEnumClass<EGridVisualContext> { enum { Value = true }; };
template<> GRIDPLUGIN_API UEnum* StaticEnum<EGridVisualContext>();
// ********** End Enum EGridVisualContext **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

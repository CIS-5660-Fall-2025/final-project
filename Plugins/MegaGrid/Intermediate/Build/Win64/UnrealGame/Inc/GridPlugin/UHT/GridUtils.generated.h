// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/GridUtils.h"

#ifdef GRIDPLUGIN_GridUtils_generated_h
#error "GridUtils.generated.h already included, missing '#pragma once' in GridUtils.h"
#endif
#define GRIDPLUGIN_GridUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UGridSubsystem;
class UObject;
enum class EGridVisualContext : uint8;
struct FLinearColor;

// ********** Begin Class UGridUtils ***************************************************************
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScaleBasedOnNormal); \
	DECLARE_FUNCTION(execResolveGridVisualContext); \
	DECLARE_FUNCTION(execGetNeighboringIndices); \
	DECLARE_FUNCTION(execGetIndicesUnderBrush); \
	DECLARE_FUNCTION(execCubeToAxial); \
	DECLARE_FUNCTION(execAxialToCube); \
	DECLARE_FUNCTION(execConvertLocationToAxial); \
	DECLARE_FUNCTION(execAxialToDouble); \
	DECLARE_FUNCTION(execDoubleToAxial); \
	DECLARE_FUNCTION(execIsTileWithinBounds); \
	DECLARE_FUNCTION(execIsEven); \
	DECLARE_FUNCTION(execIsTileOfType); \
	DECLARE_FUNCTION(execIsTileOfState); \
	DECLARE_FUNCTION(execSnapLocationToGrid); \
	DECLARE_FUNCTION(execSnapVectorToGrid); \
	DECLARE_FUNCTION(execGetTileUnderCursor); \
	DECLARE_FUNCTION(execGetSurfaceLocation); \
	DECLARE_FUNCTION(execGetLocationFromIndex); \
	DECLARE_FUNCTION(execGetIndexFromLocation); \
	DECLARE_FUNCTION(execGetGridOffset); \
	DECLARE_FUNCTION(execGetTileColor); \
	DECLARE_FUNCTION(execGetLineColor); \
	DECLARE_FUNCTION(execGetLineWidth); \
	DECLARE_FUNCTION(execGetLineOpacity); \
	DECLARE_FUNCTION(execGetTileOpacity); \
	DECLARE_FUNCTION(execGetTileCount); \
	DECLARE_FUNCTION(execGetIsHex); \
	DECLARE_FUNCTION(execGetGridSize); \
	DECLARE_FUNCTION(execGetGridSubsystem);


GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridUtils_NoRegister();

#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridUtils(); \
	friend struct Z_Construct_UClass_UGridUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UGridUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridPlugin"), Z_Construct_UClass_UGridUtils_NoRegister) \
	DECLARE_SERIALIZER(UGridUtils)


#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGridUtils(UGridUtils&&) = delete; \
	UGridUtils(const UGridUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridUtils) \
	NO_API virtual ~UGridUtils();


#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h_16_PROLOG
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h_19_INCLASS_NO_PURE_DECLS \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGridUtils;

// ********** End Class UGridUtils *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

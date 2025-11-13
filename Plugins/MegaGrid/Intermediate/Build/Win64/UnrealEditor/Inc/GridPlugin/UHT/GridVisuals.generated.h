// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visuals/GridVisuals.h"

#ifdef GRIDPLUGIN_GridVisuals_generated_h
#error "GridVisuals.generated.h already included, missing '#pragma once' in GridVisuals.h"
#endif
#define GRIDPLUGIN_GridVisuals_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FTileInstanceInfo;
class UHierarchicalInstancedStaticMeshComponent;
enum class EGridShape : uint8;
enum class EGridVisualContext : uint8;
struct FTileData;
struct FTileInstanceInfo;

// ********** Begin Class AGridVisuals *************************************************************
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetColorFromState); \
	DECLARE_FUNCTION(execGetColorFromType); \
	DECLARE_FUNCTION(execProcessVisualsAsync); \
	DECLARE_FUNCTION(execDestroyVisuals); \
	DECLARE_FUNCTION(execUpdateVisualTransform); \
	DECLARE_FUNCTION(execAddTileVisualRuntime); \
	DECLARE_FUNCTION(execGetChunkFromTileIndex); \
	DECLARE_FUNCTION(execGetInstanceInfoForTile); \
	DECLARE_FUNCTION(execSetInstanceCulling); \
	DECLARE_FUNCTION(execGetOrCreateISMCForChunk); \
	DECLARE_FUNCTION(execSetVisualsVisibility); \
	DECLARE_FUNCTION(execLoadAllVisuals); \
	DECLARE_FUNCTION(execSwitchGridShape); \
	DECLARE_FUNCTION(execSetupDynamicMaterials); \
	DECLARE_FUNCTION(execPrecomputeColors);


#if WITH_EDITOR
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execAddTileVisualEditor);
#else // WITH_EDITOR
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridVisuals_NoRegister();

#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridVisuals(); \
	friend struct Z_Construct_UClass_AGridVisuals_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridVisuals_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridVisuals, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridPlugin"), Z_Construct_UClass_AGridVisuals_NoRegister) \
	DECLARE_SERIALIZER(AGridVisuals)


#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridVisuals(AGridVisuals&&) = delete; \
	AGridVisuals(const AGridVisuals&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridVisuals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridVisuals); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridVisuals) \
	NO_API virtual ~AGridVisuals();


#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_28_PROLOG
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridVisuals;

// ********** End Class AGridVisuals ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Visuals_GridVisuals_h

// ********** Begin Enum EGridShape ****************************************************************
#define FOREACH_ENUM_EGRIDSHAPE(op) \
	op(EGridShape::Hex) \
	op(EGridShape::Square) 

enum class EGridShape : uint8;
template<> struct TIsUEnumClass<EGridShape> { enum { Value = true }; };
template<> GRIDPLUGIN_API UEnum* StaticEnum<EGridShape>();
// ********** End Enum EGridShape ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

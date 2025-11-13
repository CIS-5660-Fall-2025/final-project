// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pathfinding/PathFindingComponent.h"

#ifdef GRIDPLUGIN_PathFindingComponent_generated_h
#error "PathFindingComponent.generated.h already included, missing '#pragma once' in PathFindingComponent.h"
#endif
#define GRIDPLUGIN_PathFindingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USplineComponent;
struct FPathStruct;

// ********** Begin ScriptStruct FPathStruct *******************************************************
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathStruct_Statics; \
	GRIDPLUGIN_API static class UScriptStruct* StaticStruct();


struct FPathStruct;
// ********** End ScriptStruct FPathStruct *********************************************************

// ********** Begin Delegate FPathCompleteDelegate *************************************************
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_67_DELEGATE \
GRIDPLUGIN_API void FPathCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& PathCompleteDelegate, FPathStruct const& PathOut);


// ********** End Delegate FPathCompleteDelegate ***************************************************

// ********** Begin Delegate FPathFollowDelegate ***************************************************
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_74_DELEGATE \
GRIDPLUGIN_API void FPathFollowDelegate_DelegateWrapper(const FMulticastScriptDelegate& PathFollowDelegate, FTransform Transform);


// ********** End Delegate FPathFollowDelegate *****************************************************

// ********** Begin Class UPathFindingComponent ****************************************************
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartMovingOnPath); \
	DECLARE_FUNCTION(execDrawSplinePath); \
	DECLARE_FUNCTION(execClearSplinePath); \
	DECLARE_FUNCTION(execGetTotalMovementCost); \
	DECLARE_FUNCTION(execFindPathAsyncConditioning); \
	DECLARE_FUNCTION(execFindPathAsync); \
	DECLARE_FUNCTION(execFindPath); \
	DECLARE_FUNCTION(execPrecomputeMovementCosts); \
	DECLARE_FUNCTION(execIsTileValid); \
	DECLARE_FUNCTION(execGetHexDistance); \
	DECLARE_FUNCTION(execGetDistance);


GRIDPLUGIN_API UClass* Z_Construct_UClass_UPathFindingComponent_NoRegister();

#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathFindingComponent(); \
	friend struct Z_Construct_UClass_UPathFindingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDPLUGIN_API UClass* Z_Construct_UClass_UPathFindingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathFindingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridPlugin"), Z_Construct_UClass_UPathFindingComponent_NoRegister) \
	DECLARE_SERIALIZER(UPathFindingComponent)


#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_80_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathFindingComponent(UPathFindingComponent&&) = delete; \
	UPathFindingComponent(const UPathFindingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathFindingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFindingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPathFindingComponent) \
	NO_API virtual ~UPathFindingComponent();


#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_77_PROLOG
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_80_INCLASS_NO_PURE_DECLS \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathFindingComponent;

// ********** End Class UPathFindingComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_pm_Plugins_MegaGrid_Source_GridPlugin_Pathfinding_PathFindingComponent_h

// ********** Begin Enum EPathCompleteReason *******************************************************
#define FOREACH_ENUM_EPATHCOMPLETEREASON(op) \
	op(EPathCompleteReason::PathFound) \
	op(EPathCompleteReason::MaxIterationsReached) \
	op(EPathCompleteReason::InvalidStartOrEnd) \
	op(EPathCompleteReason::PathNotFound) \
	op(EPathCompleteReason::GridNotGenerated) \
	op(EPathCompleteReason::TargetTooFar) 

enum class EPathCompleteReason : uint8;
template<> struct TIsUEnumClass<EPathCompleteReason> { enum { Value = true }; };
template<> GRIDPLUGIN_API UEnum* StaticEnum<EPathCompleteReason>();
// ********** End Enum EPathCompleteReason *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridSubsystem.h"

#ifdef GRIDPLUGIN_GridSubsystem_generated_h
#error "GridSubsystem.generated.h already included, missing '#pragma once' in GridSubsystem.h"
#endif
#define GRIDPLUGIN_GridSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGridState ********************************************************
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridState_Statics; \
	GRIDPLUGIN_API static class UScriptStruct* StaticStruct();


struct FGridState;
// ********** End ScriptStruct FGridState **********************************************************

// ********** Begin Class UGridSubsystem ***********************************************************
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadGridData); \
	DECLARE_FUNCTION(execSaveGridData); \
	DECLARE_FUNCTION(execCreateSaveData); \
	DECLARE_FUNCTION(execSetRuntimeMode); \
	DECLARE_FUNCTION(execGetIsRuntime);


GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridSubsystem_NoRegister();

#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridSubsystem(); \
	friend struct Z_Construct_UClass_UGridSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGridSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridPlugin"), Z_Construct_UClass_UGridSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGridSubsystem)


#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGridSubsystem(UGridSubsystem&&) = delete; \
	UGridSubsystem(const UGridSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridSubsystem) \
	NO_API virtual ~UGridSubsystem();


#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_31_PROLOG
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGridSubsystem;

// ********** End Class UGridSubsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Public_GridSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/GridSaveHandler.h"

#ifdef GRIDPLUGIN_GridSaveHandler_generated_h
#error "GridSaveHandler.generated.h already included, missing '#pragma once' in GridSaveHandler.h"
#endif
#define GRIDPLUGIN_GridSaveHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGridSaveHandler *********************************************************
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyGridSaveToPackagedFolder); \
	DECLARE_FUNCTION(execSaveData); \
	DECLARE_FUNCTION(execLoadSavedData);


GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridSaveHandler_NoRegister();

#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridSaveHandler(); \
	friend struct Z_Construct_UClass_AGridSaveHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridSaveHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridSaveHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridPlugin"), Z_Construct_UClass_AGridSaveHandler_NoRegister) \
	DECLARE_SERIALIZER(AGridSaveHandler)


#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridSaveHandler(AGridSaveHandler&&) = delete; \
	AGridSaveHandler(const AGridSaveHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridSaveHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridSaveHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridSaveHandler) \
	NO_API virtual ~AGridSaveHandler();


#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h_26_PROLOG
#define FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridSaveHandler;

// ********** End Class AGridSaveHandler ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

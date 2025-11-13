// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/GridPluginSave.h"

#ifdef GRIDPLUGIN_GridPluginSave_generated_h
#error "GridPluginSave.generated.h already included, missing '#pragma once' in GridPluginSave.h"
#endif
#define GRIDPLUGIN_GridPluginSave_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGridPluginSave **********************************************************
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridPluginSave_NoRegister();

#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridPluginSave(); \
	friend struct Z_Construct_UClass_UGridPluginSave_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridPluginSave_NoRegister(); \
public: \
	DECLARE_CLASS2(UGridPluginSave, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridPlugin"), Z_Construct_UClass_UGridPluginSave_NoRegister) \
	DECLARE_SERIALIZER(UGridPluginSave)


#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGridPluginSave(UGridPluginSave&&) = delete; \
	UGridPluginSave(const UGridPluginSave&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPluginSave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPluginSave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridPluginSave) \
	NO_API virtual ~UGridPluginSave();


#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h_19_PROLOG
#define FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h_22_INCLASS_NO_PURE_DECLS \
	FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGridPluginSave;

// ********** End Class UGridPluginSave ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

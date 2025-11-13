// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridSaveHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridSaveHandler() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridSaveHandler();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridSaveHandler_NoRegister();
GRIDPLUGIN_API UClass* Z_Construct_UClass_AGridVisuals_NoRegister();
UPackage* Z_Construct_UPackage__Script_GridPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGridSaveHandler Function CopyGridSaveToPackagedFolder *******************
struct Z_Construct_UFunction_AGridSaveHandler_CopyGridSaveToPackagedFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Functions" },
		{ "ModuleRelativePath", "Data/GridSaveHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves .sav from development directory to packaged directory." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSaveHandler_CopyGridSaveToPackagedFolder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridSaveHandler, nullptr, "CopyGridSaveToPackagedFolder", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSaveHandler_CopyGridSaveToPackagedFolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSaveHandler_CopyGridSaveToPackagedFolder_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGridSaveHandler_CopyGridSaveToPackagedFolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSaveHandler_CopyGridSaveToPackagedFolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridSaveHandler::execCopyGridSaveToPackagedFolder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyGridSaveToPackagedFolder();
	P_NATIVE_END;
}
// ********** End Class AGridSaveHandler Function CopyGridSaveToPackagedFolder *********************

// ********** Begin Class AGridSaveHandler Function LoadSavedData **********************************
struct Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics
{
	struct GridSaveHandler_eventLoadSavedData_Parms
	{
		FString SaveFileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Functions" },
		{ "ModuleRelativePath", "Data/GridSaveHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads grid data from given file. Also loads the related visuals." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveFileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::NewProp_SaveFileName = { "SaveFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSaveHandler_eventLoadSavedData_Parms, SaveFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::NewProp_SaveFileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridSaveHandler, nullptr, "LoadSavedData", Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::GridSaveHandler_eventLoadSavedData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::GridSaveHandler_eventLoadSavedData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridSaveHandler_LoadSavedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSaveHandler_LoadSavedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridSaveHandler::execLoadSavedData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSavedData(Z_Param_SaveFileName);
	P_NATIVE_END;
}
// ********** End Class AGridSaveHandler Function LoadSavedData ************************************

// ********** Begin Class AGridSaveHandler Function SaveData ***************************************
struct Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics
{
	struct GridSaveHandler_eventSaveData_Parms
	{
		FString SaveFileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Functions" },
		{ "ModuleRelativePath", "Data/GridSaveHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves grid data to given file." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveFileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::NewProp_SaveFileName = { "SaveFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSaveHandler_eventSaveData_Parms, SaveFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::NewProp_SaveFileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGridSaveHandler, nullptr, "SaveData", Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::GridSaveHandler_eventSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::GridSaveHandler_eventSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridSaveHandler_SaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSaveHandler_SaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridSaveHandler::execSaveData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveData(Z_Param_SaveFileName);
	P_NATIVE_END;
}
// ********** End Class AGridSaveHandler Function SaveData *****************************************

// ********** Begin Class AGridSaveHandler *********************************************************
void AGridSaveHandler::StaticRegisterNativesAGridSaveHandler()
{
	UClass* Class = AGridSaveHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyGridSaveToPackagedFolder", &AGridSaveHandler::execCopyGridSaveToPackagedFolder },
		{ "LoadSavedData", &AGridSaveHandler::execLoadSavedData },
		{ "SaveData", &AGridSaveHandler::execSaveData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGridSaveHandler;
UClass* AGridSaveHandler::GetPrivateStaticClass()
{
	using TClass = AGridSaveHandler;
	if (!Z_Registration_Info_UClass_AGridSaveHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridSaveHandler"),
			Z_Registration_Info_UClass_AGridSaveHandler.InnerSingleton,
			StaticRegisterNativesAGridSaveHandler,
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
	return Z_Registration_Info_UClass_AGridSaveHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridSaveHandler_NoRegister()
{
	return AGridSaveHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridSaveHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Class to help load / save data.\n/// Multiple levels can use the same data.\n/// This actor is mainly for Editor loading but some functions\n/// can be used for runtime purposes.\n/// </summary>\n" },
#endif
		{ "IncludePath", "Data/GridSaveHandler.h" },
		{ "ModuleRelativePath", "Data/GridSaveHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nClass to help load / save data.\nMultiple levels can use the same data.\nThis actor is mainly for Editor loading but some functions\ncan be used for runtime purposes.\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
		{ "Category", "Core Dependencies" },
		{ "ModuleRelativePath", "Data/GridSaveHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridVisuals_MetaData[] = {
		{ "Category", "Core Dependencies" },
		{ "ModuleRelativePath", "Data/GridSaveHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[] = {
		{ "Category", "Save Name" },
		{ "ModuleRelativePath", "Data/GridSaveHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of .sav file holding grid data. Cannot be empty." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridVisuals;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridSaveHandler_CopyGridSaveToPackagedFolder, "CopyGridSaveToPackagedFolder" }, // 108315818
		{ &Z_Construct_UFunction_AGridSaveHandler_LoadSavedData, "LoadSavedData" }, // 2842163811
		{ &Z_Construct_UFunction_AGridSaveHandler_SaveData, "SaveData" }, // 3903289692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridSaveHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSaveHandler_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSaveHandler, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSaveHandler_Statics::NewProp_GridVisuals = { "GridVisuals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSaveHandler, GridVisuals), Z_Construct_UClass_AGridVisuals_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridVisuals_MetaData), NewProp_GridVisuals_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGridSaveHandler_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSaveHandler, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveName_MetaData), NewProp_SaveName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridSaveHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSaveHandler_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSaveHandler_Statics::NewProp_GridVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSaveHandler_Statics::NewProp_SaveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSaveHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridSaveHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSaveHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridSaveHandler_Statics::ClassParams = {
	&AGridSaveHandler::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridSaveHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridSaveHandler_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSaveHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridSaveHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridSaveHandler()
{
	if (!Z_Registration_Info_UClass_AGridSaveHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridSaveHandler.OuterSingleton, Z_Construct_UClass_AGridSaveHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridSaveHandler.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridSaveHandler);
AGridSaveHandler::~AGridSaveHandler() {}
// ********** End Class AGridSaveHandler ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h__Script_GridPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridSaveHandler, AGridSaveHandler::StaticClass, TEXT("AGridSaveHandler"), &Z_Registration_Info_UClass_AGridSaveHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridSaveHandler), 4215648133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h__Script_GridPlugin_3393511168(TEXT("/Script/GridPlugin"),
	Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h__Script_GridPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridSaveHandler_h__Script_GridPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

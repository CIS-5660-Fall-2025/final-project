// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridPluginSave.h"
#include "GridDataStructures.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridPluginSave() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridPluginSave();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridPluginSave_NoRegister();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTileData();
UPackage* Z_Construct_UPackage__Script_GridPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGridPluginSave **********************************************************
void UGridPluginSave::StaticRegisterNativesUGridPluginSave()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGridPluginSave;
UClass* UGridPluginSave::GetPrivateStaticClass()
{
	using TClass = UGridPluginSave;
	if (!Z_Registration_Info_UClass_UGridPluginSave.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridPluginSave"),
			Z_Registration_Info_UClass_UGridPluginSave.InnerSingleton,
			StaticRegisterNativesUGridPluginSave,
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
	return Z_Registration_Info_UClass_UGridPluginSave.InnerSingleton;
}
UClass* Z_Construct_UClass_UGridPluginSave_NoRegister()
{
	return UGridPluginSave::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGridPluginSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/GridPluginSave.h" },
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedGridData_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHex_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCount_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineWidth_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileColor_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "ModuleRelativePath", "Data/GridPluginSave.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedGridData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedGridData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SavedGridData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastGridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridOffset;
	static void NewProp_bIsHex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOpacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPluginSave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_SavedGridData_ValueProp = { "SavedGridData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(0, nullptr) }; // 3156993325
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_SavedGridData_Key_KeyProp = { "SavedGridData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_SavedGridData = { "SavedGridData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, SavedGridData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedGridData_MetaData), NewProp_SavedGridData_MetaData) }; // 3156993325
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, StartIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartIndex_MetaData), NewProp_StartIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, EndIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndIndex_MetaData), NewProp_EndIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_LastGridSize = { "LastGridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, LastGridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastGridSize_MetaData), NewProp_LastGridSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, GridSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, GridOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOffset_MetaData), NewProp_GridOffset_MetaData) };
void Z_Construct_UClass_UGridPluginSave_Statics::NewProp_bIsHex_SetBit(void* Obj)
{
	((UGridPluginSave*)Obj)->bIsHex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_bIsHex = { "bIsHex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridPluginSave), &Z_Construct_UClass_UGridPluginSave_Statics::NewProp_bIsHex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHex_MetaData), NewProp_bIsHex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_TileCount = { "TileCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, TileCount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCount_MetaData), NewProp_TileCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_LineWidth = { "LineWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, LineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineWidth_MetaData), NewProp_LineWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_LineOpacity = { "LineOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, LineOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOpacity_MetaData), NewProp_LineOpacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_TileOpacity = { "TileOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, TileOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileOpacity_MetaData), NewProp_TileOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_TileColor = { "TileColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, TileColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileColor_MetaData), NewProp_TileColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridPluginSave_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPluginSave, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPluginSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_SavedGridData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_SavedGridData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_SavedGridData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_EndIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_LastGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_GridOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_bIsHex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_TileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_LineWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_LineOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_TileOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_TileColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPluginSave_Statics::NewProp_LineColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPluginSave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridPluginSave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPluginSave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridPluginSave_Statics::ClassParams = {
	&UGridPluginSave::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridPluginSave_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridPluginSave_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPluginSave_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridPluginSave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridPluginSave()
{
	if (!Z_Registration_Info_UClass_UGridPluginSave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridPluginSave.OuterSingleton, Z_Construct_UClass_UGridPluginSave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridPluginSave.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPluginSave);
UGridPluginSave::~UGridPluginSave() {}
// ********** End Class UGridPluginSave ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h__Script_GridPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridPluginSave, UGridPluginSave::StaticClass, TEXT("UGridPluginSave"), &Z_Registration_Info_UClass_UGridPluginSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridPluginSave), 3080236172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h__Script_GridPlugin_2376611862(TEXT("/Script/GridPlugin"),
	Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h__Script_GridPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridPluginSave_h__Script_GridPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

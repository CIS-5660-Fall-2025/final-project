// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridDataStructures.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridDataStructures() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GRIDPLUGIN_API UEnum* Z_Construct_UEnum_GridPlugin_EGridVisualContext();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTileData();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTileInstanceInfo();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTileStateMapping();
GRIDPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTileTypeMapping();
UPackage* Z_Construct_UPackage__Script_GridPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGridVisualContext ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridVisualContext;
static UEnum* EGridVisualContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridVisualContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridVisualContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridPlugin_EGridVisualContext, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("EGridVisualContext"));
	}
	return Z_Registration_Info_UEnum_EGridVisualContext.OuterSingleton;
}
template<> GRIDPLUGIN_API UEnum* StaticEnum<EGridVisualContext>()
{
	return EGridVisualContext_StaticEnum();
}
struct Z_Construct_UEnum_GridPlugin_EGridVisualContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/// <summary>\n/// Context specifier for grid visuals.\n/// Editor and runtime visuals are separated to maintain\n/// integrity.\n/// </summary>\n" },
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EGridVisualContext::Auto" },
		{ "Auto.ToolTip", "<summary>\nContext specifier for grid visuals.\nEditor and runtime visuals are separated to maintain\nintegrity.\n</summary>" },
		{ "BlueprintType", "true" },
		{ "Editor.Comment", "// Automatically resolved using ResolveGridVisualContext(Context)\n" },
		{ "Editor.DisplayName", "Editor" },
		{ "Editor.Name", "EGridVisualContext::Editor" },
		{ "Editor.ToolTip", "Automatically resolved using ResolveGridVisualContext(Context)" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
		{ "Runtime.Comment", "// Editor use\n" },
		{ "Runtime.DisplayName", "Runtime" },
		{ "Runtime.Name", "EGridVisualContext::Runtime" },
		{ "Runtime.ToolTip", "Editor use" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Context specifier for grid visuals." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridVisualContext::Auto", (int64)EGridVisualContext::Auto },
		{ "EGridVisualContext::Editor", (int64)EGridVisualContext::Editor },
		{ "EGridVisualContext::Runtime", (int64)EGridVisualContext::Runtime },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridPlugin_EGridVisualContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GridPlugin,
	nullptr,
	"EGridVisualContext",
	"EGridVisualContext",
	Z_Construct_UEnum_GridPlugin_EGridVisualContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GridPlugin_EGridVisualContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GridPlugin_EGridVisualContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GridPlugin_EGridVisualContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GridPlugin_EGridVisualContext()
{
	if (!Z_Registration_Info_UEnum_EGridVisualContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridVisualContext.InnerSingleton, Z_Construct_UEnum_GridPlugin_EGridVisualContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridVisualContext.InnerSingleton;
}
// ********** End Enum EGridVisualContext **********************************************************

// ********** Begin ScriptStruct FTileInstanceInfo *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTileInstanceInfo;
class UScriptStruct* FTileInstanceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTileInstanceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTileInstanceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileInstanceInfo, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("TileInstanceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FTileInstanceInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTileInstanceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct that hold visuals related data for each tile." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileInstanceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileInstanceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
	nullptr,
	&NewStructOps,
	"TileInstanceInfo",
	nullptr,
	0,
	sizeof(FTileInstanceInfo),
	alignof(FTileInstanceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileInstanceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileInstanceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTileInstanceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FTileInstanceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTileInstanceInfo.InnerSingleton, Z_Construct_UScriptStruct_FTileInstanceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTileInstanceInfo.InnerSingleton;
}
// ********** End ScriptStruct FTileInstanceInfo ***************************************************

// ********** Begin ScriptStruct FTileTypeMapping **************************************************
static_assert(std::is_polymorphic<FTileTypeMapping>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTileTypeMapping cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTileTypeMapping;
class UScriptStruct* FTileTypeMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTileTypeMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTileTypeMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileTypeMapping, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("TileTypeMapping"));
	}
	return Z_Registration_Info_UScriptStruct_FTileTypeMapping.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTileTypeMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for tile-type data table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTypeName_MetaData[] = {
		{ "Category", "Tile Type Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile type name, has to be same as row.\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile type name, has to be same as row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCost_MetaData[] = {
		{ "Category", "Tile Type Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement cost or tile cost.\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement cost or tile cost." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeColor_MetaData[] = {
		{ "Category", "Tile Type Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color for the type.\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color for the type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TileTypeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MovementCost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileTypeMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTileTypeMapping_Statics::NewProp_TileTypeName = { "TileTypeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileTypeMapping, TileTypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTypeName_MetaData), NewProp_TileTypeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTileTypeMapping_Statics::NewProp_MovementCost = { "MovementCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileTypeMapping, MovementCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCost_MetaData), NewProp_MovementCost_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileTypeMapping_Statics::NewProp_TypeColor = { "TypeColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileTypeMapping, TypeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeColor_MetaData), NewProp_TypeColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileTypeMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileTypeMapping_Statics::NewProp_TileTypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileTypeMapping_Statics::NewProp_MovementCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileTypeMapping_Statics::NewProp_TypeColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileTypeMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileTypeMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TileTypeMapping",
	Z_Construct_UScriptStruct_FTileTypeMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileTypeMapping_Statics::PropPointers),
	sizeof(FTileTypeMapping),
	alignof(FTileTypeMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileTypeMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileTypeMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTileTypeMapping()
{
	if (!Z_Registration_Info_UScriptStruct_FTileTypeMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTileTypeMapping.InnerSingleton, Z_Construct_UScriptStruct_FTileTypeMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTileTypeMapping.InnerSingleton;
}
// ********** End ScriptStruct FTileTypeMapping ****************************************************

// ********** Begin ScriptStruct FTileStateMapping *************************************************
static_assert(std::is_polymorphic<FTileStateMapping>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTileStateMapping cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTileStateMapping;
class UScriptStruct* FTileStateMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTileStateMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTileStateMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileStateMapping, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("TileStateMapping"));
	}
	return Z_Registration_Info_UScriptStruct_FTileStateMapping.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTileStateMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for tile-state data table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileStateName_MetaData[] = {
		{ "Category", "Tile State Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile state name, has to be same as row.\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile state name, has to be same as row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateColor_MetaData[] = {
		{ "Category", "Tile State Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color for the state.\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color for the state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TileStateName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileStateMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTileStateMapping_Statics::NewProp_TileStateName = { "TileStateName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileStateMapping, TileStateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileStateName_MetaData), NewProp_TileStateName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileStateMapping_Statics::NewProp_StateColor = { "StateColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileStateMapping, StateColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateColor_MetaData), NewProp_StateColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileStateMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileStateMapping_Statics::NewProp_TileStateName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileStateMapping_Statics::NewProp_StateColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileStateMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileStateMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TileStateMapping",
	Z_Construct_UScriptStruct_FTileStateMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileStateMapping_Statics::PropPointers),
	sizeof(FTileStateMapping),
	alignof(FTileStateMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileStateMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileStateMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTileStateMapping()
{
	if (!Z_Registration_Info_UScriptStruct_FTileStateMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTileStateMapping.InnerSingleton, Z_Construct_UScriptStruct_FTileStateMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTileStateMapping.InnerSingleton;
}
// ********** End ScriptStruct FTileStateMapping ***************************************************

// ********** Begin ScriptStruct FTileData *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTileData;
class UScriptStruct* FTileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileData, (UObject*)Z_Construct_UPackage__Script_GridPlugin(), TEXT("TileData"));
	}
	return Z_Registration_Info_UScriptStruct_FTileData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds data about each tile in grid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GCost_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cost from start tile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HCost_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cost from target tile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FCost_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total Cost (HCost + GCost)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCost_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cost for entering tile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Tile Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cost for entering tile.\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cost for entering tile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTransform_MetaData[] = {
		{ "Category", "Tile Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Precomputed neighbors. Not used in this implementation. NOT SAFE FOR MULTITHREADING/ASYNC.\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precomputed neighbors. Not used in this implementation. NOT SAFE FOR MULTITHREADING/ASYNC." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[] = {
		{ "Category", "Tile Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform of the tile in world space.\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform of the tile in world space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileState_MetaData[] = {
		{ "Category", "Tile Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of tile\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of tile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalkable_MetaData[] = {
		{ "Category", "Tile Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// States of tile\n" },
#endif
		{ "ModuleRelativePath", "Data/GridDataStructures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "States of tile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementCost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Neighbors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Neighbors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TileType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TileState_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileState;
	static void NewProp_bIsWalkable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalkable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, Index), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_GCost = { "GCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, GCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GCost_MetaData), NewProp_GCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_HCost = { "HCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, HCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HCost_MetaData), NewProp_HCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_FCost = { "FCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, FCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FCost_MetaData), NewProp_FCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MovementCost = { "MovementCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, MovementCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCost_MetaData), NewProp_MovementCost_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, ParentIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndex_MetaData), NewProp_ParentIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Neighbors_Inner = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, Neighbors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Neighbors_MetaData), NewProp_Neighbors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileTransform = { "TileTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, TileTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTransform_MetaData), NewProp_TileTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, TileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileType_MetaData), NewProp_TileType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileState_Inner = { "TileState", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileState = { "TileState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, TileState), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileState_MetaData), NewProp_TileState_MetaData) };
void Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWalkable_SetBit(void* Obj)
{
	((FTileData*)Obj)->bIsWalkable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWalkable = { "bIsWalkable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTileData), &Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWalkable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWalkable_MetaData), NewProp_bIsWalkable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_GCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_HCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_FCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MovementCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_ParentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Neighbors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Neighbors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileState_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWalkable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
	nullptr,
	&NewStructOps,
	"TileData",
	Z_Construct_UScriptStruct_FTileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::PropPointers),
	sizeof(FTileData),
	alignof(FTileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTileData()
{
	if (!Z_Registration_Info_UScriptStruct_FTileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTileData.InnerSingleton, Z_Construct_UScriptStruct_FTileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTileData.InnerSingleton;
}
// ********** End ScriptStruct FTileData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h__Script_GridPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridVisualContext_StaticEnum, TEXT("EGridVisualContext"), &Z_Registration_Info_UEnum_EGridVisualContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1693942899U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTileInstanceInfo::StaticStruct, Z_Construct_UScriptStruct_FTileInstanceInfo_Statics::NewStructOps, TEXT("TileInstanceInfo"), &Z_Registration_Info_UScriptStruct_FTileInstanceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileInstanceInfo), 394013509U) },
		{ FTileTypeMapping::StaticStruct, Z_Construct_UScriptStruct_FTileTypeMapping_Statics::NewStructOps, TEXT("TileTypeMapping"), &Z_Registration_Info_UScriptStruct_FTileTypeMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileTypeMapping), 813493412U) },
		{ FTileStateMapping::StaticStruct, Z_Construct_UScriptStruct_FTileStateMapping_Statics::NewStructOps, TEXT("TileStateMapping"), &Z_Registration_Info_UScriptStruct_FTileStateMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileStateMapping), 1435922364U) },
		{ FTileData::StaticStruct, Z_Construct_UScriptStruct_FTileData_Statics::NewStructOps, TEXT("TileData"), &Z_Registration_Info_UScriptStruct_FTileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileData), 3156993325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h__Script_GridPlugin_3233158383(TEXT("/Script/GridPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h__Script_GridPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h__Script_GridPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h__Script_GridPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Data_GridDataStructures_h__Script_GridPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

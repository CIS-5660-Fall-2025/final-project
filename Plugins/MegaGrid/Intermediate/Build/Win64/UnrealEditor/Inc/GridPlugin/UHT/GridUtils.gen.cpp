// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridSubsystem_NoRegister();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridUtils();
GRIDPLUGIN_API UClass* Z_Construct_UClass_UGridUtils_NoRegister();
GRIDPLUGIN_API UEnum* Z_Construct_UEnum_GridPlugin_EGridVisualContext();
UPackage* Z_Construct_UPackage__Script_GridPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGridUtils Function AxialToCube ******************************************
struct Z_Construct_UFunction_UGridUtils_AxialToCube_Statics
{
	struct GridUtils_eventAxialToCube_Parms
	{
		FIntPoint Axial;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Helpers" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts given Axial Coordinates to Cube Coordinates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::NewProp_Axial = { "Axial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventAxialToCube_Parms, Axial), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventAxialToCube_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::NewProp_Axial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "AxialToCube", Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::GridUtils_eventAxialToCube_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::GridUtils_eventAxialToCube_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_AxialToCube()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_AxialToCube_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execAxialToCube)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Axial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGridUtils::AxialToCube(Z_Param_Axial);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function AxialToCube ********************************************

// ********** Begin Class UGridUtils Function AxialToDouble ****************************************
struct Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics
{
	struct GridUtils_eventAxialToDouble_Parms
	{
		FIntPoint Axial;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Helpers" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert Axial Hex coordinates to doubled hex coordinates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::NewProp_Axial = { "Axial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventAxialToDouble_Parms, Axial), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventAxialToDouble_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::NewProp_Axial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "AxialToDouble", Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::GridUtils_eventAxialToDouble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::GridUtils_eventAxialToDouble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_AxialToDouble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_AxialToDouble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execAxialToDouble)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Axial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UGridUtils::AxialToDouble(Z_Param_Axial);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function AxialToDouble ******************************************

// ********** Begin Class UGridUtils Function ConvertLocationToAxial *******************************
struct Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics
{
	struct GridUtils_eventConvertLocationToAxial_Parms
	{
		FVector Location;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Helpers" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert given location to Axial Hex Coordinates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventConvertLocationToAxial_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventConvertLocationToAxial_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "ConvertLocationToAxial", Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::GridUtils_eventConvertLocationToAxial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::GridUtils_eventConvertLocationToAxial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execConvertLocationToAxial)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UGridUtils::ConvertLocationToAxial(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function ConvertLocationToAxial *********************************

// ********** Begin Class UGridUtils Function CubeToAxial ******************************************
struct Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics
{
	struct GridUtils_eventCubeToAxial_Parms
	{
		FVector Cube;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Helpers" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts given Cube Coordinates to Axial Coordinates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cube;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventCubeToAxial_Parms, Cube), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventCubeToAxial_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::NewProp_Cube,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "CubeToAxial", Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::GridUtils_eventCubeToAxial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::GridUtils_eventCubeToAxial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_CubeToAxial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_CubeToAxial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execCubeToAxial)
{
	P_GET_STRUCT(FVector,Z_Param_Cube);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UGridUtils::CubeToAxial(Z_Param_Cube);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function CubeToAxial ********************************************

// ********** Begin Class UGridUtils Function DoubleToAxial ****************************************
struct Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics
{
	struct GridUtils_eventDoubleToAxial_Parms
	{
		FIntPoint Index;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Helpers" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert Doubled Hex coordinates to axial coordinates." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventDoubleToAxial_Parms, Index), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventDoubleToAxial_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "DoubleToAxial", Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::GridUtils_eventDoubleToAxial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::GridUtils_eventDoubleToAxial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_DoubleToAxial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_DoubleToAxial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execDoubleToAxial)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UGridUtils::DoubleToAxial(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function DoubleToAxial ******************************************

// ********** Begin Class UGridUtils Function GetGridOffset ****************************************
struct Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics
{
	struct GridUtils_eventGetGridOffset_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current grid offset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetGridOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetGridOffset", Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::GridUtils_eventGetGridOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::GridUtils_eventGetGridOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetGridOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetGridOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetGridOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UGridUtils::GetGridOffset();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetGridOffset ******************************************

// ********** Begin Class UGridUtils Function GetGridSize ******************************************
struct Z_Construct_UFunction_UGridUtils_GetGridSize_Statics
{
	struct GridUtils_eventGetGridSize_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current grid size." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetGridSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetGridSize", Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::GridUtils_eventGetGridSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::GridUtils_eventGetGridSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetGridSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetGridSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetGridSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UGridUtils::GetGridSize();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetGridSize ********************************************

// ********** Begin Class UGridUtils Function GetGridSubsystem *************************************
struct Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics
{
	struct GridUtils_eventGetGridSubsystem_Parms
	{
		UGridSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns GridSubsystem." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetGridSubsystem_Parms, ReturnValue), Z_Construct_UClass_UGridSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetGridSubsystem", Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::GridUtils_eventGetGridSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::GridUtils_eventGetGridSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetGridSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetGridSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetGridSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGridSubsystem**)Z_Param__Result=UGridUtils::GetGridSubsystem();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetGridSubsystem ***************************************

// ********** Begin Class UGridUtils Function GetIndexFromLocation *********************************
struct Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics
{
	struct GridUtils_eventGetIndexFromLocation_Parms
	{
		FVector Location;
		bool bIsHexagon;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns tile index for given location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bIsHexagon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHexagon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetIndexFromLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
void Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::NewProp_bIsHexagon_SetBit(void* Obj)
{
	((GridUtils_eventGetIndexFromLocation_Parms*)Obj)->bIsHexagon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::NewProp_bIsHexagon = { "bIsHexagon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventGetIndexFromLocation_Parms), &Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::NewProp_bIsHexagon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetIndexFromLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::NewProp_bIsHexagon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetIndexFromLocation", Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::GridUtils_eventGetIndexFromLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::GridUtils_eventGetIndexFromLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetIndexFromLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetIndexFromLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetIndexFromLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_UBOOL(Z_Param_bIsHexagon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UGridUtils::GetIndexFromLocation(Z_Param_Out_Location,Z_Param_bIsHexagon);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetIndexFromLocation ***********************************

// ********** Begin Class UGridUtils Function GetIndicesUnderBrush *********************************
struct Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics
{
	struct GridUtils_eventGetIndicesUnderBrush_Parms
	{
		FIntPoint CursorIndex;
		int32 BrushSize;
		FIntPoint Offset;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Helpers" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get tile indices under the affected brush area." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BrushSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_CursorIndex = { "CursorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetIndicesUnderBrush_Parms, CursorIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetIndicesUnderBrush_Parms, BrushSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetIndicesUnderBrush_Parms, Offset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetIndicesUnderBrush_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_CursorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_BrushSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetIndicesUnderBrush", Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::GridUtils_eventGetIndicesUnderBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::GridUtils_eventGetIndicesUnderBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetIndicesUnderBrush)
{
	P_GET_STRUCT(FIntPoint,Z_Param_CursorIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_BrushSize);
	P_GET_STRUCT(FIntPoint,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=UGridUtils::GetIndicesUnderBrush(Z_Param_CursorIndex,Z_Param_BrushSize,Z_Param_Offset);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetIndicesUnderBrush ***********************************

// ********** Begin Class UGridUtils Function GetIsHex *********************************************
struct Z_Construct_UFunction_UGridUtils_GetIsHex_Statics
{
	struct GridUtils_eventGetIsHex_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current bIsHex." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridUtils_eventGetIsHex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventGetIsHex_Parms), &Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetIsHex", Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::GridUtils_eventGetIsHex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::GridUtils_eventGetIsHex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetIsHex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetIsHex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetIsHex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGridUtils::GetIsHex();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetIsHex ***********************************************

// ********** Begin Class UGridUtils Function GetLineColor *****************************************
struct Z_Construct_UFunction_UGridUtils_GetLineColor_Statics
{
	struct GridUtils_eventGetLineColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current line color." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetLineColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetLineColor", Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::GridUtils_eventGetLineColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::GridUtils_eventGetLineColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetLineColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetLineColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetLineColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UGridUtils::GetLineColor();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetLineColor *******************************************

// ********** Begin Class UGridUtils Function GetLineOpacity ***************************************
struct Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics
{
	struct GridUtils_eventGetLineOpacity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current line opacity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetLineOpacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetLineOpacity", Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::GridUtils_eventGetLineOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::GridUtils_eventGetLineOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetLineOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetLineOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetLineOpacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGridUtils::GetLineOpacity();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetLineOpacity *****************************************

// ********** Begin Class UGridUtils Function GetLineWidth *****************************************
struct Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics
{
	struct GridUtils_eventGetLineWidth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current line width." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetLineWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetLineWidth", Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::GridUtils_eventGetLineWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::GridUtils_eventGetLineWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetLineWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetLineWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetLineWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGridUtils::GetLineWidth();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetLineWidth *******************************************

// ********** Begin Class UGridUtils Function GetLocationFromIndex *********************************
struct Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics
{
	struct GridUtils_eventGetLocationFromIndex_Parms
	{
		FIntPoint TileIndex;
		bool bIsHexagon;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns location for given tile index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static void NewProp_bIsHexagon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHexagon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetLocationFromIndex_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
void Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::NewProp_bIsHexagon_SetBit(void* Obj)
{
	((GridUtils_eventGetLocationFromIndex_Parms*)Obj)->bIsHexagon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::NewProp_bIsHexagon = { "bIsHexagon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventGetLocationFromIndex_Parms), &Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::NewProp_bIsHexagon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetLocationFromIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::NewProp_bIsHexagon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetLocationFromIndex", Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::GridUtils_eventGetLocationFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::GridUtils_eventGetLocationFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetLocationFromIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetLocationFromIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetLocationFromIndex)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_TileIndex);
	P_GET_UBOOL(Z_Param_bIsHexagon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGridUtils::GetLocationFromIndex(Z_Param_Out_TileIndex,Z_Param_bIsHexagon);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetLocationFromIndex ***********************************

// ********** Begin Class UGridUtils Function GetNeighboringIndices ********************************
struct Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics
{
	struct GridUtils_eventGetNeighboringIndices_Parms
	{
		FIntPoint TileIndex;
		bool bIsHex;
		bool bUseDiagonals;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get neighboring tile indices of given tile index." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static void NewProp_bIsHex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHex;
	static void NewProp_bUseDiagonals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDiagonals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetNeighboringIndices_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_bIsHex_SetBit(void* Obj)
{
	((GridUtils_eventGetNeighboringIndices_Parms*)Obj)->bIsHex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_bIsHex = { "bIsHex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventGetNeighboringIndices_Parms), &Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_bIsHex_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_bUseDiagonals_SetBit(void* Obj)
{
	((GridUtils_eventGetNeighboringIndices_Parms*)Obj)->bUseDiagonals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_bUseDiagonals = { "bUseDiagonals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventGetNeighboringIndices_Parms), &Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_bUseDiagonals_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetNeighboringIndices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_bIsHex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_bUseDiagonals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetNeighboringIndices", Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::GridUtils_eventGetNeighboringIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::GridUtils_eventGetNeighboringIndices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetNeighboringIndices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetNeighboringIndices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetNeighboringIndices)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_UBOOL(Z_Param_bIsHex);
	P_GET_UBOOL(Z_Param_bUseDiagonals);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=UGridUtils::GetNeighboringIndices(Z_Param_TileIndex,Z_Param_bIsHex,Z_Param_bUseDiagonals);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetNeighboringIndices **********************************

// ********** Begin Class UGridUtils Function GetScaleBasedOnNormal ********************************
struct Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics
{
	struct GridUtils_eventGetScaleBasedOnNormal_Parms
	{
		FVector Normal;
		float Min;
		float Max;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a scaling factor [Min, Max] based on the normal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetScaleBasedOnNormal_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetScaleBasedOnNormal_Parms, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetScaleBasedOnNormal_Parms, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetScaleBasedOnNormal_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetScaleBasedOnNormal", Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::GridUtils_eventGetScaleBasedOnNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::GridUtils_eventGetScaleBasedOnNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetScaleBasedOnNormal)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGridUtils::GetScaleBasedOnNormal(Z_Param_Out_Normal,Z_Param_Min,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetScaleBasedOnNormal **********************************

// ********** Begin Class UGridUtils Function GetSurfaceLocation ***********************************
struct Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics
{
	struct GridUtils_eventGetSurfaceLocation_Parms
	{
		UObject* WorldContextObject;
		FVector Location;
		UObject* IgnoredObject;
		bool bOutHit;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns surface location." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoredObject;
	static void NewProp_bOutHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetSurfaceLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetSurfaceLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_IgnoredObject = { "IgnoredObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetSurfaceLocation_Parms, IgnoredObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_bOutHit_SetBit(void* Obj)
{
	((GridUtils_eventGetSurfaceLocation_Parms*)Obj)->bOutHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_bOutHit = { "bOutHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventGetSurfaceLocation_Parms), &Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_bOutHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetSurfaceLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_IgnoredObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_bOutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetSurfaceLocation", Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::GridUtils_eventGetSurfaceLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::GridUtils_eventGetSurfaceLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetSurfaceLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetSurfaceLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetSurfaceLocation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_OBJECT(UObject,Z_Param_IgnoredObject);
	P_GET_UBOOL_REF(Z_Param_Out_bOutHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGridUtils::GetSurfaceLocation(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_IgnoredObject,Z_Param_Out_bOutHit);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetSurfaceLocation *************************************

// ********** Begin Class UGridUtils Function GetTileColor *****************************************
struct Z_Construct_UFunction_UGridUtils_GetTileColor_Statics
{
	struct GridUtils_eventGetTileColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current tile color." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetTileColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetTileColor", Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::GridUtils_eventGetTileColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::GridUtils_eventGetTileColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetTileColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetTileColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetTileColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UGridUtils::GetTileColor();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetTileColor *******************************************

// ********** Begin Class UGridUtils Function GetTileCount *****************************************
struct Z_Construct_UFunction_UGridUtils_GetTileCount_Statics
{
	struct GridUtils_eventGetTileCount_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current tile count." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetTileCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetTileCount", Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::GridUtils_eventGetTileCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::GridUtils_eventGetTileCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetTileCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetTileCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetTileCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UGridUtils::GetTileCount();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetTileCount *******************************************

// ********** Begin Class UGridUtils Function GetTileOpacity ***************************************
struct Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics
{
	struct GridUtils_eventGetTileOpacity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Grid Data" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current tile opacity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetTileOpacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetTileOpacity", Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::GridUtils_eventGetTileOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::GridUtils_eventGetTileOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetTileOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetTileOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetTileOpacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGridUtils::GetTileOpacity();
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetTileOpacity *****************************************

// ********** Begin Class UGridUtils Function GetTileUnderCursor ***********************************
struct Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics
{
	struct GridUtils_eventGetTileUnderCursor_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns tile index under cursor." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetTileUnderCursor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetTileUnderCursor_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventGetTileUnderCursor_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "GetTileUnderCursor", Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::GridUtils_eventGetTileUnderCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::GridUtils_eventGetTileUnderCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_GetTileUnderCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_GetTileUnderCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execGetTileUnderCursor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UGridUtils::GetTileUnderCursor(Z_Param_WorldContextObject,Z_Param_PlayerController);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function GetTileUnderCursor *************************************

// ********** Begin Class UGridUtils Function IsEven ***********************************************
struct Z_Construct_UFunction_UGridUtils_IsEven_Statics
{
	struct GridUtils_eventIsEven_Parms
	{
		int32 Num;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the given number even?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridUtils_IsEven_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventIsEven_Parms, Num), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num_MetaData), NewProp_Num_MetaData) };
void Z_Construct_UFunction_UGridUtils_IsEven_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridUtils_eventIsEven_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_IsEven_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventIsEven_Parms), &Z_Construct_UFunction_UGridUtils_IsEven_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_IsEven_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsEven_Statics::NewProp_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsEven_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsEven_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_IsEven_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "IsEven", Z_Construct_UFunction_UGridUtils_IsEven_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsEven_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_IsEven_Statics::GridUtils_eventIsEven_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsEven_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_IsEven_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_IsEven_Statics::GridUtils_eventIsEven_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_IsEven()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_IsEven_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execIsEven)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Num);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGridUtils::IsEven(Z_Param_Out_Num);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function IsEven *************************************************

// ********** Begin Class UGridUtils Function IsTileOfState ****************************************
struct Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics
{
	struct GridUtils_eventIsTileOfState_Parms
	{
		FIntPoint TileIndex;
		FName State;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the tile contains the given state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_State;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventIsTileOfState_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventIsTileOfState_Parms, State), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridUtils_eventIsTileOfState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventIsTileOfState_Parms), &Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "IsTileOfState", Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::GridUtils_eventIsTileOfState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::GridUtils_eventIsTileOfState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_IsTileOfState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_IsTileOfState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execIsTileOfState)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGridUtils::IsTileOfState(Z_Param_TileIndex,Z_Param_State);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function IsTileOfState ******************************************

// ********** Begin Class UGridUtils Function IsTileOfType *****************************************
struct Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics
{
	struct GridUtils_eventIsTileOfType_Parms
	{
		FIntPoint TileIndex;
		FName Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the tile is of the given type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventIsTileOfType_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventIsTileOfType_Parms, Type), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridUtils_eventIsTileOfType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventIsTileOfType_Parms), &Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "IsTileOfType", Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::GridUtils_eventIsTileOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::GridUtils_eventIsTileOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_IsTileOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_IsTileOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execIsTileOfType)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGridUtils::IsTileOfType(Z_Param_TileIndex,Z_Param_Type);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function IsTileOfType *******************************************

// ********** Begin Class UGridUtils Function IsTileWithinBounds ***********************************
struct Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics
{
	struct GridUtils_eventIsTileWithinBounds_Parms
	{
		FIntPoint TileIndex;
		bool bIsHex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the given tile index within grid boundaries?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileIndex;
	static void NewProp_bIsHex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventIsTileWithinBounds_Parms, TileIndex), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_bIsHex_SetBit(void* Obj)
{
	((GridUtils_eventIsTileWithinBounds_Parms*)Obj)->bIsHex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_bIsHex = { "bIsHex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventIsTileWithinBounds_Parms), &Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_bIsHex_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridUtils_eventIsTileWithinBounds_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventIsTileWithinBounds_Parms), &Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_bIsHex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "IsTileWithinBounds", Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::GridUtils_eventIsTileWithinBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::GridUtils_eventIsTileWithinBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_IsTileWithinBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_IsTileWithinBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execIsTileWithinBounds)
{
	P_GET_STRUCT(FIntPoint,Z_Param_TileIndex);
	P_GET_UBOOL(Z_Param_bIsHex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGridUtils::IsTileWithinBounds(Z_Param_TileIndex,Z_Param_bIsHex);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function IsTileWithinBounds *************************************

// ********** Begin Class UGridUtils Function ResolveGridVisualContext *****************************
struct Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics
{
	struct GridUtils_eventResolveGridVisualContext_Parms
	{
		EGridVisualContext Context;
		EGridVisualContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolves grid visual context." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventResolveGridVisualContext_Parms, Context), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventResolveGridVisualContext_Parms, ReturnValue), Z_Construct_UEnum_GridPlugin_EGridVisualContext, METADATA_PARAMS(0, nullptr) }; // 1693942899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "ResolveGridVisualContext", Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::GridUtils_eventResolveGridVisualContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::GridUtils_eventResolveGridVisualContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execResolveGridVisualContext)
{
	P_GET_ENUM(EGridVisualContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGridVisualContext*)Z_Param__Result=UGridUtils::ResolveGridVisualContext(EGridVisualContext(Z_Param_Context));
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function ResolveGridVisualContext *******************************

// ********** Begin Class UGridUtils Function SnapLocationToGrid ***********************************
struct Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics
{
	struct GridUtils_eventSnapLocationToGrid_Parms
	{
		FVector Location;
		bool LimitToGrid;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns location snapped to grid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_LimitToGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LimitToGrid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventSnapLocationToGrid_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
void Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::NewProp_LimitToGrid_SetBit(void* Obj)
{
	((GridUtils_eventSnapLocationToGrid_Parms*)Obj)->LimitToGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::NewProp_LimitToGrid = { "LimitToGrid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridUtils_eventSnapLocationToGrid_Parms), &Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::NewProp_LimitToGrid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventSnapLocationToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::NewProp_LimitToGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "SnapLocationToGrid", Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::GridUtils_eventSnapLocationToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::GridUtils_eventSnapLocationToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_SnapLocationToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_SnapLocationToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execSnapLocationToGrid)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_UBOOL(Z_Param_LimitToGrid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGridUtils::SnapLocationToGrid(Z_Param_Out_Location,Z_Param_LimitToGrid);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function SnapLocationToGrid *************************************

// ********** Begin Class UGridUtils Function SnapVectorToGrid *************************************
struct Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics
{
	struct GridUtils_eventSnapVectorToGrid_Parms
	{
		FVector Vector;
		FVector2D Grid;
		FVector Offset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Utilities" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Snaps vector to square grid. DEPRECATED. See SnapLocationToGrid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventSnapVectorToGrid_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventSnapVectorToGrid_Parms, Grid), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventSnapVectorToGrid_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUtils_eventSnapVectorToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::NewProp_Grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGridUtils, nullptr, "SnapVectorToGrid", Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::GridUtils_eventSnapVectorToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::GridUtils_eventSnapVectorToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridUtils_SnapVectorToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridUtils_SnapVectorToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridUtils::execSnapVectorToGrid)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Grid);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGridUtils::SnapVectorToGrid(Z_Param_Out_Vector,Z_Param_Out_Grid,Z_Param_Out_Offset);
	P_NATIVE_END;
}
// ********** End Class UGridUtils Function SnapVectorToGrid ***************************************

// ********** Begin Class UGridUtils ***************************************************************
void UGridUtils::StaticRegisterNativesUGridUtils()
{
	UClass* Class = UGridUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AxialToCube", &UGridUtils::execAxialToCube },
		{ "AxialToDouble", &UGridUtils::execAxialToDouble },
		{ "ConvertLocationToAxial", &UGridUtils::execConvertLocationToAxial },
		{ "CubeToAxial", &UGridUtils::execCubeToAxial },
		{ "DoubleToAxial", &UGridUtils::execDoubleToAxial },
		{ "GetGridOffset", &UGridUtils::execGetGridOffset },
		{ "GetGridSize", &UGridUtils::execGetGridSize },
		{ "GetGridSubsystem", &UGridUtils::execGetGridSubsystem },
		{ "GetIndexFromLocation", &UGridUtils::execGetIndexFromLocation },
		{ "GetIndicesUnderBrush", &UGridUtils::execGetIndicesUnderBrush },
		{ "GetIsHex", &UGridUtils::execGetIsHex },
		{ "GetLineColor", &UGridUtils::execGetLineColor },
		{ "GetLineOpacity", &UGridUtils::execGetLineOpacity },
		{ "GetLineWidth", &UGridUtils::execGetLineWidth },
		{ "GetLocationFromIndex", &UGridUtils::execGetLocationFromIndex },
		{ "GetNeighboringIndices", &UGridUtils::execGetNeighboringIndices },
		{ "GetScaleBasedOnNormal", &UGridUtils::execGetScaleBasedOnNormal },
		{ "GetSurfaceLocation", &UGridUtils::execGetSurfaceLocation },
		{ "GetTileColor", &UGridUtils::execGetTileColor },
		{ "GetTileCount", &UGridUtils::execGetTileCount },
		{ "GetTileOpacity", &UGridUtils::execGetTileOpacity },
		{ "GetTileUnderCursor", &UGridUtils::execGetTileUnderCursor },
		{ "IsEven", &UGridUtils::execIsEven },
		{ "IsTileOfState", &UGridUtils::execIsTileOfState },
		{ "IsTileOfType", &UGridUtils::execIsTileOfType },
		{ "IsTileWithinBounds", &UGridUtils::execIsTileWithinBounds },
		{ "ResolveGridVisualContext", &UGridUtils::execResolveGridVisualContext },
		{ "SnapLocationToGrid", &UGridUtils::execSnapLocationToGrid },
		{ "SnapVectorToGrid", &UGridUtils::execSnapVectorToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGridUtils;
UClass* UGridUtils::GetPrivateStaticClass()
{
	using TClass = UGridUtils;
	if (!Z_Registration_Info_UClass_UGridUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridUtils"),
			Z_Registration_Info_UClass_UGridUtils.InnerSingleton,
			StaticRegisterNativesUGridUtils,
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
	return Z_Registration_Info_UClass_UGridUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UGridUtils_NoRegister()
{
	return UGridUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGridUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utils/GridUtils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Utils/GridUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridUtils_AxialToCube, "AxialToCube" }, // 2205036396
		{ &Z_Construct_UFunction_UGridUtils_AxialToDouble, "AxialToDouble" }, // 109048230
		{ &Z_Construct_UFunction_UGridUtils_ConvertLocationToAxial, "ConvertLocationToAxial" }, // 808994615
		{ &Z_Construct_UFunction_UGridUtils_CubeToAxial, "CubeToAxial" }, // 3802689927
		{ &Z_Construct_UFunction_UGridUtils_DoubleToAxial, "DoubleToAxial" }, // 3543437470
		{ &Z_Construct_UFunction_UGridUtils_GetGridOffset, "GetGridOffset" }, // 307784884
		{ &Z_Construct_UFunction_UGridUtils_GetGridSize, "GetGridSize" }, // 3974520794
		{ &Z_Construct_UFunction_UGridUtils_GetGridSubsystem, "GetGridSubsystem" }, // 257799880
		{ &Z_Construct_UFunction_UGridUtils_GetIndexFromLocation, "GetIndexFromLocation" }, // 3037036412
		{ &Z_Construct_UFunction_UGridUtils_GetIndicesUnderBrush, "GetIndicesUnderBrush" }, // 2354258080
		{ &Z_Construct_UFunction_UGridUtils_GetIsHex, "GetIsHex" }, // 2346489159
		{ &Z_Construct_UFunction_UGridUtils_GetLineColor, "GetLineColor" }, // 654678099
		{ &Z_Construct_UFunction_UGridUtils_GetLineOpacity, "GetLineOpacity" }, // 4063444175
		{ &Z_Construct_UFunction_UGridUtils_GetLineWidth, "GetLineWidth" }, // 399441449
		{ &Z_Construct_UFunction_UGridUtils_GetLocationFromIndex, "GetLocationFromIndex" }, // 1214756762
		{ &Z_Construct_UFunction_UGridUtils_GetNeighboringIndices, "GetNeighboringIndices" }, // 3817556806
		{ &Z_Construct_UFunction_UGridUtils_GetScaleBasedOnNormal, "GetScaleBasedOnNormal" }, // 4050149335
		{ &Z_Construct_UFunction_UGridUtils_GetSurfaceLocation, "GetSurfaceLocation" }, // 19329750
		{ &Z_Construct_UFunction_UGridUtils_GetTileColor, "GetTileColor" }, // 3350976
		{ &Z_Construct_UFunction_UGridUtils_GetTileCount, "GetTileCount" }, // 2548927890
		{ &Z_Construct_UFunction_UGridUtils_GetTileOpacity, "GetTileOpacity" }, // 3480651060
		{ &Z_Construct_UFunction_UGridUtils_GetTileUnderCursor, "GetTileUnderCursor" }, // 1489352962
		{ &Z_Construct_UFunction_UGridUtils_IsEven, "IsEven" }, // 3305807343
		{ &Z_Construct_UFunction_UGridUtils_IsTileOfState, "IsTileOfState" }, // 1635138528
		{ &Z_Construct_UFunction_UGridUtils_IsTileOfType, "IsTileOfType" }, // 265169919
		{ &Z_Construct_UFunction_UGridUtils_IsTileWithinBounds, "IsTileWithinBounds" }, // 213131184
		{ &Z_Construct_UFunction_UGridUtils_ResolveGridVisualContext, "ResolveGridVisualContext" }, // 1980810343
		{ &Z_Construct_UFunction_UGridUtils_SnapLocationToGrid, "SnapLocationToGrid" }, // 2665873713
		{ &Z_Construct_UFunction_UGridUtils_SnapVectorToGrid, "SnapVectorToGrid" }, // 1335531299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GridPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridUtils_Statics::ClassParams = {
	&UGridUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridUtils()
{
	if (!Z_Registration_Info_UClass_UGridUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridUtils.OuterSingleton, Z_Construct_UClass_UGridUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridUtils.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridUtils);
UGridUtils::~UGridUtils() {}
// ********** End Class UGridUtils *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h__Script_GridPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridUtils, UGridUtils::StaticClass, TEXT("UGridUtils"), &Z_Registration_Info_UClass_UGridUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridUtils), 2517431591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h__Script_GridPlugin_600556320(TEXT("/Script/GridPlugin"),
	Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h__Script_GridPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mpjiw_Desktop_pm_Plugins_MegaGrid_Source_GridPlugin_Utils_GridUtils_h__Script_GridPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

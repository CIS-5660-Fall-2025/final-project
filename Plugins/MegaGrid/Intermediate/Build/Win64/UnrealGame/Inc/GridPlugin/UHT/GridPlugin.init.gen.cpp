// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPlugin_init() {}
	GRIDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature();
	GRIDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GridPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GridPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_GridPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GridPlugin_PathCompleteDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GridPlugin_PathFollowDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GridPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4D23576E,
				0x2750E4FD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GridPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GridPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GridPlugin(Z_Construct_UPackage__Script_GridPlugin, TEXT("/Script/GridPlugin"), Z_Registration_Info_UPackage__Script_GridPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4D23576E, 0x2750E4FD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyTestProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyTestProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MyTestProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyTestProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBB7C7801,
				0x8F086CCE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyTestProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyTestProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyTestProject(Z_Construct_UPackage__Script_MyTestProject, TEXT("/Script/MyTestProject"), Z_Registration_Info_UPackage__Script_MyTestProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBB7C7801, 0x8F086CCE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

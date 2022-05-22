// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestProject/MyTestProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestProjectGameModeBase() {}
// Cross Module References
	MYTESTPROJECT_API UClass* Z_Construct_UClass_AMyTestProjectGameModeBase_NoRegister();
	MYTESTPROJECT_API UClass* Z_Construct_UClass_AMyTestProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyTestProject();
// End Cross Module References
	void AMyTestProjectGameModeBase::StaticRegisterNativesAMyTestProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestProjectGameModeBase);
	UClass* Z_Construct_UClass_AMyTestProjectGameModeBase_NoRegister()
	{
		return AMyTestProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyTestProjectGameModeBase.h" },
		{ "ModuleRelativePath", "MyTestProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestProjectGameModeBase_Statics::ClassParams = {
		&AMyTestProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyTestProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMyTestProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AMyTestProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestProjectGameModeBase.OuterSingleton;
	}
	template<> MYTESTPROJECT_API UClass* StaticClass<AMyTestProjectGameModeBase>()
	{
		return AMyTestProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestProjectGameModeBase, AMyTestProjectGameModeBase::StaticClass, TEXT("AMyTestProjectGameModeBase"), &Z_Registration_Info_UClass_AMyTestProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestProjectGameModeBase), 670763536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_1865760720(TEXT("/Script/MyTestProject"),
		Z_CompiledInDeferFile_FID_MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyTestProject_Source_MyTestProject_MyTestProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Kiriba/UE5_KiribaGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_KiribaGameModeBase() {}
// Cross Module References
	UE5_KIRIBA_API UClass* Z_Construct_UClass_AUE5_KiribaGameModeBase_NoRegister();
	UE5_KIRIBA_API UClass* Z_Construct_UClass_AUE5_KiribaGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5_Kiriba();
// End Cross Module References
	void AUE5_KiribaGameModeBase::StaticRegisterNativesAUE5_KiribaGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_KiribaGameModeBase);
	UClass* Z_Construct_UClass_AUE5_KiribaGameModeBase_NoRegister()
	{
		return AUE5_KiribaGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_KiribaGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_KiribaGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Kiriba,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_KiribaGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_KiribaGameModeBase.h" },
		{ "ModuleRelativePath", "UE5_KiribaGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_KiribaGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_KiribaGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_KiribaGameModeBase_Statics::ClassParams = {
		&AUE5_KiribaGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE5_KiribaGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_KiribaGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5_KiribaGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5_KiribaGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_KiribaGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5_KiribaGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_KiribaGameModeBase.OuterSingleton;
	}
	template<> UE5_KIRIBA_API UClass* StaticClass<AUE5_KiribaGameModeBase>()
	{
		return AUE5_KiribaGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_KiribaGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5_Kiriba_Source_UE5_Kiriba_UE5_KiribaGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Kiriba_Source_UE5_Kiriba_UE5_KiribaGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_KiribaGameModeBase, AUE5_KiribaGameModeBase::StaticClass, TEXT("AUE5_KiribaGameModeBase"), &Z_Registration_Info_UClass_AUE5_KiribaGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_KiribaGameModeBase), 1522394310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Kiriba_Source_UE5_Kiriba_UE5_KiribaGameModeBase_h_3966370921(TEXT("/Script/UE5_Kiriba"),
		Z_CompiledInDeferFile_FID_UE5_Kiriba_Source_UE5_Kiriba_UE5_KiribaGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Kiriba_Source_UE5_Kiriba_UE5_KiribaGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

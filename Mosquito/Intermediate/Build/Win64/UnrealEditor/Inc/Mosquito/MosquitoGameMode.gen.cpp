// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mosquito/MosquitoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMosquitoGameMode() {}
// Cross Module References
	MOSQUITO_API UClass* Z_Construct_UClass_AMosquitoGameMode_NoRegister();
	MOSQUITO_API UClass* Z_Construct_UClass_AMosquitoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Mosquito();
// End Cross Module References
	void AMosquitoGameMode::StaticRegisterNativesAMosquitoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMosquitoGameMode);
	UClass* Z_Construct_UClass_AMosquitoGameMode_NoRegister()
	{
		return AMosquitoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMosquitoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMosquitoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Mosquito,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMosquitoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MosquitoGameMode.h" },
		{ "ModuleRelativePath", "MosquitoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMosquitoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMosquitoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMosquitoGameMode_Statics::ClassParams = {
		&AMosquitoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMosquitoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMosquitoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMosquitoGameMode()
	{
		if (!Z_Registration_Info_UClass_AMosquitoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMosquitoGameMode.OuterSingleton, Z_Construct_UClass_AMosquitoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMosquitoGameMode.OuterSingleton;
	}
	template<> MOSQUITO_API UClass* StaticClass<AMosquitoGameMode>()
	{
		return AMosquitoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMosquitoGameMode);
	struct Z_CompiledInDeferFile_FID_Mosquito_Source_Mosquito_MosquitoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mosquito_Source_Mosquito_MosquitoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMosquitoGameMode, AMosquitoGameMode::StaticClass, TEXT("AMosquitoGameMode"), &Z_Registration_Info_UClass_AMosquitoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMosquitoGameMode), 1516928861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mosquito_Source_Mosquito_MosquitoGameMode_h_515580957(TEXT("/Script/Mosquito"),
		Z_CompiledInDeferFile_FID_Mosquito_Source_Mosquito_MosquitoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mosquito_Source_Mosquito_MosquitoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

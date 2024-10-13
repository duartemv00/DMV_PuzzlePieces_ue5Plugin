// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVPuzzlePieces/Public/Actor/TriggerActor/PPContinousTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPContinousTrigger() {}

// Begin Cross Module References
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPContinousTrigger();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPContinousTrigger_NoRegister();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPTriggerActor();
UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces();
// End Cross Module References

// Begin Class APPContinousTrigger
void APPContinousTrigger::StaticRegisterNativesAPPContinousTrigger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPContinousTrigger);
UClass* Z_Construct_UClass_APPContinousTrigger_NoRegister()
{
	return APPContinousTrigger::StaticClass();
}
struct Z_Construct_UClass_APPContinousTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actor/TriggerActor/PPContinousTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPContinousTrigger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPContinousTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APPContinousTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APPTriggerActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVPuzzlePieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPContinousTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPContinousTrigger_Statics::ClassParams = {
	&APPContinousTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPContinousTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_APPContinousTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPContinousTrigger()
{
	if (!Z_Registration_Info_UClass_APPContinousTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPContinousTrigger.OuterSingleton, Z_Construct_UClass_APPContinousTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPContinousTrigger.OuterSingleton;
}
template<> DMVPUZZLEPIECES_API UClass* StaticClass<APPContinousTrigger>()
{
	return APPContinousTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPContinousTrigger);
APPContinousTrigger::~APPContinousTrigger() {}
// End Class APPContinousTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPContinousTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPContinousTrigger, APPContinousTrigger::StaticClass, TEXT("APPContinousTrigger"), &Z_Registration_Info_UClass_APPContinousTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPContinousTrigger), 2851626968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPContinousTrigger_h_902075861(TEXT("/Script/DMVPuzzlePieces"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPContinousTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPContinousTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

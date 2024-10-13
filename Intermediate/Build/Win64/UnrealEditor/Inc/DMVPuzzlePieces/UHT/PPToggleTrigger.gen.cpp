// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVPuzzlePieces/Public/Actor/TriggerActor/PPToggleTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPToggleTrigger() {}

// Begin Cross Module References
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPToggleTrigger();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPToggleTrigger_NoRegister();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPTriggerActor();
UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces();
// End Cross Module References

// Begin Class APPToggleTrigger
void APPToggleTrigger::StaticRegisterNativesAPPToggleTrigger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPToggleTrigger);
UClass* Z_Construct_UClass_APPToggleTrigger_NoRegister()
{
	return APPToggleTrigger::StaticClass();
}
struct Z_Construct_UClass_APPToggleTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actor/TriggerActor/PPToggleTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPToggleTrigger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPToggleTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APPToggleTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APPTriggerActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVPuzzlePieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPToggleTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPToggleTrigger_Statics::ClassParams = {
	&APPToggleTrigger::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPToggleTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_APPToggleTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPToggleTrigger()
{
	if (!Z_Registration_Info_UClass_APPToggleTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPToggleTrigger.OuterSingleton, Z_Construct_UClass_APPToggleTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPToggleTrigger.OuterSingleton;
}
template<> DMVPUZZLEPIECES_API UClass* StaticClass<APPToggleTrigger>()
{
	return APPToggleTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPToggleTrigger);
APPToggleTrigger::~APPToggleTrigger() {}
// End Class APPToggleTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPToggleTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPToggleTrigger, APPToggleTrigger::StaticClass, TEXT("APPToggleTrigger"), &Z_Registration_Info_UClass_APPToggleTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPToggleTrigger), 605835763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPToggleTrigger_h_3462350833(TEXT("/Script/DMVPuzzlePieces"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPToggleTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPToggleTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVPuzzlePieces/Public/Actor/TriggerActor/PPDiscreteTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPDiscreteTrigger() {}

// Begin Cross Module References
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPDiscreteTrigger();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPDiscreteTrigger_NoRegister();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPTriggerActor();
UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces();
// End Cross Module References

// Begin Class APPDiscreteTrigger
void APPDiscreteTrigger::StaticRegisterNativesAPPDiscreteTrigger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPDiscreteTrigger);
UClass* Z_Construct_UClass_APPDiscreteTrigger_NoRegister()
{
	return APPDiscreteTrigger::StaticClass();
}
struct Z_Construct_UClass_APPDiscreteTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actor/TriggerActor/PPDiscreteTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPDiscreteTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPDiscreteTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "PPDiscreteTrigger" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPDiscreteTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "PPDiscreteTrigger" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPDiscreteTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "PPDiscreteTrigger" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPDiscreteTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedValue_MetaData[] = {
		{ "Category", "PPDiscreteTrigger" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPDiscreteTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPDiscreteTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPDiscreteTrigger, CurrentValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentValue_MetaData), NewProp_CurrentValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPDiscreteTrigger, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPDiscreteTrigger, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPDiscreteTrigger, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_ExpectedValue = { "ExpectedValue", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPDiscreteTrigger, ExpectedValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedValue_MetaData), NewProp_ExpectedValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APPDiscreteTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_CurrentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDiscreteTrigger_Statics::NewProp_ExpectedValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPDiscreteTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APPDiscreteTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APPTriggerActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVPuzzlePieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPDiscreteTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPDiscreteTrigger_Statics::ClassParams = {
	&APPDiscreteTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APPDiscreteTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APPDiscreteTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPDiscreteTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_APPDiscreteTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPDiscreteTrigger()
{
	if (!Z_Registration_Info_UClass_APPDiscreteTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPDiscreteTrigger.OuterSingleton, Z_Construct_UClass_APPDiscreteTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPDiscreteTrigger.OuterSingleton;
}
template<> DMVPUZZLEPIECES_API UClass* StaticClass<APPDiscreteTrigger>()
{
	return APPDiscreteTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPDiscreteTrigger);
APPDiscreteTrigger::~APPDiscreteTrigger() {}
// End Class APPDiscreteTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPDiscreteTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPDiscreteTrigger, APPDiscreteTrigger::StaticClass, TEXT("APPDiscreteTrigger"), &Z_Registration_Info_UClass_APPDiscreteTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPDiscreteTrigger), 3824403353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPDiscreteTrigger_h_1028914778(TEXT("/Script/DMVPuzzlePieces"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPDiscreteTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPDiscreteTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

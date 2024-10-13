// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVPuzzlePieces/Public/Actor/PPActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPActor() {}

// Begin Cross Module References
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPActor();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPActor_NoRegister();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_UPPInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces();
// End Cross Module References

// Begin Class APPActor
void APPActor::StaticRegisterNativesAPPActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPActor);
UClass* Z_Construct_UClass_APPActor_NoRegister()
{
	return APPActor::StaticClass();
}
struct Z_Construct_UClass_APPActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/PPActor.h" },
		{ "ModuleRelativePath", "Public/Actor/PPActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APPActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVPuzzlePieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APPActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPPInterface_NoRegister, (int32)VTABLE_OFFSET(APPActor, IPPInterface), false },  // 740001821
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPActor_Statics::ClassParams = {
	&APPActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APPActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPActor()
{
	if (!Z_Registration_Info_UClass_APPActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPActor.OuterSingleton, Z_Construct_UClass_APPActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPActor.OuterSingleton;
}
template<> DMVPUZZLEPIECES_API UClass* StaticClass<APPActor>()
{
	return APPActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPActor);
APPActor::~APPActor() {}
// End Class APPActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPActor, APPActor::StaticClass, TEXT("APPActor"), &Z_Registration_Info_UClass_APPActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPActor), 4245912498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_4020748462(TEXT("/Script/DMVPuzzlePieces"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

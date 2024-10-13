// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVPuzzlePieces/Public/Actor/PuzleManager/PPManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPManager() {}

// Begin Cross Module References
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPActor();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPManager();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPManager_NoRegister();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPTriggerActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces();
// End Cross Module References

// Begin Class APPManager Function UpdatePuzzleState
struct Z_Construct_UFunction_APPManager_UpdatePuzzleState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/PuzleManager/PPManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPManager_UpdatePuzzleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPManager, nullptr, "UpdatePuzzleState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APPManager_UpdatePuzzleState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APPManager_UpdatePuzzleState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APPManager_UpdatePuzzleState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPManager_UpdatePuzzleState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APPManager::execUpdatePuzzleState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePuzzleState();
	P_NATIVE_END;
}
// End Class APPManager Function UpdatePuzzleState

// Begin Class APPManager
void APPManager::StaticRegisterNativesAPPManager()
{
	UClass* Class = APPManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdatePuzzleState", &APPManager::execUpdatePuzzleState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPManager);
UClass* Z_Construct_UClass_APPManager_NoRegister()
{
	return APPManager::StaticClass();
}
struct Z_Construct_UClass_APPManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/PuzleManager/PPManager.h" },
		{ "ModuleRelativePath", "Public/Actor/PuzleManager/PPManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PuzzleComponents_MetaData[] = {
		{ "Category", "PPManager" },
		{ "ModuleRelativePath", "Public/Actor/PuzleManager/PPManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockPuzzleOnFinished_MetaData[] = {
		{ "Category", "PPManager" },
		{ "ModuleRelativePath", "Public/Actor/PuzleManager/PPManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasOwnerManager_MetaData[] = {
		{ "Category", "PPManager" },
		{ "ModuleRelativePath", "Public/Actor/PuzleManager/PPManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerManagers_MetaData[] = {
		{ "Category", "PPManager" },
		{ "EditCondition", "bHasOwnerManager" },
		{ "ModuleRelativePath", "Public/Actor/PuzleManager/PPManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextStepManagers_MetaData[] = {
		{ "Category", "PPManager" },
		{ "EditCondition", "!bHasOwnerManager" },
		{ "ModuleRelativePath", "Public/Actor/PuzleManager/PPManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PuzzleComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PuzzleComponents;
	static void NewProp_bBlockPuzzleOnFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockPuzzleOnFinished;
	static void NewProp_bHasOwnerManager_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOwnerManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerManagers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnerManagers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextStepManagers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextStepManagers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APPManager_UpdatePuzzleState, "UpdatePuzzleState" }, // 3297981204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPManager_Statics::NewProp_PuzzleComponents_Inner = { "PuzzleComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APPTriggerActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APPManager_Statics::NewProp_PuzzleComponents = { "PuzzleComponents", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPManager, PuzzleComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PuzzleComponents_MetaData), NewProp_PuzzleComponents_MetaData) };
void Z_Construct_UClass_APPManager_Statics::NewProp_bBlockPuzzleOnFinished_SetBit(void* Obj)
{
	((APPManager*)Obj)->bBlockPuzzleOnFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APPManager_Statics::NewProp_bBlockPuzzleOnFinished = { "bBlockPuzzleOnFinished", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APPManager), &Z_Construct_UClass_APPManager_Statics::NewProp_bBlockPuzzleOnFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockPuzzleOnFinished_MetaData), NewProp_bBlockPuzzleOnFinished_MetaData) };
void Z_Construct_UClass_APPManager_Statics::NewProp_bHasOwnerManager_SetBit(void* Obj)
{
	((APPManager*)Obj)->bHasOwnerManager = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APPManager_Statics::NewProp_bHasOwnerManager = { "bHasOwnerManager", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APPManager), &Z_Construct_UClass_APPManager_Statics::NewProp_bHasOwnerManager_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasOwnerManager_MetaData), NewProp_bHasOwnerManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPManager_Statics::NewProp_OwnerManagers_Inner = { "OwnerManagers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APPManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APPManager_Statics::NewProp_OwnerManagers = { "OwnerManagers", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPManager, OwnerManagers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerManagers_MetaData), NewProp_OwnerManagers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPManager_Statics::NewProp_NextStepManagers_Inner = { "NextStepManagers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APPManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APPManager_Statics::NewProp_NextStepManagers = { "NextStepManagers", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPManager, NextStepManagers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStepManagers_MetaData), NewProp_NextStepManagers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APPManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPManager_Statics::NewProp_PuzzleComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPManager_Statics::NewProp_PuzzleComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPManager_Statics::NewProp_bBlockPuzzleOnFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPManager_Statics::NewProp_bHasOwnerManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPManager_Statics::NewProp_OwnerManagers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPManager_Statics::NewProp_OwnerManagers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPManager_Statics::NewProp_NextStepManagers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPManager_Statics::NewProp_NextStepManagers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APPManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APPActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVPuzzlePieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPManager_Statics::ClassParams = {
	&APPManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APPManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APPManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APPManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPManager()
{
	if (!Z_Registration_Info_UClass_APPManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPManager.OuterSingleton, Z_Construct_UClass_APPManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPManager.OuterSingleton;
}
template<> DMVPUZZLEPIECES_API UClass* StaticClass<APPManager>()
{
	return APPManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPManager);
APPManager::~APPManager() {}
// End Class APPManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PuzleManager_PPManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPManager, APPManager::StaticClass, TEXT("APPManager"), &Z_Registration_Info_UClass_APPManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPManager), 498358947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PuzleManager_PPManager_h_3923853966(TEXT("/Script/DMVPuzzlePieces"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PuzleManager_PPManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PuzleManager_PPManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

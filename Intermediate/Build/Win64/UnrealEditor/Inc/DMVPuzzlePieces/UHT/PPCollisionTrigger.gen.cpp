// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVPuzzlePieces/Public/Actor/TriggerActor/PPCollisionTrigger.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPCollisionTrigger() {}

// Begin Cross Module References
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPCollisionTrigger();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPCollisionTrigger_NoRegister();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPTriggerActor();
DMVPUZZLEPIECES_API UFunction* Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces();
// End Cross Module References

// Begin Delegate FCharacterPassingThrough
struct Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPCollisionTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DMVPuzzlePieces, nullptr, "CharacterPassingThrough__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCharacterPassingThrough_DelegateWrapper(const FMulticastScriptDelegate& CharacterPassingThrough)
{
	CharacterPassingThrough.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FCharacterPassingThrough

// Begin Class APPCollisionTrigger Function CallDispatcher
struct Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics
{
	struct PPCollisionTrigger_eventCallDispatcher_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPCollisionTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PPCollisionTrigger_eventCallDispatcher_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PPCollisionTrigger_eventCallDispatcher_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PPCollisionTrigger_eventCallDispatcher_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PPCollisionTrigger_eventCallDispatcher_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PPCollisionTrigger_eventCallDispatcher_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PPCollisionTrigger_eventCallDispatcher_Parms), &Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PPCollisionTrigger_eventCallDispatcher_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPCollisionTrigger, nullptr, "CallDispatcher", nullptr, nullptr, Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::PropPointers), sizeof(Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::PPCollisionTrigger_eventCallDispatcher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::Function_MetaDataParams), Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::PPCollisionTrigger_eventCallDispatcher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APPCollisionTrigger::execCallDispatcher)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallDispatcher(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APPCollisionTrigger Function CallDispatcher

// Begin Class APPCollisionTrigger
void APPCollisionTrigger::StaticRegisterNativesAPPCollisionTrigger()
{
	UClass* Class = APPCollisionTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallDispatcher", &APPCollisionTrigger::execCallDispatcher },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPCollisionTrigger);
UClass* Z_Construct_UClass_APPCollisionTrigger_NoRegister()
{
	return APPCollisionTrigger::StaticClass();
}
struct Z_Construct_UClass_APPCollisionTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actor/TriggerActor/PPCollisionTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPCollisionTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderComponent_MetaData[] = {
		{ "Category", "PPCollisionTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPCollisionTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColliderComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APPCollisionTrigger_CallDispatcher, "CallDispatcher" }, // 2496163204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPCollisionTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPCollisionTrigger_Statics::NewProp_ColliderComponent = { "ColliderComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPCollisionTrigger, ColliderComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderComponent_MetaData), NewProp_ColliderComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APPCollisionTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPCollisionTrigger_Statics::NewProp_ColliderComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPCollisionTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APPCollisionTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APPTriggerActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVPuzzlePieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPCollisionTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPCollisionTrigger_Statics::ClassParams = {
	&APPCollisionTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APPCollisionTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APPCollisionTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPCollisionTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_APPCollisionTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPCollisionTrigger()
{
	if (!Z_Registration_Info_UClass_APPCollisionTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPCollisionTrigger.OuterSingleton, Z_Construct_UClass_APPCollisionTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPCollisionTrigger.OuterSingleton;
}
template<> DMVPUZZLEPIECES_API UClass* StaticClass<APPCollisionTrigger>()
{
	return APPCollisionTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPCollisionTrigger);
APPCollisionTrigger::~APPCollisionTrigger() {}
// End Class APPCollisionTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPCollisionTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPCollisionTrigger, APPCollisionTrigger::StaticClass, TEXT("APPCollisionTrigger"), &Z_Registration_Info_UClass_APPCollisionTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPCollisionTrigger), 2167897958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPCollisionTrigger_h_2775980838(TEXT("/Script/DMVPuzzlePieces"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPCollisionTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPCollisionTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVPuzzlePieces/Public/Actor/TriggerActor/PPTriggerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPTriggerActor() {}

// Begin Cross Module References
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPActor();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPTriggerActor();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_APPTriggerActor_NoRegister();
DMVPUZZLEPIECES_API UFunction* Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces();
// End Cross Module References

// Begin Delegate FPieceHasCorrectValue
struct Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DMVPuzzlePieces, nullptr, "PieceHasCorrectValue__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPieceHasCorrectValue_DelegateWrapper(const FMulticastScriptDelegate& PieceHasCorrectValue)
{
	PieceHasCorrectValue.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FPieceHasCorrectValue

// Begin Class APPTriggerActor Function NotActiveFeedback
static FName NAME_APPTriggerActor_NotActiveFeedback = FName(TEXT("NotActiveFeedback"));
void APPTriggerActor::NotActiveFeedback()
{
	ProcessEvent(FindFunctionChecked(NAME_APPTriggerActor_NotActiveFeedback),NULL);
}
struct Z_Construct_UFunction_APPTriggerActor_NotActiveFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPTriggerActor_NotActiveFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPTriggerActor, nullptr, "NotActiveFeedback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APPTriggerActor_NotActiveFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_APPTriggerActor_NotActiveFeedback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APPTriggerActor_NotActiveFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPTriggerActor_NotActiveFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APPTriggerActor::execNotActiveFeedback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotActiveFeedback_Implementation();
	P_NATIVE_END;
}
// End Class APPTriggerActor Function NotActiveFeedback

// Begin Class APPTriggerActor Function SendPieceHasCorrectValue
struct Z_Construct_UFunction_APPTriggerActor_SendPieceHasCorrectValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPTriggerActor_SendPieceHasCorrectValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPTriggerActor, nullptr, "SendPieceHasCorrectValue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APPTriggerActor_SendPieceHasCorrectValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_APPTriggerActor_SendPieceHasCorrectValue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APPTriggerActor_SendPieceHasCorrectValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPTriggerActor_SendPieceHasCorrectValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APPTriggerActor::execSendPieceHasCorrectValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendPieceHasCorrectValue();
	P_NATIVE_END;
}
// End Class APPTriggerActor Function SendPieceHasCorrectValue

// Begin Class APPTriggerActor
void APPTriggerActor::StaticRegisterNativesAPPTriggerActor()
{
	UClass* Class = APPTriggerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NotActiveFeedback", &APPTriggerActor::execNotActiveFeedback },
		{ "SendPieceHasCorrectValue", &APPTriggerActor::execSendPieceHasCorrectValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPTriggerActor);
UClass* Z_Construct_UClass_APPTriggerActor_NoRegister()
{
	return APPTriggerActor::StaticClass();
}
struct Z_Construct_UClass_APPTriggerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/TriggerActor/PPTriggerActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledActors_MetaData[] = {
		{ "Category", "PPTriggerActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of all the Actors that will be affected when this trigger is activated\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of all the Actors that will be affected when this trigger is activated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "PPTriggerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValueMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartActive_MetaData[] = {
		{ "Category", "PPTriggerActor" },
		{ "ModuleRelativePath", "Public/Actor/TriggerActor/PPTriggerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlledActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static void NewProp_bValueMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValueMatch;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static void NewProp_bStartActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APPTriggerActor_NotActiveFeedback, "NotActiveFeedback" }, // 2670786766
		{ &Z_Construct_UFunction_APPTriggerActor_SendPieceHasCorrectValue, "SendPieceHasCorrectValue" }, // 1195957917
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPTriggerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPTriggerActor_Statics::NewProp_ControlledActors_Inner = { "ControlledActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APPTriggerActor_Statics::NewProp_ControlledActors = { "ControlledActors", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPTriggerActor, ControlledActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledActors_MetaData), NewProp_ControlledActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPTriggerActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APPTriggerActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
void Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bValueMatch_SetBit(void* Obj)
{
	((APPTriggerActor*)Obj)->bValueMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bValueMatch = { "bValueMatch", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APPTriggerActor), &Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bValueMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValueMatch_MetaData), NewProp_bValueMatch_MetaData) };
void Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((APPTriggerActor*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APPTriggerActor), &Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
void Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bStartActive_SetBit(void* Obj)
{
	((APPTriggerActor*)Obj)->bStartActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bStartActive = { "bStartActive", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APPTriggerActor), &Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bStartActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartActive_MetaData), NewProp_bStartActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APPTriggerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPTriggerActor_Statics::NewProp_ControlledActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPTriggerActor_Statics::NewProp_ControlledActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPTriggerActor_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bValueMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPTriggerActor_Statics::NewProp_bStartActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPTriggerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APPTriggerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APPActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVPuzzlePieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APPTriggerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APPTriggerActor_Statics::ClassParams = {
	&APPTriggerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APPTriggerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APPTriggerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APPTriggerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APPTriggerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APPTriggerActor()
{
	if (!Z_Registration_Info_UClass_APPTriggerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPTriggerActor.OuterSingleton, Z_Construct_UClass_APPTriggerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APPTriggerActor.OuterSingleton;
}
template<> DMVPUZZLEPIECES_API UClass* StaticClass<APPTriggerActor>()
{
	return APPTriggerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APPTriggerActor);
APPTriggerActor::~APPTriggerActor() {}
// End Class APPTriggerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APPTriggerActor, APPTriggerActor::StaticClass, TEXT("APPTriggerActor"), &Z_Registration_Info_UClass_APPTriggerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPTriggerActor), 648713188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_1461462389(TEXT("/Script/DMVPuzzlePieces"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

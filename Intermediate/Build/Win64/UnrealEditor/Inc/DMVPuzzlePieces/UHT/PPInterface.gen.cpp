// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVPuzzlePieces/Public/Interface/PPInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_UPPInterface();
DMVPUZZLEPIECES_API UClass* Z_Construct_UClass_UPPInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces();
// End Cross Module References

// Begin Interface UPPInterface Function Activate
void IPPInterface::Activate()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Activate instead.");
}
static FName NAME_UPPInterface_Activate = FName(TEXT("Activate"));
void IPPInterface::Execute_Activate(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_Activate);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		I->Activate_Implementation();
	}
}
struct Z_Construct_UFunction_UPPInterface_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Activate related functionality in the Actors connected to the puzzle pieces (SingleState & Toggle)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate related functionality in the Actors connected to the puzzle pieces (SingleState & Toggle)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "Activate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_Activate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPPInterface_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activate_Implementation();
	P_NATIVE_END;
}
// End Interface UPPInterface Function Activate

// Begin Interface UPPInterface Function CheckState
struct PPInterface_eventCheckState_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	PPInterface_eventCheckState_Parms()
		: ReturnValue(false)
	{
	}
};
bool IPPInterface::CheckState()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckState instead.");
	PPInterface_eventCheckState_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPPInterface_CheckState = FName(TEXT("CheckState"));
bool IPPInterface::Execute_CheckState(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	PPInterface_eventCheckState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_CheckState);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CheckState_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPPInterface_CheckState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPPInterface_CheckState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PPInterface_eventCheckState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPPInterface_CheckState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PPInterface_eventCheckState_Parms), &Z_Construct_UFunction_UPPInterface_CheckState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPInterface_CheckState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPInterface_CheckState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_CheckState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_CheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "CheckState", nullptr, nullptr, Z_Construct_UFunction_UPPInterface_CheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_CheckState_Statics::PropPointers), sizeof(PPInterface_eventCheckState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_CheckState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_CheckState_Statics::Function_MetaDataParams) };
static_assert(sizeof(PPInterface_eventCheckState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPPInterface_CheckState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_CheckState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execCheckState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckState_Implementation();
	P_NATIVE_END;
}
// End Interface UPPInterface Function CheckState

// Begin Interface UPPInterface Function Deactivate
void IPPInterface::Deactivate()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deactivate instead.");
}
static FName NAME_UPPInterface_Deactivate = FName(TEXT("Deactivate"));
void IPPInterface::Execute_Deactivate(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_Deactivate);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		I->Deactivate_Implementation();
	}
}
struct Z_Construct_UFunction_UPPInterface_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deactivate related functionality in the Actors connected to the puzzle pieces (Toggle)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deactivate related functionality in the Actors connected to the puzzle pieces (Toggle)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "Deactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_Deactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPPInterface_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivate_Implementation();
	P_NATIVE_END;
}
// End Interface UPPInterface Function Deactivate

// Begin Interface UPPInterface Function InitializeManager
void IPPInterface::InitializeManager()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeManager instead.");
}
static FName NAME_UPPInterface_InitializeManager = FName(TEXT("InitializeManager"));
void IPPInterface::Execute_InitializeManager(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_InitializeManager);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		I->InitializeManager_Implementation();
	}
}
struct Z_Construct_UFunction_UPPInterface_InitializeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_InitializeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "InitializeManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_InitializeManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_InitializeManager_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPPInterface_InitializeManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_InitializeManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execInitializeManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeManager_Implementation();
	P_NATIVE_END;
}
// End Interface UPPInterface Function InitializeManager

// Begin Interface UPPInterface Function Interact
void IPPInterface::Interact()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UPPInterface_Interact = FName(TEXT("Interact"));
void IPPInterface::Execute_Interact(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_Interact);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		I->Interact_Implementation();
	}
}
struct Z_Construct_UFunction_UPPInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to communicate the player with the puzzle pieces\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to communicate the player with the puzzle pieces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_Interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPPInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation();
	P_NATIVE_END;
}
// End Interface UPPInterface Function Interact

// Begin Interface UPPInterface Function OneHasCorrectValue
void IPPInterface::OneHasCorrectValue()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OneHasCorrectValue instead.");
}
static FName NAME_UPPInterface_OneHasCorrectValue = FName(TEXT("OneHasCorrectValue"));
void IPPInterface::Execute_OneHasCorrectValue(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_OneHasCorrectValue);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		I->OneHasCorrectValue_Implementation();
	}
}
struct Z_Construct_UFunction_UPPInterface_OneHasCorrectValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Communication between puzzle pieces and the manager\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Communication between puzzle pieces and the manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_OneHasCorrectValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "OneHasCorrectValue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_OneHasCorrectValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_OneHasCorrectValue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPPInterface_OneHasCorrectValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_OneHasCorrectValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execOneHasCorrectValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OneHasCorrectValue_Implementation();
	P_NATIVE_END;
}
// End Interface UPPInterface Function OneHasCorrectValue

// Begin Interface UPPInterface Function SendFloatNumericValue
struct PPInterface_eventSendFloatNumericValue_Parms
{
	float Value;
};
void IPPInterface::SendFloatNumericValue(float Value)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SendFloatNumericValue instead.");
}
static FName NAME_UPPInterface_SendFloatNumericValue = FName(TEXT("SendFloatNumericValue"));
void IPPInterface::Execute_SendFloatNumericValue(UObject* O, float Value)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	PPInterface_eventSendFloatNumericValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_SendFloatNumericValue);
	if (Func)
	{
		Parms.Value=Value;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		I->SendFloatNumericValue_Implementation(Value);
	}
}
struct Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send the numeric value of the trigger to the conected actors (Continuous)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send the numeric value of the trigger to the conected actors (Continuous)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PPInterface_eventSendFloatNumericValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "SendFloatNumericValue", nullptr, nullptr, Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::PropPointers), sizeof(PPInterface_eventSendFloatNumericValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(PPInterface_eventSendFloatNumericValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPPInterface_SendFloatNumericValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_SendFloatNumericValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execSendFloatNumericValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendFloatNumericValue_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Interface UPPInterface Function SendFloatNumericValue

// Begin Interface UPPInterface Function SendIntNumericValue
struct PPInterface_eventSendIntNumericValue_Parms
{
	int32 Value;
};
void IPPInterface::SendIntNumericValue(int32 Value)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SendIntNumericValue instead.");
}
static FName NAME_UPPInterface_SendIntNumericValue = FName(TEXT("SendIntNumericValue"));
void IPPInterface::Execute_SendIntNumericValue(UObject* O, int32 Value)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	PPInterface_eventSendIntNumericValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_SendIntNumericValue);
	if (Func)
	{
		Parms.Value=Value;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		I->SendIntNumericValue_Implementation(Value);
	}
}
struct Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send the numeric value of the trigger to the conected actors (Discrete)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send the numeric value of the trigger to the conected actors (Discrete)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PPInterface_eventSendIntNumericValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "SendIntNumericValue", nullptr, nullptr, Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::PropPointers), sizeof(PPInterface_eventSendIntNumericValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(PPInterface_eventSendIntNumericValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPPInterface_SendIntNumericValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_SendIntNumericValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execSendIntNumericValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendIntNumericValue_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Interface UPPInterface Function SendIntNumericValue

// Begin Interface UPPInterface Function TransferValue
struct PPInterface_eventTransferValue_Parms
{
	int32 Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	PPInterface_eventTransferValue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IPPInterface::TransferValue(int32 Value)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TransferValue instead.");
	PPInterface_eventTransferValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPPInterface_TransferValue = FName(TEXT("TransferValue"));
bool IPPInterface::Execute_TransferValue(UObject* O, int32 Value)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPPInterface::StaticClass()));
	PPInterface_eventTransferValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPPInterface_TransferValue);
	if (Func)
	{
		Parms.Value=Value;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPPInterface*)(O->GetNativeInterfaceAddress(UPPInterface::StaticClass())))
	{
		Parms.ReturnValue = I->TransferValue_Implementation(Value);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPPInterface_TransferValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PuzzlePieces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: Check why these are used.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: Check why these are used." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPPInterface_TransferValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PPInterface_eventTransferValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPPInterface_TransferValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PPInterface_eventTransferValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPPInterface_TransferValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PPInterface_eventTransferValue_Parms), &Z_Construct_UFunction_UPPInterface_TransferValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPInterface_TransferValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPInterface_TransferValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPInterface_TransferValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_TransferValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPInterface_TransferValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPInterface, nullptr, "TransferValue", nullptr, nullptr, Z_Construct_UFunction_UPPInterface_TransferValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_TransferValue_Statics::PropPointers), sizeof(PPInterface_eventTransferValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPPInterface_TransferValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPPInterface_TransferValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(PPInterface_eventTransferValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPPInterface_TransferValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPInterface_TransferValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPPInterface::execTransferValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TransferValue_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// End Interface UPPInterface Function TransferValue

// Begin Interface UPPInterface
void UPPInterface::StaticRegisterNativesUPPInterface()
{
	UClass* Class = UPPInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &IPPInterface::execActivate },
		{ "CheckState", &IPPInterface::execCheckState },
		{ "Deactivate", &IPPInterface::execDeactivate },
		{ "InitializeManager", &IPPInterface::execInitializeManager },
		{ "Interact", &IPPInterface::execInteract },
		{ "OneHasCorrectValue", &IPPInterface::execOneHasCorrectValue },
		{ "SendFloatNumericValue", &IPPInterface::execSendFloatNumericValue },
		{ "SendIntNumericValue", &IPPInterface::execSendIntNumericValue },
		{ "TransferValue", &IPPInterface::execTransferValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPPInterface);
UClass* Z_Construct_UClass_UPPInterface_NoRegister()
{
	return UPPInterface::StaticClass();
}
struct Z_Construct_UClass_UPPInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PPInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPPInterface_Activate, "Activate" }, // 3754049892
		{ &Z_Construct_UFunction_UPPInterface_CheckState, "CheckState" }, // 3091139013
		{ &Z_Construct_UFunction_UPPInterface_Deactivate, "Deactivate" }, // 2260111187
		{ &Z_Construct_UFunction_UPPInterface_InitializeManager, "InitializeManager" }, // 1420577855
		{ &Z_Construct_UFunction_UPPInterface_Interact, "Interact" }, // 261974055
		{ &Z_Construct_UFunction_UPPInterface_OneHasCorrectValue, "OneHasCorrectValue" }, // 4236495562
		{ &Z_Construct_UFunction_UPPInterface_SendFloatNumericValue, "SendFloatNumericValue" }, // 2116682975
		{ &Z_Construct_UFunction_UPPInterface_SendIntNumericValue, "SendIntNumericValue" }, // 3957732094
		{ &Z_Construct_UFunction_UPPInterface_TransferValue, "TransferValue" }, // 448854397
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPPInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPPInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVPuzzlePieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPPInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPPInterface_Statics::ClassParams = {
	&UPPInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPPInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPPInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPPInterface()
{
	if (!Z_Registration_Info_UClass_UPPInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPPInterface.OuterSingleton, Z_Construct_UClass_UPPInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPPInterface.OuterSingleton;
}
template<> DMVPUZZLEPIECES_API UClass* StaticClass<UPPInterface>()
{
	return UPPInterface::StaticClass();
}
UPPInterface::UPPInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPPInterface);
UPPInterface::~UPPInterface() {}
// End Interface UPPInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPPInterface, UPPInterface::StaticClass, TEXT("UPPInterface"), &Z_Registration_Info_UClass_UPPInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPPInterface), 740001821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_424398133(TEXT("/Script/DMVPuzzlePieces"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

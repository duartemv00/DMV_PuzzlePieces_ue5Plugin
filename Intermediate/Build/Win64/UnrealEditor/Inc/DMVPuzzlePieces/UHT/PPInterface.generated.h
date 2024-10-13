// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PPInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMVPUZZLEPIECES_PPInterface_generated_h
#error "PPInterface.generated.h already included, missing '#pragma once' in PPInterface.h"
#endif
#define DMVPUZZLEPIECES_PPInterface_generated_h

#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool TransferValue_Implementation(int32 Value) { return false; }; \
	virtual void InitializeManager_Implementation() {}; \
	virtual bool CheckState_Implementation() { return false; }; \
	virtual void OneHasCorrectValue_Implementation() {}; \
	virtual void SendFloatNumericValue_Implementation(float Value) {}; \
	virtual void SendIntNumericValue_Implementation(int32 Value) {}; \
	virtual void Deactivate_Implementation() {}; \
	virtual void Activate_Implementation() {}; \
	virtual void Interact_Implementation() {}; \
	DECLARE_FUNCTION(execTransferValue); \
	DECLARE_FUNCTION(execInitializeManager); \
	DECLARE_FUNCTION(execCheckState); \
	DECLARE_FUNCTION(execOneHasCorrectValue); \
	DECLARE_FUNCTION(execSendFloatNumericValue); \
	DECLARE_FUNCTION(execSendIntNumericValue); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execInteract);


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPPInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPPInterface(UPPInterface&&); \
	UPPInterface(const UPPInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPPInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPPInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPPInterface) \
	NO_API virtual ~UPPInterface();


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPPInterface(); \
	friend struct Z_Construct_UClass_UPPInterface_Statics; \
public: \
	DECLARE_CLASS(UPPInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DMVPuzzlePieces"), NO_API) \
	DECLARE_SERIALIZER(UPPInterface)


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPPInterface() {} \
public: \
	typedef UPPInterface UClassType; \
	typedef IPPInterface ThisClass; \
	static void Execute_Activate(UObject* O); \
	static bool Execute_CheckState(UObject* O); \
	static void Execute_Deactivate(UObject* O); \
	static void Execute_InitializeManager(UObject* O); \
	static void Execute_Interact(UObject* O); \
	static void Execute_OneHasCorrectValue(UObject* O); \
	static void Execute_SendFloatNumericValue(UObject* O, float Value); \
	static void Execute_SendIntNumericValue(UObject* O, int32 Value); \
	static bool Execute_TransferValue(UObject* O, int32 Value); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_10_PROLOG
#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMVPUZZLEPIECES_API UClass* StaticClass<class UPPInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Interface_PPInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

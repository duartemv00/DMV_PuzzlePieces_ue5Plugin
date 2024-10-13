// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/TriggerActor/PPTriggerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMVPUZZLEPIECES_PPTriggerActor_generated_h
#error "PPTriggerActor.generated.h already included, missing '#pragma once' in PPTriggerActor.h"
#endif
#define DMVPUZZLEPIECES_PPTriggerActor_generated_h

#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_9_DELEGATE \
DMVPUZZLEPIECES_API void FPieceHasCorrectValue_DelegateWrapper(const FMulticastScriptDelegate& PieceHasCorrectValue);


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotActiveFeedback_Implementation(); \
	DECLARE_FUNCTION(execNotActiveFeedback); \
	DECLARE_FUNCTION(execSendPieceHasCorrectValue);


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_CALLBACK_WRAPPERS
#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPPTriggerActor(); \
	friend struct Z_Construct_UClass_APPTriggerActor_Statics; \
public: \
	DECLARE_CLASS(APPTriggerActor, APPActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMVPuzzlePieces"), NO_API) \
	DECLARE_SERIALIZER(APPTriggerActor)


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPTriggerActor(APPTriggerActor&&); \
	APPTriggerActor(const APPTriggerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPTriggerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPTriggerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APPTriggerActor) \
	NO_API virtual ~APPTriggerActor();


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_11_PROLOG
#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_CALLBACK_WRAPPERS \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMVPUZZLEPIECES_API UClass* StaticClass<class APPTriggerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_TriggerActor_PPTriggerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

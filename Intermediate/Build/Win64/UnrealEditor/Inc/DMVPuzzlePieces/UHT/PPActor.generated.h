// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/PPActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMVPUZZLEPIECES_PPActor_generated_h
#error "PPActor.generated.h already included, missing '#pragma once' in PPActor.h"
#endif
#define DMVPUZZLEPIECES_PPActor_generated_h

#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPPActor(); \
	friend struct Z_Construct_UClass_APPActor_Statics; \
public: \
	DECLARE_CLASS(APPActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMVPuzzlePieces"), NO_API) \
	DECLARE_SERIALIZER(APPActor) \
	virtual UObject* _getUObject() const override { return const_cast<APPActor*>(this); }


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPActor(APPActor&&); \
	APPActor(const APPActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APPActor) \
	NO_API virtual ~APPActor();


#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_10_PROLOG
#define FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMVPUZZLEPIECES_API UClass* StaticClass<class APPActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Desktop_TestProject_Plugins_DMVPuzzlePieces_Source_DMVPuzzlePieces_Public_Actor_PPActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

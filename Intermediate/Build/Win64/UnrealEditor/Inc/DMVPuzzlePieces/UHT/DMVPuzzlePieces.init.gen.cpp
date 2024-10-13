// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVPuzzlePieces_init() {}
	DMVPUZZLEPIECES_API UFunction* Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature();
	DMVPUZZLEPIECES_API UFunction* Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DMVPuzzlePieces;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DMVPuzzlePieces()
	{
		if (!Z_Registration_Info_UPackage__Script_DMVPuzzlePieces.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DMVPuzzlePieces_CharacterPassingThrough__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DMVPuzzlePieces_PieceHasCorrectValue__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DMVPuzzlePieces",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x262E7971,
				0x47AA4217,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DMVPuzzlePieces.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DMVPuzzlePieces.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DMVPuzzlePieces(Z_Construct_UPackage__Script_DMVPuzzlePieces, TEXT("/Script/DMVPuzzlePieces"), Z_Registration_Info_UPackage__Script_DMVPuzzlePieces, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x262E7971, 0x47AA4217));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

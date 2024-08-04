// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Encryption.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENTPLUGIN_Encryption_generated_h
#error "Encryption.generated.h already included, missing '#pragma once' in Encryption.h"
#endif
#define CLIENTPLUGIN_Encryption_generated_h

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecrypt); \
	DECLARE_FUNCTION(execEncryptBuffer); \
	DECLARE_FUNCTION(execEncrypt);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEncryption(); \
	friend struct Z_Construct_UClass_UEncryption_Statics; \
public: \
	DECLARE_CLASS(UEncryption, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEncryption)


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEncryption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEncryption(UEncryption&&); \
	UEncryption(const UEncryption&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEncryption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEncryption); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEncryption) \
	NO_API virtual ~UEncryption();


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_7_PROLOG
#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTPLUGIN_API UClass* StaticClass<class UEncryption>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

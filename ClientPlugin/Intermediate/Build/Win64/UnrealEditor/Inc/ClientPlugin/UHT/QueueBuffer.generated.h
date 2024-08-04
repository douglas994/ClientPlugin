// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QueueBuffer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UByteBuffer;
class UQueueBuffer;
class UWebSocket;
#ifdef CLIENTPLUGIN_QueueBuffer_generated_h
#error "QueueBuffer.generated.h already included, missing '#pragma once' in QueueBuffer.h"
#endif
#define CLIENTPLUGIN_QueueBuffer_generated_h

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueueItem_Statics; \
	CLIENTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CLIENTPLUGIN_API UScriptStruct* StaticStruct<struct FQueueItem>();

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execAddBuffer);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQueueBuffer(); \
	friend struct Z_Construct_UClass_UQueueBuffer_Statics; \
public: \
	DECLARE_CLASS(UQueueBuffer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPlugin"), CLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UQueueBuffer)


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTPLUGIN_API UQueueBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQueueBuffer(UQueueBuffer&&); \
	UQueueBuffer(const UQueueBuffer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTPLUGIN_API, UQueueBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQueueBuffer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQueueBuffer) \
	CLIENTPLUGIN_API virtual ~UQueueBuffer();


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_25_PROLOG
#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTPLUGIN_API UClass* StaticClass<class UQueueBuffer>();

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateInstance);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQueueBufferFunctionLibary(); \
	friend struct Z_Construct_UClass_UQueueBufferFunctionLibary_Statics; \
public: \
	DECLARE_CLASS(UQueueBufferFunctionLibary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPlugin"), CLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UQueueBufferFunctionLibary)


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTPLUGIN_API UQueueBufferFunctionLibary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQueueBufferFunctionLibary(UQueueBufferFunctionLibary&&); \
	UQueueBufferFunctionLibary(const UQueueBufferFunctionLibary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTPLUGIN_API, UQueueBufferFunctionLibary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQueueBufferFunctionLibary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQueueBufferFunctionLibary) \
	CLIENTPLUGIN_API virtual ~UQueueBufferFunctionLibary();


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_54_PROLOG
#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_57_INCLASS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTPLUGIN_API UClass* StaticClass<class UQueueBufferFunctionLibary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

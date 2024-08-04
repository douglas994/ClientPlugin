// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Websocket.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UByteBuffer;
class UWebSocket;
#ifdef CLIENTPLUGIN_Websocket_generated_h
#error "Websocket.generated.h already included, missing '#pragma once' in Websocket.h"
#endif
#define CLIENTPLUGIN_Websocket_generated_h

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_12_DELEGATE \
CLIENTPLUGIN_API void FOnWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketConnected);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_13_DELEGATE \
CLIENTPLUGIN_API void FOnWebSocketConnectionError_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketConnectionError, const FString& Error);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_14_DELEGATE \
CLIENTPLUGIN_API void FOnWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketClosed, int32 StatusCode, const FString& Reason, bool bWasClean);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_15_DELEGATE \
CLIENTPLUGIN_API void FOnWebSocketMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketMessageReceived, const FString& Message);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_16_DELEGATE \
CLIENTPLUGIN_API void FOnWebSocketBinaryMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketBinaryMessageReceived, UByteBuffer* Data);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_17_DELEGATE \
CLIENTPLUGIN_API void FOnWebSocketMessageSent_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketMessageSent, const FString& Message);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnWebSocketMessageSent_Internal); \
	DECLARE_FUNCTION(execOnWebSocketMessageReceived_Internal); \
	DECLARE_FUNCTION(execOnWebSocketClosed_Internal); \
	DECLARE_FUNCTION(execOnWebSocketConnectionError_Internal); \
	DECLARE_FUNCTION(execOnWebSocketConnected_Internal); \
	DECLARE_FUNCTION(execSendEncryptedMessage); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execConnect);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocket(); \
	friend struct Z_Construct_UClass_UWebSocket_Statics; \
public: \
	DECLARE_CLASS(UWebSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPlugin"), CLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UWebSocket)


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTPLUGIN_API UWebSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWebSocket(UWebSocket&&); \
	UWebSocket(const UWebSocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTPLUGIN_API, UWebSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocket) \
	CLIENTPLUGIN_API virtual ~UWebSocket();


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_19_PROLOG
#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTPLUGIN_API UClass* StaticClass<class UWebSocket>();

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimeInMilliseconds); \
	DECLARE_FUNCTION(execCreateWebSocketWithHeaders); \
	DECLARE_FUNCTION(execCreateWebSocket);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWebSocketFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWebSocketFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPlugin"), CLIENTPLUGIN_API) \
	DECLARE_SERIALIZER(UWebSocketFunctionLibrary)


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTPLUGIN_API UWebSocketFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWebSocketFunctionLibrary(UWebSocketFunctionLibrary&&); \
	UWebSocketFunctionLibrary(const UWebSocketFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTPLUGIN_API, UWebSocketFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketFunctionLibrary) \
	CLIENTPLUGIN_API virtual ~UWebSocketFunctionLibrary();


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_83_PROLOG
#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_86_INCLASS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTPLUGIN_API UClass* StaticClass<class UWebSocketFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

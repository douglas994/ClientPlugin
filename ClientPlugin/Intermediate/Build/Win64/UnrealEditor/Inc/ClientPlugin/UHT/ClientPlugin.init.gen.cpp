// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientPlugin_init() {}
	CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature();
	CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature();
	CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature();
	CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature();
	CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature();
	CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ClientPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ClientPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ClientPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ClientPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x58B8E5FD,
				0x385FED0A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ClientPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ClientPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ClientPlugin(Z_Construct_UPackage__Script_ClientPlugin, TEXT("/Script/ClientPlugin"), Z_Registration_Info_UPackage__Script_ClientPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x58B8E5FD, 0x385FED0A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientPlugin/Public/Websocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebsocket() {}

// Begin Cross Module References
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UByteBuffer_NoRegister();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UWebSocket();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UWebSocket_NoRegister();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UWebSocketFunctionLibrary();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UWebSocketFunctionLibrary_NoRegister();
CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature();
CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature();
CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature();
CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature();
CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature();
CLIENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ClientPlugin();
// End Cross Module References

// Begin Delegate FOnWebSocketConnected
struct Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ClientPlugin, nullptr, "OnWebSocketConnected__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketConnected)
{
	OnWebSocketConnected.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnWebSocketConnected

// Begin Delegate FOnWebSocketConnectionError
struct Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics
{
	struct _Script_ClientPlugin_eventOnWebSocketConnectionError_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ClientPlugin_eventOnWebSocketConnectionError_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ClientPlugin, nullptr, "OnWebSocketConnectionError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketConnectionError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketConnectionError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWebSocketConnectionError_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketConnectionError, const FString& Error)
{
	struct _Script_ClientPlugin_eventOnWebSocketConnectionError_Parms
	{
		FString Error;
	};
	_Script_ClientPlugin_eventOnWebSocketConnectionError_Parms Parms;
	Parms.Error=Error;
	OnWebSocketConnectionError.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWebSocketConnectionError

// Begin Delegate FOnWebSocketClosed
struct Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics
{
	struct _Script_ClientPlugin_eventOnWebSocketClosed_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static void NewProp_bWasClean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ClientPlugin_eventOnWebSocketClosed_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ClientPlugin_eventOnWebSocketClosed_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((_Script_ClientPlugin_eventOnWebSocketClosed_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ClientPlugin_eventOnWebSocketClosed_Parms), &Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ClientPlugin, nullptr, "OnWebSocketClosed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketClosed, int32 StatusCode, const FString& Reason, bool bWasClean)
{
	struct _Script_ClientPlugin_eventOnWebSocketClosed_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
	_Script_ClientPlugin_eventOnWebSocketClosed_Parms Parms;
	Parms.StatusCode=StatusCode;
	Parms.Reason=Reason;
	Parms.bWasClean=bWasClean ? true : false;
	OnWebSocketClosed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWebSocketClosed

// Begin Delegate FOnWebSocketMessageReceived
struct Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics
{
	struct _Script_ClientPlugin_eventOnWebSocketMessageReceived_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ClientPlugin_eventOnWebSocketMessageReceived_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ClientPlugin, nullptr, "OnWebSocketMessageReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketMessageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketMessageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWebSocketMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketMessageReceived, const FString& Message)
{
	struct _Script_ClientPlugin_eventOnWebSocketMessageReceived_Parms
	{
		FString Message;
	};
	_Script_ClientPlugin_eventOnWebSocketMessageReceived_Parms Parms;
	Parms.Message=Message;
	OnWebSocketMessageReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWebSocketMessageReceived

// Begin Delegate FOnWebSocketBinaryMessageReceived
struct Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics
{
	struct _Script_ClientPlugin_eventOnWebSocketBinaryMessageReceived_Parms
	{
		UByteBuffer* Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ClientPlugin_eventOnWebSocketBinaryMessageReceived_Parms, Data), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ClientPlugin, nullptr, "OnWebSocketBinaryMessageReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketBinaryMessageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketBinaryMessageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWebSocketBinaryMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketBinaryMessageReceived, UByteBuffer* Data)
{
	struct _Script_ClientPlugin_eventOnWebSocketBinaryMessageReceived_Parms
	{
		UByteBuffer* Data;
	};
	_Script_ClientPlugin_eventOnWebSocketBinaryMessageReceived_Parms Parms;
	Parms.Data=Data;
	OnWebSocketBinaryMessageReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWebSocketBinaryMessageReceived

// Begin Delegate FOnWebSocketMessageSent
struct Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics
{
	struct _Script_ClientPlugin_eventOnWebSocketMessageSent_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ClientPlugin_eventOnWebSocketMessageSent_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ClientPlugin, nullptr, "OnWebSocketMessageSent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketMessageSent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::_Script_ClientPlugin_eventOnWebSocketMessageSent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWebSocketMessageSent_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketMessageSent, const FString& Message)
{
	struct _Script_ClientPlugin_eventOnWebSocketMessageSent_Parms
	{
		FString Message;
	};
	_Script_ClientPlugin_eventOnWebSocketMessageSent_Parms Parms;
	Parms.Message=Message;
	OnWebSocketMessageSent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWebSocketMessageSent

// Begin Class UWebSocket Function Close
struct Z_Construct_UFunction_UWebSocket_Close_Statics
{
	struct WebSocket_eventClose_Parms
	{
		int32 StatusCode;
		FString Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSockets" },
		{ "CPP_Default_Reason", "" },
		{ "CPP_Default_StatusCode", "1000" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSocket_Close_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventClose_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocket_Close_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventClose_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocket_Close_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_Close_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_Close_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_Close_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "Close", nullptr, nullptr, Z_Construct_UFunction_UWebSocket_Close_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_Close_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocket_Close_Statics::WebSocket_eventClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_Close_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocket_Close_Statics::WebSocket_eventClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocket_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execClose)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StatusCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close(Z_Param_StatusCode,Z_Param_Reason);
	P_NATIVE_END;
}
// End Class UWebSocket Function Close

// Begin Class UWebSocket Function Connect
struct Z_Construct_UFunction_UWebSocket_Connect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSockets" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "Connect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_Connect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWebSocket_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execConnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect();
	P_NATIVE_END;
}
// End Class UWebSocket Function Connect

// Begin Class UWebSocket Function IsConnected
struct Z_Construct_UFunction_UWebSocket_IsConnected_Statics
{
	struct WebSocket_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSockets" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWebSocket_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WebSocket_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocket_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebSocket_eventIsConnected_Parms), &Z_Construct_UFunction_UWebSocket_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocket_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UWebSocket_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocket_IsConnected_Statics::WebSocket_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_IsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocket_IsConnected_Statics::WebSocket_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocket_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// End Class UWebSocket Function IsConnected

// Begin Class UWebSocket Function OnWebSocketClosed_Internal
struct Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics
{
	struct WebSocket_eventOnWebSocketClosed_Internal_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static void NewProp_bWasClean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventOnWebSocketClosed_Internal_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventOnWebSocketClosed_Internal_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((WebSocket_eventOnWebSocketClosed_Internal_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebSocket_eventOnWebSocketClosed_Internal_Parms), &Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "OnWebSocketClosed_Internal", nullptr, nullptr, Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::WebSocket_eventOnWebSocketClosed_Internal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::WebSocket_eventOnWebSocketClosed_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execOnWebSocketClosed_Internal)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StatusCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_GET_UBOOL(Z_Param_bWasClean);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketClosed_Internal(Z_Param_StatusCode,Z_Param_Reason,Z_Param_bWasClean);
	P_NATIVE_END;
}
// End Class UWebSocket Function OnWebSocketClosed_Internal

// Begin Class UWebSocket Function OnWebSocketConnected_Internal
struct Z_Construct_UFunction_UWebSocket_OnWebSocketConnected_Internal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_OnWebSocketConnected_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "OnWebSocketConnected_Internal", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketConnected_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_OnWebSocketConnected_Internal_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWebSocket_OnWebSocketConnected_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_OnWebSocketConnected_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execOnWebSocketConnected_Internal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketConnected_Internal();
	P_NATIVE_END;
}
// End Class UWebSocket Function OnWebSocketConnected_Internal

// Begin Class UWebSocket Function OnWebSocketConnectionError_Internal
struct Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics
{
	struct WebSocket_eventOnWebSocketConnectionError_Internal_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventOnWebSocketConnectionError_Internal_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "OnWebSocketConnectionError_Internal", nullptr, nullptr, Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::WebSocket_eventOnWebSocketConnectionError_Internal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::WebSocket_eventOnWebSocketConnectionError_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execOnWebSocketConnectionError_Internal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketConnectionError_Internal(Z_Param_Error);
	P_NATIVE_END;
}
// End Class UWebSocket Function OnWebSocketConnectionError_Internal

// Begin Class UWebSocket Function OnWebSocketMessageReceived_Internal
struct Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics
{
	struct WebSocket_eventOnWebSocketMessageReceived_Internal_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventOnWebSocketMessageReceived_Internal_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "OnWebSocketMessageReceived_Internal", nullptr, nullptr, Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::WebSocket_eventOnWebSocketMessageReceived_Internal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::WebSocket_eventOnWebSocketMessageReceived_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execOnWebSocketMessageReceived_Internal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketMessageReceived_Internal(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UWebSocket Function OnWebSocketMessageReceived_Internal

// Begin Class UWebSocket Function OnWebSocketMessageSent_Internal
struct Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics
{
	struct WebSocket_eventOnWebSocketMessageSent_Internal_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventOnWebSocketMessageSent_Internal_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "OnWebSocketMessageSent_Internal", nullptr, nullptr, Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::WebSocket_eventOnWebSocketMessageSent_Internal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::WebSocket_eventOnWebSocketMessageSent_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execOnWebSocketMessageSent_Internal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketMessageSent_Internal(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UWebSocket Function OnWebSocketMessageSent_Internal

// Begin Class UWebSocket Function SendEncryptedMessage
struct Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics
{
	struct WebSocket_eventSendEncryptedMessage_Parms
	{
		uint8 PacketType;
		UByteBuffer* Message;
		FString Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSockets" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PacketType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::NewProp_PacketType = { "PacketType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventSendEncryptedMessage_Parms, PacketType), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventSendEncryptedMessage_Parms, Message), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventSendEncryptedMessage_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::NewProp_PacketType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "SendEncryptedMessage", nullptr, nullptr, Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::WebSocket_eventSendEncryptedMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::WebSocket_eventSendEncryptedMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocket_SendEncryptedMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_SendEncryptedMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execSendEncryptedMessage)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_PacketType);
	P_GET_OBJECT(UByteBuffer,Z_Param_Message);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendEncryptedMessage(Z_Param_PacketType,Z_Param_Message,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UWebSocket Function SendEncryptedMessage

// Begin Class UWebSocket Function SendMessage
struct Z_Construct_UFunction_UWebSocket_SendMessage_Statics
{
	struct WebSocket_eventSendMessage_Parms
	{
		uint8 PacketType;
		UByteBuffer* Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSockets" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PacketType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebSocket_SendMessage_Statics::NewProp_PacketType = { "PacketType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventSendMessage_Parms, PacketType), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocket_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocket_eventSendMessage_Parms, Message), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocket_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_SendMessage_Statics::NewProp_PacketType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocket_SendMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocket_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocket, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_UWebSocket_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocket_SendMessage_Statics::WebSocket_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocket_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocket_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocket_SendMessage_Statics::WebSocket_eventSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocket_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocket_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocket::execSendMessage)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_PacketType);
	P_GET_OBJECT(UByteBuffer,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMessage(Z_Param_PacketType,Z_Param_Message);
	P_NATIVE_END;
}
// End Class UWebSocket Function SendMessage

// Begin Class UWebSocket
void UWebSocket::StaticRegisterNativesUWebSocket()
{
	UClass* Class = UWebSocket::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Close", &UWebSocket::execClose },
		{ "Connect", &UWebSocket::execConnect },
		{ "IsConnected", &UWebSocket::execIsConnected },
		{ "OnWebSocketClosed_Internal", &UWebSocket::execOnWebSocketClosed_Internal },
		{ "OnWebSocketConnected_Internal", &UWebSocket::execOnWebSocketConnected_Internal },
		{ "OnWebSocketConnectionError_Internal", &UWebSocket::execOnWebSocketConnectionError_Internal },
		{ "OnWebSocketMessageReceived_Internal", &UWebSocket::execOnWebSocketMessageReceived_Internal },
		{ "OnWebSocketMessageSent_Internal", &UWebSocket::execOnWebSocketMessageSent_Internal },
		{ "SendEncryptedMessage", &UWebSocket::execSendEncryptedMessage },
		{ "SendMessage", &UWebSocket::execSendMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocket);
UClass* Z_Construct_UClass_UWebSocket_NoRegister()
{
	return UWebSocket::StaticClass();
}
struct Z_Construct_UClass_UWebSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Websocket.h" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWebSocketConnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWebSocketConnectionError_MetaData[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWebSocketClosed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWebSocketMessageReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWebSocketBinaryMessageReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWebSocketMessageSent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebSocketConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebSocketConnectionError;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebSocketClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebSocketMessageReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebSocketBinaryMessageReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWebSocketMessageSent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocket_Close, "Close" }, // 3795175476
		{ &Z_Construct_UFunction_UWebSocket_Connect, "Connect" }, // 2931011700
		{ &Z_Construct_UFunction_UWebSocket_IsConnected, "IsConnected" }, // 4152462878
		{ &Z_Construct_UFunction_UWebSocket_OnWebSocketClosed_Internal, "OnWebSocketClosed_Internal" }, // 1918099066
		{ &Z_Construct_UFunction_UWebSocket_OnWebSocketConnected_Internal, "OnWebSocketConnected_Internal" }, // 418188747
		{ &Z_Construct_UFunction_UWebSocket_OnWebSocketConnectionError_Internal, "OnWebSocketConnectionError_Internal" }, // 4204786205
		{ &Z_Construct_UFunction_UWebSocket_OnWebSocketMessageReceived_Internal, "OnWebSocketMessageReceived_Internal" }, // 869859311
		{ &Z_Construct_UFunction_UWebSocket_OnWebSocketMessageSent_Internal, "OnWebSocketMessageSent_Internal" }, // 1375111009
		{ &Z_Construct_UFunction_UWebSocket_SendEncryptedMessage, "SendEncryptedMessage" }, // 3975542637
		{ &Z_Construct_UFunction_UWebSocket_SendMessage, "SendMessage" }, // 2705968222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketConnected = { "OnWebSocketConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocket, OnWebSocketConnected), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWebSocketConnected_MetaData), NewProp_OnWebSocketConnected_MetaData) }; // 935125120
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketConnectionError = { "OnWebSocketConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocket, OnWebSocketConnectionError), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketConnectionError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWebSocketConnectionError_MetaData), NewProp_OnWebSocketConnectionError_MetaData) }; // 1217519133
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketClosed = { "OnWebSocketClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocket, OnWebSocketClosed), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWebSocketClosed_MetaData), NewProp_OnWebSocketClosed_MetaData) }; // 2345202752
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketMessageReceived = { "OnWebSocketMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocket, OnWebSocketMessageReceived), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWebSocketMessageReceived_MetaData), NewProp_OnWebSocketMessageReceived_MetaData) }; // 673573633
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketBinaryMessageReceived = { "OnWebSocketBinaryMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocket, OnWebSocketBinaryMessageReceived), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketBinaryMessageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWebSocketBinaryMessageReceived_MetaData), NewProp_OnWebSocketBinaryMessageReceived_MetaData) }; // 941917832
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketMessageSent = { "OnWebSocketMessageSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocket, OnWebSocketMessageSent), Z_Construct_UDelegateFunction_ClientPlugin_OnWebSocketMessageSent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWebSocketMessageSent_MetaData), NewProp_OnWebSocketMessageSent_MetaData) }; // 2247650920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketConnectionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketMessageReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketBinaryMessageReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocket_Statics::NewProp_OnWebSocketMessageSent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWebSocket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocket_Statics::ClassParams = {
	&UWebSocket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWebSocket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocket_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocket_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSocket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebSocket()
{
	if (!Z_Registration_Info_UClass_UWebSocket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocket.OuterSingleton, Z_Construct_UClass_UWebSocket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSocket.OuterSingleton;
}
template<> CLIENTPLUGIN_API UClass* StaticClass<UWebSocket>()
{
	return UWebSocket::StaticClass();
}
UWebSocket::UWebSocket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocket);
UWebSocket::~UWebSocket() {}
// End Class UWebSocket

// Begin Class UWebSocketFunctionLibrary Function CreateWebSocket
struct Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics
{
	struct WebSocketFunctionLibrary_eventCreateWebSocket_Parms
	{
		FString ServerUrl;
		FString ServerProtocol;
		UWebSocket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSockets" },
		{ "CPP_Default_ServerProtocol", "ws" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerProtocol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::NewProp_ServerUrl = { "ServerUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventCreateWebSocket_Parms, ServerUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::NewProp_ServerProtocol = { "ServerProtocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventCreateWebSocket_Parms, ServerProtocol), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventCreateWebSocket_Parms, ReturnValue), Z_Construct_UClass_UWebSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::NewProp_ServerUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::NewProp_ServerProtocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketFunctionLibrary, nullptr, "CreateWebSocket", nullptr, nullptr, Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::WebSocketFunctionLibrary_eventCreateWebSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::WebSocketFunctionLibrary_eventCreateWebSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketFunctionLibrary::execCreateWebSocket)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerProtocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWebSocket**)Z_Param__Result=UWebSocketFunctionLibrary::CreateWebSocket(Z_Param_ServerUrl,Z_Param_ServerProtocol);
	P_NATIVE_END;
}
// End Class UWebSocketFunctionLibrary Function CreateWebSocket

// Begin Class UWebSocketFunctionLibrary Function CreateWebSocketWithHeaders
struct Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics
{
	struct WebSocketFunctionLibrary_eventCreateWebSocketWithHeaders_Parms
	{
		FString ServerUrl;
		TMap<FString,FString> UpgradeHeaders;
		FString ServerProtocol;
		UWebSocket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSockets" },
		{ "CPP_Default_ServerProtocol", "ws" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UpgradeHeaders_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UpgradeHeaders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UpgradeHeaders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerProtocol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_ServerUrl = { "ServerUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventCreateWebSocketWithHeaders_Parms, ServerUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_UpgradeHeaders_ValueProp = { "UpgradeHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_UpgradeHeaders_Key_KeyProp = { "UpgradeHeaders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_UpgradeHeaders = { "UpgradeHeaders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventCreateWebSocketWithHeaders_Parms, UpgradeHeaders), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_ServerProtocol = { "ServerProtocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventCreateWebSocketWithHeaders_Parms, ServerProtocol), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventCreateWebSocketWithHeaders_Parms, ReturnValue), Z_Construct_UClass_UWebSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_ServerUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_UpgradeHeaders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_UpgradeHeaders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_UpgradeHeaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_ServerProtocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketFunctionLibrary, nullptr, "CreateWebSocketWithHeaders", nullptr, nullptr, Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::WebSocketFunctionLibrary_eventCreateWebSocketWithHeaders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::WebSocketFunctionLibrary_eventCreateWebSocketWithHeaders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketFunctionLibrary::execCreateWebSocketWithHeaders)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerUrl);
	P_GET_TMAP(FString,FString,Z_Param_UpgradeHeaders);
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerProtocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWebSocket**)Z_Param__Result=UWebSocketFunctionLibrary::CreateWebSocketWithHeaders(Z_Param_ServerUrl,Z_Param_UpgradeHeaders,Z_Param_ServerProtocol);
	P_NATIVE_END;
}
// End Class UWebSocketFunctionLibrary Function CreateWebSocketWithHeaders

// Begin Class UWebSocketFunctionLibrary Function GetTimeInMilliseconds
struct Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics
{
	struct WebSocketFunctionLibrary_eventGetTimeInMilliseconds_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSockets" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventGetTimeInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketFunctionLibrary, nullptr, "GetTimeInMilliseconds", nullptr, nullptr, Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::WebSocketFunctionLibrary_eventGetTimeInMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::WebSocketFunctionLibrary_eventGetTimeInMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketFunctionLibrary::execGetTimeInMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWebSocketFunctionLibrary::GetTimeInMilliseconds();
	P_NATIVE_END;
}
// End Class UWebSocketFunctionLibrary Function GetTimeInMilliseconds

// Begin Class UWebSocketFunctionLibrary
void UWebSocketFunctionLibrary::StaticRegisterNativesUWebSocketFunctionLibrary()
{
	UClass* Class = UWebSocketFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateWebSocket", &UWebSocketFunctionLibrary::execCreateWebSocket },
		{ "CreateWebSocketWithHeaders", &UWebSocketFunctionLibrary::execCreateWebSocketWithHeaders },
		{ "GetTimeInMilliseconds", &UWebSocketFunctionLibrary::execGetTimeInMilliseconds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocketFunctionLibrary);
UClass* Z_Construct_UClass_UWebSocketFunctionLibrary_NoRegister()
{
	return UWebSocketFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UWebSocketFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Websocket.h" },
		{ "ModuleRelativePath", "Public/Websocket.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocket, "CreateWebSocket" }, // 442003884
		{ &Z_Construct_UFunction_UWebSocketFunctionLibrary_CreateWebSocketWithHeaders, "CreateWebSocketWithHeaders" }, // 1789239738
		{ &Z_Construct_UFunction_UWebSocketFunctionLibrary_GetTimeInMilliseconds, "GetTimeInMilliseconds" }, // 1731433035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::ClassParams = {
	&UWebSocketFunctionLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebSocketFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UWebSocketFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocketFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSocketFunctionLibrary.OuterSingleton;
}
template<> CLIENTPLUGIN_API UClass* StaticClass<UWebSocketFunctionLibrary>()
{
	return UWebSocketFunctionLibrary::StaticClass();
}
UWebSocketFunctionLibrary::UWebSocketFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketFunctionLibrary);
UWebSocketFunctionLibrary::~UWebSocketFunctionLibrary() {}
// End Class UWebSocketFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebSocket, UWebSocket::StaticClass, TEXT("UWebSocket"), &Z_Registration_Info_UClass_UWebSocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocket), 224779002U) },
		{ Z_Construct_UClass_UWebSocketFunctionLibrary, UWebSocketFunctionLibrary::StaticClass, TEXT("UWebSocketFunctionLibrary"), &Z_Registration_Info_UClass_UWebSocketFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocketFunctionLibrary), 487975335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_3295568083(TEXT("/Script/ClientPlugin"),
	Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Websocket_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientPlugin/Public/Encryption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEncryption() {}

// Begin Cross Module References
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UEncryption();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UEncryption_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ClientPlugin();
// End Cross Module References

// Begin Class UEncryption Function Decrypt
struct Z_Construct_UFunction_UEncryption_Decrypt_Statics
{
	struct Encryption_eventDecrypt_Parms
	{
		FString Text;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomEncryption" },
		{ "ModuleRelativePath", "Public/Encryption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEncryption_Decrypt_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventDecrypt_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEncryption_Decrypt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventDecrypt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEncryption_Decrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventDecrypt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEncryption_Decrypt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_Decrypt_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_Decrypt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_Decrypt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_Decrypt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEncryption_Decrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEncryption, nullptr, "Decrypt", nullptr, nullptr, Z_Construct_UFunction_UEncryption_Decrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_Decrypt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEncryption_Decrypt_Statics::Encryption_eventDecrypt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_Decrypt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEncryption_Decrypt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEncryption_Decrypt_Statics::Encryption_eventDecrypt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEncryption_Decrypt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEncryption_Decrypt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEncryption::execDecrypt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEncryption::Decrypt(Z_Param_Text,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UEncryption Function Decrypt

// Begin Class UEncryption Function Encrypt
struct Z_Construct_UFunction_UEncryption_Encrypt_Statics
{
	struct Encryption_eventEncrypt_Parms
	{
		FString Text;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomEncryption" },
		{ "ModuleRelativePath", "Public/Encryption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEncryption_Encrypt_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventEncrypt_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEncryption_Encrypt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventEncrypt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEncryption_Encrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventEncrypt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEncryption_Encrypt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_Encrypt_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_Encrypt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_Encrypt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_Encrypt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEncryption_Encrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEncryption, nullptr, "Encrypt", nullptr, nullptr, Z_Construct_UFunction_UEncryption_Encrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_Encrypt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEncryption_Encrypt_Statics::Encryption_eventEncrypt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_Encrypt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEncryption_Encrypt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEncryption_Encrypt_Statics::Encryption_eventEncrypt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEncryption_Encrypt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEncryption_Encrypt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEncryption::execEncrypt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEncryption::Encrypt(Z_Param_Text,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UEncryption Function Encrypt

// Begin Class UEncryption Function EncryptBuffer
struct Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics
{
	struct Encryption_eventEncryptBuffer_Parms
	{
		TArray<uint8> TextBytes;
		FString Key;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomEncryption" },
		{ "ModuleRelativePath", "Public/Encryption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextBytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_TextBytes_Inner = { "TextBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_TextBytes = { "TextBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventEncryptBuffer_Parms, TextBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBytes_MetaData), NewProp_TextBytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventEncryptBuffer_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Encryption_eventEncryptBuffer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_TextBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_TextBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEncryption, nullptr, "EncryptBuffer", nullptr, nullptr, Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::Encryption_eventEncryptBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::Encryption_eventEncryptBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEncryption_EncryptBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEncryption_EncryptBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEncryption::execEncryptBuffer)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_TextBytes);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UEncryption::EncryptBuffer(Z_Param_Out_TextBytes,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UEncryption Function EncryptBuffer

// Begin Class UEncryption
void UEncryption::StaticRegisterNativesUEncryption()
{
	UClass* Class = UEncryption::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Decrypt", &UEncryption::execDecrypt },
		{ "Encrypt", &UEncryption::execEncrypt },
		{ "EncryptBuffer", &UEncryption::execEncryptBuffer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEncryption);
UClass* Z_Construct_UClass_UEncryption_NoRegister()
{
	return UEncryption::StaticClass();
}
struct Z_Construct_UClass_UEncryption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Encryption.h" },
		{ "ModuleRelativePath", "Public/Encryption.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEncryption_Decrypt, "Decrypt" }, // 817911331
		{ &Z_Construct_UFunction_UEncryption_Encrypt, "Encrypt" }, // 497011199
		{ &Z_Construct_UFunction_UEncryption_EncryptBuffer, "EncryptBuffer" }, // 1524131313
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEncryption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEncryption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEncryption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEncryption_Statics::ClassParams = {
	&UEncryption::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEncryption_Statics::Class_MetaDataParams), Z_Construct_UClass_UEncryption_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEncryption()
{
	if (!Z_Registration_Info_UClass_UEncryption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEncryption.OuterSingleton, Z_Construct_UClass_UEncryption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEncryption.OuterSingleton;
}
template<> CLIENTPLUGIN_API UClass* StaticClass<UEncryption>()
{
	return UEncryption::StaticClass();
}
UEncryption::UEncryption(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEncryption);
UEncryption::~UEncryption() {}
// End Class UEncryption

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEncryption, UEncryption::StaticClass, TEXT("UEncryption"), &Z_Registration_Info_UClass_UEncryption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEncryption), 300392355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_1047603162(TEXT("/Script/ClientPlugin"),
	Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_Encryption_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

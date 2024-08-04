// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientPlugin/Public/ByteBuffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeByteBuffer() {}

// Begin Cross Module References
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UBufferData();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UBufferData_NoRegister();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UByteBuffer();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UByteBuffer_NoRegister();
CLIENTPLUGIN_API UEnum* Z_Construct_UEnum_ClientPlugin_EDynamicValueType();
CLIENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicValue();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ClientPlugin();
// End Cross Module References

// Begin Enum EDynamicValueType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicValueType;
static UEnum* EDynamicValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDynamicValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDynamicValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClientPlugin_EDynamicValueType, (UObject*)Z_Construct_UPackage__Script_ClientPlugin(), TEXT("EDynamicValueType"));
	}
	return Z_Registration_Info_UEnum_EDynamicValueType.OuterSingleton;
}
template<> CLIENTPLUGIN_API UEnum* StaticEnum<EDynamicValueType>()
{
	return EDynamicValueType_StaticEnum();
}
struct Z_Construct_UEnum_ClientPlugin_EDynamicValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "EDynamicValueType::Bool" },
		{ "Byte.Name", "EDynamicValueType::Byte" },
		{ "Float.Name", "EDynamicValueType::Float" },
		{ "ID.Name", "EDynamicValueType::ID" },
		{ "Int32.Name", "EDynamicValueType::Int32" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
		{ "None.Name", "EDynamicValueType::None" },
		{ "Rotator.Name", "EDynamicValueType::Rotator" },
		{ "String.Name", "EDynamicValueType::String" },
		{ "UInt32.Name", "EDynamicValueType::UInt32" },
		{ "Vector.Name", "EDynamicValueType::Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDynamicValueType::ID", (int64)EDynamicValueType::ID },
		{ "EDynamicValueType::Int32", (int64)EDynamicValueType::Int32 },
		{ "EDynamicValueType::UInt32", (int64)EDynamicValueType::UInt32 },
		{ "EDynamicValueType::Float", (int64)EDynamicValueType::Float },
		{ "EDynamicValueType::Bool", (int64)EDynamicValueType::Bool },
		{ "EDynamicValueType::String", (int64)EDynamicValueType::String },
		{ "EDynamicValueType::Byte", (int64)EDynamicValueType::Byte },
		{ "EDynamicValueType::Vector", (int64)EDynamicValueType::Vector },
		{ "EDynamicValueType::Rotator", (int64)EDynamicValueType::Rotator },
		{ "EDynamicValueType::None", (int64)EDynamicValueType::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClientPlugin_EDynamicValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClientPlugin,
	nullptr,
	"EDynamicValueType",
	"EDynamicValueType",
	Z_Construct_UEnum_ClientPlugin_EDynamicValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClientPlugin_EDynamicValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClientPlugin_EDynamicValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClientPlugin_EDynamicValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClientPlugin_EDynamicValueType()
{
	if (!Z_Registration_Info_UEnum_EDynamicValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicValueType.InnerSingleton, Z_Construct_UEnum_ClientPlugin_EDynamicValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDynamicValueType.InnerSingleton;
}
// End Enum EDynamicValueType

// Begin ScriptStruct FDynamicValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicValue;
class UScriptStruct* FDynamicValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicValue, (UObject*)Z_Construct_UPackage__Script_ClientPlugin(), TEXT("DynamicValue"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicValue.OuterSingleton;
}
template<> CLIENTPLUGIN_API UScriptStruct* StaticStruct<FDynamicValue>()
{
	return FDynamicValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDynamicValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteValue_MetaData[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatorValue_MetaData[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicValue, ValueType), Z_Construct_UEnum_ClientPlugin_EDynamicValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 3328599816
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicValue, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicValue, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
void Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FDynamicValue*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDynamicValue), &Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicValue, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_ByteValue = { "ByteValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicValue, ByteValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteValue_MetaData), NewProp_ByteValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicValue, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorValue_MetaData), NewProp_VectorValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_RotatorValue = { "RotatorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicValue, RotatorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatorValue_MetaData), NewProp_RotatorValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_ValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_ByteValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_VectorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicValue_Statics::NewProp_RotatorValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
	nullptr,
	&NewStructOps,
	"DynamicValue",
	Z_Construct_UScriptStruct_FDynamicValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicValue_Statics::PropPointers),
	sizeof(FDynamicValue),
	alignof(FDynamicValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDynamicValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDynamicValue()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicValue.InnerSingleton, Z_Construct_UScriptStruct_FDynamicValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DynamicValue.InnerSingleton;
}
// End ScriptStruct FDynamicValue

// Begin Class UBufferData Function GetBool
struct Z_Construct_UFunction_UBufferData_GetBool_Statics
{
	struct BufferData_eventGetBool_Parms
	{
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UBufferData_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BufferData_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBufferData_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BufferData_eventGetBool_Parms), &Z_Construct_UFunction_UBufferData_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBufferData_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBufferData_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBufferData, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_UBufferData_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBufferData_GetBool_Statics::BufferData_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBufferData_GetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBufferData_GetBool_Statics::BufferData_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBufferData_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBufferData_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBufferData::execGetBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UBufferData Function GetBool

// Begin Class UBufferData Function GetByte
struct Z_Construct_UFunction_UBufferData_GetByte_Statics
{
	struct BufferData_eventGetByte_Parms
	{
		FString Key;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetByte_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetByte_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBufferData_GetByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBufferData_GetByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetByte_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBufferData_GetByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBufferData, nullptr, "GetByte", nullptr, nullptr, Z_Construct_UFunction_UBufferData_GetByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBufferData_GetByte_Statics::BufferData_eventGetByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBufferData_GetByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBufferData_GetByte_Statics::BufferData_eventGetByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBufferData_GetByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBufferData_GetByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBufferData::execGetByte)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetByte(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UBufferData Function GetByte

// Begin Class UBufferData Function GetFloat
struct Z_Construct_UFunction_UBufferData_GetFloat_Statics
{
	struct BufferData_eventGetFloat_Parms
	{
		FString Key;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBufferData_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBufferData_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBufferData_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBufferData, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_UBufferData_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBufferData_GetFloat_Statics::BufferData_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBufferData_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBufferData_GetFloat_Statics::BufferData_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBufferData_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBufferData_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBufferData::execGetFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UBufferData Function GetFloat

// Begin Class UBufferData Function GetId
struct Z_Construct_UFunction_UBufferData_GetId_Statics
{
	struct BufferData_eventGetId_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetId_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetId_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBufferData_GetId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetId_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBufferData_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBufferData, nullptr, "GetId", nullptr, nullptr, Z_Construct_UFunction_UBufferData_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBufferData_GetId_Statics::BufferData_eventGetId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBufferData_GetId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBufferData_GetId_Statics::BufferData_eventGetId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBufferData_GetId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBufferData_GetId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBufferData::execGetId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetId(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UBufferData Function GetId

// Begin Class UBufferData Function GetInt32
struct Z_Construct_UFunction_UBufferData_GetInt32_Statics
{
	struct BufferData_eventGetInt32_Parms
	{
		FString Key;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetInt32_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetInt32_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBufferData_GetInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetInt32_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBufferData_GetInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetInt32_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBufferData_GetInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBufferData, nullptr, "GetInt32", nullptr, nullptr, Z_Construct_UFunction_UBufferData_GetInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBufferData_GetInt32_Statics::BufferData_eventGetInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBufferData_GetInt32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBufferData_GetInt32_Statics::BufferData_eventGetInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBufferData_GetInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBufferData_GetInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBufferData::execGetInt32)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInt32(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UBufferData Function GetInt32

// Begin Class UBufferData Function GetRotator
struct Z_Construct_UFunction_UBufferData_GetRotator_Statics
{
	struct BufferData_eventGetRotator_Parms
	{
		FString Key;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetRotator_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBufferData_GetRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBufferData_GetRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetRotator_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBufferData_GetRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBufferData, nullptr, "GetRotator", nullptr, nullptr, Z_Construct_UFunction_UBufferData_GetRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBufferData_GetRotator_Statics::BufferData_eventGetRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBufferData_GetRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBufferData_GetRotator_Statics::BufferData_eventGetRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBufferData_GetRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBufferData_GetRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBufferData::execGetRotator)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetRotator(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UBufferData Function GetRotator

// Begin Class UBufferData Function GetString
struct Z_Construct_UFunction_UBufferData_GetString_Statics
{
	struct BufferData_eventGetString_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetString_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBufferData_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBufferData_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBufferData, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UBufferData_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBufferData_GetString_Statics::BufferData_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBufferData_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBufferData_GetString_Statics::BufferData_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBufferData_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBufferData_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBufferData::execGetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UBufferData Function GetString

// Begin Class UBufferData Function GetVector
struct Z_Construct_UFunction_UBufferData_GetVector_Statics
{
	struct BufferData_eventGetVector_Parms
	{
		FString Key;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBufferData_GetVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBufferData_GetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BufferData_eventGetVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBufferData_GetVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBufferData_GetVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBufferData_GetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBufferData, nullptr, "GetVector", nullptr, nullptr, Z_Construct_UFunction_UBufferData_GetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBufferData_GetVector_Statics::BufferData_eventGetVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBufferData_GetVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBufferData_GetVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBufferData_GetVector_Statics::BufferData_eventGetVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBufferData_GetVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBufferData_GetVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBufferData::execGetVector)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVector(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UBufferData Function GetVector

// Begin Class UBufferData
void UBufferData::StaticRegisterNativesUBufferData()
{
	UClass* Class = UBufferData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBool", &UBufferData::execGetBool },
		{ "GetByte", &UBufferData::execGetByte },
		{ "GetFloat", &UBufferData::execGetFloat },
		{ "GetId", &UBufferData::execGetId },
		{ "GetInt32", &UBufferData::execGetInt32 },
		{ "GetRotator", &UBufferData::execGetRotator },
		{ "GetString", &UBufferData::execGetString },
		{ "GetVector", &UBufferData::execGetVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBufferData);
UClass* Z_Construct_UClass_UBufferData_NoRegister()
{
	return UBufferData::StaticClass();
}
struct Z_Construct_UClass_UBufferData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ByteBuffer.h" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBufferData_GetBool, "GetBool" }, // 1965923587
		{ &Z_Construct_UFunction_UBufferData_GetByte, "GetByte" }, // 220813244
		{ &Z_Construct_UFunction_UBufferData_GetFloat, "GetFloat" }, // 3562559327
		{ &Z_Construct_UFunction_UBufferData_GetId, "GetId" }, // 2340754692
		{ &Z_Construct_UFunction_UBufferData_GetInt32, "GetInt32" }, // 1672968599
		{ &Z_Construct_UFunction_UBufferData_GetRotator, "GetRotator" }, // 2182787768
		{ &Z_Construct_UFunction_UBufferData_GetString, "GetString" }, // 3200538793
		{ &Z_Construct_UFunction_UBufferData_GetVector, "GetVector" }, // 2599803211
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBufferData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBufferData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBufferData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBufferData_Statics::ClassParams = {
	&UBufferData::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBufferData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBufferData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBufferData()
{
	if (!Z_Registration_Info_UClass_UBufferData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBufferData.OuterSingleton, Z_Construct_UClass_UBufferData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBufferData.OuterSingleton;
}
template<> CLIENTPLUGIN_API UClass* StaticClass<UBufferData>()
{
	return UBufferData::StaticClass();
}
UBufferData::UBufferData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBufferData);
UBufferData::~UBufferData() {}
// End Class UBufferData

// Begin Class UByteBuffer Function AppendBuffer
struct Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics
{
	struct ByteBuffer_eventAppendBuffer_Parms
	{
		UByteBuffer* OtherBuffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::NewProp_OtherBuffer = { "OtherBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventAppendBuffer_Parms, OtherBuffer), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::NewProp_OtherBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "AppendBuffer", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::ByteBuffer_eventAppendBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::ByteBuffer_eventAppendBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_AppendBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_AppendBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execAppendBuffer)
{
	P_GET_OBJECT(UByteBuffer,Z_Param_OtherBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AppendBuffer(Z_Param_OtherBuffer);
	P_NATIVE_END;
}
// End Class UByteBuffer Function AppendBuffer

// Begin Class UByteBuffer Function ByteArrayToBinaryString
struct Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics
{
	struct ByteBuffer_eventByteArrayToBinaryString_Parms
	{
		TArray<uint8> ByteArray;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventByteArrayToBinaryString_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteArray_MetaData), NewProp_ByteArray_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventByteArrayToBinaryString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::NewProp_ByteArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::NewProp_ByteArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "ByteArrayToBinaryString", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::ByteBuffer_eventByteArrayToBinaryString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::ByteBuffer_eventByteArrayToBinaryString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execByteArrayToBinaryString)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UByteBuffer::ByteArrayToBinaryString(Z_Param_Out_ByteArray);
	P_NATIVE_END;
}
// End Class UByteBuffer Function ByteArrayToBinaryString

// Begin Class UByteBuffer Function ByteArrayToHexString
struct Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics
{
	struct ByteBuffer_eventByteArrayToHexString_Parms
	{
		TArray<uint8> ByteArray;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventByteArrayToHexString_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteArray_MetaData), NewProp_ByteArray_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventByteArrayToHexString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::NewProp_ByteArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::NewProp_ByteArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "ByteArrayToHexString", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::ByteBuffer_eventByteArrayToHexString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::ByteBuffer_eventByteArrayToHexString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execByteArrayToHexString)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UByteBuffer::ByteArrayToHexString(Z_Param_Out_ByteArray);
	P_NATIVE_END;
}
// End Class UByteBuffer Function ByteArrayToHexString

// Begin Class UByteBuffer Function CreateByteBuffer
struct Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics
{
	struct ByteBuffer_eventCreateByteBuffer_Parms
	{
		TArray<uint8> Data;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventCreateByteBuffer_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventCreateByteBuffer_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "CreateByteBuffer", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::ByteBuffer_eventCreateByteBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::ByteBuffer_eventCreateByteBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_CreateByteBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_CreateByteBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execCreateByteBuffer)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=UByteBuffer::CreateByteBuffer(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UByteBuffer Function CreateByteBuffer

// Begin Class UByteBuffer Function CreateByteBufferFromString
struct Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics
{
	struct ByteBuffer_eventCreateByteBufferFromString_Parms
	{
		FString Base64Data;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base64Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Base64Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::NewProp_Base64Data = { "Base64Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventCreateByteBufferFromString_Parms, Base64Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base64Data_MetaData), NewProp_Base64Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventCreateByteBufferFromString_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::NewProp_Base64Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "CreateByteBufferFromString", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::ByteBuffer_eventCreateByteBufferFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::ByteBuffer_eventCreateByteBufferFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execCreateByteBufferFromString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Base64Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=UByteBuffer::CreateByteBufferFromString(Z_Param_Base64Data);
	P_NATIVE_END;
}
// End Class UByteBuffer Function CreateByteBufferFromString

// Begin Class UByteBuffer Function CreateEmptyByteBuffer
struct Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics
{
	struct ByteBuffer_eventCreateEmptyByteBuffer_Parms
	{
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventCreateEmptyByteBuffer_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "CreateEmptyByteBuffer", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::ByteBuffer_eventCreateEmptyByteBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::ByteBuffer_eventCreateEmptyByteBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execCreateEmptyByteBuffer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=UByteBuffer::CreateEmptyByteBuffer();
	P_NATIVE_END;
}
// End Class UByteBuffer Function CreateEmptyByteBuffer

// Begin Class UByteBuffer Function GetBool
struct Z_Construct_UFunction_UByteBuffer_GetBool_Statics
{
	struct ByteBuffer_eventGetBool_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UByteBuffer_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ByteBuffer_eventGetBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UByteBuffer_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ByteBuffer_eventGetBool_Parms), &Z_Construct_UFunction_UByteBuffer_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetBool_Statics::ByteBuffer_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetBool_Statics::ByteBuffer_eventGetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetBool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBool();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetBool

// Begin Class UByteBuffer Function GetBuffer
struct Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics
{
	struct ByteBuffer_eventGetBuffer_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventGetBuffer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetBuffer", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::ByteBuffer_eventGetBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::ByteBuffer_eventGetBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetBuffer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetBuffer();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetBuffer

// Begin Class UByteBuffer Function GetByte
struct Z_Construct_UFunction_UByteBuffer_GetByte_Statics
{
	struct ByteBuffer_eventGetByte_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UByteBuffer_GetByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventGetByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetByte", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetByte_Statics::ByteBuffer_eventGetByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetByte_Statics::ByteBuffer_eventGetByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetByte)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetByte();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetByte

// Begin Class UByteBuffer Function GetFloat
struct Z_Construct_UFunction_UByteBuffer_GetFloat_Statics
{
	struct ByteBuffer_eventGetFloat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::ByteBuffer_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::ByteBuffer_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetFloat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloat();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetFloat

// Begin Class UByteBuffer Function GetId
struct Z_Construct_UFunction_UByteBuffer_GetId_Statics
{
	struct ByteBuffer_eventGetId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventGetId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetId", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetId_Statics::ByteBuffer_eventGetId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetId_Statics::ByteBuffer_eventGetId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetId();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetId

// Begin Class UByteBuffer Function GetInt32
struct Z_Construct_UFunction_UByteBuffer_GetInt32_Statics
{
	struct ByteBuffer_eventGetInt32_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventGetInt32_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetInt32", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::ByteBuffer_eventGetInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::ByteBuffer_eventGetInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetInt32)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInt32();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetInt32

// Begin Class UByteBuffer Function GetRotator
struct Z_Construct_UFunction_UByteBuffer_GetRotator_Statics
{
	struct ByteBuffer_eventGetRotator_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventGetRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetRotator", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::ByteBuffer_eventGetRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::ByteBuffer_eventGetRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetRotator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetRotator();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetRotator

// Begin Class UByteBuffer Function GetString
struct Z_Construct_UFunction_UByteBuffer_GetString_Statics
{
	struct ByteBuffer_eventGetString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetString_Statics::ByteBuffer_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetString_Statics::ByteBuffer_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetString();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetString

// Begin Class UByteBuffer Function GetVector
struct Z_Construct_UFunction_UByteBuffer_GetVector_Statics
{
	struct ByteBuffer_eventGetVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UByteBuffer_GetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventGetVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_GetVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_GetVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_GetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "GetVector", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_GetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_GetVector_Statics::ByteBuffer_eventGetVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_GetVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_GetVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_GetVector_Statics::ByteBuffer_eventGetVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_GetVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_GetVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execGetVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVector();
	P_NATIVE_END;
}
// End Class UByteBuffer Function GetVector

// Begin Class UByteBuffer Function Length
struct Z_Construct_UFunction_UByteBuffer_Length_Statics
{
	struct ByteBuffer_eventLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UByteBuffer_Length_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_Length_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_Length_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_Length_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_Length_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "Length", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_Length_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_Length_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_Length_Statics::ByteBuffer_eventLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_Length_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_Length_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_Length_Statics::ByteBuffer_eventLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_Length()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_Length_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Length();
	P_NATIVE_END;
}
// End Class UByteBuffer Function Length

// Begin Class UByteBuffer Function PutBool
struct Z_Construct_UFunction_UByteBuffer_PutBool_Statics
{
	struct ByteBuffer_eventPutBool_Parms
	{
		bool Value;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UByteBuffer_PutBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((ByteBuffer_eventPutBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UByteBuffer_PutBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ByteBuffer_eventPutBool_Parms), &Z_Construct_UFunction_UByteBuffer_PutBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_PutBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutBool_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_PutBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutBool_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_PutBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "PutBool", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_PutBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_PutBool_Statics::ByteBuffer_eventPutBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_PutBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_PutBool_Statics::ByteBuffer_eventPutBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_PutBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_PutBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execPutBool)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=P_THIS->PutBool(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UByteBuffer Function PutBool

// Begin Class UByteBuffer Function PutByte
struct Z_Construct_UFunction_UByteBuffer_PutByte_Statics
{
	struct ByteBuffer_eventPutByte_Parms
	{
		uint8 Value;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UByteBuffer_PutByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutByte_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_PutByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutByte_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_PutByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutByte_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_PutByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "PutByte", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_PutByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_PutByte_Statics::ByteBuffer_eventPutByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_PutByte_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_PutByte_Statics::ByteBuffer_eventPutByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_PutByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_PutByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execPutByte)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=P_THIS->PutByte(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UByteBuffer Function PutByte

// Begin Class UByteBuffer Function PutFloat
struct Z_Construct_UFunction_UByteBuffer_PutFloat_Statics
{
	struct ByteBuffer_eventPutFloat_Parms
	{
		float Value;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutFloat_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "PutFloat", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::ByteBuffer_eventPutFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::ByteBuffer_eventPutFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_PutFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_PutFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execPutFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=P_THIS->PutFloat(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UByteBuffer Function PutFloat

// Begin Class UByteBuffer Function PutId
struct Z_Construct_UFunction_UByteBuffer_PutId_Statics
{
	struct ByteBuffer_eventPutId_Parms
	{
		FString Id;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_PutId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutId_Parms, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_PutId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutId_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_PutId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutId_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_PutId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "PutId", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_PutId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_PutId_Statics::ByteBuffer_eventPutId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_PutId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_PutId_Statics::ByteBuffer_eventPutId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_PutId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_PutId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execPutId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=P_THIS->PutId(Z_Param_Id);
	P_NATIVE_END;
}
// End Class UByteBuffer Function PutId

// Begin Class UByteBuffer Function PutInt32
struct Z_Construct_UFunction_UByteBuffer_PutInt32_Statics
{
	struct ByteBuffer_eventPutInt32_Parms
	{
		int32 Value;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutInt32_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutInt32_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "PutInt32", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::ByteBuffer_eventPutInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::ByteBuffer_eventPutInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_PutInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_PutInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execPutInt32)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=P_THIS->PutInt32(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UByteBuffer Function PutInt32

// Begin Class UByteBuffer Function PutRotator
struct Z_Construct_UFunction_UByteBuffer_PutRotator_Statics
{
	struct ByteBuffer_eventPutRotator_Parms
	{
		FRotator Value;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutRotator_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "PutRotator", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::ByteBuffer_eventPutRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::ByteBuffer_eventPutRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_PutRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_PutRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execPutRotator)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=P_THIS->PutRotator(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UByteBuffer Function PutRotator

// Begin Class UByteBuffer Function PutString
struct Z_Construct_UFunction_UByteBuffer_PutString_Statics
{
	struct ByteBuffer_eventPutString_Parms
	{
		FString Value;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_PutString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_PutString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutString_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_PutString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_PutString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "PutString", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_PutString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_PutString_Statics::ByteBuffer_eventPutString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_PutString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_PutString_Statics::ByteBuffer_eventPutString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_PutString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_PutString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execPutString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=P_THIS->PutString(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UByteBuffer Function PutString

// Begin Class UByteBuffer Function PutVector
struct Z_Construct_UFunction_UByteBuffer_PutVector_Statics
{
	struct ByteBuffer_eventPutVector_Parms
	{
		FVector Value;
		UByteBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UByteBuffer_PutVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_PutVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventPutVector_Parms, ReturnValue), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_PutVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_PutVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_PutVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "PutVector", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_PutVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_PutVector_Statics::ByteBuffer_eventPutVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_PutVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_PutVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_PutVector_Statics::ByteBuffer_eventPutVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_PutVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_PutVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execPutVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UByteBuffer**)Z_Param__Result=P_THIS->PutVector(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UByteBuffer Function PutVector

// Begin Class UByteBuffer Function ReadDataFromBuffer
struct Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics
{
	struct ByteBuffer_eventReadDataFromBuffer_Parms
	{
		TMap<FString,FString> DataSequence;
		UBufferData* OutValues;
		uint8 PacketID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataSequence_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataSequence_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataSequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PacketID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_DataSequence_ValueProp = { "DataSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_DataSequence_Key_KeyProp = { "DataSequence_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_DataSequence = { "DataSequence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventReadDataFromBuffer_Parms, DataSequence), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSequence_MetaData), NewProp_DataSequence_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventReadDataFromBuffer_Parms, OutValues), Z_Construct_UClass_UBufferData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_PacketID = { "PacketID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventReadDataFromBuffer_Parms, PacketID), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ByteBuffer_eventReadDataFromBuffer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ByteBuffer_eventReadDataFromBuffer_Parms), &Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_DataSequence_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_DataSequence_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_DataSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_OutValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_PacketID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "ReadDataFromBuffer", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::ByteBuffer_eventReadDataFromBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::ByteBuffer_eventReadDataFromBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execReadDataFromBuffer)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_DataSequence);
	P_GET_OBJECT_REF(UBufferData,Z_Param_Out_OutValues);
	P_GET_PROPERTY(FByteProperty,Z_Param_PacketID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadDataFromBuffer(Z_Param_Out_DataSequence,P_ARG_GC_BARRIER(Z_Param_Out_OutValues),Z_Param_PacketID);
	P_NATIVE_END;
}
// End Class UByteBuffer Function ReadDataFromBuffer

// Begin Class UByteBuffer Function SplitPackets
struct Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics
{
	struct ByteBuffer_eventSplitPackets_Parms
	{
		UByteBuffer* CombinedBuffer;
		TArray<UByteBuffer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombinedBuffer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::NewProp_CombinedBuffer = { "CombinedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventSplitPackets_Parms, CombinedBuffer), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventSplitPackets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::NewProp_CombinedBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "SplitPackets", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::ByteBuffer_eventSplitPackets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::ByteBuffer_eventSplitPackets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_SplitPackets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_SplitPackets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execSplitPackets)
{
	P_GET_OBJECT(UByteBuffer,Z_Param_CombinedBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UByteBuffer*>*)Z_Param__Result=P_THIS->SplitPackets(Z_Param_CombinedBuffer);
	P_NATIVE_END;
}
// End Class UByteBuffer Function SplitPackets

// Begin Class UByteBuffer Function ToString
struct Z_Construct_UFunction_UByteBuffer_ToString_Statics
{
	struct ByteBuffer_eventToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_ToString_Statics::ByteBuffer_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_ToString_Statics::ByteBuffer_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToString();
	P_NATIVE_END;
}
// End Class UByteBuffer Function ToString

// Begin Class UByteBuffer Function WriteDataToBuffer
struct Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics
{
	struct ByteBuffer_eventWriteDataToBuffer_Parms
	{
		TMap<FString,FString> DataSequence;
		TArray<FDynamicValue> Values;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ByteBuffer" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataSequence_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataSequence_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataSequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_DataSequence_ValueProp = { "DataSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_DataSequence_Key_KeyProp = { "DataSequence_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_DataSequence = { "DataSequence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventWriteDataToBuffer_Parms, DataSequence), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSequence_MetaData), NewProp_DataSequence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDynamicValue, METADATA_PARAMS(0, nullptr) }; // 5158475
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ByteBuffer_eventWriteDataToBuffer_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 5158475
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_DataSequence_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_DataSequence_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_DataSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UByteBuffer, nullptr, "WriteDataToBuffer", nullptr, nullptr, Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::ByteBuffer_eventWriteDataToBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::ByteBuffer_eventWriteDataToBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UByteBuffer::execWriteDataToBuffer)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_DataSequence);
	P_GET_TARRAY_REF(FDynamicValue,Z_Param_Out_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteDataToBuffer(Z_Param_Out_DataSequence,Z_Param_Out_Values);
	P_NATIVE_END;
}
// End Class UByteBuffer Function WriteDataToBuffer

// Begin Class UByteBuffer
void UByteBuffer::StaticRegisterNativesUByteBuffer()
{
	UClass* Class = UByteBuffer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AppendBuffer", &UByteBuffer::execAppendBuffer },
		{ "ByteArrayToBinaryString", &UByteBuffer::execByteArrayToBinaryString },
		{ "ByteArrayToHexString", &UByteBuffer::execByteArrayToHexString },
		{ "CreateByteBuffer", &UByteBuffer::execCreateByteBuffer },
		{ "CreateByteBufferFromString", &UByteBuffer::execCreateByteBufferFromString },
		{ "CreateEmptyByteBuffer", &UByteBuffer::execCreateEmptyByteBuffer },
		{ "GetBool", &UByteBuffer::execGetBool },
		{ "GetBuffer", &UByteBuffer::execGetBuffer },
		{ "GetByte", &UByteBuffer::execGetByte },
		{ "GetFloat", &UByteBuffer::execGetFloat },
		{ "GetId", &UByteBuffer::execGetId },
		{ "GetInt32", &UByteBuffer::execGetInt32 },
		{ "GetRotator", &UByteBuffer::execGetRotator },
		{ "GetString", &UByteBuffer::execGetString },
		{ "GetVector", &UByteBuffer::execGetVector },
		{ "Length", &UByteBuffer::execLength },
		{ "PutBool", &UByteBuffer::execPutBool },
		{ "PutByte", &UByteBuffer::execPutByte },
		{ "PutFloat", &UByteBuffer::execPutFloat },
		{ "PutId", &UByteBuffer::execPutId },
		{ "PutInt32", &UByteBuffer::execPutInt32 },
		{ "PutRotator", &UByteBuffer::execPutRotator },
		{ "PutString", &UByteBuffer::execPutString },
		{ "PutVector", &UByteBuffer::execPutVector },
		{ "ReadDataFromBuffer", &UByteBuffer::execReadDataFromBuffer },
		{ "SplitPackets", &UByteBuffer::execSplitPackets },
		{ "ToString", &UByteBuffer::execToString },
		{ "WriteDataToBuffer", &UByteBuffer::execWriteDataToBuffer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UByteBuffer);
UClass* Z_Construct_UClass_UByteBuffer_NoRegister()
{
	return UByteBuffer::StaticClass();
}
struct Z_Construct_UClass_UByteBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ByteBuffer.h" },
		{ "ModuleRelativePath", "Public/ByteBuffer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UByteBuffer_AppendBuffer, "AppendBuffer" }, // 503174513
		{ &Z_Construct_UFunction_UByteBuffer_ByteArrayToBinaryString, "ByteArrayToBinaryString" }, // 1272910946
		{ &Z_Construct_UFunction_UByteBuffer_ByteArrayToHexString, "ByteArrayToHexString" }, // 3528043694
		{ &Z_Construct_UFunction_UByteBuffer_CreateByteBuffer, "CreateByteBuffer" }, // 2213872066
		{ &Z_Construct_UFunction_UByteBuffer_CreateByteBufferFromString, "CreateByteBufferFromString" }, // 2206063689
		{ &Z_Construct_UFunction_UByteBuffer_CreateEmptyByteBuffer, "CreateEmptyByteBuffer" }, // 2101034262
		{ &Z_Construct_UFunction_UByteBuffer_GetBool, "GetBool" }, // 1140795869
		{ &Z_Construct_UFunction_UByteBuffer_GetBuffer, "GetBuffer" }, // 4020746523
		{ &Z_Construct_UFunction_UByteBuffer_GetByte, "GetByte" }, // 2610557759
		{ &Z_Construct_UFunction_UByteBuffer_GetFloat, "GetFloat" }, // 2115353341
		{ &Z_Construct_UFunction_UByteBuffer_GetId, "GetId" }, // 3406728950
		{ &Z_Construct_UFunction_UByteBuffer_GetInt32, "GetInt32" }, // 635490358
		{ &Z_Construct_UFunction_UByteBuffer_GetRotator, "GetRotator" }, // 3205125331
		{ &Z_Construct_UFunction_UByteBuffer_GetString, "GetString" }, // 3989382925
		{ &Z_Construct_UFunction_UByteBuffer_GetVector, "GetVector" }, // 1174485825
		{ &Z_Construct_UFunction_UByteBuffer_Length, "Length" }, // 2033947053
		{ &Z_Construct_UFunction_UByteBuffer_PutBool, "PutBool" }, // 2367772976
		{ &Z_Construct_UFunction_UByteBuffer_PutByte, "PutByte" }, // 1770093077
		{ &Z_Construct_UFunction_UByteBuffer_PutFloat, "PutFloat" }, // 4211682049
		{ &Z_Construct_UFunction_UByteBuffer_PutId, "PutId" }, // 420289165
		{ &Z_Construct_UFunction_UByteBuffer_PutInt32, "PutInt32" }, // 2310995761
		{ &Z_Construct_UFunction_UByteBuffer_PutRotator, "PutRotator" }, // 3406773135
		{ &Z_Construct_UFunction_UByteBuffer_PutString, "PutString" }, // 3132088234
		{ &Z_Construct_UFunction_UByteBuffer_PutVector, "PutVector" }, // 3487816552
		{ &Z_Construct_UFunction_UByteBuffer_ReadDataFromBuffer, "ReadDataFromBuffer" }, // 2561213207
		{ &Z_Construct_UFunction_UByteBuffer_SplitPackets, "SplitPackets" }, // 2189228004
		{ &Z_Construct_UFunction_UByteBuffer_ToString, "ToString" }, // 2503481240
		{ &Z_Construct_UFunction_UByteBuffer_WriteDataToBuffer, "WriteDataToBuffer" }, // 2896695812
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UByteBuffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UByteBuffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UByteBuffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UByteBuffer_Statics::ClassParams = {
	&UByteBuffer::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UByteBuffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UByteBuffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UByteBuffer()
{
	if (!Z_Registration_Info_UClass_UByteBuffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UByteBuffer.OuterSingleton, Z_Construct_UClass_UByteBuffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UByteBuffer.OuterSingleton;
}
template<> CLIENTPLUGIN_API UClass* StaticClass<UByteBuffer>()
{
	return UByteBuffer::StaticClass();
}
UByteBuffer::UByteBuffer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UByteBuffer);
UByteBuffer::~UByteBuffer() {}
// End Class UByteBuffer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDynamicValueType_StaticEnum, TEXT("EDynamicValueType"), &Z_Registration_Info_UEnum_EDynamicValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3328599816U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDynamicValue::StaticStruct, Z_Construct_UScriptStruct_FDynamicValue_Statics::NewStructOps, TEXT("DynamicValue"), &Z_Registration_Info_UScriptStruct_DynamicValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicValue), 5158475U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBufferData, UBufferData::StaticClass, TEXT("UBufferData"), &Z_Registration_Info_UClass_UBufferData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBufferData), 4168300439U) },
		{ Z_Construct_UClass_UByteBuffer, UByteBuffer::StaticClass, TEXT("UByteBuffer"), &Z_Registration_Info_UClass_UByteBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UByteBuffer), 3307410163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_678625807(TEXT("/Script/ClientPlugin"),
	Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

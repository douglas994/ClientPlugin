// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientPlugin/Public/QueueBuffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueueBuffer() {}

// Begin Cross Module References
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UByteBuffer_NoRegister();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UQueueBuffer();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UQueueBuffer_NoRegister();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UQueueBufferFunctionLibary();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UQueueBufferFunctionLibary_NoRegister();
CLIENTPLUGIN_API UClass* Z_Construct_UClass_UWebSocket_NoRegister();
CLIENTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FQueueItem();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ClientPlugin();
// End Cross Module References

// Begin ScriptStruct FQueueItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QueueItem;
class UScriptStruct* FQueueItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QueueItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QueueItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueueItem, (UObject*)Z_Construct_UPackage__Script_ClientPlugin(), TEXT("QueueItem"));
	}
	return Z_Registration_Info_UScriptStruct_QueueItem.OuterSingleton;
}
template<> CLIENTPLUGIN_API UScriptStruct* StaticStruct<FQueueItem>()
{
	return FQueueItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQueueItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QueueBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PacketType_MetaData[] = {
		{ "Category", "QueueItem" },
		{ "ModuleRelativePath", "Public/QueueBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[] = {
		{ "Category", "QueueItem" },
		{ "ModuleRelativePath", "Public/QueueBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PacketType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueueItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQueueItem_Statics::NewProp_PacketType = { "PacketType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueueItem, PacketType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PacketType_MetaData), NewProp_PacketType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQueueItem_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQueueItem, Buffer), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffer_MetaData), NewProp_Buffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueueItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueItem_Statics::NewProp_PacketType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueItem_Statics::NewProp_Buffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueueItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
	nullptr,
	&NewStructOps,
	"QueueItem",
	Z_Construct_UScriptStruct_FQueueItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueItem_Statics::PropPointers),
	sizeof(FQueueItem),
	alignof(FQueueItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQueueItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQueueItem()
{
	if (!Z_Registration_Info_UScriptStruct_QueueItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QueueItem.InnerSingleton, Z_Construct_UScriptStruct_FQueueItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QueueItem.InnerSingleton;
}
// End ScriptStruct FQueueItem

// Begin Class UQueueBuffer Function AddBuffer
struct Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics
{
	struct QueueBuffer_eventAddBuffer_Parms
	{
		uint8 PacketType;
		UByteBuffer* Buffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QueueBuffer" },
		{ "ModuleRelativePath", "Public/QueueBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PacketType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::NewProp_PacketType = { "PacketType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QueueBuffer_eventAddBuffer_Parms, PacketType), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QueueBuffer_eventAddBuffer_Parms, Buffer), Z_Construct_UClass_UByteBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::NewProp_PacketType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::NewProp_Buffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQueueBuffer, nullptr, "AddBuffer", nullptr, nullptr, Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::QueueBuffer_eventAddBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::QueueBuffer_eventAddBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQueueBuffer_AddBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQueueBuffer_AddBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQueueBuffer::execAddBuffer)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_PacketType);
	P_GET_OBJECT(UByteBuffer,Z_Param_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBuffer(Z_Param_PacketType,Z_Param_Buffer);
	P_NATIVE_END;
}
// End Class UQueueBuffer Function AddBuffer

// Begin Class UQueueBuffer Function Tick
struct Z_Construct_UFunction_UQueueBuffer_Tick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QueueBuffer" },
		{ "ModuleRelativePath", "Public/QueueBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQueueBuffer_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQueueBuffer, nullptr, "Tick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQueueBuffer_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQueueBuffer_Tick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UQueueBuffer_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQueueBuffer_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQueueBuffer::execTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Tick();
	P_NATIVE_END;
}
// End Class UQueueBuffer Function Tick

// Begin Class UQueueBuffer
void UQueueBuffer::StaticRegisterNativesUQueueBuffer()
{
	UClass* Class = UQueueBuffer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBuffer", &UQueueBuffer::execAddBuffer },
		{ "Tick", &UQueueBuffer::execTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueueBuffer);
UClass* Z_Construct_UClass_UQueueBuffer_NoRegister()
{
	return UQueueBuffer::StaticClass();
}
struct Z_Construct_UClass_UQueueBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QueueBuffer.h" },
		{ "ModuleRelativePath", "Public/QueueBuffer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQueueBuffer_AddBuffer, "AddBuffer" }, // 1422879567
		{ &Z_Construct_UFunction_UQueueBuffer_Tick, "Tick" }, // 1977833429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueueBuffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueueBuffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueueBuffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueueBuffer_Statics::ClassParams = {
	&UQueueBuffer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueueBuffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueueBuffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueueBuffer()
{
	if (!Z_Registration_Info_UClass_UQueueBuffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueueBuffer.OuterSingleton, Z_Construct_UClass_UQueueBuffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueueBuffer.OuterSingleton;
}
template<> CLIENTPLUGIN_API UClass* StaticClass<UQueueBuffer>()
{
	return UQueueBuffer::StaticClass();
}
UQueueBuffer::UQueueBuffer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueueBuffer);
UQueueBuffer::~UQueueBuffer() {}
// End Class UQueueBuffer

// Begin Class UQueueBufferFunctionLibary Function CreateInstance
struct Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics
{
	struct QueueBufferFunctionLibary_eventCreateInstance_Parms
	{
		UWebSocket* Socket;
		uint8 QueuePacketType;
		FString Key;
		UQueueBuffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "QueueBuffer" },
		{ "ModuleRelativePath", "Public/QueueBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Socket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QueuePacketType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QueueBufferFunctionLibary_eventCreateInstance_Parms, Socket), Z_Construct_UClass_UWebSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::NewProp_QueuePacketType = { "QueuePacketType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QueueBufferFunctionLibary_eventCreateInstance_Parms, QueuePacketType), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QueueBufferFunctionLibary_eventCreateInstance_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QueueBufferFunctionLibary_eventCreateInstance_Parms, ReturnValue), Z_Construct_UClass_UQueueBuffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::NewProp_QueuePacketType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQueueBufferFunctionLibary, nullptr, "CreateInstance", nullptr, nullptr, Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::QueueBufferFunctionLibary_eventCreateInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::QueueBufferFunctionLibary_eventCreateInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQueueBufferFunctionLibary::execCreateInstance)
{
	P_GET_OBJECT(UWebSocket,Z_Param_Socket);
	P_GET_PROPERTY(FByteProperty,Z_Param_QueuePacketType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQueueBuffer**)Z_Param__Result=UQueueBufferFunctionLibary::CreateInstance(Z_Param_Socket,Z_Param_QueuePacketType,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UQueueBufferFunctionLibary Function CreateInstance

// Begin Class UQueueBufferFunctionLibary
void UQueueBufferFunctionLibary::StaticRegisterNativesUQueueBufferFunctionLibary()
{
	UClass* Class = UQueueBufferFunctionLibary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateInstance", &UQueueBufferFunctionLibary::execCreateInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueueBufferFunctionLibary);
UClass* Z_Construct_UClass_UQueueBufferFunctionLibary_NoRegister()
{
	return UQueueBufferFunctionLibary::StaticClass();
}
struct Z_Construct_UClass_UQueueBufferFunctionLibary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "QueueBuffer.h" },
		{ "ModuleRelativePath", "Public/QueueBuffer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQueueBufferFunctionLibary_CreateInstance, "CreateInstance" }, // 1104173472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueueBufferFunctionLibary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueueBufferFunctionLibary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ClientPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueueBufferFunctionLibary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueueBufferFunctionLibary_Statics::ClassParams = {
	&UQueueBufferFunctionLibary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueueBufferFunctionLibary_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueueBufferFunctionLibary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueueBufferFunctionLibary()
{
	if (!Z_Registration_Info_UClass_UQueueBufferFunctionLibary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueueBufferFunctionLibary.OuterSingleton, Z_Construct_UClass_UQueueBufferFunctionLibary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueueBufferFunctionLibary.OuterSingleton;
}
template<> CLIENTPLUGIN_API UClass* StaticClass<UQueueBufferFunctionLibary>()
{
	return UQueueBufferFunctionLibary::StaticClass();
}
UQueueBufferFunctionLibary::UQueueBufferFunctionLibary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueueBufferFunctionLibary);
UQueueBufferFunctionLibary::~UQueueBufferFunctionLibary() {}
// End Class UQueueBufferFunctionLibary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQueueItem::StaticStruct, Z_Construct_UScriptStruct_FQueueItem_Statics::NewStructOps, TEXT("QueueItem"), &Z_Registration_Info_UScriptStruct_QueueItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQueueItem), 815934412U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueueBuffer, UQueueBuffer::StaticClass, TEXT("UQueueBuffer"), &Z_Registration_Info_UClass_UQueueBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueueBuffer), 1863861038U) },
		{ Z_Construct_UClass_UQueueBufferFunctionLibary, UQueueBufferFunctionLibary::StaticClass, TEXT("UQueueBufferFunctionLibary"), &Z_Registration_Info_UClass_UQueueBufferFunctionLibary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueueBufferFunctionLibary), 1696618269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_140122190(TEXT("/Script/ClientPlugin"),
	Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_QueueBuffer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

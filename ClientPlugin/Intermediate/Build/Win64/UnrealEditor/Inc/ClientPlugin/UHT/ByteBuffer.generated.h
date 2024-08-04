// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ByteBuffer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UBufferData;
class UByteBuffer;
struct FDynamicValue;
#ifdef CLIENTPLUGIN_ByteBuffer_generated_h
#error "ByteBuffer.generated.h already included, missing '#pragma once' in ByteBuffer.h"
#endif
#define CLIENTPLUGIN_ByteBuffer_generated_h

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicValue_Statics; \
	CLIENTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CLIENTPLUGIN_API UScriptStruct* StaticStruct<struct FDynamicValue>();

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotator); \
	DECLARE_FUNCTION(execGetVector); \
	DECLARE_FUNCTION(execGetByte); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetId);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBufferData(); \
	friend struct Z_Construct_UClass_UBufferData_Statics; \
public: \
	DECLARE_CLASS(UBufferData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBufferData)


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBufferData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBufferData(UBufferData&&); \
	UBufferData(const UBufferData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBufferData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBufferData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBufferData) \
	NO_API virtual ~UBufferData();


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_56_PROLOG
#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_59_INCLASS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTPLUGIN_API UClass* StaticClass<class UBufferData>();

#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSplitPackets); \
	DECLARE_FUNCTION(execAppendBuffer); \
	DECLARE_FUNCTION(execLength); \
	DECLARE_FUNCTION(execGetBuffer); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execWriteDataToBuffer); \
	DECLARE_FUNCTION(execReadDataFromBuffer); \
	DECLARE_FUNCTION(execGetRotator); \
	DECLARE_FUNCTION(execPutRotator); \
	DECLARE_FUNCTION(execGetVector); \
	DECLARE_FUNCTION(execPutVector); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execPutBool); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execPutFloat); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execPutString); \
	DECLARE_FUNCTION(execGetByte); \
	DECLARE_FUNCTION(execPutByte); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execPutInt32); \
	DECLARE_FUNCTION(execGetId); \
	DECLARE_FUNCTION(execPutId); \
	DECLARE_FUNCTION(execByteArrayToBinaryString); \
	DECLARE_FUNCTION(execByteArrayToHexString); \
	DECLARE_FUNCTION(execCreateByteBufferFromString); \
	DECLARE_FUNCTION(execCreateByteBuffer); \
	DECLARE_FUNCTION(execCreateEmptyByteBuffer);


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUByteBuffer(); \
	friend struct Z_Construct_UClass_UByteBuffer_Statics; \
public: \
	DECLARE_CLASS(UByteBuffer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPlugin"), NO_API) \
	DECLARE_SERIALIZER(UByteBuffer)


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UByteBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UByteBuffer(UByteBuffer&&); \
	UByteBuffer(const UByteBuffer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UByteBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UByteBuffer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UByteBuffer) \
	NO_API virtual ~UByteBuffer();


#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_94_PROLOG
#define FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_97_INCLASS_NO_PURE_DECLS \
	FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTPLUGIN_API UClass* StaticClass<class UByteBuffer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_UsuarioPC_Documents_Unreal_Projects_MMO_Plugins_ClientPlugin_Source_ClientPlugin_Public_ByteBuffer_h


#define FOREACH_ENUM_EDYNAMICVALUETYPE(op) \
	op(EDynamicValueType::ID) \
	op(EDynamicValueType::Int32) \
	op(EDynamicValueType::UInt32) \
	op(EDynamicValueType::Float) \
	op(EDynamicValueType::Bool) \
	op(EDynamicValueType::String) \
	op(EDynamicValueType::Byte) \
	op(EDynamicValueType::Vector) \
	op(EDynamicValueType::Rotator) \
	op(EDynamicValueType::None) 

enum class EDynamicValueType : uint8;
template<> struct TIsUEnumClass<EDynamicValueType> { enum { Value = true }; };
template<> CLIENTPLUGIN_API UEnum* StaticEnum<EDynamicValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

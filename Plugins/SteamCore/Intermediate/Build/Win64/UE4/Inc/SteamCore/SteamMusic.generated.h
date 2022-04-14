// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamAudioPlaybackStatus : uint8;
#ifdef STEAMCORE_SteamMusic_generated_h
#error "SteamMusic.generated.h already included, missing '#pragma once' in SteamMusic.h"
#endif
#define STEAMCORE_SteamMusic_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execPlayNext); \
	DECLARE_FUNCTION(execPlayPrevious); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetPlaybackStatus); \
	DECLARE_FUNCTION(execBIsPlaying); \
	DECLARE_FUNCTION(execBIsEnabled);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execPlayNext); \
	DECLARE_FUNCTION(execPlayPrevious); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetPlaybackStatus); \
	DECLARE_FUNCTION(execBIsPlaying); \
	DECLARE_FUNCTION(execBIsEnabled);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusic(); \
	friend struct Z_Construct_UClass_UMusic_Statics; \
public: \
	DECLARE_CLASS(UMusic, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UMusic)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMusic(); \
	friend struct Z_Construct_UClass_UMusic_Statics; \
public: \
	DECLARE_CLASS(UMusic, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UMusic)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMusic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMusic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMusic(UMusic&&); \
	NO_API UMusic(const UMusic&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMusic(UMusic&&); \
	NO_API UMusic(const UMusic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMusic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMusic)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_14_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UMusic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

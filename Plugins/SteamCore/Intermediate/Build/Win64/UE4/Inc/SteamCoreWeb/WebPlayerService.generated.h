// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_WebPlayerService_generated_h
#error "WebPlayerService.generated.h already included, missing '#pragma once' in WebPlayerService.h"
#endif
#define STEAMCOREWEB_WebPlayerService_generated_h

#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPlayingSharedGame); \
	DECLARE_FUNCTION(execGetCommunityBadgeProgress); \
	DECLARE_FUNCTION(execGetBadges); \
	DECLARE_FUNCTION(execGetSteamLevel); \
	DECLARE_FUNCTION(execGetOwnedGames); \
	DECLARE_FUNCTION(execGetRecentlyPlayedGames);


#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPlayingSharedGame); \
	DECLARE_FUNCTION(execGetCommunityBadgeProgress); \
	DECLARE_FUNCTION(execGetBadges); \
	DECLARE_FUNCTION(execGetSteamLevel); \
	DECLARE_FUNCTION(execGetOwnedGames); \
	DECLARE_FUNCTION(execGetRecentlyPlayedGames);


#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebPlayerService(); \
	friend struct Z_Construct_UClass_UWebPlayerService_Statics; \
public: \
	DECLARE_CLASS(UWebPlayerService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebPlayerService)


#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWebPlayerService(); \
	friend struct Z_Construct_UClass_UWebPlayerService_Statics; \
public: \
	DECLARE_CLASS(UWebPlayerService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebPlayerService)


#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebPlayerService(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebPlayerService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPlayerService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPlayerService); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebPlayerService(UWebPlayerService&&); \
	NO_API UWebPlayerService(const UWebPlayerService&); \
public:


#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebPlayerService(UWebPlayerService&&); \
	NO_API UWebPlayerService(const UWebPlayerService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPlayerService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPlayerService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebPlayerService)


#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_16_PROLOG
#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_INCLASS \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREWEB_API UClass* StaticClass<class UWebPlayerService>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

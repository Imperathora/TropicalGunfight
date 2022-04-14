// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_WebLeaderboards_generated_h
#error "WebLeaderboards.generated.h already included, missing '#pragma once' in WebLeaderboards.h"
#endif
#define STEAMCOREWEB_WebLeaderboards_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLeaderboardScore); \
	DECLARE_FUNCTION(execResetLeaderboard); \
	DECLARE_FUNCTION(execGetLeaderboardsForGame); \
	DECLARE_FUNCTION(execGetLeaderboardEntries); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execDeleteLeaderboard);


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLeaderboardScore); \
	DECLARE_FUNCTION(execResetLeaderboard); \
	DECLARE_FUNCTION(execGetLeaderboardsForGame); \
	DECLARE_FUNCTION(execGetLeaderboardEntries); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execDeleteLeaderboard);


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebLeaderboards(); \
	friend struct Z_Construct_UClass_UWebLeaderboards_Statics; \
public: \
	DECLARE_CLASS(UWebLeaderboards, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebLeaderboards)


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUWebLeaderboards(); \
	friend struct Z_Construct_UClass_UWebLeaderboards_Statics; \
public: \
	DECLARE_CLASS(UWebLeaderboards, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebLeaderboards)


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebLeaderboards(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebLeaderboards) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebLeaderboards); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebLeaderboards); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebLeaderboards(UWebLeaderboards&&); \
	NO_API UWebLeaderboards(const UWebLeaderboards&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebLeaderboards(UWebLeaderboards&&); \
	NO_API UWebLeaderboards(const UWebLeaderboards&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebLeaderboards); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebLeaderboards); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebLeaderboards)


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_19_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREWEB_API UClass* StaticClass<class UWebLeaderboards>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Leaderboards_WebLeaderboards_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

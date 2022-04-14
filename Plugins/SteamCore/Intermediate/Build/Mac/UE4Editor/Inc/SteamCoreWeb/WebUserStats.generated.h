// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_WebUserStats_generated_h
#error "WebUserStats.generated.h already included, missing '#pragma once' in WebUserStats.h"
#endif
#define STEAMCOREWEB_WebUserStats_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUserStatsForGame); \
	DECLARE_FUNCTION(execGetUserStatsForGame); \
	DECLARE_FUNCTION(execGetSchemaForGame); \
	DECLARE_FUNCTION(execGetPlayerAchievements); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetGlobalStatsForGame); \
	DECLARE_FUNCTION(execGetGlobalAchievementPercentagesForApp);


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUserStatsForGame); \
	DECLARE_FUNCTION(execGetUserStatsForGame); \
	DECLARE_FUNCTION(execGetSchemaForGame); \
	DECLARE_FUNCTION(execGetPlayerAchievements); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetGlobalStatsForGame); \
	DECLARE_FUNCTION(execGetGlobalAchievementPercentagesForApp);


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebUserStats(); \
	friend struct Z_Construct_UClass_UWebUserStats_Statics; \
public: \
	DECLARE_CLASS(UWebUserStats, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebUserStats)


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWebUserStats(); \
	friend struct Z_Construct_UClass_UWebUserStats_Statics; \
public: \
	DECLARE_CLASS(UWebUserStats, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebUserStats)


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebUserStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebUserStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebUserStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebUserStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebUserStats(UWebUserStats&&); \
	NO_API UWebUserStats(const UWebUserStats&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebUserStats(UWebUserStats&&); \
	NO_API UWebUserStats(const UWebUserStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebUserStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebUserStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebUserStats)


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_16_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREWEB_API UClass* StaticClass<class UWebUserStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

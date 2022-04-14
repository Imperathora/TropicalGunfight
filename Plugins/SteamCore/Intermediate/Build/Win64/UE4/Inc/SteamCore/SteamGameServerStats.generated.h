// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
#ifdef STEAMCORE_SteamGameServerStats_generated_h
#error "SteamGameServerStats.generated.h already included, missing '#pragma once' in SteamGameServerStats.h"
#endif
#define STEAMCORE_SteamGameServerStats_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execSetUserStatInt); \
	DECLARE_FUNCTION(execSetUserStatFloat); \
	DECLARE_FUNCTION(execSetUserAchievement); \
	DECLARE_FUNCTION(execServerStoreUserStats); \
	DECLARE_FUNCTION(execServerRequestUserStats); \
	DECLARE_FUNCTION(execGetUserStatInt); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execClearUserAchievement);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execSetUserStatInt); \
	DECLARE_FUNCTION(execSetUserStatFloat); \
	DECLARE_FUNCTION(execSetUserAchievement); \
	DECLARE_FUNCTION(execServerStoreUserStats); \
	DECLARE_FUNCTION(execServerRequestUserStats); \
	DECLARE_FUNCTION(execGetUserStatInt); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execClearUserAchievement);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameServerStats(); \
	friend struct Z_Construct_UClass_UGameServerStats_Statics; \
public: \
	DECLARE_CLASS(UGameServerStats, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UGameServerStats)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGameServerStats(); \
	friend struct Z_Construct_UClass_UGameServerStats_Statics; \
public: \
	DECLARE_CLASS(UGameServerStats, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UGameServerStats)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameServerStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameServerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameServerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameServerStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameServerStats(UGameServerStats&&); \
	NO_API UGameServerStats(const UGameServerStats&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameServerStats(UGameServerStats&&); \
	NO_API UGameServerStats(const UGameServerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameServerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameServerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameServerStats)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_14_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UGameServerStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

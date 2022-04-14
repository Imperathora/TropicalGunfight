// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerRule;
struct FGameServerItem;
 
#ifdef STEAMCORE_SteamMatchmakingServersTypes_generated_h
#error "SteamMatchmakingServersTypes.generated.h already included, missing '#pragma once' in SteamMatchmakingServersTypes.h"
#endif
#define STEAMCORE_SteamMatchmakingServersTypes_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameServerRule_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGameServerRule>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameServerItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGameServerItem>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__IP() { return STRUCT_OFFSET(FSteamServerAddr, IP); } \
	FORCEINLINE static uint32 __PPO__Port() { return STRUCT_OFFSET(FSteamServerAddr, Port); } \
	FORCEINLINE static uint32 __PPO__QueryPort() { return STRUCT_OFFSET(FSteamServerAddr, QueryPort); } \
	FORCEINLINE static uint32 __PPO__ConnectionAddressString() { return STRUCT_OFFSET(FSteamServerAddr, ConnectionAddressString); } \
	FORCEINLINE static uint32 __PPO__SteamP2PAddr() { return STRUCT_OFFSET(FSteamServerAddr, SteamP2PAddr); }


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamServerAddr>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_212_DELEGATE \
static inline void FOnServerRefreshCompleted_DelegateWrapper(const FScriptDelegate& OnServerRefreshCompleted) \
{ \
	OnServerRefreshCompleted.ProcessDelegate<UObject>(NULL); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_211_DELEGATE \
struct _Script_SteamCore_eventOnServerRules_Parms \
{ \
	TArray<FGameServerRule> data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerRules_DelegateWrapper(const FScriptDelegate& OnServerRules, TArray<FGameServerRule> const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerRules_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerRules.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_210_DELEGATE \
struct _Script_SteamCore_eventOnServerPing_Parms \
{ \
	FGameServerItem data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerPing_DelegateWrapper(const FScriptDelegate& OnServerPing, FGameServerItem const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerPing_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerPing.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_209_DELEGATE \
struct _Script_SteamCore_eventOnServerUpdated_Parms \
{ \
	FGameServerItem data; \
}; \
static inline void FOnServerUpdated_DelegateWrapper(const FScriptDelegate& OnServerUpdated, FGameServerItem const& data) \
{ \
	_Script_SteamCore_eventOnServerUpdated_Parms Parms; \
	Parms.data=data; \
	OnServerUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFilters); \
	DECLARE_FUNCTION(execAddFilterLinux); \
	DECLARE_FUNCTION(execAddFilterNoPlayers); \
	DECLARE_FUNCTION(execAddFilterHasPlayers); \
	DECLARE_FUNCTION(execAddFilterNotFull); \
	DECLARE_FUNCTION(execAddFilterSecure); \
	DECLARE_FUNCTION(execAddFilterDedicated); \
	DECLARE_FUNCTION(execAddFilterGameAddr); \
	DECLARE_FUNCTION(execAddFilterNor); \
	DECLARE_FUNCTION(execAddFilterNand); \
	DECLARE_FUNCTION(execAddFilterOr); \
	DECLARE_FUNCTION(execAddFilterAnd); \
	DECLARE_FUNCTION(execAddFilterGameTagsNor); \
	DECLARE_FUNCTION(execAddFilterGameTagsAnd); \
	DECLARE_FUNCTION(execAddFilterGameDataNor); \
	DECLARE_FUNCTION(execAddFilterGameDataOr); \
	DECLARE_FUNCTION(execAddFilterGameDataAnd); \
	DECLARE_FUNCTION(execAddFilterMap);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFilters); \
	DECLARE_FUNCTION(execAddFilterLinux); \
	DECLARE_FUNCTION(execAddFilterNoPlayers); \
	DECLARE_FUNCTION(execAddFilterHasPlayers); \
	DECLARE_FUNCTION(execAddFilterNotFull); \
	DECLARE_FUNCTION(execAddFilterSecure); \
	DECLARE_FUNCTION(execAddFilterDedicated); \
	DECLARE_FUNCTION(execAddFilterGameAddr); \
	DECLARE_FUNCTION(execAddFilterNor); \
	DECLARE_FUNCTION(execAddFilterNand); \
	DECLARE_FUNCTION(execAddFilterOr); \
	DECLARE_FUNCTION(execAddFilterAnd); \
	DECLARE_FUNCTION(execAddFilterGameTagsNor); \
	DECLARE_FUNCTION(execAddFilterGameTagsAnd); \
	DECLARE_FUNCTION(execAddFilterGameDataNor); \
	DECLARE_FUNCTION(execAddFilterGameDataOr); \
	DECLARE_FUNCTION(execAddFilterGameDataAnd); \
	DECLARE_FUNCTION(execAddFilterMap);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerFilter(); \
	friend struct Z_Construct_UClass_UServerFilter_Statics; \
public: \
	DECLARE_CLASS(UServerFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UServerFilter)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUServerFilter(); \
	friend struct Z_Construct_UClass_UServerFilter_Statics; \
public: \
	DECLARE_CLASS(UServerFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UServerFilter)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerFilter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFilter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerFilter(UServerFilter&&); \
	NO_API UServerFilter(const UServerFilter&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerFilter(UServerFilter&&); \
	NO_API UServerFilter(const UServerFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UServerFilter)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_15_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UServerFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

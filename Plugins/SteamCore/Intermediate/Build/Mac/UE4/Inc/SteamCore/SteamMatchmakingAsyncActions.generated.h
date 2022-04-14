// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamSessionResult;
struct FJoinLobbyData;
struct FCreateLobbyData;
struct FLobbyMatchList;
class UObject;
enum class ESteamLobbyType : uint8;
class USteamCoreMatchmakingAsyncActionCreateLobby;
class USteamCoreMatchmakingAsyncActionRequestLobbyList;
struct FSteamID;
class USteamCoreMatchmakingAsyncActionJoinLobby;
 struct FSteamSessionSetting;
class USteamCoreCreateSession;
 struct FSteamSessionSearchSetting;
enum class ESteamSessionFindType : uint8;
class USteamCoreFindSession;
class USteamCoreDestroySession;
#ifdef STEAMCORE_SteamMatchmakingAsyncActions_generated_h
#error "SteamMatchmakingAsyncActions.generated.h already included, missing '#pragma once' in SteamMatchmakingAsyncActions.h"
#endif
#define STEAMCORE_SteamMatchmakingAsyncActions_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_141_DELEGATE \
struct _Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms \
{ \
	TArray<FSteamSessionResult> results; \
}; \
static inline void FFindSteamSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindSteamSessionsResultDelegate, TArray<FSteamSessionResult> const& results) \
{ \
	_Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms Parms; \
	Parms.results=results; \
	FindSteamSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_22_DELEGATE \
struct _Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms \
{ \
	FJoinLobbyData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnJoinLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobbyAsyncDelegate, FJoinLobbyData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnJoinLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_21_DELEGATE \
struct _Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms \
{ \
	FCreateLobbyData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateLobbyAsyncDelegate, FCreateLobbyData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_20_DELEGATE \
struct _Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms \
{ \
	FLobbyMatchList data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestLobbyListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyListAsyncDelegate, FLobbyMatchList const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestLobbyListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateLobbyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateLobbyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionCreateLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionCreateLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionCreateLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionCreateLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionCreateLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionCreateLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionCreateLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(USteamCoreMatchmakingAsyncActionCreateLobby&&); \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const USteamCoreMatchmakingAsyncActionCreateLobby&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(USteamCoreMatchmakingAsyncActionCreateLobby&&); \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const USteamCoreMatchmakingAsyncActionCreateLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionCreateLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionCreateLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionCreateLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_29_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreMatchmakingAsyncActionCreateLobby>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestLobbyListAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestLobbyListAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionRequestLobbyList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionRequestLobbyList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionRequestLobbyList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionRequestLobbyList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionRequestLobbyList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionRequestLobbyList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionRequestLobbyList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(USteamCoreMatchmakingAsyncActionRequestLobbyList&&); \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const USteamCoreMatchmakingAsyncActionRequestLobbyList&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(USteamCoreMatchmakingAsyncActionRequestLobbyList&&); \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const USteamCoreMatchmakingAsyncActionRequestLobbyList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionRequestLobbyList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionRequestLobbyList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionRequestLobbyList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_53_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreMatchmakingAsyncActionRequestLobbyList>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinLobbyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinLobbyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionJoinLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionJoinLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionJoinLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionJoinLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionJoinLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionJoinLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionJoinLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(USteamCoreMatchmakingAsyncActionJoinLobby&&); \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const USteamCoreMatchmakingAsyncActionJoinLobby&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(USteamCoreMatchmakingAsyncActionJoinLobby&&); \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const USteamCoreMatchmakingAsyncActionJoinLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionJoinLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionJoinLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionJoinLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_79_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreMatchmakingAsyncActionJoinLobby>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSteamCoreSession);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSteamCoreSession);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreCreateSession(); \
	friend struct Z_Construct_UClass_USteamCoreCreateSession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreCreateSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreCreateSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreCreateSession(); \
	friend struct Z_Construct_UClass_USteamCoreCreateSession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreCreateSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreCreateSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreCreateSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreCreateSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreCreateSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreCreateSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreCreateSession(USteamCoreCreateSession&&); \
	NO_API USteamCoreCreateSession(const USteamCoreCreateSession&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreCreateSession(USteamCoreCreateSession&&); \
	NO_API USteamCoreCreateSession(const USteamCoreCreateSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreCreateSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreCreateSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreCreateSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_103_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreCreateSession>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execFindSteamCoreSessions);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execFindSteamCoreSessions);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFindSession(); \
	friend struct Z_Construct_UClass_USteamCoreFindSession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFindSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFindSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFindSession(); \
	friend struct Z_Construct_UClass_USteamCoreFindSession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFindSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFindSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFindSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFindSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFindSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFindSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFindSession(USteamCoreFindSession&&); \
	NO_API USteamCoreFindSession(const USteamCoreFindSession&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFindSession(USteamCoreFindSession&&); \
	NO_API USteamCoreFindSession(const USteamCoreFindSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFindSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFindSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreFindSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_146_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFindSession>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execDestroySteamCoreSession);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execDestroySteamCoreSession);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreDestroySession(); \
	friend struct Z_Construct_UClass_USteamCoreDestroySession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreDestroySession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreDestroySession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreDestroySession(); \
	friend struct Z_Construct_UClass_USteamCoreDestroySession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreDestroySession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreDestroySession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreDestroySession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreDestroySession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreDestroySession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreDestroySession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreDestroySession(USteamCoreDestroySession&&); \
	NO_API USteamCoreDestroySession(const USteamCoreDestroySession&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreDestroySession(USteamCoreDestroySession&&); \
	NO_API USteamCoreDestroySession(const USteamCoreDestroySession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreDestroySession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreDestroySession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreDestroySession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_192_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_195_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreDestroySession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEndGameResultCallback;
struct FSubmitPlayerResultResultCallback;
struct FRequestPlayersForGameFinalResultCallback;
struct FRequestPlayersForGameResultCallback;
struct FRequestPlayersForGameProgressCallback;
struct FSearchForGameResultCallback;
struct FSearchForGameProgressCallback;
#ifdef STEAMCORE_SteamGameSearchTypes_generated_h
#error "SteamGameSearchTypes.generated.h already included, missing '#pragma once' in SteamGameSearchTypes.h"
#endif
#define STEAMCORE_SteamGameSearchTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEndGameResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FEndGameResultCallback>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSubmitPlayerResultResultCallback>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRequestPlayersForGameFinalResultCallback>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRequestPlayersForGameResultCallback>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRequestPlayersForGameProgressCallback>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSearchForGameResultCallback>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSearchForGameProgressCallback>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_272_DELEGATE \
struct _Script_SteamCore_eventEndGameResultDelegate_Parms \
{ \
	FEndGameResultCallback data; \
}; \
static inline void FEndGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndGameResultDelegate, FEndGameResultCallback const& data) \
{ \
	_Script_SteamCore_eventEndGameResultDelegate_Parms Parms; \
	Parms.data=data; \
	EndGameResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_271_DELEGATE \
struct _Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms \
{ \
	FSubmitPlayerResultResultCallback data; \
}; \
static inline void FSubmitPlayerResultResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SubmitPlayerResultResultDelegate, FSubmitPlayerResultResultCallback const& data) \
{ \
	_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms Parms; \
	Parms.data=data; \
	SubmitPlayerResultResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_270_DELEGATE \
struct _Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms \
{ \
	FRequestPlayersForGameFinalResultCallback data; \
}; \
static inline void FRequestPlayersForGameFinalResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameFinalResultDelegate, FRequestPlayersForGameFinalResultCallback const& data) \
{ \
	_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms Parms; \
	Parms.data=data; \
	RequestPlayersForGameFinalResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_269_DELEGATE \
struct _Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms \
{ \
	FRequestPlayersForGameResultCallback data; \
}; \
static inline void FRequestPlayersForGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameResultDelegate, FRequestPlayersForGameResultCallback const& data) \
{ \
	_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms Parms; \
	Parms.data=data; \
	RequestPlayersForGameResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_268_DELEGATE \
struct _Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms \
{ \
	FRequestPlayersForGameProgressCallback data; \
}; \
static inline void FRequestPlayersForGameProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameProgressDelegate, FRequestPlayersForGameProgressCallback const& data) \
{ \
	_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms Parms; \
	Parms.data=data; \
	RequestPlayersForGameProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_267_DELEGATE \
struct _Script_SteamCore_eventSearchForGameResultDelegate_Parms \
{ \
	FSearchForGameResultCallback data; \
}; \
static inline void FSearchForGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SearchForGameResultDelegate, FSearchForGameResultCallback const& data) \
{ \
	_Script_SteamCore_eventSearchForGameResultDelegate_Parms Parms; \
	Parms.data=data; \
	SearchForGameResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_266_DELEGATE \
struct _Script_SteamCore_eventSearchForGameProgressDelegate_Parms \
{ \
	FSearchForGameProgressCallback data; \
}; \
static inline void FSearchForGameProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& SearchForGameProgressDelegate, FSearchForGameProgressCallback const& data) \
{ \
	_Script_SteamCore_eventSearchForGameProgressDelegate_Parms Parms; \
	Parms.data=data; \
	SearchForGameProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h


#define FOREACH_ENUM_ESTEAMPLAYERACCEPTSTATE(op) \
	op(ESteamPlayerAcceptState::Unknown) \
	op(ESteamPlayerAcceptState::PlayerAccepted) \
	op(ESteamPlayerAcceptState::PlayerDeclined) 

enum class ESteamPlayerAcceptState : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerAcceptState>();

#define FOREACH_ENUM_ESTEAMPLAYERRESULT(op) \
	op(ESteamPlayerResult::Invalid) \
	op(ESteamPlayerResult::FailedToConnect) \
	op(ESteamPlayerResult::Abandoned) \
	op(ESteamPlayerResult::Kicked) \
	op(ESteamPlayerResult::Incomplete) \
	op(ESteamPlayerResult::Completed) 

enum class ESteamPlayerResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerResult>();

#define FOREACH_ENUM_ESTEAMGAMESEARCHERRORCODE(op) \
	op(ESteamGameSearchErrorCode::Invalid) \
	op(ESteamGameSearchErrorCode::OK) \
	op(ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress) \
	op(ESteamGameSearchErrorCode::Failed_No_Search_In_Progress) \
	op(ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader) \
	op(ESteamGameSearchErrorCode::Failed_No_Host_Available) \
	op(ESteamGameSearchErrorCode::Failed_Search_Params_Invalid) \
	op(ESteamGameSearchErrorCode::Failed_Offline) \
	op(ESteamGameSearchErrorCode::Failed_NotAuthorized) \
	op(ESteamGameSearchErrorCode::Failed_Unknown_Error) 

enum class ESteamGameSearchErrorCode : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamGameSearchErrorCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

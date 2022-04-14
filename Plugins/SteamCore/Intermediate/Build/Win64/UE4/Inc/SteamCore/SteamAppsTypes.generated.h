// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFileDetailsResult;
struct FDLCInstalled;
#ifdef STEAMCORE_SteamAppsTypes_generated_h
#error "SteamAppsTypes.generated.h already included, missing '#pragma once' in SteamAppsTypes.h"
#endif
#define STEAMCORE_SteamAppsTypes_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDLCInstalled_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FDLCInstalled>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FFileDetailsResult>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_67_DELEGATE \
struct _Script_SteamCore_eventOnFileDetailsResultDelegate_Parms \
{ \
	FFileDetailsResult data; \
}; \
static inline void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& data) \
{ \
	_Script_SteamCore_eventOnFileDetailsResultDelegate_Parms Parms; \
	Parms.data=data; \
	OnFileDetailsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_66_DELEGATE \
struct _Script_SteamCore_eventOnDLCInstalled_Parms \
{ \
	FDLCInstalled data; \
}; \
static inline void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& data) \
{ \
	_Script_SteamCore_eventOnDLCInstalled_Parms Parms; \
	Parms.data=data; \
	OnDLCInstalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h_64_DELEGATE \
struct _Script_SteamCore_eventOnFileDetailsResult_Parms \
{ \
	FFileDetailsResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileDetailsResult_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileDetailsResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

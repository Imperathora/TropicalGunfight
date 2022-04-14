// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageFileShareResult;
struct FRemoteStorageDownloadUGCResult;
struct FRemoteStorageFileReadAsyncComplete;
struct FRemoteStorageFileWriteAsyncComplete;
struct FRemoteStoragePublishedFileSubscribed;
struct FRemoteStoragePublishedFileUnsubscribed;
struct FRemoteStorageSubscribePublishedFileResult;
struct FRemoteStorageUnsubscribePublishedFileResult;
#ifdef STEAMCORE_SteamRemoteStorageTypes_generated_h
#error "SteamRemoteStorageTypes.generated.h already included, missing '#pragma once' in SteamRemoteStorageTypes.h"
#endif
#define STEAMCORE_SteamRemoteStorageTypes_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageDownloadUGCResult>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStoragePublishedFileSubscribed>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStoragePublishedFileUnsubscribed>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageUnsubscribePublishedFileResult>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileShareResult>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileReadAsyncComplete>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileWriteAsyncComplete>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FUGCFileWriteStreamHandle>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_213_DELEGATE \
struct _Script_SteamCore_eventOnFileShareAsync_Parms \
{ \
	FRemoteStorageFileShareResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileShareAsync_DelegateWrapper(const FScriptDelegate& OnFileShareAsync, FRemoteStorageFileShareResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileShareAsync_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileShareAsync.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_212_DELEGATE \
struct _Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms \
{ \
	FRemoteStorageDownloadUGCResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnUGCDownloadToLocationAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadToLocationAsync, FRemoteStorageDownloadUGCResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnUGCDownloadToLocationAsync.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_211_DELEGATE \
struct _Script_SteamCore_eventOnUGCDownloadAsync_Parms \
{ \
	FRemoteStorageDownloadUGCResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnUGCDownloadAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadAsync, FRemoteStorageDownloadUGCResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnUGCDownloadAsync_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnUGCDownloadAsync.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_210_DELEGATE \
struct _Script_SteamCore_eventOnFileReadAsync_Parms \
{ \
	FRemoteStorageFileReadAsyncComplete data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileReadAsync_DelegateWrapper(const FScriptDelegate& OnFileReadAsync, FRemoteStorageFileReadAsyncComplete const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileReadAsync_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileReadAsync.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_209_DELEGATE \
struct _Script_SteamCore_eventOnFileWriteAsync_Parms \
{ \
	FRemoteStorageFileWriteAsyncComplete data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileWriteAsync_DelegateWrapper(const FScriptDelegate& OnFileWriteAsync, FRemoteStorageFileWriteAsyncComplete const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileWriteAsync_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileWriteAsync.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_207_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms \
{ \
	FRemoteStoragePublishedFileSubscribed data; \
}; \
static inline void FOnRemoteStoragePublishedFileSubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribed, FRemoteStoragePublishedFileSubscribed const& data) \
{ \
	_Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms Parms; \
	Parms.data=data; \
	OnRemoteStoragePublishedFileSubscribed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_206_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms \
{ \
	FRemoteStoragePublishedFileUnsubscribed data; \
}; \
static inline void FOnRemoteStoragePublishedFileUnsubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribed, FRemoteStoragePublishedFileUnsubscribed const& data) \
{ \
	_Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms Parms; \
	Parms.data=data; \
	OnRemoteStoragePublishedFileUnsubscribed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_205_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult data; \
}; \
static inline void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FRemoteStorageSubscribePublishedFileResult const& data) \
{ \
	_Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms Parms; \
	Parms.data=data; \
	OnRemoteStorageSubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_204_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms \
{ \
	FRemoteStorageUnsubscribePublishedFileResult data; \
}; \
static inline void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FRemoteStorageUnsubscribePublishedFileResult const& data) \
{ \
	_Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms Parms; \
	Parms.data=data; \
	OnRemoteStorageUnsubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h


#define FOREACH_ENUM_ESTEAMUGCREADACTION(op) \
	op(ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished) \
	op(ESteamUGCReadAction::k_EUGCRead_ContinueReading) \
	op(ESteamUGCReadAction::k_EUGCRead_Close) 

enum class ESteamUGCReadAction : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUGCReadAction>();

#define FOREACH_ENUM_ESTEAMREMOTESTORAGEPLATFORM(op) \
	op(ESteamRemoteStoragePlatform::None) \
	op(ESteamRemoteStoragePlatform::Windows) \
	op(ESteamRemoteStoragePlatform::OSX) \
	op(ESteamRemoteStoragePlatform::PS3) \
	op(ESteamRemoteStoragePlatform::Linux) \
	op(ESteamRemoteStoragePlatform::Reserved2) \
	op(ESteamRemoteStoragePlatform::All) 

enum class ESteamRemoteStoragePlatform : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

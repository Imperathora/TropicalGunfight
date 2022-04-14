/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamRemoteStorageTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileWriteAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync(class USteamCoreSubsystem* subsystem, FOnFileWriteAsync callback, FString file, TArray<uint8> data)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_File(file)
		, m_Data(data)
	{}
private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync() = delete;
protected:
	RemoteStorageFileWriteAsyncComplete_t m_CallbackResults;
	FString m_File;
	TArray<uint8> m_Data;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileReadAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync(class USteamCoreSubsystem* subsystem, FOnFileReadAsync callback, FString file, int32 offset, int32 bytesToRead)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_File(file)
		, m_Offset(offset)
		, m_BytesToRead(bytesToRead)
	{}
private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync() = delete;
protected:
	RemoteStorageFileReadAsyncComplete_t m_CallbackResults;
	FString m_File;
	int32 m_Offset;
	int32 m_BytesToRead;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageFileShare : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileShareAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileShare(class USteamCoreSubsystem* subsystem, FOnFileShareAsync callback, FString file)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_File(file)
	{}
private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileShare() = delete;
protected:
	RemoteStorageFileShareResult_t m_CallbackResults;
	FString m_File;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileShare")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUGCDownloadAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload(class USteamCoreSubsystem* subsystem, FOnUGCDownloadAsync callback, FSteamUGCHandle content, int32 priority)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
	{}
private:
	FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload() = delete;
protected:
	RemoteStorageDownloadUGCResult_t m_CallbackResults;
	FSteamUGCHandle Content;
	int32 Priority;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUGCDownloadToLocationAsync m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation(class USteamCoreSubsystem* subsystem, FOnUGCDownloadToLocationAsync callback, FSteamUGCHandle content, FString location, int32 priority)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
	{}
private:
	FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation() = delete;
protected:
	RemoteStorageDownloadUGCResult_t m_CallbackResults;
	FSteamUGCHandle Content;
	FString Location;
	int32 Priority;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation")); }
};
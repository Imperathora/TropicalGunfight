/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#include "SteamRemoteStorage/SteamRemoteStorage.h"
#include "SteamRemoteStorage/SteamRemoteStorageAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void URemoteStorage::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnRemoteStorageUnsubscribePublishedFileResultCallback.Register(this, &URemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult);
	OnRemoteStorageSubscribePublishedFileResultCallback.Register(this, &URemoteStorage::OnRemoteStorageSubscribePublishedFileResult);

	if (IsRunningDedicatedServer())
	{
		OnRemoteStorageSubscribePublishedFileResultCallback.SetGameserverFlag();
		OnRemoteStorageUnsubscribePublishedFileResultCallback.SetGameserverFlag();
	}
}

void URemoteStorage::Deinitialize()
{
	OnRemoteStorageUnsubscribePublishedFileResultCallback.Unregister();
	OnRemoteStorageSubscribePublishedFileResultCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool URemoteStorage::FileDelete(FString file)
{
	LogVerbose("");
	
	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileDelete(TCHAR_TO_UTF8(*file));
	}

	return bResult;
}

bool URemoteStorage::FileExists(FString file)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileExists(TCHAR_TO_UTF8(*file));
	}

	return bResult;
}

bool URemoteStorage::FileForget(FString file)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileForget(TCHAR_TO_UTF8(*file));
	}

	return bResult;
}

bool URemoteStorage::FilePersisted(FString file)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FilePersisted(TCHAR_TO_UTF8(*file));
	}

	return bResult;
}

int32 URemoteStorage::FileRead(FString file, TArray<uint8>& outBuffer, int32 dataToRead)
{
	LogVerbose("");

	int32 m_Result = 0;
	outBuffer.Empty();

	if (SteamRemoteStorage())
	{
		outBuffer.SetNum(dataToRead);

		m_Result = SteamRemoteStorage()->FileRead(TCHAR_TO_UTF8(*file), outBuffer.GetData(), outBuffer.Num());
	}

	return m_Result;
}

void URemoteStorage::FileReadAsync(const FOnFileReadAsync& callback, FString file, int32 offset, int32 bytesToRead)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync(this, callback, file, offset, bytesToRead);
		QueueAsyncTask(Task);
	}
}

bool URemoteStorage::FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete readCall, TArray<uint8>& outBuffer, int32 bytesToRead)
{
	LogVerbose("");

	bool bResult = false;

	outBuffer.Empty();

	if (SteamRemoteStorage())
	{
		outBuffer.SetNum(bytesToRead);

		bResult = SteamRemoteStorage()->FileReadAsyncComplete(readCall.m_hFileReadAsync, outBuffer.GetData(), outBuffer.Num());
	}

	return bResult;
}

void URemoteStorage::FileShare(const FOnFileShareAsync& callback, FString file)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileShare(this, callback, file);
		QueueAsyncTask(Task);
	}
}

bool URemoteStorage::FileWrite(FString file, TArray<uint8> data)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWrite(TCHAR_TO_UTF8(*file), data.GetData(), data.Num());
	}

	return bResult;
}

void URemoteStorage::FileWriteAsync(const FOnFileWriteAsync& callback, FString file, TArray<uint8> data)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync(this, callback, file, data);
		QueueAsyncTask(Task);
	}
}

bool URemoteStorage::FileWriteStreamCancel(FUGCFileWriteStreamHandle handle)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamCancel(handle);
	}

	return bResult;
}

bool URemoteStorage::FileWriteStreamClose(FUGCFileWriteStreamHandle handle)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamClose(handle);
	}

	return bResult;
}

FUGCFileWriteStreamHandle URemoteStorage::FileWriteStreamOpen(FString file)
{
	LogVerbose("");

	FUGCFileWriteStreamHandle Result;

	if (SteamRemoteStorage())
	{
		Result = FUGCFileWriteStreamHandle(SteamRemoteStorage()->FileWriteStreamOpen(TCHAR_TO_UTF8(*file)));
	}

	return Result;
}

bool URemoteStorage::FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle handle, TArray<uint8> data)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->FileWriteStreamWriteChunk(handle, data.GetData(), data.Num());
	}

	return bResult;
}

int32 URemoteStorage::GetCachedUGCCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetCachedUGCCount();
	}

	return Result;
}

FSteamUGCHandle URemoteStorage::GetCachedUGCHandle(int32 iCachedContent)
{
	LogVeryVerbose("");

	FSteamUGCHandle Result;

	if (SteamRemoteStorage())
	{
		Result = FSteamUGCHandle(SteamRemoteStorage()->GetCachedUGCHandle(iCachedContent));
	}

	return Result;
}

int32 URemoteStorage::GetFileCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileCount();
	}

	return Result;
}

FString URemoteStorage::GetFileNameAndSize(int32 file, int32& outFileSizeInBytes)
{
	LogVeryVerbose("");

	FString Result;
	outFileSizeInBytes = 0;

	if (SteamRemoteStorage())
	{
		Result = UTF8_TO_TCHAR(SteamRemoteStorage()->GetFileNameAndSize(file, &outFileSizeInBytes));
	}

	return Result;
}

int32 URemoteStorage::GetFileSize(FString file)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileSize(TCHAR_TO_UTF8(*file));
	}

	return Result;
}

int32 URemoteStorage::GetFileTimestamp(FString file)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->GetFileTimestamp(TCHAR_TO_UTF8(*file));
	}

	return Result;

}

bool URemoteStorage::GetQuota(int32& outTotalBytes, int32& outAvailableBytes)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint64 TotalBytes = 0;
	uint64 AvailableBytes = 0;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->GetQuota((&TotalBytes), &AvailableBytes);
	}

	outTotalBytes = TotalBytes;
	outAvailableBytes = AvailableBytes;

	return bResult;
}

ESteamRemoteStoragePlatform URemoteStorage::GetSyncPlatforms(FString file)
{
	LogVeryVerbose("");

	ESteamRemoteStoragePlatform Result = ESteamRemoteStoragePlatform::None;

	if (SteamRemoteStorage())
	{
		Result = static_cast<ESteamRemoteStoragePlatform>(SteamRemoteStorage()->GetSyncPlatforms(TCHAR_TO_UTF8(*file)));
	}

	return Result;
}

bool URemoteStorage::GetUGCDetails(FSteamUGCHandle handle, int32& outAppID, FString& outName, int32& outFileSizeInBytes, FSteamID& outSteamIdOwner)
{
	LogVeryVerbose("");

	bool bResult = false;
	
	uint32 AppId = 0;
	outName.Empty();
	outFileSizeInBytes = 0;
	outSteamIdOwner = FSteamID();

	if (SteamRemoteStorage())
	{
		CSteamID SteamIdOwner;
		TArray<char*> Name;
		Name.SetNum(64);

		bResult = SteamRemoteStorage()->GetUGCDetails(handle, &AppId, Name.GetData(), &outFileSizeInBytes, &SteamIdOwner);
		
		if (bResult)
		{
			outSteamIdOwner = SteamIdOwner;
			outAppID = AppId;
			outName = UTF8_TO_TCHAR(Name.GetData());
		}
	}

	return bResult;
}

void URemoteStorage::UGCDownload(const FOnUGCDownloadAsync& callback, FSteamUGCHandle content, int32 priority)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload(this, callback, content, priority);
		QueueAsyncTask(Task);
	}
}

int32 URemoteStorage::UGCRead(FSteamUGCHandle content, TArray<uint8>& outData, int32 dataToRead, int32 offset, ESteamUGCReadAction action)
{
	LogVerbose("");

	int32 Result = 0;

	outData.Empty();
	outData.AddUninitialized(dataToRead);

	if (SteamRemoteStorage())
	{
		Result = SteamRemoteStorage()->UGCRead(content, outData.GetData(), outData.Num(), offset, static_cast<EUGCReadAction>(action));
	}
	
	return Result;
}

void URemoteStorage::UGCDownloadToLocation(const FOnUGCDownloadToLocationAsync& callback, FSteamUGCHandle content, FString location, int32 priority)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation* Task = new FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation(this, callback, content, location, priority);
		QueueAsyncTask(Task);
	}
}

bool URemoteStorage::GetUGCDownloadProgress(FSteamUGCHandle handle, int32& outBytesDownloaded, int32& outBytesExpected)
{
	LogVeryVerbose("");

	bool bResult = false;

	outBytesDownloaded = 0;
	outBytesExpected = 0;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->GetUGCDownloadProgress(handle, &outBytesDownloaded, &outBytesExpected);
	}

	return bResult;
}

bool URemoteStorage::IsCloudEnabledForAccount()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->IsCloudEnabledForAccount();
	}

	return bResult;
}

bool URemoteStorage::IsCloudEnabledForApp()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->IsCloudEnabledForApp();
	}

	return bResult;
}

void URemoteStorage::SetCloudEnabledForApp(bool bEnabled)
{
	LogVerbose("");

	if (SteamRemoteStorage())
	{
		SteamRemoteStorage()->SetCloudEnabledForApp(bEnabled);
	}
}

bool URemoteStorage::SetSyncPlatforms(FString file, ESteamRemoteStoragePlatform RemoteStoragePlatform)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamRemoteStorage())
	{
		bResult = SteamRemoteStorage()->SetSyncPlatforms(TCHAR_TO_UTF8(*file), static_cast<ERemoteStoragePlatform>(RemoteStoragePlatform));
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void URemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult(RemoteStorageUnsubscribePublishedFileResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			RemoteStorageUnsubscribePublishedFileResult.Broadcast(Data);
		});
}

void URemoteStorage::OnRemoteStorageSubscribePublishedFileResult(RemoteStorageSubscribePublishedFileResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			RemoteStorageSubscribePublishedFileResult.Broadcast(Data);
		});
}

void URemoteStorage::OnRemoteStoragePublishedFileUnsubscribed(RemoteStoragePublishedFileUnsubscribed_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			RemoteStoragePublishedFileUnsubscribed.Broadcast(Data);
		});
}

void URemoteStorage::OnRemoteStoragePublishedFileSubscribed(RemoteStoragePublishedFileSubscribed_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			RemoteStoragePublishedFileSubscribed.Broadcast(Data);
		});
}
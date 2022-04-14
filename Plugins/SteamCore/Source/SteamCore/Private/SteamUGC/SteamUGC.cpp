/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "SteamUGC/SteamUGC.h"
#include "SteamUGC/SteamUGCAsyncTasks.h"
#include "SteamCore/Steam.h"
#include "SteamCorePluginPrivatePCH.h"
#include <string>
#include <sstream>

void UUGC::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnDownloadItemResultCallback.Register(this, &UUGC::OnDownloadItemResult);
	OnItemInstalledCallback.Register(this, &UUGC::OnItemInstalled);

	if (IsRunningDedicatedServer())
	{
		OnDownloadItemResultCallback.SetGameserverFlag();
		OnItemInstalledCallback.SetGameserverFlag();
	}
}

void UUGC::Deinitialize()
{
	OnDownloadItemResultCallback.Unregister();
	OnItemInstalledCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUGC::AddAppDependency(const FOnAddAppDependencyResult& callback, FPublishedFileID publishedFileID, int32 appID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddAppDependency* Task = new FOnlineAsyncTaskSteamCoreUGCAddAppDependency(this, callback, publishedFileID, appID);
		QueueAsyncTask(Task);
	}
}

void UUGC::AddDependency(const FOnAddUGCDependencyResult& callback, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddUGCDependency* Task = new FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(this, callback, publishedFileID, childPublishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::AddExcludedTag(FUGCQueryHandle handle, FString tagName)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->AddExcludedTag(handle, TCHAR_TO_UTF8(*tagName));
	}

	return bResult;
}

bool UUGC::AddItemKeyValueTag(FUGCUpdateHandle handle, FString key, FString value)
{
	LogVerbose("");

	bool bResult = false;
	
	if (key.Len() == 0 || value.Len() == 0)
    {
    	return bResult;
    }

	if (GetUGC())
	{
		char KeyAnsi[256];
		FCStringAnsi::Strncpy(KeyAnsi, TCHAR_TO_UTF8(*key), key.GetAllocatedSize());
		char ValueAnsi[256];
		FCStringAnsi::Strncpy(ValueAnsi, TCHAR_TO_UTF8(*value), value.GetAllocatedSize());
		
		bResult = GetUGC()->AddItemKeyValueTag(handle, KeyAnsi, ValueAnsi);
	}

	return bResult;
}

bool UUGC::AddItemPreviewFile(FUGCUpdateHandle handle, FString previewFile, ESteamItemPreviewType type)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->AddItemPreviewFile(handle, TCHAR_TO_UTF8(*previewFile), static_cast<EItemPreviewType>(type));
	}

	return bResult;
}

bool UUGC::AddItemPreviewVideo(FUGCUpdateHandle handle, FString videoID)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->AddItemPreviewVideo(handle, TCHAR_TO_UTF8(*videoID));
	}

	return bResult;
}

void UUGC::AddItemToFavorites(const FOnAddItemToFavorites& callback, int32 appID, FPublishedFileID publishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites* Task = new FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(this, callback, appID, publishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::AddRequiredKeyValueTag(FUGCQueryHandle handle, FString key, FString value)
{
	LogVerbose("");

	bool bResult = false;
	
	if (key.Len() == 0 || value.Len() == 0)
	{
		return bResult;
	}

	if (GetUGC())
	{
		char KeyAnsi[256];
		FCStringAnsi::Strncpy(KeyAnsi, TCHAR_TO_UTF8(*key), key.GetAllocatedSize());
		char ValueAnsi[256];
		FCStringAnsi::Strncpy(ValueAnsi, TCHAR_TO_UTF8(*value), value.GetAllocatedSize());
		
		bResult = GetUGC()->AddRequiredKeyValueTag(handle, KeyAnsi, ValueAnsi);
	}

	return bResult;
}

bool UUGC::AddRequiredTag(FUGCQueryHandle handle, FString tagName)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->AddRequiredTag(handle, TCHAR_TO_UTF8(*tagName));
	}

	return bResult;
}

bool UUGC::BInitWorkshopForGameServer(int32 workshopDepotID, FString folder)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->BInitWorkshopForGameServer(workshopDepotID, TCHAR_TO_UTF8(*folder));
	}

	return bResult;
}

void UUGC::CreateItem(const FOnCreateItem& callback, int32 consumerAppID, ESteamWorkshopFileType fileType)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCCreateItem* Task = new FOnlineAsyncTaskSteamCoreUGCCreateItem(this, callback, consumerAppID, fileType);
		QueueAsyncTask(Task);
	}
}

FUGCQueryHandle UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery queryType, ESteamUGCMatchingUGCType fileType, int32 creatorAppID, int32 consumerAppID, int32 page)
{
	LogVerbose("");

	return GetUGC() ? FUGCQueryHandle(GetUGC()->CreateQueryAllUGCRequest(static_cast<EUGCQuery>(queryType), (fileType == ESteamUGCMatchingUGCType::All ? EUGCMatchingUGCType::k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(fileType)), creatorAppID, consumerAppID, page)) : FUGCQueryHandle();
}

FUGCQueryHandle UUGC::CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> publishedFileIDs)
{
	LogVerbose("");

	FUGCQueryHandle Handle = 0;

	if (GetUGC())
	{
		const int32 Size = publishedFileIDs.Num();

		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(Size);

		for (int32 i = 0; i < Size; i++)
		{
			DataArray[i] = publishedFileIDs[i];
		}

		Handle = GetUGC()->CreateQueryUGCDetailsRequest(DataArray.GetData(), Size);
	}

	return Handle;
}

FUGCQueryHandle UUGC::CreateQueryUserUGCRequest(FSteamID steamID, ESteamUserUGCList listType, ESteamUGCMatchingUGCType matchingUGCType, ESteamUserUGCListSortOrder sortOrder, int32 creatorAppID, int32 consumerAppID, int32 page)
{
	LogVerbose("");

	FUGCQueryHandle Handle = 0;

	if (GetUGC())
	{
		Handle = GetUGC()->CreateQueryUserUGCRequest(steamID, static_cast<EUserUGCList>(listType), (matchingUGCType == ESteamUGCMatchingUGCType::All ? EUGCMatchingUGCType::k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(matchingUGCType)), static_cast<EUserUGCListSortOrder>(sortOrder), creatorAppID, consumerAppID, page);
	}

	return Handle;
}

void UUGC::DeleteItem(const FOnDeleteItemResult& callback, FPublishedFileID publishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCDeleteItem* Task = new FOnlineAsyncTaskSteamCoreUGCDeleteItem(this, callback, publishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::DownloadItem(FPublishedFileID publishedFileID, bool bHighPriority)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->DownloadItem(publishedFileID, bHighPriority);
	}

	return bResult;
}

void UUGC::GetAppDependencies(const FOnGetAppDependenciesResult& callback, FPublishedFileID publishedFileID)
{
	LogVeryVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCGetAppDependencies* Task = new FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(this, callback, publishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::GetItemDownloadInfo(FPublishedFileID publishedFileID, int32& outBytesDownloaded, int32& outBytesTotal)
{
	LogVeryVerbose("");

	bool bResult = false;

	uint64 BytesDownloaded = 0;
	uint64 BytesTotal = 0;

	if (GetUGC())
	{
		bResult = GetUGC()->GetItemDownloadInfo(publishedFileID, &BytesDownloaded, &BytesTotal);
	}

	outBytesDownloaded = BytesDownloaded;
	outBytesTotal = BytesTotal;

	return bResult;
}

bool UUGC::GetItemInstallInfo(FPublishedFileID publishedFileID, int32& outSizeOnDisk, FString& outFolder, int32& outTimeStamp)
{
	LogVeryVerbose("");
	
	bool bResult = false;

	uint32 TimeStamp = 0;
	uint64 SizeOnDisk = 0;

	if (GetUGC())
	{
		TArray<char> Path;
		Path.SetNum(256);

		bResult = GetUGC()->GetItemInstallInfo(publishedFileID, &SizeOnDisk, Path.GetData(), 256, &TimeStamp);
		
		outFolder = UTF8_TO_TCHAR(Path.GetData());
	}

	outSizeOnDisk = SizeOnDisk;
	outTimeStamp = TimeStamp;

	return bResult;
}

int32 UUGC::GetItemState(FPublishedFileID publishedFileID, TArray<ESteamItemState>& states)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUGC())
	{
		Result = GetUGC()->GetItemState(publishedFileID);

		if (Result & EItemState::k_EItemStateDownloading)
		{
			states.Add(ESteamItemState::Downloading);
		}

		if (Result & EItemState::k_EItemStateDownloadPending)
		{
			states.Add(ESteamItemState::DownloadPending);
		}

		if (Result & EItemState::k_EItemStateInstalled)
		{
			states.Add(ESteamItemState::Installed);
		}

		if (Result & EItemState::k_EItemStateLegacyItem)
		{
			states.Add(ESteamItemState::LegacyItem);
		}

		if (Result & EItemState::k_EItemStateNeedsUpdate)
		{
			states.Add(ESteamItemState::NeedsUpdate);
		}

		if (Result & EItemState::k_EItemStateNone)
		{
			states.Add(ESteamItemState::None);
		}

		if (Result & EItemState::k_EItemStateSubscribed)
		{
			states.Add(ESteamItemState::Subscribed);
		}
	}
	
	return Result;
}

ESteamItemUpdateStatus UUGC::GetItemUpdateProgress(FUGCUpdateHandle handle, int32& outBytesProcessed, int32& outBytesTotal)
{
	LogVeryVerbose("");
	
	ESteamItemUpdateStatus Result = ESteamItemUpdateStatus::Invalid;

	uint64 BytesProcessed = 0;
	uint64 BytesTotal = 0;

	if (GetUGC())
	{
		Result = static_cast<ESteamItemUpdateStatus>(GetUGC()->GetItemUpdateProgress(handle, &BytesProcessed, &BytesTotal));
	}

	outBytesProcessed = BytesProcessed;
	outBytesTotal = BytesTotal;

	return Result;
}

int32 UUGC::GetNumSubscribedItems()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUGC())
	{
		Result = GetUGC()->GetNumSubscribedItems();
	}

	return Result;
}

bool UUGC::GetQueryUGCAdditionalPreview(FUGCQueryHandle handle, int32 index, int32 previewIndex, FString& outUrlOrVideoID, FString& outOriginalFileName, ESteamItemPreviewType& outPreviewType)
{
	LogVeryVerbose("");

	bool bResult = false;

	EItemPreviewType ItemPreviewType = EItemPreviewType::k_EItemPreviewType_Image;

	if (GetUGC())
	{
		TArray<char> URLOrVideoID;
		TArray<char> OriginalFileName;

		URLOrVideoID.SetNum(256);
		OriginalFileName.SetNum(256);

		bResult = GetUGC()->GetQueryUGCAdditionalPreview(handle, index, previewIndex, URLOrVideoID.GetData(), URLOrVideoID.Num(), OriginalFileName.GetData(), OriginalFileName.Num(), &ItemPreviewType);

		if (bResult)
		{
			outUrlOrVideoID = UTF8_TO_TCHAR(URLOrVideoID.GetData());
			outOriginalFileName = UTF8_TO_TCHAR(OriginalFileName.GetData());
		}
	}

	outPreviewType = static_cast<ESteamItemPreviewType>(ItemPreviewType);

	return bResult;
}

bool UUGC::GetQueryUGCChildren(FUGCQueryHandle handle, int32 index, TArray<FPublishedFileID>& outPublishedFileIDs, int32 maxEntries)
{
	LogVeryVerbose("");

	bool bResult = false;
	outPublishedFileIDs.Empty();

	if (GetUGC())
	{
		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(maxEntries);

		bResult = GetUGC()->GetQueryUGCChildren(handle, index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			for (int32 i = 0; i < maxEntries; i++)
			{
				outPublishedFileIDs.Add(DataArray[i]);
			}
		}
	}

	return bResult;
}

bool UUGC::GetQueryUGCKeyValueTag(FUGCQueryHandle handle, int32 index, int32 keyValueTagIndex, FString& outKey, FString& outValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	outKey.Empty();
	outValue.Empty();

	if (GetUGC())
	{
		TArray<char> Key;
		TArray<char> Value;

		Key.SetNum(128);
		Value.SetNum(256);

		bResult = GetUGC()->GetQueryUGCKeyValueTag(handle, index, keyValueTagIndex, Key.GetData(), Key.Num(), Value.GetData(), Value.Num());

		if (bResult)
		{
			outKey = UTF8_TO_TCHAR(Key.GetData());
			outValue = UTF8_TO_TCHAR(Value.GetData());
		}
	}

	return bResult;
}

bool UUGC::GetQueryUGCMetadata(FUGCQueryHandle handle, int32 index, FString& outMetaData, int32 metadataSize)
{
	LogVeryVerbose("");

	bool bResult = false;
	outMetaData.Empty();

	if (GetUGC())
	{
		TArray<char> DataArray;
		DataArray.SetNum(metadataSize);

		bResult = GetUGC()->GetQueryUGCMetadata(handle, index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			outMetaData = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	return bResult;
}

int32 UUGC::GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle handle, int32 index)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumAdditionalPreviews(handle, index);
	}

	return Result;
}

int32 UUGC::GetQueryUGCNumKeyValueTags(FUGCQueryHandle handle, int32 index)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumKeyValueTags(handle, index);
	}

	return Result;
}

bool UUGC::GetQueryUGCPreviewURL(FUGCQueryHandle handle, int32 index, FString& outUrl)
{
	LogVeryVerbose("");

	bool bResult = false;
	outUrl.Empty();

	if (GetUGC())
	{
		TArray<char> DataArray;
		DataArray.SetNum(256);

		bResult = GetUGC()->GetQueryUGCPreviewURL(handle, index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			outUrl = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	return bResult;
}

bool UUGC::GetQueryUGCResult(FUGCQueryHandle handle, int32 index, FSteamUGCDetails& outDetails)
{
	LogVeryVerbose("");

	bool bResult = false;
	outDetails = FSteamUGCDetails();

	if (GetUGC())
	{
		SteamUGCDetails_t Details;

		bResult = GetUGC()->GetQueryUGCResult(handle, index, &Details);

		if (bResult)
		{
			outDetails = Details;
		}
	}

	return bResult;
}

bool UUGC::GetQueryUGCStatistic(FUGCQueryHandle handle, int32 index, ESteamItemStatistic statType, FString& outStatValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint64 StatValue = 0;

	if (GetUGC())
	{
		bResult = GetUGC()->GetQueryUGCStatistic(handle, index, static_cast<EItemStatistic>(statType), &StatValue);
	}

	outStatValue = LexToString(StatValue);

	return bResult;
}

int32 UUGC::GetSubscribedItems(TArray<FPublishedFileID>& outPublishedFileIDs, int32 maxEntries)
{
	LogVeryVerbose("");

	int32 Result = 0;

	outPublishedFileIDs.Empty();

	if (GetUGC())
	{
		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(maxEntries);
		
		Result = GetUGC()->GetSubscribedItems(DataArray.GetData(), DataArray.Num());

		for (int32 i = 0; i < maxEntries; i++)
		{
			outPublishedFileIDs.Add(DataArray[i]);
		}
	}

	return Result;
}

void UUGC::GetUserItemVote(const FOnGetUserItemVote& callback, FPublishedFileID publishedFileID)
{
	LogVeryVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCGetUserItemVote* Task = new FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(this, callback, publishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::ReleaseQueryUGCRequest(FUGCQueryHandle handle)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->ReleaseQueryUGCRequest(handle);
	}

	return bResult;
}

void UUGC::RemoveAppDependency(const FOnRemoveAppDependencyResult& callback, FPublishedFileID publishedFileID, int32 appID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(this, callback, publishedFileID, appID);
		QueueAsyncTask(Task);
	}
}

void UUGC::RemoveDependency(const FOnRemoveUGCDependencyResult& callback, FPublishedFileID parentPublishedFileID, FPublishedFileID childPublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(this, callback, parentPublishedFileID, childPublishedFileID);
		QueueAsyncTask(Task);
	}
}

void UUGC::RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& callback, int32 appID, FPublishedFileID publishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(this, callback, appID, publishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::RemoveItemKeyValueTags(FUGCUpdateHandle handle, FString key)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->RemoveItemKeyValueTags(handle, TCHAR_TO_UTF8(*key));
	}

	return bResult;
}

bool UUGC::RemoveItemPreview(FUGCUpdateHandle handle, int32 index)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->RemoveItemPreview(handle, index);
	}

	return bResult;
}

void UUGC::SendQueryUGCRequest(const FOnSendQueryUGCRequest& callback, FUGCQueryHandle handle)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest* m_Data = new FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(this, callback, handle);
		QueueAsyncTask(m_Data);
	}
}

bool UUGC::SetAllowCachedResponse(FUGCQueryHandle handle, int32 maxAgeSeconds)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetAllowCachedResponse(handle, maxAgeSeconds);
	}

	return bResult;
}

bool UUGC::SetAllowLegacyUpload(FUGCUpdateHandle handle, bool bAllowLegacyUpload)
{
	LogVerbose("");

	bool bResult = false;

#if STEAM_VERSION > 142
	if (GetUGC())
	{
		bResult = GetUGC()->SetAllowLegacyUpload(handle, bAllowLegacyUpload);
	}
#endif

	return bResult;
}

bool UUGC::SetCloudFileNameFilter(FUGCQueryHandle handle, FString matchCloudFileName)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetCloudFileNameFilter(handle, TCHAR_TO_UTF8(*matchCloudFileName));
	}

	return bResult;
}

bool UUGC::SetItemContent(FUGCUpdateHandle handle, FString contentFolder)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemContent(handle, TCHAR_TO_UTF8(*contentFolder));
	}

	return bResult;
}

bool UUGC::SetItemDescription(FUGCUpdateHandle handle, FString description)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemDescription(handle, TCHAR_TO_UTF8(*description));
	}

	return bResult;
}

bool UUGC::SetItemMetadata(FUGCUpdateHandle handle, FString metaData)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemMetadata(handle, TCHAR_TO_UTF8(*metaData));
	}

	return bResult;
}

bool UUGC::SetItemPreview(FUGCUpdateHandle handle, FString previewFile)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemPreview(handle, TCHAR_TO_UTF8(*previewFile));
	}

	return bResult;
}

bool UUGC::SetItemTags(FUGCUpdateHandle handle, TArray<FString> tags)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		TArray<char*> Strings;
		Strings.SetNum(tags.Num());

		for (int i = 0; i < tags.Num(); i++)
		{
			Strings[i] = new char[255];
			FCStringAnsi::Strncpy(Strings[i], TCHAR_TO_UTF8(*tags[i]), (tags[i].Len() + 1));
		}

		SteamParamStringArray_t SteamParamStringArray;
		SteamParamStringArray.m_ppStrings = (const char**)Strings.GetData();
		SteamParamStringArray.m_nNumStrings = Strings.Num();

		bResult = GetUGC()->SetItemTags(handle, &SteamParamStringArray);

		for (int i = 0; i < Strings.Num(); i++)
		{
			delete[] Strings[i];
		}
	}

	return bResult;
}

bool UUGC::SetItemTitle(FUGCUpdateHandle handle, FString title)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemTitle(handle, TCHAR_TO_UTF8(*title));
	}

	return bResult;
}

bool UUGC::SetItemUpdateLanguage(FUGCUpdateHandle handle, FString language)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemUpdateLanguage(handle, TCHAR_TO_UTF8(*language));
	}

	return bResult;
}

bool UUGC::SetItemVisibility(FUGCUpdateHandle handle, ESteamRemoteStoragePublishedFileVisibility visibility)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemVisibility(handle, static_cast<ERemoteStoragePublishedFileVisibility>(visibility));
	}

	return bResult;
}

bool UUGC::SetLanguage(FUGCQueryHandle handle, FString language)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetLanguage(handle, TCHAR_TO_UTF8(*language));
	}

	return bResult;
}

bool UUGC::SetMatchAnyTag(FUGCQueryHandle handle, bool bMatchAnyTag)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetMatchAnyTag(handle, bMatchAnyTag);
	}

	return bResult;
}

bool UUGC::SetRankedByTrendDays(FUGCQueryHandle handle, int32 days)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetRankedByTrendDays(handle, days);
	}

	return bResult;
}

bool UUGC::SetReturnAdditionalPreviews(FUGCQueryHandle handle, bool bReturnAdditionalPreviews)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews);
	}

	return bResult;
}

bool UUGC::SetReturnChildren(FUGCQueryHandle handle, bool bReturnChildren)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnChildren(handle, bReturnChildren);
	}

	return bResult;
}

bool UUGC::SetReturnKeyValueTags(FUGCQueryHandle handle, bool bReturnKeyValueTags)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnKeyValueTags(handle, bReturnKeyValueTags);
	}

	return bResult;
}

bool UUGC::SetReturnLongDescription(FUGCQueryHandle handle, bool bReturnLongDescription)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnLongDescription(handle, bReturnLongDescription);
	}

	return bResult;
}

bool UUGC::SetReturnMetadata(FUGCQueryHandle handle, bool bReturnMetadata)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnMetadata(handle, bReturnMetadata);
	}

	return bResult;
}

bool UUGC::SetReturnOnlyIDs(FUGCQueryHandle handle, bool bReturnOnlyIDs)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnOnlyIDs(handle, bReturnOnlyIDs);
	}

	return bResult;
}

bool UUGC::SetReturnPlaytimeStats(FUGCQueryHandle handle, int32 days)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnPlaytimeStats(handle, days);
	}

	return bResult;
}

bool UUGC::SetReturnTotalOnly(FUGCQueryHandle handle, bool bReturnTotalOnly)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnTotalOnly(handle, bReturnTotalOnly);
	}

	return bResult;
}

bool UUGC::SetSearchText(FUGCQueryHandle handle, FString searchText)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetSearchText(handle, TCHAR_TO_UTF8(*searchText));
	}

	return bResult;
}

void UUGC::SetUserItemVote(const FOnSetUserItemVote& callback, FPublishedFileID publishedFileID, bool bVoteUp)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSetUserItemVote* Task = new FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(this, callback, bVoteUp, publishedFileID);
		QueueAsyncTask(Task);
	}
}

FUGCUpdateHandle UUGC::StartItemUpdate(int32 consumerAppID, FPublishedFileID publishedFileID)
{
	LogVerbose("");

	return GetUGC() ? FUGCUpdateHandle(GetUGC()->StartItemUpdate(consumerAppID, publishedFileID)) : FUGCUpdateHandle();
}

void UUGC::StartPlaytimeTracking(const FOnStartPlaytimeTracking& callback, TArray<FPublishedFileID> publishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking* Task = new FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(this, callback, publishedFileID);
		QueueAsyncTask(Task);
	}
}

void UUGC::StopPlaytimeTracking(const FOnStopPlaytimeTracking& callback, TArray<FPublishedFileID> publishedFileIDs)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking* Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(this, callback, publishedFileIDs);
		QueueAsyncTask(Task);
	}
}

void UUGC::StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& callback)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems* Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(this, callback);
		QueueAsyncTask(Task);
	}
}

void UUGC::SubmitItemUpdate(const FOnSubmitItemUpdate& callback, FUGCUpdateHandle handle, FString changeNote)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate* Task = new FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(this, callback, handle, changeNote);
		QueueAsyncTask(Task);
	}
}

void UUGC::SubscribeItem(const FOnSubscribeItem& callback, FPublishedFileID publishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSubscribeItem* Task = new FOnlineAsyncTaskSteamCoreUGCSubscribeItem(this, callback, publishedFileID);
		QueueAsyncTask(Task);
	}
}

void UUGC::SuspendDownloads(bool bSuspend)
{
	LogVerbose("");

	if (GetUGC())
	{
		GetUGC()->SuspendDownloads(bSuspend);
	}
}

void UUGC::UnsubscribeItem(const FOnUnsubscribeItem& callback, FPublishedFileID publishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem* Task = new FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(this, callback, publishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::UpdateItemPreviewFile(FUGCUpdateHandle handle, int32 index, FString previewFile)
{
	LogVerbose("");

	bool bResult = false;
	
	if (GetUGC())
	{
		bResult = GetUGC()->UpdateItemPreviewFile(handle, index, TCHAR_TO_UTF8(*previewFile));
	}

	return bResult;

}

bool UUGC::UpdateItemPreviewVideo(FUGCUpdateHandle handle, int32 index, FString previewVideo)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->UpdateItemPreviewVideo(handle, index, TCHAR_TO_UTF8(*previewVideo));
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUGC::OnItemInstalled(ItemInstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ItemInstalled.Broadcast(Data);
		});
}

void UUGC::OnDownloadItemResult(DownloadItemResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			DownloadItemResult.Broadcast(Data);
		});
}
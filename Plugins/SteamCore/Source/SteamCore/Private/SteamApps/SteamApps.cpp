/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#include "SteamApps/SteamApps.h"
#include "SteamApps/SteamAppsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UApps::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnDLCInstalledCallback.Register(this, &UApps::OnDLCInstalled);
	OnOnFileDetailsResultCallback.Register(this, &UApps::OnFileDetailsResult);

	if (IsRunningDedicatedServer())
	{
		OnDLCInstalledCallback.SetGameserverFlag();
		OnOnFileDetailsResultCallback.SetGameserverFlag();
	}
}

void UApps::Deinitialize()
{
	OnDLCInstalledCallback.Unregister();
	OnOnFileDetailsResultCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UApps::BIsSubscribed()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribed();
	}

	return bResult;
}

bool UApps::BIsLowViolence()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsLowViolence();
	}

	return bResult;
}

bool UApps::BIsCybercafe()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsCybercafe();
	}

	return bResult;
}

bool UApps::BIsVACBanned()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsVACBanned();
	}

	return bResult;
}

FString UApps::GetCurrentGameLanguage()
{
	LogVeryVerbose("");

	FString Result;

	if (GetApps())
	{
		Result = UTF8_TO_TCHAR(GetApps()->GetCurrentGameLanguage());
	}

	return Result;
}

FString UApps::GetAvailableGameLanguages()
{
	LogVeryVerbose("");

	FString Result;

	if (GetApps())
	{
		Result = UTF8_TO_TCHAR(GetApps()->GetAvailableGameLanguages());
	}

	return Result;
}

bool UApps::BIsSubscribedApp(int32 appID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribedApp(appID);
	}

	return bResult;
}

bool UApps::BIsSubscribedFromFamilySharing()
{
	LogVeryVerbose("");

	bool bResult = false;

#if STEAM_VERSION > 142
	if (GetApps())
	{
		bResult  = GetApps()->BIsSubscribedFromFamilySharing();
	}
#endif

	return bResult;
}

bool UApps::BIsDlcInstalled(int32 appID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsDlcInstalled(appID);
	}

	return bResult;
}

int32 UApps::GetEarliestPurchaseUnixTime(int32 appID)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetApps())
	{
		Result = GetApps()->GetEarliestPurchaseUnixTime(appID);
	}

	return Result;
}

bool UApps::BIsSubscribedFromFreeWeekend()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribedFromFreeWeekend();
	}

	return bResult;
}

int32 UApps::GetDLCCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetApps())
	{
		Result = GetApps()->GetDLCCount();
	}

	return Result;
}

bool UApps::BGetDLCDataByIndex(int32 dlc, int32& outAppId, bool& bAvailable, FString& outName)
{
	LogVeryVerbose("");

	bool bResult = false;
	outAppId = 0;
	bAvailable = false;
	outName.Empty();

	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);
		AppId_t AppId;

		bResult = GetApps()->BGetDLCDataByIndex(dlc, &AppId, &bAvailable, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			outName = UTF8_TO_TCHAR(DataArray.GetData());
			outAppId = AppId;
		}
	}

	return bResult;
}

void UApps::InstallDLC(int32 appID)
{
	LogVerbose("");

	if (GetApps())
	{
		GetApps()->InstallDLC(appID);
	}
}

void UApps::UninstallDLC(int32 appID)
{
	LogVerbose("");

	if (GetApps())
	{
		GetApps()->UninstallDLC(appID);
	}
}

bool UApps::GetCurrentBetaName(FString& outName)
{
	LogVeryVerbose("");

	bool bResult = false;
	outName.Empty();

	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(512);

		bResult = GetApps()->GetCurrentBetaName(DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			outName = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	return bResult;
}

bool UApps::MarkContentCorrupt(bool bMissingFilesOnly)
{
	LogVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->MarkContentCorrupt(bMissingFilesOnly);
	}

	return bResult;
}

int32 UApps::GetInstalledDepots(int32 appID, int32 maxDepots, TArray<int32>& outDepots)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outDepots.Empty();

	if (GetApps())
	{
		TArray<DepotId_t> DataArray;
		DataArray.SetNum(maxDepots);

		Result = GetApps()->GetInstalledDepots(appID, DataArray.GetData(), DataArray.Num());

		if (Result > 0)
		{
			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				outDepots.Add(DataArray[i]);
			}
		}
	}

	return Result;
}

int UApps::GetLaunchCommandLine(FString& outCommandline)
{
	LogVeryVerbose("");

	int Result = 0;
	outCommandline.Empty();

	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);

		Result = GetApps()->GetLaunchCommandLine(DataArray.GetData(), DataArray.Num());

		outCommandline = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UApps::GetAppInstallDir(int32 appID, FString& outFolder)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outFolder.Empty();

	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(512);

		Result = GetApps()->GetAppInstallDir(appID, DataArray.GetData(), DataArray.Num());

		if (Result > 0)
		{
			outFolder = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	return Result;
}

bool UApps::BIsAppInstalled(int32 appID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsAppInstalled(appID);
	}

	return bResult;
}

FSteamID UApps::GetAppOwner()
{
	LogVeryVerbose("");

	FSteamID Result;

	if (GetApps())
	{
		Result = GetApps()->GetAppOwner();
	}

	return Result;
}

FString UApps::GetLaunchQueryParam(FString key)
{
	LogVeryVerbose("");
	
	FString Result;
	
	if (key.Len() == 0)
	{
		return Result;
	}

	if (GetApps())
	{
		char KeyAnsi[1024];
		FCStringAnsi::Strncpy(KeyAnsi, TCHAR_TO_UTF8(*key), key.GetAllocatedSize());
		Result = FString(UTF8_TO_TCHAR(GetApps()->GetLaunchQueryParam(KeyAnsi)));
	}
	
	return Result;
}

bool UApps::GetDlcDownloadProgress(int32 appID, int32& outBytesDownloaded, int32& outBytesTotal)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint64 BytesDownloaded = 0;
	uint64 BytesTotal = 0;

	if (GetApps())
	{
		bResult = GetApps()->GetDlcDownloadProgress(appID, &BytesDownloaded, &BytesTotal);
	}

	outBytesDownloaded = BytesDownloaded;
	outBytesTotal = BytesTotal;

	return bResult;
}

int32 UApps::GetAppBuildId()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetApps())
	{
		Result = GetApps()->GetAppBuildId();
	}

	return Result;
}

void UApps::GetFileDetails(const FOnFileDetailsResult& callback, FString fileName)
{
	LogVeryVerbose("");

	if (GetApps())
	{
		FOnlineAsyncTaskSteamCoreAppsGetFileDetails* Task = new FOnlineAsyncTaskSteamCoreAppsGetFileDetails(this, callback, fileName);
		QueueAsyncTask(Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UApps::OnDLCInstalled(DlcInstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			DLCInstalled.Broadcast(Data);
		});
}

void UApps::OnFileDetailsResult(FileDetailsResult_t *pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			FileDetailsResultDelegate.Broadcast(Data);
		});
}
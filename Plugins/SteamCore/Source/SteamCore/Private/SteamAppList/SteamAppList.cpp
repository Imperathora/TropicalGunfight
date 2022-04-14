/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamAppList
*/

#include "SteamAppList/SteamAppList.h"
#include "SteamCorePluginPrivatePCH.h"

void UAppList::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnSteamAppInstalledCallback.Register(this, &UAppList::OnSteamAppInstalled);
	OnSteamAppUninstalledCallback.Register(this, &UAppList::OnSteamAppUninstalled);

	if (IsRunningDedicatedServer())
	{
		OnSteamAppInstalledCallback.SetGameserverFlag();
		OnSteamAppUninstalledCallback.SetGameserverFlag();
	}
}

void UAppList::Deinitialize()
{
	OnSteamAppInstalledCallback.Unregister();
	OnSteamAppUninstalledCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 UAppList::GetNumInstalledApps()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamAppList())
	{
		Result = SteamAppList()->GetNumInstalledApps();
	}

	return Result;
}

int32 UAppList::GetInstalledApps(TArray<int32>& outAppIds, int32 maxAppIDs)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outAppIds.Empty();

	if (SteamAppList())
	{
		TArray<uint32> DataArray;
		DataArray.SetNum(maxAppIDs);

		Result = SteamAppList()->GetInstalledApps(DataArray.GetData(), DataArray.Num());

		if (Result > 0)
		{
			for (int32 i = 0; i < maxAppIDs; i++)
			{
				outAppIds.Add(DataArray[i]);
			}
		}
	}

	return Result;
}

int32 UAppList::GetAppName(int32 appID, FString& outName)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outName.Empty();
		
	if (SteamAppList())
	{
		TArray<char> DataArray;
		DataArray.SetNum(128);

		Result = SteamAppList()->GetAppName(appID, DataArray.GetData(), DataArray.Num());

		outName = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UAppList::GetAppInstallDir(int32 appID, FString& outDirectory)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outDirectory.Empty();

	if (SteamAppList())
	{
		TArray<char> DataArray;
		DataArray.SetNum(512);

		Result = SteamAppList()->GetAppInstallDir(appID, DataArray.GetData(), DataArray.Num());

		outDirectory = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UAppList::GetAppBuildId(int32 appID)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamAppList())
	{
		Result = SteamAppList()->GetAppBuildId(appID);
	}

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UAppList::OnSteamAppInstalled(SteamAppInstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamAppInstalled.Broadcast(Data);
		});
}

void UAppList::OnSteamAppUninstalled(SteamAppUninstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamAppUninstalled.Broadcast(Data);
		});
}
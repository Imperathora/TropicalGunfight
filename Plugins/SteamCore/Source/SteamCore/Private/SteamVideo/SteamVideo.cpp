/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamVideo
*/

#include "SteamVideo/SteamVideo.h"
#include "SteamCorePluginPrivatePCH.h"

void UVideo::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnGetOPFSettingsResultCallback.Register(this, &UVideo::OnGetOPFSettingsResult);
	OnGetVideoURLResultCallback.Register(this, &UVideo::OnGetVideoURLResult);

	if (IsRunningDedicatedServer())
	{
		OnGetOPFSettingsResultCallback.SetGameserverFlag();
		OnGetVideoURLResultCallback.SetGameserverFlag();
	}
}

void UVideo::Deinitialize()
{
	OnGetOPFSettingsResultCallback.Unregister();
	OnGetVideoURLResultCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
void UVideo::GetOPFSettings(int32 videoAppID)
{
	LogVeryVerbose("");

	if (SteamVideo())
	{
		SteamVideo()->GetOPFSettings(videoAppID);
	}
}

bool UVideo::GetOPFStringForApp(int32 videoAppID, FString& outBuffer)
{
	LogVeryVerbose("");

	bool bResult = false;
	outBuffer.Empty();

	if (SteamVideo())
	{
		int32 BufferSize = 0;
		TArray<char> Buffer;
		Buffer.SetNum(512);

		bResult = SteamVideo()->GetOPFStringForApp(videoAppID, Buffer.GetData(), &BufferSize);

		if (bResult)
		{
			Buffer.SetNum(BufferSize);
			outBuffer = TCHAR_TO_UTF8(Buffer.GetData());
		}
	}

	return bResult;
}

void UVideo::GetVideoURL(int32 videoAppID)
{
	LogVeryVerbose("");

	if (SteamVideo())
	{
		SteamVideo()->GetVideoURL(videoAppID);
	}
}

bool UVideo::IsBroadcasting(int32& numViewers)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamVideo())
	{
		bResult = SteamVideo()->IsBroadcasting(&numViewers);
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UVideo::OnGetOPFSettingsResult(GetOPFSettingsResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GetOPFSettingsResult.Broadcast(Data);
		});
}

void UVideo::OnGetVideoURLResult(GetVideoURLResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GetVideoURLResult.Broadcast(Data);
		});
}
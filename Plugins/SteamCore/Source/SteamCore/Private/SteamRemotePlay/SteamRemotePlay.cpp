/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemotePlay
*/

#include "SteamRemotePlay/SteamRemotePlay.h"
#include "SteamCorePluginPrivatePCH.h"

void URemotePlay::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if STEAM_VERSION > 142

	OnSteamRemotePlaySessionConnectedCallback.Register(this, &URemotePlay::OnSteamRemotePlaySessionConnected);
	OnSteamRemotePlaySessionDisconnectedCallback.Register(this, &URemotePlay::OnSteamRemotePlaySessionDisconnected);

	if (IsRunningDedicatedServer())
	{
		OnSteamRemotePlaySessionConnectedCallback.SetGameserverFlag();
		OnSteamRemotePlaySessionDisconnectedCallback.SetGameserverFlag();
	}
#endif
}

void URemotePlay::Deinitialize()
{
#if STEAM_VERSION > 142
	OnSteamRemotePlaySessionConnectedCallback.Unregister();
	OnSteamRemotePlaySessionDisconnectedCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 URemotePlay::GetSessionCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if STEAM_VERSION > 142
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionCount();
	}
#endif

	return Result;
}

int32 URemotePlay::GetSessionID(int32 sessionIndex)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if STEAM_VERSION > 142
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionID(sessionIndex);
	}
#endif

	return Result;
}

FSteamID URemotePlay::GetSessionSteamID(int32 sessionID)
{
	LogVeryVerbose("");

	FSteamID Result;

#if STEAM_VERSION > 142
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->GetSessionSteamID(sessionID);
	}
#endif

	return Result;
}

FString URemotePlay::GetSessionClientName(int32 sessionID)
{
	LogVeryVerbose("");

	FString Result;

#if STEAM_VERSION > 142
	if (SteamRemotePlay())
	{
		Result = TCHAR_TO_UTF8(SteamRemotePlay()->GetSessionClientName(sessionID));
	}
#endif

	return Result;
}

ESteamCoreDeviceFormFactor URemotePlay::GetSessionClientFormFactor(int32 sessionID)
{
	LogVeryVerbose("");

	ESteamCoreDeviceFormFactor Result = ESteamCoreDeviceFormFactor::Unknown;

#if STEAM_VERSION > 142
	if (SteamRemotePlay())
	{
		Result = static_cast<ESteamCoreDeviceFormFactor>(SteamRemotePlay()->GetSessionClientFormFactor(sessionID));
	}
#endif

	return Result;
}

bool URemotePlay::BGetSessionClientResolution(int32 sessionID, int32& resolutionX, int32& resolutionY)
{
	LogVeryVerbose("");

	bool Result = false;

#if STEAM_VERSION > 142
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->BGetSessionClientResolution(sessionID, &resolutionX, &resolutionY);
	}
#endif

	return Result;
}

bool URemotePlay::BSendRemotePlayTogetherInvite(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	bool Result = false;

#if STEAM_VERSION > 146
	if (SteamRemotePlay())
	{
		Result = SteamRemotePlay()->BSendRemotePlayTogetherInvite(steamIDFriend);
	}
#endif

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if STEAM_VERSION > 142
void URemotePlay::OnSteamRemotePlaySessionConnected(SteamRemotePlaySessionConnected_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamRemotePlaySessionConnected.Broadcast(Data);
		});
}

void URemotePlay::OnSteamRemotePlaySessionDisconnected(SteamRemotePlaySessionDisconnected_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamRemotePlaySessionDisconnected.Broadcast(Data);
		});
}
#endif
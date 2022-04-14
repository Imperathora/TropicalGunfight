/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#include "SteamGameServerStats/SteamGameServerStats.h"
#include "SteamGameServerStats/SteamGameServerStatsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UGameServerStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnGSStatsUnloadedCallback.Register(this, &UGameServerStats::OnGSStatsUnloaded);

	if (IsRunningDedicatedServer())
	{
		OnGSStatsUnloadedCallback.SetGameserverFlag();
	}
}

void UGameServerStats::Deinitialize()
{
	OnGSStatsUnloadedCallback.Unregister();

	Super::Deinitialize();
}

bool UGameServerStats::ShouldCreateSubsystem(UObject* Outer) const
{
	if (IsRunningDedicatedServer())
	{
		return Super::ShouldCreateSubsystem(Outer);
	}

	return false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UGameServerStats::GetUserStatInt(FSteamID steamIDUser, FString name, int32& outData)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");

	bool bResult = false;
	outData = 0;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), &outData);
	}

	return bResult;
}

bool UGameServerStats::GetUserStatFloat(FSteamID steamIDUser, FString name, float& outData)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");

	bool bResult = false;
	outData = 0.0f;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), &outData);
	}

	return bResult;
}

bool UGameServerStats::GetUserAchievement(FSteamID steamIDUser, FString name, bool& bAchieved)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserAchievement(steamIDUser, TCHAR_TO_UTF8(*name), &bAchieved);
	}

	return bResult;
}

bool UGameServerStats::SetUserStatInt(FSteamID steamIDUser, FString name, int32 data)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), data);
	}

	return bResult;
}

bool UGameServerStats::SetUserStatFloat(FSteamID steamIDUser, FString name, float data)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), data);
	}

	return bResult;
}

bool UGameServerStats::UpdateUserAvgRateStat(FSteamID steamIDUser, FString name, float CountThisSession, float SessionLength)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->UpdateUserAvgRateStat(steamIDUser, TCHAR_TO_UTF8(*name), CountThisSession, SessionLength);
	}

	return bResult;
}

bool UGameServerStats::SetUserAchievement(FSteamID steamIDUser, FString name)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserAchievement(steamIDUser, TCHAR_TO_UTF8(*name));
	}

	return bResult;
}

bool UGameServerStats::ClearUserAchievement(FSteamID steamIDUser, FString name)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->ClearUserAchievement(steamIDUser, TCHAR_TO_UTF8(*name));
	}

	return bResult;
}

void UGameServerStats::ServerRequestUserStats(const FOnServerRequestUserStats& callback, FSteamID steamIDUser)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServerStats())
	{
		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS* Task = new FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS(this, callback, steamIDUser);
		QueueAsyncTask(Task);
	}
}

void UGameServerStats::ServerStoreUserStats(const FOnServerStoreUserStats& callback, FSteamID steamIDUser)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServerStats())
	{
		FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats* Task = new FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats(this, callback, steamIDUser);
		QueueAsyncTask(Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UGameServerStats::OnGSStatsUnloaded(GSStatsUnloaded_t *pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GSStatsUnloaded.Broadcast(Data);
		});
}
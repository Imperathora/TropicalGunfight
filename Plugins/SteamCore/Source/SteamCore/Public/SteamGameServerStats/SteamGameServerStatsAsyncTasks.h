/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamGameServerStatsTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS : public FOnlineAsyncTaskSteamCore
{
public:
	FOnServerRequestUserStats m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS(class USteamCoreSubsystem* subsystem, FOnServerRequestUserStats callback, FSteamID steamIDUser)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamIDUser(steamIDUser)
	{}
private:
	FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS() = delete;
protected:
	GSStatsReceived_t m_CallbackResults;
	FSteamID m_SteamIDUser;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnServerStoreUserStats m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats(class USteamCoreSubsystem* subsystem, FOnServerStoreUserStats callback, FSteamID steamIDUser)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamIDUser(steamIDUser)
	{}
private:
	FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats() = delete;
protected:
	GSStatsStored_t m_CallbackResults;
	FSteamID m_SteamIDUser;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats")); }
};
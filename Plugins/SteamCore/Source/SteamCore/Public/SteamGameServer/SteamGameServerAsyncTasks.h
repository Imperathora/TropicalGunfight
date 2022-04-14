/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamGameServerTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAssociateWithClan m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan(class USteamCoreSubsystem* subsystem, FOnAssociateWithClan callback, FSteamID steamIDClan)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamIDClan(steamIDClan)
	{}
private:
	FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan() = delete;
protected:
	AssociateWithClanResult_t m_CallbackResults;
	FSteamID m_SteamIDClan;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility : public FOnlineAsyncTaskSteamCore
{
public:
	FOnComputeNewPlayerCompatibility m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility(class USteamCoreSubsystem* subsystem, FOnComputeNewPlayerCompatibility callback, FSteamID steamIDNewPlayer)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamIDNewPlayer(steamIDNewPlayer)
	{}
private:
	FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility() = delete;
protected:
	ComputeNewPlayerCompatibilityResult_t m_CallbackResults;
	FSteamID m_SteamIDNewPlayer;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility")); }
};
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamMatchmakingTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby : public FOnlineAsyncTaskSteamCore
{
public:
	FOnCreateLobby m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(USteamCoreSubsystem* subsystem, FOnCreateLobby callback, ELobbyType lobbyType, int32 maxLobbyMembers)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_LobbyType(lobbyType)
		, m_MaxLobbyMembers(maxLobbyMembers)
	{}
	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, ELobbyType lobbyType, int32 maxLobbyMembers)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_LobbyType(lobbyType)
		, m_MaxLobbyMembers(maxLobbyMembers)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby() = delete;
protected:
	LobbyCreated_t m_CallbackResults;
	ELobbyType m_LobbyType;
	int32 m_MaxLobbyMembers;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRequestLobbyList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRequestLobbyList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestLobbyList m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRequestLobbyList(USteamCoreSubsystem* subsystem, FOnRequestLobbyList callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
	{}
	FOnlineAsyncTaskSteamCoreRequestLobbyList(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreRequestLobbyList() = delete;
protected:
	LobbyMatchList_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRequestLobbyList")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreJoinLobby : public FOnlineAsyncTaskSteamCore
{
public:
	FOnJoinLobby m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreJoinLobby(class USteamCoreSubsystem* subsystem, FOnJoinLobby callback, FSteamID steamIDLobby)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamIDLobby(steamIDLobby)
	{}
	FOnlineAsyncTaskSteamCoreJoinLobby(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamIDLobby)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_SteamIDLobby(steamIDLobby)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreJoinLobby() = delete;
protected:
	LobbyEnter_t m_CallbackResults;
	FSteamID m_SteamIDLobby;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreJoinLobby")); }
};
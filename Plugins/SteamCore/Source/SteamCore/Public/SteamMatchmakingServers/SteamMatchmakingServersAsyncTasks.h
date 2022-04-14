/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamMatchmakingServersTypes.h"

class UServerFilter;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreMatchmakingServersServerList : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingServerListResponse
{
public:
	FOnServerUpdated m_OnSteamCallback;
	FOnServerRefreshCompleted m_OnServerRefreshCompleted;
public:
	static HServerListRequest m_CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(class USteamCoreSubsystem* Subsystem, FOnServerUpdated ServerUpdateCallback, int32 AppID, float Timeout, int32 MaxResults, ESteamServerListRequestType RequestType, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
	
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, int32 AppID, float Timeout, int32 MaxResults, ESteamServerListRequestType RequestType, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject)
		, m_AppID(AppID)
		, m_MaxResults(MaxResults)
		, m_RequestType(RequestType)
		, m_bIgnoreNonResponsive(bIgnoreNonResponsive)
		, m_ServerFilter(ServerFilter)
	{
		m_AsyncTimeout = Timeout;
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
		m_OnServerRefreshCompleted.BindUFunction(AsyncObject, "HandleServerListFinished");
	}
	~FOnlineAsyncTaskSteamCoreMatchmakingServersServerList();
private:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList() = delete;
protected:
	int32 m_FoundServers;
	int32 m_AppID;
	int32 m_MaxResults;
	ESteamServerListRequestType m_RequestType;
	bool m_bServerRefreshComplete;
	bool m_bIgnoreNonResponsive;
	float m_ElapsedTime;
	TWeakObjectPtr<UServerFilter> m_ServerFilter;
private:
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersServerList"));
	}

	virtual void ServerResponded(HServerListRequest request, int iServer) override;
	virtual void ServerFailedToRespond(HServerListRequest request, int iServer) override;
	virtual void RefreshComplete(HServerListRequest request, EMatchMakingServerResponse response) override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingPingResponse
{
public:
	FOnServerPing m_OnSteamCallback;
public:
	static HServerQuery m_CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(USteamCoreSubsystem* subsystem, FOnServerPing callback, FString ip, int32 port)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_IP(ip)
		, m_Port(port)
	{
	}
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString ip, int32 port)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_IP(ip)
		, m_Port(port)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer() = delete;
protected:
	FString m_IP;
	int32 m_Port;
private:
	virtual void Tick() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer"));
	}

	virtual void ServerResponded(gameserveritem_t& server) override;
	virtual void ServerFailedToRespond() override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingRulesResponse
{
public:
	FOnServerRules m_OnSteamCallback;
public:
	static HServerQuery m_CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(USteamCoreSubsystem* subsystem, FOnServerRules callback, FString ip, int32 port)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_IP(ip)
		, m_Port(port)
	{
	}
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString ip, int32 port)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_IP(ip)
		, m_Port(port)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules() = delete;
protected:
	FString m_IP;
	int32 m_Port;
	TArray<FGameServerRule> m_Rules;
private:
	virtual void Tick() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules"));
	}

	virtual void RulesResponded(const char* pchRule, const char* pchValue) override;
	virtual void RulesFailedToRespond() override;
	virtual void RulesRefreshComplete() override;
};
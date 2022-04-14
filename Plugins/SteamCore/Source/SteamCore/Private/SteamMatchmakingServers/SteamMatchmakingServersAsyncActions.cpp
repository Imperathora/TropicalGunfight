/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::PingServerAsync(UObject* WorldContextObject, FString ip, int32 port)
{
	LogVerbose("");
	
	if (SteamMatchmakingServers())
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->m_CallbackResults != k_uAPICallInvalid)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				if (SteamCoreDebugging())
				{
					UE_LOG(LogSteamCore, Error, TEXT("PingServer had an active search query, cancelling the old one."));
				}

				CurrentTask = nullptr;
			}
		}

		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionPingServer>();
		auto* Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(Subsystem, AsyncObject, ip, port);
		AsyncObject->RegisterWithGameInstance(GameInstance);
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionPingServer::HandleCallback(const FGameServerItem& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionRequestServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

FOnlineAsyncTaskSteamCoreMatchmakingServersServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestServerList(UObject* WorldContextObject, ESteamServerListRequestType RequestType, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	LogVerbose("");
	
	if (SteamMatchmakingServers())
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->m_CallbackResults != nullptr)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				if (SteamCoreDebugging())
				{
					UE_LOG(LogSteamCore, Error, TEXT("RequestServerList had an active search query, cancelling the old one."));
				}

				CurrentTask = nullptr;
			}
		}

		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionRequestServerList>();
		auto* Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(Subsystem, AsyncObject, AppID, Timeout, MaxResults, RequestType, bIgnoreNonResponsive, ServerFilter);
		CurrentTask = Task;
		AsyncObject->RegisterWithGameInstance(GameInstance);
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleCallback(const FGameServerItem& Data)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		OnCallback.Broadcast(Data);
	});
}

void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleServerListFinished()
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this]()
	{
		OnRefreshCompleted.Broadcast();
		SetReadyToDestroy();
	});
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Internet, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Lan, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Spectator, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Favorites, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Friends, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::History, AppID, Timeout, MaxResults, bIgnoreNonResponsive, ServerFilter);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(UObject* WorldContextObject, FString Ip, int32 QueryPort)
{
	LogVerbose("");
	
	if (SteamMatchmakingServers())
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->m_CallbackResults != k_uAPICallInvalid)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				if (SteamCoreDebugging())
				{
					UE_LOG(LogSteamCore, Error, TEXT("ServerRules had an active search query, cancelling the old one."));
				}

				CurrentTask = nullptr;
			}
		}

		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionServerRules>();
		auto* Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(Subsystem, AsyncObject, Ip, QueryPort);
		AsyncObject->RegisterWithGameInstance(GameInstance);
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionServerRules::HandleCallback(const TArray<FGameServerRule>& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}
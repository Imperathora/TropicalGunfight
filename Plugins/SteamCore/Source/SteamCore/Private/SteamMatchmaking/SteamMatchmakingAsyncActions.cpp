/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#include "SteamMatchmaking/SteamMatchmakingAsyncActions.h"
#include "SteamMatchmaking/SteamMatchmakingAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"
#include <../Private/SteamSessionKeys.h>

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingAsyncActionCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreMatchmakingAsyncActionCreateLobby* USteamCoreMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(UObject* WorldContextObject, ESteamLobbyType lobbyType, int32 maxMembers)
{
	LogVerbose("");
	
	if (SteamMatchmaking())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreMatchmakingAsyncActionCreateLobby>();
		auto* Task = new FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(Subsystem, AsyncObject, static_cast<ELobbyType>(lobbyType), maxMembers);
		AsyncObject->RegisterWithGameInstance(GameInstance);
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreMatchmakingAsyncActionCreateLobby::HandleCallback(const FCreateLobbyData& data, bool bWasSuccessful)
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
//		USteamCoreMatchmakingAsyncActionCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreMatchmakingAsyncActionRequestLobbyList* USteamCoreMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(UObject* WorldContextObject)
{
	LogVerbose("");
	
	if (SteamMatchmaking())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreMatchmakingAsyncActionRequestLobbyList>();
		auto* Task = new FOnlineAsyncTaskSteamCoreRequestLobbyList(Subsystem, AsyncObject);
		AsyncObject->RegisterWithGameInstance(GameInstance);
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreMatchmakingAsyncActionRequestLobbyList::HandleCallback(const FLobbyMatchList& data, bool bWasSuccessful)
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
//		USteamCoreMatchmakingAsyncActionJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreMatchmakingAsyncActionJoinLobby* USteamCoreMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(UObject* WorldContextObject, FSteamID steamIDLobby)
{
	LogVerbose("");
	
	if (SteamMatchmaking())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreMatchmakingAsyncActionJoinLobby>();
		auto* Task = new FOnlineAsyncTaskSteamCoreJoinLobby(Subsystem, AsyncObject, steamIDLobby);
		AsyncObject->RegisterWithGameInstance(GameInstance);
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreMatchmakingAsyncActionJoinLobby::HandleCallback(const FJoinLobbyData& data, bool bWasSuccessful)
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
//		USteamCoreCreateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreCreateSession::USteamCoreCreateSession()
	: Delegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCompleted))
{
}

USteamCoreCreateSession* USteamCoreCreateSession::CreateSteamCoreSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> sessionSettings, FString sessionName /* = "SteamCoreSession" */, int32 numPublicConnections /* = 5 */, int32 numPrivateConnections /* = 0 */, bool bUseLAN /* = false */, bool bAllowInvites /* = true */, bool bUsesPresence /* = true */, bool bAllowJoinViaPresence /* = true */, bool bAllowJoinViaPresenceFriendsOnly /* = false */, bool bAntiCheatProtected /* = false */, bool bUsesStats /* = false */, bool bShouldAdvertise /* = true */)
{
	LogVerbose("");
	
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();
	auto* AsyncObject = NewObject<USteamCoreCreateSession>();
	AsyncObject->RegisterWithGameInstance(GameInstance);

	const bool bIsDedicated = IsRunningDedicatedServer();

	AsyncObject->m_SessionSettings.NumPublicConnections = numPublicConnections;
	AsyncObject->m_SessionSettings.NumPrivateConnections = numPrivateConnections;
	AsyncObject->m_SessionSettings.bShouldAdvertise = bShouldAdvertise;
	AsyncObject->m_SessionSettings.bAllowJoinInProgress = true;
	AsyncObject->m_SessionSettings.bIsLANMatch = bUseLAN;
	AsyncObject->m_SessionSettings.bAllowJoinViaPresence = bAllowJoinViaPresence;
	AsyncObject->m_SessionSettings.bIsDedicated = bIsDedicated;
	AsyncObject->m_SessionSettings.bUsesPresence = bUsesPresence && !bIsDedicated;
	AsyncObject->m_SessionSettings.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
	AsyncObject->m_SessionSettings.bAntiCheatProtected = bAntiCheatProtected;
	AsyncObject->m_SessionSettings.bUsesStats = bUsesStats;
	AsyncObject->m_SessionSettings.bShouldAdvertise = bShouldAdvertise;
	AsyncObject->m_SessionSettings.bAllowInvites = bAllowInvites;

	for (auto& Element : sessionSettings)
	{
		if (Element.Key.Len() == 0)
		{
			continue;
		}

		FOnlineSessionSetting Setting;
		Setting.AdvertisementType = EOnlineDataAdvertisementType::ViaOnlineService;

		if (Element.Value.Data.IsType<bool>())
		{
			Setting.Data.SetValue(Element.Value.Data.Get<bool>() ? 1 : 0);
		}
		else if (Element.Value.Data.IsType<int32>())
		{
			Setting.Data.SetValue(Element.Value.Data.Get<int32>());
		}
		else if (Element.Value.Data.IsType<FString>())
		{
			Setting.Data.SetValue(Element.Value.Data.Get<FString>());
		}

		AsyncObject->m_SessionSettings.Set(FName(*Element.Key), Setting);
	}

	FOnlineSessionSetting Setting;
	Setting.AdvertisementType = EOnlineDataAdvertisementType::ViaOnlineService;
	Setting.Data.SetValue(*sessionName);

	AsyncObject->m_SessionSettings.Set(STEAMKEY_OWNINGUSERNAME, Setting);

	return AsyncObject;
}

void USteamCoreCreateSession::Activate()
{
	LogVerbose("");
	
	bool bSuccess = false;

	const auto Subsystem = IOnlineSubsystem::Get();

	if (Subsystem)
	{
		IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();

		if (SessionInt.IsValid())
		{
			DelegateHandle = SessionInt->AddOnCreateSessionCompleteDelegate_Handle(Delegate);

			if (SessionInt->CreateSession(0, NAME_GameSession, m_SessionSettings))
			{
				bSuccess = true;
			}
		}
	}

	if (!bSuccess)
		OnCompleted(NAME_GameSession, false);
}

void USteamCoreCreateSession::OnCompleted(FName sessionName, bool bSuccessful)
{
	LogVerbose("");
	
	bool bSuccess = false;

	if (SteamCoreDebugging())
		UE_LOG(LogSteamCore, Warning, TEXT("Create Session %s Complete! %d"), *sessionName.ToString(), bSuccessful);

	const auto Subsystem = IOnlineSubsystem::Get();

	if (Subsystem)
	{
		IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();

		if (SessionInt.IsValid() && bSuccessful)
		{
			SessionInt->StartSession(NAME_GameSession);
			SessionInt->ClearOnCreateSessionCompleteDelegate_Handle(DelegateHandle);

			bSuccess = true;
		}
	}

	if (bSuccess)
		OnSuccess.Broadcast();
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFindSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFindSession::USteamCoreFindSession()
	: Delegate(FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnCompleted))
{
}

USteamCoreFindSession* USteamCoreFindSession::FindSteamCoreSessions(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> searchSettings, int32 MaxResults /* = 50 */, bool bUseLAN /* = false */, ESteamSessionFindType serverType /* = ESteamSessionFindType::Listen */, bool bEmptyServersOnly /* = false */, bool bSecureServersOnly /* = false */)
{
	LogVerbose("");
	
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();
	auto* AsyncObject = NewObject<USteamCoreFindSession>();
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->additionalSearchSettings = searchSettings;
	AsyncObject->m_MaxResults = MaxResults;
	AsyncObject->m_bUseLAN = bUseLAN;
	AsyncObject->m_ServerType = serverType;
	AsyncObject->m_bEmptyServersOnly = bEmptyServersOnly;
	AsyncObject->m_bSecureServersOnly = bSecureServersOnly;

	return AsyncObject;
}

void USteamCoreFindSession::Activate()
{
	LogVerbose("");
	
	const auto Subsystem = IOnlineSubsystem::Get();

	if (Subsystem)
	{
		IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();

		if (SessionInt.IsValid())
		{
			DelegateHandle = SessionInt->AddOnFindSessionsCompleteDelegate_Handle(Delegate);
			
			m_SearchSettings = MakeShareable(new FOnlineSessionSearch);

			m_SearchSettings->MaxSearchResults = m_MaxResults;
			m_SearchSettings->bIsLanQuery = m_bUseLAN;
			FOnlineSearchSettings& m_Settings = m_SearchSettings->QuerySettings;

			if (m_ServerType == ESteamSessionFindType::Listen)
			{
				m_Settings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
			}
			else
			{
				m_Settings.Set(SEARCH_DEDICATED_ONLY, 1, EOnlineComparisonOp::Equals);
			}

			if (m_bEmptyServersOnly)
				m_Settings.Set(SEARCH_EMPTY_SERVERS_ONLY, m_bEmptyServersOnly ? 1 : 0, EOnlineComparisonOp::Equals);
			if (m_bSecureServersOnly)
				m_Settings.Set(SEARCH_SECURE_SERVERS_ONLY, m_bSecureServersOnly ? 1 : 0, EOnlineComparisonOp::Equals);

			for (auto& Element : additionalSearchSettings)
			{
				if (Element.Key.Len() == 0)
				{
					continue;
				}

				if (Element.Value.Data.IsType<bool>())
				{
					m_Settings.Set(FName(*Element.Key), Element.Value.Data.Get<bool>() ? 1 : 0, static_cast<EOnlineComparisonOp::Type>(Element.Value.ComparisonOp));
				}
				else if (Element.Value.Data.IsType<int32>())
				{
					m_Settings.Set(FName(*Element.Key), Element.Value.Data.Get<int32>(), static_cast<EOnlineComparisonOp::Type>(Element.Value.ComparisonOp));
				}
				else if (Element.Value.Data.IsType<FString>())
				{
					m_Settings.Set(FName(*Element.Key), Element.Value.Data.Get<FString>(), static_cast<EOnlineComparisonOp::Type>(Element.Value.ComparisonOp));
				}
			}

			if (!SessionInt->FindSessions(0, m_SearchSettings.ToSharedRef()))
			{
				OnCompleted(false);
			}
		}
	}
}

void USteamCoreFindSession::OnCompleted(bool bSuccessful)
{
	LogVerbose("");
	
	const auto Subsystem = IOnlineSubsystem::Get();

	if (Subsystem)
	{
		IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();

		if (SessionInt.IsValid())
		{
			SessionInt->ClearOnFindSessionsCompleteDelegate_Handle(DelegateHandle);

			if (m_SearchSettings.IsValid())
			{
				if (SteamCoreDebugging())
				{
					UE_LOG(LogSteamCore, Warning, TEXT("Found sessions: %i"), m_SearchSettings->SearchResults.Num());
					GEngine->AddOnScreenDebugMessage(5, 15.f, FColor::Green, FString::Printf(TEXT(""), m_SearchSettings->SearchResults.Num()));
				}

				TArray<FSteamSessionResult> Results;

				for (FOnlineSessionSearchResult& Element : m_SearchSettings->SearchResults)
				{
					TArray<FSteamSessionSetting> AdditionalSessionSettings;

					for (auto& SettingsElement : Element.Session.SessionSettings.Settings)
					{
						FSteamSessionSetting Setting;
						Setting.Key = SettingsElement.Key.ToString();

						switch (SettingsElement.Value.Data.GetType())
						{
							case EOnlineKeyValuePairDataType::Bool:
								bool bValue;
								SettingsElement.Value.Data.GetValue(bValue);
								Setting.Data.Set<bool>(bValue);
							break;
							case EOnlineKeyValuePairDataType::Int32:
								int32 IntValue;
								SettingsElement.Value.Data.GetValue(IntValue);
								Setting.Data.Set<int32>(IntValue);
							break;
							case EOnlineKeyValuePairDataType::String:
								FString Value;
								SettingsElement.Value.Data.GetValue(Value);
								Setting.Data.Set<FString>(Value);
							break;
						}

						AdditionalSessionSettings.Add(Setting);
					}

					FBlueprintSessionResult BPResult;
					BPResult.OnlineResult = Element;
					FString CustomSessionName;
					BPResult.OnlineResult.Session.SessionSettings.Get(STEAMKEY_OWNINGUSERNAME, CustomSessionName);

					if (CustomSessionName.Len() > 0)
					{
						BPResult.OnlineResult.Session.OwningUserName = CustomSessionName;
					}

					if (m_bUseLAN == false && Element.GetSessionIdStr().IsEmpty() == false)
					{
						FSteamID LobbyId = static_cast<int64>(FCString::Atoi64(*Element.Session.GetSessionIdStr()));

						if (LobbyId.IsValid())
						{
							if (ISteamMatchmaking* Matchmaking = SteamMatchmaking())
							{
								BPResult.OnlineResult.Session.NumOpenPublicConnections = (Matchmaking->GetLobbyMemberLimit(LobbyId) - Matchmaking->GetNumLobbyMembers(LobbyId));
							}
						}	
					}

					BPResult.OnlineResult.PingInMs = Element.PingInMs;

					FString ResultText = FString::Printf(TEXT("Found a session (%s). Ping is %d"), *BPResult.OnlineResult.Session.OwningUserName, Element.PingInMs);

					FFrame::KismetExecutionMessage(*ResultText, ELogVerbosity::Log);

					m_SearchResults.Add(BPResult);

					Results.Add(FSteamSessionResult(BPResult, AdditionalSessionSettings));
				}

				OnCallback.Broadcast(Results);
			}
		}
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreDestroySession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreDestroySession::USteamCoreDestroySession()
	: Delegate(FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCompleted))
{
}

USteamCoreDestroySession* USteamCoreDestroySession::DestroySteamCoreSession(UObject* WorldContextObject)
{
	LogVerbose("");
	
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();
	auto* AsyncObject = NewObject<USteamCoreDestroySession>();
	AsyncObject->RegisterWithGameInstance(GameInstance);

	return AsyncObject;
}

void USteamCoreDestroySession::Activate()
{
	LogVerbose("");
	
	const auto Subsystem = IOnlineSubsystem::Get();

	if (Subsystem)
	{
		IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();

		if (SessionInt.IsValid())
		{
			DelegateHandle = SessionInt->AddOnDestroySessionCompleteDelegate_Handle(Delegate);
			SessionInt->DestroySession(NAME_GameSession);

			return;
		}
	}

	OnFailure.Broadcast();
}

void USteamCoreDestroySession::OnCompleted(FName sessionName, bool bWasSuccessful)
{
	LogVerbose("");
	
	const auto Subsystem = IOnlineSubsystem::Get();

	if (Subsystem)
	{
		IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();
		
		if (SessionInt.IsValid())
		{
			SessionInt->ClearOnDestroySessionCompleteDelegate_Handle(DelegateHandle);
		}
	}

	if (!IsInGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
				{
					OnSuccess.Broadcast();
				}
				else
				{
					OnFailure.Broadcast();
				}

				SetReadyToDestroy();
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
		{
			OnSuccess.Broadcast();
		}
		else
		{
			OnFailure.Broadcast();
		}

		SetReadyToDestroy();
	}
}
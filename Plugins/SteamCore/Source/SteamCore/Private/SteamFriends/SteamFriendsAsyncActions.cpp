/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#include "SteamFriends/SteamFriendsAsyncActions.h"
#include "SteamFriends/SteamFriendsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionSetPersonaName* USteamCoreFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(UObject* WorldContextObject, FString name)
{
	LogVerbose("");

	if (SteamFriends())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreFriendsAsyncActionSetPersonaName>();
		auto* Task = new FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(Subsystem, AsyncObject, name);
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

void USteamCoreFriendsAsyncActionSetPersonaName::HandleCallback(const FSetPersonaNameResponse& data, bool bWasSuccessful)
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
//		USteamCoreFriendsAsyncActionDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionDownloadClanActivityCounts* USteamCoreFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> steamIDClans)
{
	LogVerbose("");
	
	if (SteamFriends())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreFriendsAsyncActionDownloadClanActivityCounts>();
		auto* Task = new FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(Subsystem, AsyncObject, steamIDClans);
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

void USteamCoreFriendsAsyncActionDownloadClanActivityCounts::HandleCallback(const FDownloadClanActivityCountsResult& data, bool bWasSuccessful)
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
//		USteamCoreFriendsAsyncActionRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionRequestClanOfficerList* USteamCoreFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID steamIDClan)
{
	LogVerbose("");
	
	if (SteamFriends())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreFriendsAsyncActionRequestClanOfficerList>();
		auto* Task = new FOnlineAsyncTaskSteamCoreRequestClanOfficerList(Subsystem, AsyncObject, steamIDClan);
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

void USteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(const FClanOfficerListResponse& data, bool bWasSuccessful)
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
//		USteamCoreFriendsAsyncActionJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionJoinClanChatRoom* USteamCoreFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID steamIDClan)
{
	LogVerbose("");
	
	if (SteamFriends())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreFriendsAsyncActionJoinClanChatRoom>();
		auto* Task = new FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(Subsystem, AsyncObject, steamIDClan);
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

void USteamCoreFriendsAsyncActionJoinClanChatRoom::HandleCallback(const FJoinClanChatRoomCompletionResult& data, bool bWasSuccessful)
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
//		USteamCoreFriendsAsyncActionEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionEnumerateFollowingList* USteamCoreFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(UObject* WorldContextObject, int32 startIndex)
{
	LogVerbose("");
	
	if (SteamFriends())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreFriendsAsyncActionEnumerateFollowingList>();
		auto* Task = new FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(Subsystem, AsyncObject, startIndex);
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

void USteamCoreFriendsAsyncActionEnumerateFollowingList::HandleCallback(const FFriendsEnumerateFollowingList& data, bool bWasSuccessful)
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
//		USteamCoreFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionIsFollowing* USteamCoreFriendsAsyncActionIsFollowing::IsFollowingAsync(UObject* WorldContextObject, FSteamID steamID)
{
	LogVerbose("");
	
	if (SteamFriends())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreFriendsAsyncActionIsFollowing>();
		auto* Task = new FOnlineAsyncTaskSteamCoreFriendsIsFollowing(Subsystem, AsyncObject, steamID);
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

void USteamCoreFriendsAsyncActionIsFollowing::HandleCallback(const FFriendsIsFollowing& data, bool bWasSuccessful)
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
//		USteamCoreFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionGetFollowerCount* USteamCoreFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(UObject* WorldContextObject, FSteamID steamID)
{
	LogVerbose("");
	
	if (SteamFriends())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreFriendsAsyncActionGetFollowerCount>();
		auto* Task = new FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(Subsystem, AsyncObject, steamID);
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

void USteamCoreFriendsAsyncActionGetFollowerCount::HandleCallback(const FFriendsGetFollowerCount& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}

USteamCoreFriendsAsyncActionRequestUserInformation* USteamCoreFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(UObject* WorldContextObject, FSteamID steamIDUser, bool bRequireNameOnly)
{
	LogVerbose("");
	
	if (SteamFriends())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* AsyncObject = NewObject<USteamCoreFriendsAsyncActionRequestUserInformation>();
		AsyncObject->RegisterWithGameInstance(GameInstance);
		AsyncObject->OnPersonaStateChangeCallback.Register(AsyncObject, &USteamCoreFriendsAsyncActionRequestUserInformation::OnPersonaStateChange);
		AsyncObject->m_SteamIDUser = steamIDUser;
		AsyncObject->m_bRequireNameOnly = bRequireNameOnly;
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

void USteamCoreFriendsAsyncActionRequestUserInformation::Activate()
{
	LogVerbose("");
	
	USteamCoreAsyncAction::Activate();

	if (!SteamFriends()->RequestUserInformation(m_SteamIDUser, m_bRequireNameOnly))
	{
		HandleCallback();
	}
}

void USteamCoreFriendsAsyncActionRequestUserInformation::HandleCallback()
{
	LogVerbose("");
	
	if (!IsInGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
		{
			OnCallback.Broadcast();
			SetReadyToDestroy();
		}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		OnCallback.Broadcast();
		SetReadyToDestroy();
	}
}

void USteamCoreFriendsAsyncActionRequestUserInformation::OnPersonaStateChange(PersonaStateChange_t* pParam)
{
	LogVerbose("");
	
	if (pParam->m_ulSteamID == m_SteamIDUser.GetValue())
	{
		OnPersonaStateChangeCallback.Unregister();
		HandleCallback();
	}
}
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/isteamparties
*/

#include "SteamParties/SteamPartiesAsyncActions.h"
#include "SteamParties/SteamPartiesAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreSteamPartiesAsyncActionCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreSteamPartiesAsyncActionJoinParty* USteamCoreSteamPartiesAsyncActionJoinParty::JoinPartyAsync(UObject* WorldContextObject, FPartyBeaconID beaconId)
{
	LogVerbose("");
	
	if (SteamParties())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreSteamPartiesAsyncActionJoinParty>();
		auto* Task = new FOnlineAsyncTaskSteamCorePartiesJoinParty(Subsystem, AsyncObject, beaconId);
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

void USteamCoreSteamPartiesAsyncActionJoinParty::HandleCallback(const FJoinPartyData& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}

USteamCoreSteamPartiesAsyncActionCreateBeacon* USteamCoreSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(UObject* WorldContextObject, int32 openSlots, FSteamPartyBeaconLocation beaconLocation, FString connectString, FString metadata)
{
	LogVerbose("");
	
	if (SteamParties())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreSteamPartiesAsyncActionCreateBeacon>();
		auto* Task = new FOnlineAsyncTaskSteamCorePartiesCreateBeacon(Subsystem, AsyncObject, openSlots, beaconLocation, connectString, metadata);
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

void USteamCoreSteamPartiesAsyncActionCreateBeacon::HandleCallback(const FCreateBeaconData& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}

USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(UObject* WorldContextObject, FPartyBeaconID beaconId, int32 openSlots)
{
	LogVerbose("");
	
	if (SteamParties())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>();
		auto* Task = new FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots(Subsystem, AsyncObject, beaconId, openSlots);
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

void USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::HandleCallback(const FChangeNumOpenSlotsData& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}

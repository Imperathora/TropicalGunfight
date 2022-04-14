/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "SteamUser/SteamUserAsyncActions.h"
#include "SteamUser/SteamUserAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserAsyncActionRequestEncryptedAppTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserAsyncActionRequestEncryptedAppTicket* USteamCoreUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(UObject* WorldContextObject, TArray<uint8> dataToInclude)
{
	LogVerbose("");

	if (SteamUser())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUserAsyncActionRequestEncryptedAppTicket>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(Subsystem, AsyncObject, dataToInclude);
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

void USteamCoreUserAsyncActionRequestEncryptedAppTicket::HandleCallback(const FEncryptedAppTicketResponse& data, bool bWasSuccessful)
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
//		USteamCoreUserAsyncActionRequestStoreAuthURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserAsyncActionRequestStoreAuthURL* USteamCoreUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(UObject* WorldContextObject, FString RedirectURL)
{
	LogVerbose("");

	if (SteamUser())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUserAsyncActionRequestStoreAuthURL>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(Subsystem, AsyncObject, RedirectURL);
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

void USteamCoreUserAsyncActionRequestStoreAuthURL::HandleCallback(const FStoreAuthURLResponse& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}
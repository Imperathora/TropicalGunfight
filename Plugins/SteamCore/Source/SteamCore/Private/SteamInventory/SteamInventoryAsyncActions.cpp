/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#include "SteamInventory/SteamInventoryAsyncActions.h"
#include "SteamInventory/SteamInventoryAsyncTasks.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::RequestEligiblePromoItemDefinitionsIDsAsync(UObject* WorldContextObject, FSteamID steamID)
{
	LogVerbose("");

	if (GetInventory())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>();
		auto* Task = new FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(Subsystem, AsyncObject, steamID);
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

void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::HandleCallback(const FSteamInventoryEligiblePromoItemDefIDs& data, bool bWasSuccessful)
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
//		USteamCoreInventoryAsyncActionRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreInventoryAsyncActionRequestPricesResult* USteamCoreInventoryAsyncActionRequestPricesResult::RequestPricesAsync(UObject* WorldContextObject)
{
	LogVerbose("");
	
	if (GetInventory())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreInventoryAsyncActionRequestPricesResult>();
		auto* Task = new FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(Subsystem, AsyncObject);
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

void USteamCoreInventoryAsyncActionRequestPricesResult::HandleCallback(const FSteamInventoryRequestPricesResult& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}

USteamCoreInventoryAsyncActionStartPurchaseResult* USteamCoreInventoryAsyncActionStartPurchaseResult::StartPurchaseAsync(UObject* WorldContextObject, const TArray<FSteamItemDef> itemDefs, const TArray<int32> quantity)
{
	LogVerbose("");
	
	if (GetInventory())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreInventoryAsyncActionStartPurchaseResult>();
		auto* Task = new FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult(Subsystem, AsyncObject, itemDefs, quantity);
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

void USteamCoreInventoryAsyncActionStartPurchaseResult::HandleCallback(const FSteamInventoryStartPurchaseResult& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}

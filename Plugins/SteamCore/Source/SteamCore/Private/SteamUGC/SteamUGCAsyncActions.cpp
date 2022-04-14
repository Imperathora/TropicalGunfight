/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "SteamUGC/SteamUGCAsyncActions.h"
#include "SteamUGC/SteamUGCAsyncTasks.h"
#include "SteamUGC/SteamUGC.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::StopPlaytimeTrackingForAllItemsAsync(UObject* WorldContextObject)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(Subsystem, AsyncObject);
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

void USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::HandleCallback(const FStopPlaytimeTrackingResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStopPlaytimeTracking* USteamCoreUGCAsyncActionStopPlaytimeTracking::StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> publishedFileIDs)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionStopPlaytimeTracking>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(Subsystem, AsyncObject, publishedFileIDs);
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

void USteamCoreUGCAsyncActionStopPlaytimeTracking::HandleCallback(const FStopPlaytimeTrackingResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStartPlaytimeTracking* USteamCoreUGCAsyncActionStartPlaytimeTracking::StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> publishedFileIDs)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionStartPlaytimeTracking>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(Subsystem, AsyncObject, publishedFileIDs);
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

void USteamCoreUGCAsyncActionStartPlaytimeTracking::HandleCallback(const FStartPlaytimeTrackingResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionUnsubscribeItem* USteamCoreUGCAsyncActionUnsubscribeItem::UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileIDs)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionUnsubscribeItem>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(Subsystem, AsyncObject, publishedFileIDs);
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

void USteamCoreUGCAsyncActionUnsubscribeItem::HandleCallback(const FRemoteStorageSubscribePublishedFileResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSubscribeItem* USteamCoreUGCAsyncActionSubscribeItem::SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileIDs)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionSubscribeItem>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCSubscribeItem(Subsystem, AsyncObject, publishedFileIDs);
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

void USteamCoreUGCAsyncActionSubscribeItem::HandleCallback(const FRemoteStorageSubscribePublishedFileResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveItemFromFavorites* USteamCoreUGCAsyncActionRemoveItemFromFavorites::RemoveItemFromFavoritesAsync(UObject* WorldContextObject, int32 appID, FPublishedFileID publishedFileID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveItemFromFavorites>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(Subsystem, AsyncObject, appID, publishedFileID);
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

void USteamCoreUGCAsyncActionRemoveItemFromFavorites::HandleCallback(const FUserFavoriteItemsListChanged& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddItemToFavorites* USteamCoreUGCAsyncActionAddItemToFavorites::AddItemToFavoritesAsync(UObject* WorldContextObject, int32 appID, FPublishedFileID publishedFileID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionAddItemToFavorites>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(Subsystem, AsyncObject, appID, publishedFileID);
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

void USteamCoreUGCAsyncActionAddItemToFavorites::HandleCallback(const FUserFavoriteItemsListChanged& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionGetUserItemVote* USteamCoreUGCAsyncActionGetUserItemVote::GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionGetUserItemVote>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(Subsystem, AsyncObject, publishedFileID);
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

void USteamCoreUGCAsyncActionGetUserItemVote::HandleCallback(const FGetUserItemVoteResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSetUserItemVote* USteamCoreUGCAsyncActionSetUserItemVote::SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, bool bVoteUp)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionSetUserItemVote>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(Subsystem, AsyncObject, bVoteUp, publishedFileID);
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

void USteamCoreUGCAsyncActionSetUserItemVote::HandleCallback(const FSetUserItemVoteResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSubmitItemUpdate* USteamCoreUGCAsyncActionSubmitItemUpdate::SubmitItemUpdateAsync(UObject* WorldContextObject, FUGCUpdateHandle handle, FString changeNote)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionSubmitItemUpdate>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(Subsystem, AsyncObject, handle, changeNote);
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

void USteamCoreUGCAsyncActionSubmitItemUpdate::HandleCallback(const FSubmitItemUpdateResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionCreateItem* USteamCoreUGCAsyncActionCreateItem::CreateItemAsync(UObject* WorldContextObject, int32 consumerAppID, ESteamWorkshopFileType fileType)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionCreateItem>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCCreateItem(Subsystem, AsyncObject, consumerAppID, fileType);
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

void USteamCoreUGCAsyncActionCreateItem::HandleCallback(const FCreateItemResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSendQueryUGCRequest* USteamCoreUGCAsyncActionSendQueryUGCRequest::SendQueryUGCRequestAsync(UObject* WorldContextObject, FUGCQueryHandle handle)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionSendQueryUGCRequest>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(Subsystem, AsyncObject, handle);
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

void USteamCoreUGCAsyncActionSendQueryUGCRequest::HandleCallback(const FSteamUGCQueryCompleted& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddAppDependency* USteamCoreUGCAsyncActionAddAppDependency::AddAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, int32 appID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionAddAppDependency>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCAddAppDependency(Subsystem, AsyncObject, publishedFileID, appID);
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

void USteamCoreUGCAsyncActionAddAppDependency::HandleCallback(const FAddAppDependencyResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveAppDependency* USteamCoreUGCAsyncActionRemoveAppDependency::RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, int32 appID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveAppDependency>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(Subsystem, AsyncObject, publishedFileID, appID);
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

void USteamCoreUGCAsyncActionRemoveAppDependency::HandleCallback(const FRemoveAppDependencyResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddUGCDependency* USteamCoreUGCAsyncActionAddUGCDependency::AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionAddUGCDependency>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(Subsystem, AsyncObject, publishedFileID, childPublishedFileID);
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

void USteamCoreUGCAsyncActionAddUGCDependency::HandleCallback(const FAddUGCDependencyResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveUGCDependency* USteamCoreUGCAsyncActionRemoveUGCDependency::RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveUGCDependency>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(Subsystem, AsyncObject, publishedFileID, childPublishedFileID);
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

void USteamCoreUGCAsyncActionRemoveUGCDependency::HandleCallback(const FRemoveUGCDependencyResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionDeleteItem* USteamCoreUGCAsyncActionDeleteItem::DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionDeleteItem>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCDeleteItem(Subsystem, AsyncObject, publishedFileID);
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

void USteamCoreUGCAsyncActionDeleteItem::HandleCallback(const FUGCDeleteItemResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionGetAppDependencies* USteamCoreUGCAsyncActionGetAppDependencies::GetAppDependenciesAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionGetAppDependencies>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(Subsystem, AsyncObject, publishedFileID);
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

void USteamCoreUGCAsyncActionGetAppDependencies::HandleCallback(const FGetAppDependenciesResult& data, bool bWasSuccessful)
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
//		USteamCoreUGCAsyncActionDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionDownloadItem* USteamCoreUGCAsyncActionDownloadItem::DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, bool bHighPriority)
{
	LogVerbose("");
	
	if (GetUGC())
	{
		auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* Subsystem = GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* AsyncObject = NewObject<USteamCoreUGCAsyncActionDownloadItem>();
		auto* Task = new FOnlineAsyncTaskSteamCoreUGCDownloadItem(Subsystem, AsyncObject, publishedFileID, bHighPriority);
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

void USteamCoreUGCAsyncActionDownloadItem::HandleCallback(const FDownloadItemResult& data, bool bWasSuccessful)
{
	LogVerbose("");

	auto Data = data;
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
		{
			OnCallback.Broadcast(Data, bWasSuccessful);

			SetReadyToDestroy();
		});
}
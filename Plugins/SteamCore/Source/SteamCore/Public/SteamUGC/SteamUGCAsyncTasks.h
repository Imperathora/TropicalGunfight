/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamUGCTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStopPlaytimeTrackingForAllItems m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(class USteamCoreSubsystem* subsystem, FOnStopPlaytimeTrackingForAllItems callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
	{}
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems() = delete;
protected:
	StopPlaytimeTrackingResult_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStopPlaytimeTracking m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(class USteamCoreSubsystem* subsystem, FOnStopPlaytimeTracking callback, TArray<FPublishedFileID> fileIDs)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_FileIDs(fileIDs)
	{}
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<FPublishedFileID> fileIDs)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_FileIDs(fileIDs)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking() = delete;
protected:
	StopPlaytimeTrackingResult_t m_CallbackResults;
	TArray<FPublishedFileID> m_FileIDs;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStartPlaytimeTracking m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(class USteamCoreSubsystem* subsystem, FOnStartPlaytimeTracking callback, TArray<FPublishedFileID> fileIDs)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_FileIDs(fileIDs)
	{
	}
	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<FPublishedFileID> fileIDs)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_FileIDs(fileIDs)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking() = delete;
protected:
	StartPlaytimeTrackingResult_t m_CallbackResults;
	TArray<FPublishedFileID> m_FileIDs;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUnsubscribeItem m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(class USteamCoreSubsystem* subsystem, FOnUnsubscribeItem callback, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_FileID(publishedFileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem() = delete;
protected:
	RemoteStorageSubscribePublishedFileResult_t m_CallbackResults;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCSubscribeItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSubscribeItem m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSubscribeItem(class USteamCoreSubsystem* subsystem, FOnSubscribeItem callback, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCSubscribeItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_FileID(publishedFileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCSubscribeItem() = delete;
protected:
	RemoteStorageSubscribePublishedFileResult_t m_CallbackResults;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSubscribeItem")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveItemFromFavorites m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(class USteamCoreSubsystem* subsystem, FOnRemoveItemFromFavorites callback, int32 appID, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_AppID(appID)
		, m_FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 appID, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_AppID(appID)
		, m_FileID(fileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites() = delete;
protected:
	UserFavoriteItemsListChanged_t m_CallbackResults;
	int32 m_AppID;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddItemToFavorites m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(class USteamCoreSubsystem* subsystem, FOnAddItemToFavorites callback, int32 appID, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_AppID(appID)
		, m_FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 appID, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_AppID(appID)
		, m_FileID(fileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites() = delete;
protected:
	UserFavoriteItemsListChanged_t m_CallbackResults;
	int32 m_AppID;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCGetUserItemVote : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetUserItemVote m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(class USteamCoreSubsystem* subsystem, FOnGetUserItemVote callback, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_FileID(fileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote() = delete;
protected:
	GetUserItemVoteResult_t m_CallbackResults;
 	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCGetUserItemVote")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCSetUserItemVote : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSetUserItemVote m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(class USteamCoreSubsystem* subsystem, FOnSetUserItemVote callback, bool voteUp, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, bVoteUp(voteUp)
		, m_FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, bool voteUp, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, bVoteUp(voteUp)
		, m_FileID(fileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote() = delete;
protected:
	SetUserItemVoteResult_t m_CallbackResults;
	bool bVoteUp;
 	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSetUserItemVote")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSubmitItemUpdate m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(class USteamCoreSubsystem* subsystem, FOnSubmitItemUpdate callback, FUGCUpdateHandle handle, FString changeNote)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_UGCUpdateHandle(handle)
		, m_ChangeNote(changeNote)
	{}
	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FUGCUpdateHandle handle, FString changeNote)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_UGCUpdateHandle(handle)
		, m_ChangeNote(changeNote)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate() = delete;
protected:
	SubmitItemUpdateResult_t m_CallbackResults;
	FUGCUpdateHandle m_UGCUpdateHandle;
	FString m_ChangeNote;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCCreateItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnCreateItem m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCCreateItem(class USteamCoreSubsystem* subsystem, FOnCreateItem callback, int32 appID, ESteamWorkshopFileType fileType)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_ConsumerAppID(appID)
		, m_FileType(fileType)
	{}
	FOnlineAsyncTaskSteamCoreUGCCreateItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 appID, ESteamWorkshopFileType fileType)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_ConsumerAppID(appID)
		, m_FileType(fileType)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCCreateItem() = delete;
protected:
	CreateItemResult_t m_CallbackResults;
	int32 m_ConsumerAppID;
	ESteamWorkshopFileType m_FileType;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCCreateItem")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSendQueryUGCRequest m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(class USteamCoreSubsystem* subsystem, FOnSendQueryUGCRequest callback, FUGCQueryHandle handle)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_UGCQueryHandle(handle)
	{}
	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FUGCQueryHandle handle)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_UGCQueryHandle(handle)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest() = delete;
protected:
	SteamUGCQueryCompleted_t m_CallbackResults;
	FUGCQueryHandle m_UGCQueryHandle;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCAddAppDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddAppDependencyResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddAppDependency(class USteamCoreSubsystem* subsystem, FOnAddAppDependencyResult callback, FPublishedFileID publishedFileID, int32 appID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_PublishedFileID(publishedFileID)
		, m_AppID(appID)
	{}
	FOnlineAsyncTaskSteamCoreUGCAddAppDependency(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID, int32 appID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_PublishedFileID(publishedFileID)
		, m_AppID(appID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCAddAppDependency() = delete;
protected:
	AddAppDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	int32 m_AppID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddAppDependency")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveAppDependencyResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(class USteamCoreSubsystem* subsystem, FOnRemoveAppDependencyResult callback, FPublishedFileID publishedFileID, int32 appID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_PublishedFileID(publishedFileID)
		, m_AppID(appID)
	{}
	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID, int32 appID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_PublishedFileID(publishedFileID)
		, m_AppID(appID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency() = delete;
protected:
	RemoveAppDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	int32 m_AppID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCAddUGCDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddUGCDependencyResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(class USteamCoreSubsystem* subsystem, FOnAddUGCDependencyResult callback, FPublishedFileID publishedFileId, FPublishedFileID childPublishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_PublishedFileID(publishedFileId)
		, m_ChildPublishedFileID(childPublishedFileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileId, FPublishedFileID childPublishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_PublishedFileID(publishedFileId)
		, m_ChildPublishedFileID(childPublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency() = delete;
protected:
	AddUGCDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	FPublishedFileID m_ChildPublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddUGCDependency")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveUGCDependencyResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(class USteamCoreSubsystem* subsystem, FOnRemoveUGCDependencyResult callback, FPublishedFileID parentPublishedFileId, FPublishedFileID childPublishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_ParentPublishedFileID(parentPublishedFileId)
		, m_ChildPublishedFileID(childPublishedFileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID parentPublishedFileId, FPublishedFileID childPublishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_ParentPublishedFileID(parentPublishedFileId)
		, m_ChildPublishedFileID(childPublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency() = delete;
protected:
	RemoveUGCDependencyResult_t m_CallbackResults;
	FPublishedFileID m_ParentPublishedFileID;
	FPublishedFileID m_ChildPublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCDeleteItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDeleteItemResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCDeleteItem(class USteamCoreSubsystem* subsystem, FOnDeleteItemResult callback, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_PublishedFileID(publishedFileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCDeleteItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_PublishedFileID(publishedFileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCDeleteItem() = delete;
protected:
	DeleteItemResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCDeleteItem")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCGetAppDependencies : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetAppDependenciesResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(class USteamCoreSubsystem* subsystem, FOnGetAppDependenciesResult callback, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_PublishedFileID(publishedFileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_PublishedFileID(publishedFileID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies() = delete;
protected:
	GetAppDependenciesResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCGetAppDependencies")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCDownloadItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadItem m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCDownloadItem(class USteamCoreSubsystem* subsystem, FOnDownloadItem callback, FPublishedFileID publishedFileID, bool highPriority)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_PublishedFileID(publishedFileID)
		, bHighPriority(highPriority)
	{
		OnDownloadItemResultCallback.Register(this, &FOnlineAsyncTaskSteamCoreUGCDownloadItem::OnDownloadItemResult);
	}
	FOnlineAsyncTaskSteamCoreUGCDownloadItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID, bool highPriority)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_PublishedFileID(publishedFileID)
		, bHighPriority(highPriority)
	{
		OnDownloadItemResultCallback.Register(this, &FOnlineAsyncTaskSteamCoreUGCDownloadItem::OnDownloadItemResult);
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
	virtual ~FOnlineAsyncTaskSteamCoreUGCDownloadItem()
	{
		OnDownloadItemResultCallback.Unregister();
	}
private:
	FOnlineAsyncTaskSteamCoreUGCDownloadItem() = delete;
protected:
	DownloadItemResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	bool bHighPriority;
protected:
	STEAM_CALLBACK_MANUAL(FOnlineAsyncTaskSteamCoreUGCDownloadItem, OnDownloadItemResult, DownloadItemResult_t, OnDownloadItemResultCallback);
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCDownloadItem")); }
};
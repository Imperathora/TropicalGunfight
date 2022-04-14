/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#pragma once

#include "SteamFriendsTypes.h"
#include "SteamCore/SteamCoreAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsSetPersonaName : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSetPersonaName m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(class USteamCoreSubsystem* subsystem, FOnSetPersonaName callback, FString name)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_Name(name)
	{}
	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString name)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_Name(name)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName() = delete;
protected:
	SetPersonaNameResponse_t m_CallbackResults;
	FString m_Name;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsSetPersonaName")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadClanActivityCounts m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(class USteamCoreSubsystem* subsystem, FOnDownloadClanActivityCounts callback, TArray<FSteamID> steamIDClans)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamIDClans(steamIDClans)
	{}
	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<FSteamID> steamIDClans)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_SteamIDClans(steamIDClans)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts() = delete;
protected:
	DownloadClanActivityCountsResult_t m_CallbackResults;
	TArray<FSteamID> m_SteamIDClans;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRequestClanOfficerList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestClanOfficerList m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRequestClanOfficerList(class USteamCoreSubsystem* subsystem, FOnRequestClanOfficerList callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreRequestClanOfficerList(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_SteamID(steamID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreRequestClanOfficerList() = delete;
protected:
	ClanOfficerListResponse_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRequestClanOfficerList")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom : public FOnlineAsyncTaskSteamCore
{
public:
	FOnJoinClanChatRoom m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(class USteamCoreSubsystem* subsystem, FOnJoinClanChatRoom callback, FSteamID steamIDClan)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamIDClan(steamIDClan)
	{}
	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamIDClan)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_SteamIDClan(steamIDClan)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom() = delete;
protected:
	JoinClanChatRoomCompletionResult_t m_CallbackResults;
	FSteamID m_SteamIDClan;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnEnumerateFollowingList m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(class USteamCoreSubsystem* subsystem, FOnEnumerateFollowingList callback, int32 startIndex)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_StartIndex(startIndex)
	{}
	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 startIndex)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_StartIndex(startIndex)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList() = delete;
protected:
	FriendsEnumerateFollowingList_t m_CallbackResults;
	int32 m_StartIndex;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsIsFollowing : public FOnlineAsyncTaskSteamCore
{
public:
	FOnIsFollowing m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsIsFollowing(class USteamCoreSubsystem* subsystem, FOnIsFollowing callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreFriendsIsFollowing(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_SteamID(steamID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsIsFollowing() = delete;
protected:
	FriendsIsFollowing_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsIsFollowing")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetFollowerCount m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(class USteamCoreSubsystem* subsystem, FOnGetFollowerCount callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_SteamID(steamID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount() = delete;
protected:
	FriendsGetFollowerCount_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount")); }
};
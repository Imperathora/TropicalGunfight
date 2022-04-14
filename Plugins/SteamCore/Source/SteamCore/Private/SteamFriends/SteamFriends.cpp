/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#include "SteamFriends/SteamFriends.h"
#include "SteamFriends/SteamFriendsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UFriends::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnAvatarImageLoadedCallback.Register(this, &UFriends::OnAvatarImageLoaded);
	OnFriendRichPresenceUpdateCallback.Register(this, &UFriends::OnFriendRichPresenceUpdate);
	OnGameConnectedChatJoinCallback.Register(this, &UFriends::OnGameConnectedChatJoin);
	OnGameConnectedChatLeaveCallback.Register(this, &UFriends::OnGameConnectedChatLeave);
	OnGameConnectedFriendChatMsgCallback.Register(this, &UFriends::OnGameConnectedFriendChatMsg);
	OnGameConnectedClanChatMsgCallback.Register(this, &UFriends::OnGameConnectedClanChatMsg);
	OnGameLobbyJoinRequestedCallback.Register(this, &UFriends::OnGameLobbyJoinRequested);
	OnGameOverlayActivatedCallback.Register(this, &UFriends::OnGameOverlayActivated);
	OnGameRichPresenceJoinRequestedCallback.Register(this, &UFriends::OnGameRichPresenceJoinRequested);
	OnGameServerChangeRequestedCallback.Register(this, &UFriends::OnGameServerChangeRequested);
	OnPersonaStateChangeCallback.Register(this, &UFriends::OnPersonaStateChange);
	OnSetPersonaNameResponseCallback.Register(this, &UFriends::OnSetPersonaNameResponse);
	OnJoinClanChatRoomCompletionResultCallback.Register(this, &UFriends::OnJoinClanChatRoomCompletionResult);
	OnClanOfficerListResponseCallback.Register(this, &UFriends::OnClanOfficerListResponse);
	OnDownloadClanActivityCountsResultCallback.Register(this, &UFriends::OnDownloadClanActivityCountsResult);

	if (IsRunningDedicatedServer())
	{
		OnAvatarImageLoadedCallback.SetGameserverFlag();
		OnFriendRichPresenceUpdateCallback.SetGameserverFlag();
		OnGameConnectedChatJoinCallback.SetGameserverFlag();
		OnGameConnectedChatLeaveCallback.SetGameserverFlag();
		OnGameConnectedFriendChatMsgCallback.SetGameserverFlag();
		OnGameConnectedClanChatMsgCallback.SetGameserverFlag();
		OnGameLobbyJoinRequestedCallback.SetGameserverFlag();
		OnGameOverlayActivatedCallback.SetGameserverFlag();
		OnGameRichPresenceJoinRequestedCallback.SetGameserverFlag();
		OnGameServerChangeRequestedCallback.SetGameserverFlag();
		OnPersonaStateChangeCallback.SetGameserverFlag();
		OnSetPersonaNameResponseCallback.SetGameserverFlag();
		OnJoinClanChatRoomCompletionResultCallback.SetGameserverFlag();
		OnClanOfficerListResponseCallback.SetGameserverFlag();
		OnDownloadClanActivityCountsResultCallback.SetGameserverFlag();
	}
}

void UFriends::Deinitialize()
{
	OnAvatarImageLoadedCallback.Unregister();
	OnFriendRichPresenceUpdateCallback.Unregister();
	OnGameConnectedChatJoinCallback.Unregister();
	OnGameConnectedChatLeaveCallback.Unregister();
	OnGameConnectedFriendChatMsgCallback.Unregister();
	OnGameConnectedClanChatMsgCallback.Unregister();
	OnGameLobbyJoinRequestedCallback.Unregister();
	OnGameOverlayActivatedCallback.Unregister();
	OnGameRichPresenceJoinRequestedCallback.Unregister();
	OnGameServerChangeRequestedCallback.Unregister();
	OnPersonaStateChangeCallback.Unregister();
	OnSetPersonaNameResponseCallback.Unregister();
	OnJoinClanChatRoomCompletionResultCallback.Unregister();
	OnClanOfficerListResponseCallback.Unregister();
	OnDownloadClanActivityCountsResultCallback.Unregister();

	Super::Deinitialize();
}

UTexture2D* UFriends::GetAvatar(uint8 size, FSteamID steamUserID)
{
	UTexture2D* Result = nullptr;

	if (SteamFriends())
	{
		int Data = 0;

		switch (size)
		{
		case 0:
			Data = SteamFriends()->GetSmallFriendAvatar(steamUserID);
			break;
		case 1:
			Data = SteamFriends()->GetMediumFriendAvatar(steamUserID);
			break;
		case 2:
			Data = SteamFriends()->GetLargeFriendAvatar(steamUserID);
			break;
		}

		Result = GetSteamTexture(Data);
	}
	// size: 0=small, 1=medium, 2=large

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UFriends::ActivateGameOverlay(FString dialog)
{
	LogVerbose("");

	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlay(TCHAR_TO_UTF8(*dialog));
	}
}

void UFriends::ActivateGameOverlayInvitedialog(FSteamID steamIDLobby)
{
	LogVerbose("");

	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayInviteDialog(steamIDLobby);
	}
}

void UFriends::ActivateGameOverlayToStore(int32 appID, ESteamOverlayToStoreFlag flag)
{
	LogVerbose("");

	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayToStore(appID, static_cast<EOverlayToStoreFlag>(flag));
	}
}

void UFriends::ActivateGameOverlayToUser(FString dialog, FSteamID steamID)
{
	LogVerbose("");

	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*dialog), steamID);
	}
}

void UFriends::ActivateGameOverlayToWebPage(FString url, ESteamActivateGameOverlayToWebPageMode mode)
{
	LogVerbose("");

	if (SteamFriends())
	{
#if STEAM_VERSION > 142
		SteamFriends()->ActivateGameOverlayToWebPage(TCHAR_TO_UTF8(*url), static_cast<EActivateGameOverlayToWebPageMode>(mode));
#else
		SteamFriends()->ActivateGameOverlayToWebPage(TCHAR_TO_UTF8(*url));
#endif
	}
}

void UFriends::ClearRichPresence()
{
	LogVerbose("");

	if (SteamFriends())
	{
		SteamFriends()->ClearRichPresence();
	}
}

bool UFriends::CloseClanChatWindowInSteam(FSteamID steamIDClanChat)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->CloseClanChatWindowInSteam(steamIDClanChat);
	}

	return bResult;
}

void UFriends::DownloadClanActivityCounts(const FOnDownloadClanActivityCounts& callback, TArray<FSteamID> steamIDClans)
{
	LogVerbose("");

	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts* Task = new FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(this, callback, steamIDClans);
		QueueAsyncTask(Task);
	}
}

void UFriends::EnumerateFollowingList(const FOnEnumerateFollowingList& callback, int32 startIndex)
{
	LogVerbose("");

	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList* Task = new FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(this, callback, startIndex);
		QueueAsyncTask(Task);
	}
}

FSteamID UFriends::GetChatMemberByIndex(FSteamID steamIDClan, int32 user)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetChatMemberByIndex(steamIDClan, user);
	}

	return Result;
}

bool UFriends::GetClanActivityCounts(FSteamID steamIDClan, int32& outOnline, int32& outIngame, int32& outChatting)
{
	LogVeryVerbose("");

	bool bResult = false;
	outOnline = 0;
	outIngame = 0;
	outChatting = 0;

	if (SteamFriends())
	{
		bResult = SteamFriends()->GetClanActivityCounts(steamIDClan, &outOnline, &outIngame, &outChatting);
	}

	return bResult;
}

FSteamID UFriends::GetClanByIndex(int32 clan)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanByIndex(clan);
	}

	return Result;
}

int32 UFriends::GetClanChatMemberCount(FSteamID steamIDClan)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanChatMemberCount(steamIDClan);
	}

	return Result;
}

int32 UFriends::GetClanChatMessage(FSteamID steamIDClanChat, int32 messageID, FString& outText, ESteamChatEntryType& outChatEntryType, FSteamID& outSteamIdChatter)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outText.Empty();
	CSteamID SteamIdChatter;
	EChatEntryType ChatEntryType = EChatEntryType::k_EChatEntryTypeInvalid;

	if (SteamFriends())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);

		Result = SteamFriends()->GetClanChatMessage(steamIDClanChat, messageID, DataArray.GetData(), DataArray.Num(), &ChatEntryType, &SteamIdChatter);
		outText = UTF8_TO_TCHAR(DataArray.GetData());
	}

	outChatEntryType = static_cast<ESteamChatEntryType>(ChatEntryType);
	outSteamIdChatter = SteamIdChatter;

	return Result;
}

int32 UFriends::GetClanCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanCount();
	}

	return Result;
}

FString UFriends::GetClanName(FSteamID steamIDClan)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetClanName(steamIDClan));
	}

	return Result;
}

FSteamID UFriends::GetClanOfficerByIndex(FSteamID steamIDClan, int32 officer)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanOfficerByIndex(steamIDClan, officer);
	}

	return Result;
}

int32 UFriends::GetClanOfficerCount(FSteamID steamIDClan)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanOfficerCount(steamIDClan);
	}

	return Result;
}

FSteamID UFriends::GetClanOwner(FSteamID steamIDClan)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanOwner(steamIDClan);
	}

	return Result;
}

FString UFriends::GetClanTag(FSteamID steamIDClan)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetClanTag(steamIDClan));
	}

	return Result;
}

FSteamID UFriends::GetCoplayFriend(int32 coplayFriend)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetCoplayFriend(coplayFriend);
	}

	return Result;
}

int32 UFriends::GetCoplayFriendCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetCoplayFriendCount();
	}

	return Result;
}

void UFriends::GetFollowerCount(const FOnGetFollowerCount& callback, FSteamID steamID)
{
	LogVeryVerbose("");

	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount* Task = new FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(this, callback, steamID);
		QueueAsyncTask(Task);
	}
}

FSteamID UFriends::GetFriendByIndex(int32 ifriend, TArray<ESteamFriendFlags> flags)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamFriends())
	{
		int Flags = 0;

		for (int i = 0; i < flags.Num(); i++)
		{
			Flags |= *flags[i];
		}

		Result = SteamFriends()->GetFriendByIndex(ifriend, Flags);
	}

	return Result;
}

int32 UFriends::GetFriendCoplayGame(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendCoplayGame(steamIDFriend);
	}

	return Result;
}

int32 UFriends::GetFriendCoplayTime(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendCoplayTime(steamIDFriend);
	}

	return Result;
}

int32 UFriends::GetFriendCount(TArray<ESteamFriendFlags> flags)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		int Flags = 0;

		for (int i = 0; i < flags.Num(); i++)
		{
			Flags |= *flags[i];
		}

		Result = SteamFriends()->GetFriendCount(Flags);
	}

	return Result;
}

int32 UFriends::GetFriendCountFromSource(FSteamID steamIDSource)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendCountFromSource(steamIDSource);
	}

	return Result;
}

FSteamID UFriends::GetFriendFromSourceByIndex(FSteamID steamIDSource, int32 ifriend)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendFromSourceByIndex(steamIDSource, ifriend);
	}

	return Result;
}

bool UFriends::GetFriendGamePlayed(FSteamID steamIDFriend, FSteamGameID& outGameId, FString& outGameIp, int32& outConnectionPort, int32& outQueryPort, FSteamID& outSteamLobby)
{
	LogVeryVerbose("");

	bool bResult = false;
	outGameId = FSteamGameID();
	outGameIp.Empty();
	outConnectionPort = 0;
	outQueryPort = 0;
	outSteamLobby = FSteamID();

	if (SteamFriends())
	{
		FriendGameInfo_t FriendData;

		bResult = SteamFriends()->GetFriendGamePlayed(steamIDFriend, &FriendData);

		if (bResult)
		{
			outGameId = FriendData.m_gameID;
			outGameIp = FIPv4Address(FriendData.m_unGameIP).ToString();
			outConnectionPort = FriendData.m_usGamePort;
			outQueryPort = FriendData.m_usQueryPort;
			outSteamLobby = FriendData.m_steamIDLobby;
		}
	}

	return bResult;
}

int32 UFriends::GetFriendMessage(FSteamID steamIDFriend, int32 messageID, FString& outText, ESteamChatEntryType& outChatEntryType)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outText.Empty();
	EChatEntryType ChatEntryType = EChatEntryType::k_EChatEntryTypeChatMsg;

	if (SteamFriends())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);

		Result = SteamFriends()->GetFriendMessage(steamIDFriend, messageID, DataArray.GetData(), DataArray.Num(), &ChatEntryType);

		if (Result != INDEX_NONE)
		{
			outText = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	outChatEntryType = static_cast<ESteamChatEntryType>(ChatEntryType);

	return Result;
}

FString UFriends::GetFriendPersonaName(FSteamID steamIDFriend)
{
	LogVeryVerbose("");
	
	FString Result;
	
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaName(steamIDFriend));
	}

	return Result;
}

FString UFriends::GetFriendPersonaNameHistory(FSteamID steamIDFriend, int32 personaName)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaNameHistory(steamIDFriend, personaName));
	}

	return Result;
}

ESteamPersonaState UFriends::GetFriendPersonaState(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	ESteamPersonaState Result = ESteamPersonaState::Max;

	if (SteamFriends())
	{
		Result = static_cast<ESteamPersonaState>(SteamFriends()->GetFriendPersonaState(steamIDFriend));
	}

	return Result;
}

ESteamFriendRelationship UFriends::GetFriendRelationship(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	ESteamFriendRelationship Result = ESteamFriendRelationship::Max;

	if (SteamFriends())
	{
		Result = static_cast<ESteamFriendRelationship>(SteamFriends()->GetFriendRelationship(steamIDFriend));
	}

	return Result;
}

FString UFriends::GetFriendRichPresence(FSteamID steamIDFriend, FString key)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendRichPresence(steamIDFriend, TCHAR_TO_UTF8(*key)));
	}

	return Result;
}

FString UFriends::GetFriendRichPresenceKeyByIndex(FSteamID steamIDFriend, int32 key)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendRichPresenceKeyByIndex(steamIDFriend, key));
	}

	return Result;
}

int32 UFriends::GetFriendRichPresenceKeyCount(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendRichPresenceKeyCount(steamIDFriend);
	}

	return Result;
}

int32 UFriends::GetFriendsGroupCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendsGroupCount();
	}

	return Result;
}

FSteamFriendsGroupID UFriends::GetFriendsGroupIDByIndex(int32 friendGroup)
{
	LogVeryVerbose("");

	FSteamFriendsGroupID Result;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendsGroupIDByIndex(friendGroup);
	}

	return Result;
}

int32 UFriends::GetFriendsGroupMembersCount(FSteamFriendsGroupID friendsGroupID)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendsGroupMembersCount(friendsGroupID);
	}

	return Result;
}

void UFriends::GetFriendsGroupMembersList(FSteamFriendsGroupID friendsGroupID, TArray<FSteamID>& outSteamIdMembers, int32 membersCount)
{
	LogVeryVerbose("");

	outSteamIdMembers.Empty();

	if (SteamFriends())
	{
		TArray<CSteamID> DataArray;
		DataArray.SetNum(membersCount);

		SteamFriends()->GetFriendsGroupMembersList(friendsGroupID, DataArray.GetData(), membersCount);

		for (int32 i = 0; i < membersCount; i++)
		{
			outSteamIdMembers.Add(DataArray[i]);
		}
	}
}

FString UFriends::GetFriendsGroupName(FSteamFriendsGroupID friendsGroupID)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendsGroupName(friendsGroupID));
	}

	return Result;
}

int UFriends::GetFriendSteamLevel(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	int Result = 0;

	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendSteamLevel(steamIDFriend);
	}

	return Result;
}

UTexture2D* UFriends::GetLargeFriendAvatar(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	return UFriends::GetAvatar(2, steamIDFriend);
}

UTexture2D* UFriends::GetMediumFriendAvatar(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	return UFriends::GetAvatar(1, steamIDFriend);
}

FString UFriends::GetPersonaName()
{
	LogVeryVerbose("");

	FString Result;

	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetPersonaName());
	}

	return Result;
}

ESteamPersonaState UFriends::GetPersonaState()
{
	LogVeryVerbose("");

	ESteamPersonaState Result = ESteamPersonaState::Max;

	if (SteamFriends())
	{
		Result = static_cast<ESteamPersonaState>(SteamFriends()->GetPersonaState());
	}

	return Result;
}

FString UFriends::GetPlayerNickname(FSteamID steamIDPlayer)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetPlayerNickname(steamIDPlayer));
	}

	return Result;
}

UTexture2D* UFriends::GetSmallFriendAvatar(FSteamID steamIDFriend)
{
	LogVeryVerbose("");

	return UFriends::GetAvatar(0, steamIDFriend);
}

TArray<ESteamUserRestriction> UFriends::GetUserRestrictions()
{
	LogVeryVerbose("");

	TArray<ESteamUserRestriction> DataArray;

	if (SteamFriends())
	{
		const uint32 Flags = SteamFriends()->GetUserRestrictions();

		for (int32 i = 0; i <= 31; i++)
		{
			if (Flags & 1 << i)
				DataArray.Add(static_cast<ESteamUserRestriction>(i));
		}
	}

	return DataArray;
}

bool UFriends::HasFriend(FSteamID steamIDFriend, TArray<ESteamFriendFlags> flags)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		int Flags = 0;

		for (int i = 0; i < flags.Num(); i++)
		{
			Flags |= *flags[i];
		}

		bResult = SteamFriends()->HasFriend(steamIDFriend, Flags);
	}

	return bResult;
}

bool UFriends::InviteUserToGame(FSteamID steamIDFriend, FString connectString)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->InviteUserToGame(steamIDFriend, TCHAR_TO_UTF8(*connectString));
	}

	return bResult;
}

bool UFriends::IsClanChatAdmin(FSteamID steamIDClanChat, FSteamID steamIDUser)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->IsClanChatAdmin(steamIDClanChat, steamIDUser);
	}

	return bResult;
}

bool UFriends::IsClanPublic(FSteamID steamIDClan)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->IsClanPublic(steamIDClan);
	}

	return bResult;
}

bool UFriends::IsClanOfficialGameGroup(FSteamID steamIDClan)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->IsClanOfficialGameGroup(steamIDClan);
	}

	return bResult;
}

bool UFriends::IsClanChatWindowOpenInSteam(FSteamID steamIDClanChat)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->IsClanChatWindowOpenInSteam(steamIDClanChat);
	}

	return bResult;
}

void UFriends::IsFollowing(const FOnIsFollowing& callback, FSteamID steamID)
{
	LogVerbose("");

	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsIsFollowing* Task = new FOnlineAsyncTaskSteamCoreFriendsIsFollowing(this, callback, steamID);
		QueueAsyncTask(Task);
	}
}

bool UFriends::IsUserInSource(FSteamID steamIDUser, FSteamID steamIDSource)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->IsUserInSource(steamIDUser, steamIDSource);
	}

	return bResult;
}

void UFriends::JoinClanChatRoom(const FOnJoinClanChatRoom& callback, FSteamID steamIDClan)
{
	LogVerbose("");

	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom* Task = new FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(this, callback, steamIDClan);
		QueueAsyncTask(Task);
	}
}

bool UFriends::LeaveClanChatRoom(FSteamID steamIDClan)
{
	LogVerbose("");

	return SteamFriends() ? SteamFriends()->LeaveClanChatRoom(steamIDClan) : false;
}

bool UFriends::OpenClanChatWindowInSteam(FSteamID steamIDClanChat)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->OpenClanChatWindowInSteam(steamIDClanChat);
	}

	return bResult;
}

bool UFriends::ReplyToFriendMessage(FSteamID steamIDFriend, FString msgToSend)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->ReplyToFriendMessage(steamIDFriend, TCHAR_TO_UTF8(*msgToSend));
	}

	return bResult;
}

void UFriends::RequestClanOfficerList(const FOnRequestClanOfficerList& callback, FSteamID steamIDClan)
{
	LogVerbose("");

	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreRequestClanOfficerList* Task = new FOnlineAsyncTaskSteamCoreRequestClanOfficerList(this, callback, steamIDClan);
		QueueAsyncTask(Task);
	}
}

void UFriends::RequestFriendRichPresence(FSteamID steamIDFriend)
{
	LogVerbose("");

	if (SteamFriends())
	{
		SteamFriends()->RequestFriendRichPresence(steamIDFriend);
	}
}

bool UFriends::RequestUserInformation(FSteamID steamIDUser, bool bRequireNameOnly)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->RequestUserInformation(steamIDUser, bRequireNameOnly);
	}

	return bResult;
}

bool UFriends::SendClanChatMessage(FSteamID steamIDClanChat, FString text)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->SendClanChatMessage(steamIDClanChat, TCHAR_TO_UTF8(*text));
	}

	return bResult;
}

void UFriends::SetInGameVoiceSpeaking(FSteamID steamIDUser, bool bSpeaking)
{
	LogVerbose("");

	if (SteamFriends())
	{
		SteamFriends()->SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
	}
}

bool UFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamFriends())
	{
		bResult = SteamFriends()->SetListenForFriendsMessages(bInterceptEnabled);
	}

	return bResult;
}

void UFriends::SetPersonaName(const FOnSetPersonaName& callback, FString name)
{
	LogVerbose("");

	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsSetPersonaName* Task = new FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(this, callback, name);
		QueueAsyncTask(Task);
	}
}

void UFriends::SetPlayedWith(FSteamID steamIDUserPlayedWith)
{
	LogVerbose("");

	if (SteamFriends())
	{
		SteamFriends()->SetPlayedWith(steamIDUserPlayedWith);
	}
}

bool UFriends::SetRichPresence(FString key, FString value)
{
	LogVerbose("");

	bool bResult = false;
	
	if (key.Len() == 0 || value.Len() == 0)
    {
        return bResult;
    }

	if (SteamFriends())
	{
		char Key[k_cchMaxRichPresenceKeyLength];
		FCStringAnsi::Strncpy(Key, TCHAR_TO_UTF8(*key), k_cchMaxRichPresenceKeyLength);
		char Value[k_cchMaxRichPresenceValueLength];
		FCStringAnsi::Strncpy(Value, TCHAR_TO_UTF8(*value), k_cchMaxRichPresenceValueLength);

		bResult = SteamFriends()->SetRichPresence(Key, Value);
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UFriends::OnPersonaStateChange(PersonaStateChange_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			PersonaStateChange.Broadcast(Data);
		});
}

void UFriends::OnSetPersonaNameResponse(SetPersonaNameResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SetPersonaNameResponse.Broadcast(Data);
		});
}

void UFriends::OnJoinClanChatRoomCompletionResult(JoinClanChatRoomCompletionResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			JoinClanChatRoomCompletionResult.Broadcast(Data);
		});
}

void UFriends::OnGameOverlayActivated(GameOverlayActivated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameOverlayActivated.Broadcast(Data);
		});
}

void UFriends::OnGameServerChangeRequested(GameServerChangeRequested_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameServerChangeRequested.Broadcast(Data);
		});
}

void UFriends::OnGameLobbyJoinRequested(GameLobbyJoinRequested_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameLobbyJoinRequested.Broadcast(Data);
		});
}

void UFriends::OnAvatarImageLoaded(AvatarImageLoaded_t* pParam)
{
	LogVerbose("");

	FAvatarImageLoaded Data = *pParam;
	Data.Image = GetSteamTexture(Data.m_iImage);

	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			AvatarImageLoaded.Broadcast(Data);
		});
}

void UFriends::OnFriendRichPresenceUpdate(FriendRichPresenceUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			FriendRichPresenceUpdate.Broadcast(Data);
		});
}

void UFriends::OnGameRichPresenceJoinRequested(GameRichPresenceJoinRequested_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameRichPresenceJoinRequested.Broadcast(Data);
		});
}

void UFriends::OnGameConnectedClanChatMsg(GameConnectedClanChatMsg_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameConnectedClanChatMsg.Broadcast(Data);
		});
}

void UFriends::OnGameConnectedChatJoin(GameConnectedChatJoin_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameConnectedChatJoin.Broadcast(Data);
		});
}

void UFriends::OnGameConnectedChatLeave(GameConnectedChatLeave_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameConnectedChatLeave.Broadcast(Data);
		});
}

void UFriends::OnGameConnectedFriendChatMsg(GameConnectedFriendChatMsg_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameConnectedFriendChatMsg.Broadcast(Data);
		});
}

void UFriends::OnClanOfficerListResponse(ClanOfficerListResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ClanOfficerListResponse.Broadcast(Data);
		});
}

void UFriends::OnDownloadClanActivityCountsResult(DownloadClanActivityCountsResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			DownloadClanActivityCountsResult.Broadcast(Data);
		});
}
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#include "SteamMatchmaking/SteamMatchmaking.h"
#include "SteamMatchmaking/SteamMatchmakingAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UMatchmaking::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnFavoritesListAccountsUpdatedCallback.Register(this, &UMatchmaking::OnFavoritesListAccountsUpdated);
	OnFavoritesListChangedCallback.Register(this, &UMatchmaking::OnFavoritesListChanged);
	OnLobbyChatMsgCallback.Register(this, &UMatchmaking::OnLobbyChatMsg);
	OnLobbyChatUpdateCallback.Register(this, &UMatchmaking::OnLobbyChatUpdate);
	OnLobbyDataUpdateCallback.Register(this, &UMatchmaking::OnLobbyDataUpdate);
	OnLobbyEnterCallback.Register(this, &UMatchmaking::OnLobbyEnter);
	OnLobbyGameCreatedCallback.Register(this, &UMatchmaking::OnLobbyGameCreated);
	OnLobbyInviteCallback.Register(this, &UMatchmaking::OnLobbyInvite);
	OnLobbyKickedCallback.Register(this, &UMatchmaking::OnLobbyKicked);

	if (IsRunningDedicatedServer())
	{
		OnFavoritesListAccountsUpdatedCallback.SetGameserverFlag();
		OnFavoritesListChangedCallback.SetGameserverFlag();
		OnLobbyChatMsgCallback.SetGameserverFlag();
		OnLobbyChatUpdateCallback.SetGameserverFlag();
		OnLobbyDataUpdateCallback.SetGameserverFlag();
		OnLobbyEnterCallback.SetGameserverFlag();
		OnLobbyGameCreatedCallback.SetGameserverFlag();
		OnLobbyInviteCallback.SetGameserverFlag();
		OnLobbyKickedCallback.SetGameserverFlag();
	}
}

void UMatchmaking::Deinitialize()
{
	OnFavoritesListAccountsUpdatedCallback.Unregister();
	OnFavoritesListChangedCallback.Unregister();
	OnLobbyChatMsgCallback.Unregister();
	OnLobbyChatUpdateCallback.Unregister();
	OnLobbyDataUpdateCallback.Unregister();
	OnLobbyEnterCallback.Unregister();
	OnLobbyGameCreatedCallback.Unregister();
	OnLobbyInviteCallback.Unregister();
	OnLobbyKickedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 UMatchmaking::AddFavoriteGame(int32 appID, FString ip, int32 connectionPort, int32 queryPort, TArray<ESteamFavoriteFlags> flags, int32 timeLastPlayedOnServer)
{
	LogVerbose("");

	int32 Result = 0;

	if (SteamMatchmaking())
	{
		int Flags = 0;

		for (int i = 0; i < flags.Num(); i++)
		{
			Flags |= static_cast<int>(flags[i]);
		}

		FIPv4Address IpAddress;
		FIPv4Address::Parse(ip, IpAddress);

		Result = SteamMatchmaking()->AddFavoriteGame(appID, IpAddress.Value, connectionPort, queryPort, Flags, timeLastPlayedOnServer);
	}

	return Result;
}

void UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(FSteamID steamIDLobby)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListCompatibleMembersFilter(steamIDLobby);
	}
}

void UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListDistanceFilter((ELobbyDistanceFilter)LobbyDistanceFilter);
	}
}

void UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32 slotsAvailable)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListFilterSlotsAvailable(slotsAvailable);
	}
}

void UMatchmaking::AddRequestLobbyListNearValueFilter(FString keyToMatch, int32 valueToBeCloseTo)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListNearValueFilter(TCHAR_TO_UTF8(*keyToMatch), valueToBeCloseTo);
	}
}

void UMatchmaking::AddRequestLobbyListNumericalFilter(FString keyToMatch, int32 valueToMatch, ESteamLobbyComparison comparisonType)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListNumericalFilter(TCHAR_TO_UTF8(*keyToMatch), valueToMatch, static_cast<ELobbyComparison>(((uint8)comparisonType - 2)));
	}
}

void UMatchmaking::AddRequestLobbyListResultCountFilter(int32 MaxResults)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListResultCountFilter(MaxResults);
	}
}

void UMatchmaking::AddRequestLobbyListStringFilter(FString keyToMatch, FString valueToMatch, ESteamLobbyComparison comparisonType)
{
	LogVerbose("");

	if (keyToMatch.Len() == 0 || valueToMatch.Len() == 0)
	{
		return;
	}

	if (SteamMatchmaking())
	{
		char KeyAnsi[256];
		FCStringAnsi::Strncpy(KeyAnsi, TCHAR_TO_UTF8(*keyToMatch), keyToMatch.GetAllocatedSize());
		char ValueAnsi[1024];
		FCStringAnsi::Strncpy(ValueAnsi, TCHAR_TO_UTF8(*valueToMatch), valueToMatch.GetAllocatedSize());
		
		SteamMatchmaking()->AddRequestLobbyListStringFilter(KeyAnsi, ValueAnsi, static_cast<ELobbyComparison>(((uint8)comparisonType - 2)));
	}
}

void UMatchmaking::CreateLobby(const FOnCreateLobby& callback, ESteamLobbyType lobbyType, int32 maxMembers)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby* Task = new FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(this, callback, static_cast<ELobbyType>(lobbyType), maxMembers);
		QueueAsyncTask(Task);
	}
}

bool UMatchmaking::DeleteLobbyData(FSteamID steamIDLobby, FString key)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->DeleteLobbyData(steamIDLobby, TCHAR_TO_UTF8(*key));
	}

	return bResult;
}

bool UMatchmaking::GetFavoriteGame(int32 game, int32& outAppID, FString& outIp, int32& outConnectionPort, int32& outQueryPort, TArray<ESteamFavoriteFlags>& outFlags, int32& outTimeLastPlayedOnServer)
{
	LogVeryVerbose("");

	bool bResult = false;

	outFlags.Empty();
	outIp.Empty();

	uint32 IpAddress = 0;
	uint32 Flags = 0;

	uint16 ConnectionPort = 0;
	uint16 QueryPort = 0;
	uint32 TimeLastPlayedOnServer = 0;
	uint32 AppId = 0;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->GetFavoriteGame(game, &AppId, &IpAddress, &ConnectionPort, &QueryPort, &Flags, &TimeLastPlayedOnServer);

		if (bResult)
		{
			FIPv4Address InternalIP(IpAddress);
			outIp = InternalIP.ToString();

			for (uint8 i = 0; i < 31; i++)
			{
				if (Flags & 1 << i)
				{
					outFlags.Add((ESteamFavoriteFlags)(1 << i));
				}
			}
		}
	}

	outConnectionPort = ConnectionPort;
	outQueryPort = QueryPort;
	outTimeLastPlayedOnServer = TimeLastPlayedOnServer;
	outAppID = AppId;

	return bResult;
}

int32 UMatchmaking::GetFavoriteGameCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetFavoriteGameCount();
	}

	return Result;
}

FSteamID UMatchmaking::GetLobbyByIndex(int32 lobby)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyByIndex(lobby);
	}

	return Result;
}

int32 UMatchmaking::GetLobbyChatEntry(FSteamID steamIDLobby, int32 messageID, FSteamID& outSteamIDUser, FString& outMessage, ESteamChatEntryType& outChatEntryType)
{
	LogVeryVerbose("");

	int32 Result = 0;
	CSteamID SteamIdUser;
	EChatEntryType ChatEntryType = k_EChatEntryTypeInvalid;
	outMessage.Empty();

	if (SteamMatchmaking())
	{
		TArray<uint8> DataArray;
		DataArray.SetNum(1024);

		Result = SteamMatchmaking()->GetLobbyChatEntry(steamIDLobby, messageID, &SteamIdUser, DataArray.GetData(), DataArray.Num(), &ChatEntryType);
		DataArray.SetNum(Result);

		if (Result > 0)
		{
			FMemoryReader Reader(DataArray);
			Reader << outMessage;
			Reader.Close();
		}
	}

	outChatEntryType = static_cast<ESteamChatEntryType>(ChatEntryType);
	outSteamIDUser = SteamIdUser;

	return Result;
}

FString UMatchmaking::GetLobbyData(FSteamID steamIDLobby, FString key)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamMatchmaking())
	{
		Result = UTF8_TO_TCHAR(SteamMatchmaking()->GetLobbyData(steamIDLobby, TCHAR_TO_UTF8(*key)));
	}

	return Result;
}

bool UMatchmaking::GetLobbyDataByIndex(FSteamID steamIDLobby, int32 lobbyData, FString& outKey, FString& outValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	outKey.Empty();
	outValue.Empty();

	if (SteamMatchmaking())
	{
		TArray<char> Keys;
		TArray<char> Value;
		Keys.SetNum(k_nMaxLobbyKeyLength);
		Value.SetNum(k_cubChatMetadataMax);

		bResult = SteamMatchmaking()->GetLobbyDataByIndex(steamIDLobby, lobbyData, Keys.GetData(), k_nMaxLobbyKeyLength, Value.GetData(), k_cubChatMetadataMax);

		if (bResult)
		{
			TCHAR KeyChar[k_nMaxLobbyKeyLength];
			FCString::Strncpy(KeyChar, UTF8_TO_TCHAR(Keys.GetData()), Keys.Num());
			TCHAR ValueChar[k_cubChatMetadataMax];
			FCString::Strncpy(ValueChar, UTF8_TO_TCHAR(Value.GetData()), Value.Num());
			
			outKey = KeyChar;
			outValue = ValueChar;
		}
	}

	return bResult;
}

int32 UMatchmaking::GetLobbyDataCount(FSteamID steamIDLobby)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyDataCount(steamIDLobby);
	}

	return Result;
}

bool UMatchmaking::GetLobbyGameServer(FSteamID steamIDLobby, FString& outGameServerIP, int32& outGameServerPort, FSteamID& outSteamIDGameServer)
{
	LogVeryVerbose("");

	bool bResult = false;
	outGameServerIP.Empty();

	uint32 GameServerIP = 0;
	uint16 GameServerPort = 0;
	CSteamID SteamIDGameServer;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->GetLobbyGameServer(steamIDLobby, &GameServerIP, &GameServerPort, &SteamIDGameServer);

		if (bResult)
		{
			outGameServerIP = FIPv4Address(GameServerIP).ToString();
		}
	}

	outGameServerPort = GameServerPort;
	outSteamIDGameServer = SteamIDGameServer;

	return bResult;
}

FSteamID UMatchmaking::GetLobbyMemberByIndex(FSteamID steamIDLobby, int32 member)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyMemberByIndex(steamIDLobby, member);
	}

	return Result;
}

FString UMatchmaking::GetLobbyMemberData(FSteamID steamIDLobby, FSteamID steamIDUser, FString key)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamMatchmaking())
	{
		Result = UTF8_TO_TCHAR(SteamMatchmaking()->GetLobbyMemberData(steamIDLobby, steamIDUser, TCHAR_TO_UTF8(*key)));
	}

	return Result;
}

int32 UMatchmaking::GetLobbyMemberLimit(FSteamID steamIDLobby)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyMemberLimit(steamIDLobby);
	}

	return Result;
}

FSteamID UMatchmaking::GetLobbyOwner(FSteamID steamIDLobby)
{
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyOwner(steamIDLobby);
	}

	return Result;
}

int32 UMatchmaking::GetNumLobbyMembers(FSteamID steamIDLobby)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetNumLobbyMembers(steamIDLobby);
	}

	return Result;
}

bool UMatchmaking::InviteUserToLobby(FSteamID steamIDLobby, FSteamID steamIDInvitee)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->InviteUserToLobby(steamIDLobby, steamIDInvitee);
	}

	return bResult;
}

void UMatchmaking::JoinLobby(const FOnJoinLobby& callback, FSteamID steamIDLobby)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreJoinLobby* Task = new FOnlineAsyncTaskSteamCoreJoinLobby(this, callback, steamIDLobby);
		QueueAsyncTask(Task);
	}
}

void UMatchmaking::LeaveLobby(FSteamID steamIDLobby)
{
	LogVerbose("");

	if (SteamMatchmaking())
		SteamMatchmaking()->LeaveLobby(steamIDLobby);
}

bool UMatchmaking::RemoveFavoriteGame(int32 appID, FString ip, int32 connectionPort, int32 queryPort, TArray<ESteamFavoriteFlags> flags)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		int Flags = 0;

		for (int i = 0; i < flags.Num(); i++)
		{
			Flags |= static_cast<int>(flags[i]);
		}

		FIPv4Address IpAddress;
		FIPv4Address::Parse(ip, IpAddress);

		bResult = SteamMatchmaking()->RemoveFavoriteGame(appID, IpAddress.Value, connectionPort, queryPort, Flags);
	}

	return bResult;
}

bool UMatchmaking::RequestLobbyData(FSteamID steamIDLobby)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->RequestLobbyData(steamIDLobby);
	}

	return bResult;
}

void UMatchmaking::RequestLobbyList(const FOnRequestLobbyList& callback)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreRequestLobbyList* Task = new FOnlineAsyncTaskSteamCoreRequestLobbyList(this, callback);
		QueueAsyncTask(Task);
	}
}

bool UMatchmaking::SendLobbyChatMsg(FSteamID steamIDLobby, FString message)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		TArray<uint8> DataArray;
		DataArray.SetNum(message.Len());
		FMemoryWriter Writer(DataArray);
		Writer << message;
		Writer.Close();

		bResult = SteamMatchmaking()->SendLobbyChatMsg(steamIDLobby, DataArray.GetData(), DataArray.Num());
	}

	return bResult;
}

bool UMatchmaking::SetLinkedLobby(FSteamID steamIDLobby, FSteamID SteamIDLobbyDependent)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLinkedLobby(steamIDLobby, SteamIDLobbyDependent);
	}

	return bResult;
}

bool UMatchmaking::SetLobbyData(FSteamID steamIDLobby, FString key, FString value)
{
	LogVerbose("");

	bool bResult = false;

	if (key.Len() == 0 || value.Len() == 0)
	{
		return bResult;
	}

	if (SteamMatchmaking())
	{
		char KeyAnsi[512];
		FCStringAnsi::Strncpy(KeyAnsi, TCHAR_TO_UTF8(*key), key.GetAllocatedSize());
		char ValueAnsi[512];
		FCStringAnsi::Strncpy(ValueAnsi, TCHAR_TO_UTF8(*value), value.GetAllocatedSize());
		
		bResult = SteamMatchmaking()->SetLobbyData(steamIDLobby, KeyAnsi, ValueAnsi);
	}

	return bResult;
}

void UMatchmaking::SetLobbyGameServer(FSteamID steamIDLobby, FString gameServerIP, int32 gameServerPort, FSteamID steamIDGameServer)
{
	LogVerbose("");

	if (SteamMatchmaking())
	{
		FIPv4Address IP;
		FIPv4Address::Parse(gameServerIP, IP);

		SteamMatchmaking()->SetLobbyGameServer(steamIDLobby, IP.Value, gameServerPort, steamIDGameServer);
	}
}

bool UMatchmaking::SetLobbyJoinable(FSteamID steamIDLobby, bool bLobbyJoinable)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
	}

	return bResult;
}

void UMatchmaking::SetLobbyMemberData(FSteamID steamIDLobby, FString key, FString value)
{
	LogVerbose("");
	
	if (key.Len() == 0 || value.Len() == 0)
	{
		return;
	}

	if (SteamMatchmaking())
	{
		char KeyAnsi[256];
		FCStringAnsi::Strncpy(KeyAnsi, TCHAR_TO_UTF8(*key), key.GetAllocatedSize());
		char ValueAnsi[1024];
		FCStringAnsi::Strncpy(ValueAnsi, TCHAR_TO_UTF8(*value), value.GetAllocatedSize());
		
		SteamMatchmaking()->SetLobbyMemberData(steamIDLobby, KeyAnsi, ValueAnsi);
	}
}

bool UMatchmaking::SetLobbyMemberLimit(FSteamID steamIDLobby, int32 MaxMembers)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLobbyMemberLimit(steamIDLobby, MaxMembers);
	}

	return bResult;
}

bool UMatchmaking::SetLobbyOwner(FSteamID steamIDLobby, FSteamID SteamIDNewOwner)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLobbyOwner(steamIDLobby, SteamIDNewOwner);
	}

	return bResult;
}

bool UMatchmaking::SetLobbyType(FSteamID steamIDLobby, ESteamLobbyType lobbyType)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLobbyType(steamIDLobby, (ELobbyType)lobbyType);
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UMatchmaking::OnFavoritesListAccountsUpdated(FavoritesListAccountsUpdated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			FavoritesListAccountsUpdated.Broadcast(Data);
		});
}

void UMatchmaking::OnFavoritesListChanged(FavoritesListChanged_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			FavoritesListChanged.Broadcast(Data);
		});
}

void UMatchmaking::OnLobbyChatMsg(LobbyChatMsg_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			LobbyChatMsg.Broadcast(Data);
		});
}

void UMatchmaking::OnLobbyChatUpdate(LobbyChatUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			LobbyChatUpdate.Broadcast(Data);
		});
}

void UMatchmaking::OnLobbyDataUpdate(LobbyDataUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			LobbyDataUpdate.Broadcast(Data);
		});
}

void UMatchmaking::OnLobbyEnter(LobbyEnter_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			LobbyEnter.Broadcast(Data);
		});
}

void UMatchmaking::OnLobbyGameCreated(LobbyGameCreated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			LobbyGameCreated.Broadcast(Data);
		});
}

void UMatchmaking::OnLobbyInvite(LobbyInvite_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			LobbyInvite.Broadcast(Data);
		});
}

void UMatchmaking::OnLobbyKicked(LobbyKicked_t* pParam)
{
	LogVerbose("");
	
	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]() 
		{
			LobbyKicked.Broadcast(Data);
		});
}


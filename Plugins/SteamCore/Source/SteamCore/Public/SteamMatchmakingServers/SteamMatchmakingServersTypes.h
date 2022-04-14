/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "SteamMatchmakingServersTypes.generated.h"

UCLASS(BlueprintType)
class STEAMCORE_API UServerFilter : public UObject
{
	GENERATED_BODY()
public:
	UServerFilter();
	~UServerFilter();
public:
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterMap(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterGameDataAnd(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterGameDataOr(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterGameDataNor(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterGameTagsAnd(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterGameTagsNor(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterAnd(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterOr(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterNand(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterNor(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterGameAddr(FString value);
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterDedicated();
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterSecure();
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterNotFull();
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterHasPlayers();
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterNoPlayers();
	UFUNCTION(BlueprintCallable, Category = "Filters")
		void AddFilterLinux();
public:
	void SetReadyToDestroy()
	{
		this->RemoveFromRoot();
	}
public:
	UFUNCTION(BlueprintCallable, Category = "Filters")
		TMap<FString, FString> GetFilters();
	
	MatchMakingKeyValuePair_t* GetFiltersPtr() const { return Filters; }
	int32 GetNumFilters() const { return NumFilters; }
private:
	bool CanAddFilter() const { return NumFilters < MaxFilters; }
	int32 GetKeySize() const { return sizeof(Filters[NumFilters].m_szKey); }
	int32 GetValueSize() const { return sizeof(Filters[NumFilters].m_szValue); }
private:
	int32 MaxFilters;
	int32 NumFilters;
	MatchMakingKeyValuePair_t* Filters;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
enum class ESteamServerListRequestType : uint8
{
	Favorites = 0, Friends, History, Internet, Lan, Spectator
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct STEAMCORE_API FSteamServerAddr
{
	GENERATED_BODY()
public:
	FSteamServerAddr() = default;
	FSteamServerAddr(const servernetadr_t& data, CSteamID steamAddr)
		: IP(FIPv4Address(data.GetIP()).ToString()), Port(data.GetConnectionPort()), QueryPort(data.GetQueryPort()), ConnectionAddressString(data.GetConnectionAddressString()), SteamP2PAddr(LexToString(steamAddr.ConvertToUint64()))
	{
	}

protected:
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString IP;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		int32 Port;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		int32 QueryPort;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString ConnectionAddressString;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString SteamP2PAddr;
};

USTRUCT(BlueprintType)
struct STEAMCORE_API FGameServerItem
{
	GENERATED_BODY()
public:
	FGameServerItem() = default;
	FGameServerItem(class gameserveritem_t* data)
		: SteamServerAddr(data->m_NetAdr, data->m_steamID)
		, Ping(data->m_nPing)
		, Players(data->m_nPlayers)
		, MaxPlayers(data->m_nMaxPlayers)
		, BotPlayers(data->m_nBotPlayers)
		, ServerVersion(data->m_nServerVersion)
		, bPassword(data->m_bPassword)
		, bSecure(data->m_bSecure)
		, m_NetAdr(data->m_NetAdr)
		, m_ulTimeLastPlayed(data->m_ulTimeLastPlayed)
		, m_nAppID(data->m_nAppID)
		, m_bDoNotRefresh(data->m_bDoNotRefresh)
		, bHadSuccessfulResponse(data->m_bHadSuccessfulResponse)
		, m_steamID(data->m_steamID)
	{
		char m_ServerName[k_cbMaxGameServerName];
		FCStringAnsi::Strncpy(m_ServerName, data->GetName(), k_cbMaxGameServerName);

		char m_MapName[k_cbMaxGameServerMapName];
		FCStringAnsi::Strncpy(m_MapName, data->m_szMap, k_cbMaxGameServerMapName);

		char m_GameDescription[k_cbMaxGameServerGameDescription];
		FCStringAnsi::Strncpy(m_GameDescription, data->m_szGameDescription, k_cbMaxGameServerGameDescription);

		char m_GameTags[k_cbMaxGameServerTags];
		FCStringAnsi::Strncpy(m_GameTags, data->m_szGameTags, k_cbMaxGameServerTags);

		ServerName = m_ServerName;
		MapName = m_MapName;
		GameDescription = m_GameDescription;
		GameTags = m_GameTags;
	}

public:
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString ServerName;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString MapName;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString GameDescription;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString GameTags;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FSteamServerAddr SteamServerAddr;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		int32 Ping;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		int32 Players;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		int32 MaxPlayers;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		int32 BotPlayers;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		int32 ServerVersion;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		bool bPassword;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		bool bSecure;

	servernetadr_t m_NetAdr;
	uint32 m_ulTimeLastPlayed;
	uint32 m_nAppID;
	bool m_bDoNotRefresh;
	bool bHadSuccessfulResponse;
	CSteamID m_steamID;
};

USTRUCT(BlueprintType)
struct STEAMCORE_API FGameServerRule
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString Name;
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
		FString Value;

	FGameServerRule() = default;
	FGameServerRule(const char* name, const char* value)
		: Name(UTF8_TO_TCHAR(name)), Value(UTF8_TO_TCHAR(value))
	{
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnServerUpdated, const FGameServerItem&, data);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerPing, const FGameServerItem&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerRules, const TArray<FGameServerRule>&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE(FOnServerRefreshCompleted);
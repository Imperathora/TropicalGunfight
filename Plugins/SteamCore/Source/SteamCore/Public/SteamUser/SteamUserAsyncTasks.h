/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamUserTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestEncryptedAppTicket m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(class USteamCoreSubsystem* subsystem, FOnRequestEncryptedAppTicket callback, TArray<uint8> dataToInclude)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_Data(dataToInclude)
	{}
	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<uint8> dataToInclude)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_Data(dataToInclude)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket() = delete;
protected:
	EncryptedAppTicketResponse_t m_CallbackResults;
	TArray<uint8> m_Data;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStoreAuthURLResponse m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(class USteamCoreSubsystem* subsystem, FOnStoreAuthURLResponse callback, FString redirectURL)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_RedirectURL(redirectURL)
	{}
	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString redirectURL)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_RedirectURL(redirectURL)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL() = delete;
protected:
	StoreAuthURLResponse_t m_CallbackResults;
	FString m_RedirectURL;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL")); }
};
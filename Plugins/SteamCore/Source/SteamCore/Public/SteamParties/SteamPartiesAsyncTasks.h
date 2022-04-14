/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamPartiesTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCorePartiesJoinParty
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCorePartiesJoinParty : public FOnlineAsyncTaskSteamCore
{
public:
	FOnJoinParty m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCorePartiesJoinParty(USteamCoreSubsystem* subsystem, FOnJoinParty callback, FPartyBeaconID beaconID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_BeaconID(beaconID)
	{}
	FOnlineAsyncTaskSteamCorePartiesJoinParty(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPartyBeaconID beaconID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_BeaconID(beaconID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCorePartiesJoinParty() = delete;
protected:
	JoinPartyCallback_t m_CallbackResults;
	FPartyBeaconID m_BeaconID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCorePartiesJoinParty")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCorePartiesCreateBeacon
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCorePartiesCreateBeacon : public FOnlineAsyncTaskSteamCore
{
public:
	FOnCreateBeacon m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCorePartiesCreateBeacon(USteamCoreSubsystem* subsystem, FOnCreateBeacon callback, int32 openSlots, FSteamPartyBeaconLocation beaconLocation, FString connectString, FString metadata)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_OpenSlots(openSlots)
		, m_BeaconLocation(beaconLocation)
		, m_ConnectString(connectString)
		, m_Metadata(metadata)
	{}
	FOnlineAsyncTaskSteamCorePartiesCreateBeacon(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 openSlots, FSteamPartyBeaconLocation beaconLocation, FString connectString, FString metadata)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_OpenSlots(openSlots)
		, m_BeaconLocation(beaconLocation)
		, m_ConnectString(connectString)
		, m_Metadata(metadata)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCorePartiesCreateBeacon() = delete;
protected:
	CreateBeaconCallback_t m_CallbackResults;
	int32 m_OpenSlots;
	FSteamPartyBeaconLocation m_BeaconLocation;
	FString m_ConnectString;
	FString m_Metadata;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCorePartiesCreateBeacon")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots : public FOnlineAsyncTaskSteamCore
{
public:
	FOnChangeNumOpenSlots m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots(USteamCoreSubsystem* subsystem, FOnChangeNumOpenSlots callback, FPartyBeaconID beacon, int32 openSlots)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_Beacon(beacon)
		, m_OpenSlots(openSlots)
	{
	}
	FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPartyBeaconID beacon, int32 openSlots)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_Beacon(beacon)
		, m_OpenSlots(openSlots)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots() = delete;
protected:
	ChangeNumOpenSlotsCallback_t m_CallbackResults;
	FPartyBeaconID m_Beacon; 
	int32 m_OpenSlots;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots")); }
};
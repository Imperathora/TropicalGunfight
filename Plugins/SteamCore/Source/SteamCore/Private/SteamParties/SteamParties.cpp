/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/isteamparties
*/

#include "SteamParties/SteamParties.h"
#include "SteamParties/SteamPartiesAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void USteamParties::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (SteamParties()) {

		OnJoinPartyCallback.Register(this, &USteamParties::OnJoinPartyUpdated);
		OnCreateBeaconCallback.Register(this, &USteamParties::OnCreateBeaconUpdated);
		OnReservationNotificationCallback.Register(this, &USteamParties::OnReservationNotificationUpdated);
		OnChangeNumOpenSlotsCallback.Register(this, &USteamParties::OnChangeNumOpenSlotsUpdated);
		OnAvailableBeaconLocationsCallback.Register(this, &USteamParties::OnAvailableBeaconLocationsUpdated);
		OnActiveBeaconsCallback.Register(this, &USteamParties::OnActiveBeaconsUpdated);

		if (IsRunningDedicatedServer())
		{
			OnJoinPartyCallback.SetGameserverFlag();
			OnCreateBeaconCallback.SetGameserverFlag();
			OnReservationNotificationCallback.SetGameserverFlag();
			OnChangeNumOpenSlotsCallback.SetGameserverFlag();
			OnAvailableBeaconLocationsCallback.SetGameserverFlag();
			OnActiveBeaconsCallback.SetGameserverFlag();
		}
	}
}

void USteamParties::Deinitialize()
{
	if (SteamParties())
	{
		OnJoinPartyCallback.Unregister();
		OnCreateBeaconCallback.Unregister();
		OnChangeNumOpenSlotsCallback.Unregister();
		OnAvailableBeaconLocationsCallback.Unregister();
		OnReservationNotificationCallback.Unregister();
		OnActiveBeaconsCallback.Unregister();
	}

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 USteamParties::GetNumActiveBeacons()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamParties())
	{
		Result = SteamParties()->GetNumActiveBeacons();
	}

	return Result;
}

FPartyBeaconID USteamParties::GetBeaconByIndex(int32 index)
{
	LogVeryVerbose("");

	FPartyBeaconID Result;

	if (SteamParties())
	{
		Result = SteamParties()->GetBeaconByIndex(index);
	}

	return Result;
}

bool USteamParties::GetBeaconDetails(FPartyBeaconID beaconId, FSteamID& steamIDBeaconOwner, FSteamPartyBeaconLocation& location, FString& outMetadata)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParties())
	{
		CSteamID Owner = { };
		SteamPartyBeaconLocation_t Location = { };

		TArray<char> MetaData;
		MetaData.SetNum(4096);

		bResult = SteamParties()->GetBeaconDetails(beaconId, &Owner, &Location, MetaData.GetData(), MetaData.Num());

		if (bResult)
		{
			steamIDBeaconOwner = Owner;
			location = Location;
			outMetadata = UTF8_TO_TCHAR(MetaData.GetData());
		}
	}

	return bResult;
}

void USteamParties::JoinParty(const FOnJoinParty& callback, FPartyBeaconID beaconId)
{
	LogVerbose("");

	if (SteamParties())
	{
		FOnlineAsyncTaskSteamCorePartiesJoinParty* Task = new FOnlineAsyncTaskSteamCorePartiesJoinParty(this, callback, beaconId);
		QueueAsyncTask(Task);
	}
}

bool USteamParties::GetNumAvailableBeaconLocations(int32& puNumLocations)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParties())
	{
		uint32 NumLocations;
		bResult = SteamParties()->GetNumAvailableBeaconLocations(&NumLocations);
		puNumLocations = NumLocations;
	}

	return bResult;
}

bool USteamParties::GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& pLocationList, int32 uMaxNumLocations /*= 10*/)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParties())
	{
		TArray<SteamPartyBeaconLocation_t> LocationList;
		LocationList.SetNum(uMaxNumLocations);
		
		bResult = SteamParties()->GetAvailableBeaconLocations(LocationList.GetData(), LocationList.Num());

		if (bResult)
		{
			for (auto& Element : LocationList)
			{
				pLocationList.Add(Element);
			}
		}
	}

	return bResult;
}


void USteamParties::CreateBeacon(const FOnCreateBeacon& callback, int32 openSlots, FSteamPartyBeaconLocation beaconLocation, FString connectString, FString metadata)
{
	LogVerbose("");

	if (SteamParties())
	{
		FOnlineAsyncTaskSteamCorePartiesCreateBeacon* Task = new FOnlineAsyncTaskSteamCorePartiesCreateBeacon(this, callback, openSlots, beaconLocation, connectString, metadata);
		QueueAsyncTask(Task);
	}
}

void USteamParties::OnReservationCompleted(FPartyBeaconID beaconId, FSteamID steamIDUser)
{
	LogVerbose("");

	if (SteamParties())
	{
		SteamParties()->OnReservationCompleted(beaconId, steamIDUser);
	}
}

void USteamParties::CancelReservation(FPartyBeaconID beaconId, FSteamID steamIDUser)
{
	LogVerbose("");

	if (SteamParties())
	{
		SteamParties()->CancelReservation(beaconId, steamIDUser);
	}
}


void USteamParties::ChangeNumOpenSlots(const FOnChangeNumOpenSlots& callback, FPartyBeaconID beaconId, int32 openSlots)
{
	LogVerbose("");

	if (SteamParties())
	{
		FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots* Task = new FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots(this, callback, beaconId, openSlots);
		QueueAsyncTask(Task);
	}
}

bool USteamParties::DestroyBeacon(FPartyBeaconID beaconId)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamParties())
	{
		bResult = SteamParties()->DestroyBeacon(beaconId);
	}

	return bResult;
}

bool USteamParties::GetBeaconLocationData(FSteamPartyBeaconLocation beaconLocation, ESteamPartiesBeaconLocationData eData, FString& pchDataStringOut)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParties())
	{
		TArray<char> OutString;
		OutString.SetNum(4096);

		SteamPartyBeaconLocation_t BeaconLocation;
		BeaconLocation.m_eType = static_cast<ESteamPartyBeaconLocationType>(beaconLocation.Type);
		BeaconLocation.m_ulLocationID = FCString::Atoi64(*beaconLocation.LocationId);

		bResult = SteamParties()->GetBeaconLocationData(BeaconLocation, static_cast<ESteamPartyBeaconLocationData>(eData), OutString.GetData(), OutString.Num());
	
		if (bResult)
		{
			pchDataStringOut = UTF8_TO_TCHAR(OutString.GetData());
		}
	}

	return bResult;
}

void USteamParties::OnActiveBeaconsUpdated(ActiveBeaconsUpdated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ActiveBeaconsDelegate.Broadcast();
		});
}

void USteamParties::OnAvailableBeaconLocationsUpdated(AvailableBeaconLocationsUpdated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			AvailableBeaconLocationsDelegate.Broadcast();
		});
}

void USteamParties::OnReservationNotificationUpdated(ReservationNotificationCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ReservationNotificationDelegate.Broadcast(Data);
		});
}

void USteamParties::OnJoinPartyUpdated(JoinPartyCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			JoinPartyDelegate.Broadcast(Data);
		});
}

void USteamParties::OnCreateBeaconUpdated(CreateBeaconCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			CreateBeaconDelegate.Broadcast(Data);
		});
}

void USteamParties::OnChangeNumOpenSlotsUpdated(ChangeNumOpenSlotsCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ChangeNumOpenSlotsDelegate.Broadcast(Data);
		});
}
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/isteamparties
*/

#pragma once

#include "SteamPartiesTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Public/OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "SteamPartiesAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinPartyCallback, const FJoinPartyData&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateBeaconCallback, const FCreateBeaconData&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeNumOpenSlotsCallback, const FChangeNumOpenSlotsData&, data, bool, bWasSuccessful);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreSteamPartiesAsyncActionJoinParty
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UCLASS()
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnJoinPartyCallback OnCallback;
public:
	/**
	* When the user indicates they wish to join the party advertised by a given beacon, call this method.
	* On success, Steam will reserve a slot for this user in the party and return the necessary "join game" string to use to complete the connection.
	*
	* @param	beaconID				Beacon ID for the party you wish to join.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Join Party"), Category = "SteamCore|SteamParties|Async")
		static USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(UObject* WorldContextObject, FPartyBeaconID beaconId);
public:
	UFUNCTION()
		void HandleCallback(const FJoinPartyData& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreSteamPartiesAsyncActionCreateBeacon
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UCLASS()
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnCreateBeaconCallback OnCallback;
public:
	/**
	* Create a beacon. You can only create one beacon at a time.
	* Steam will display the beacon in the specified location, and let up to openSlots users "follow" the beacon to your party.
	*
	* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.
	*
	* @param	openSlots				Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).
	* @param	beaconLocation			Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.
	* @param	connectString			Connect string that will be given to the game on launch for a user that follows the beacon.
	* @param	metadata				Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Create Beacon"), Category = "SteamCore|SteamParties|Async")
		static USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(UObject* WorldContextObject, int32 openSlots, FSteamPartyBeaconLocation beaconLocation, FString connectString, FString metadata);
public:
	UFUNCTION()
		void HandleCallback(const FCreateBeaconData& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreSteamPartiesAsyncActionCreateBeacon
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UCLASS()
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnChangeNumOpenSlotsCallback OnCallback;
public:
	/**
	* Create a beacon. You can only create one beacon at a time.
	* Steam will display the beacon in the specified location, and let up to openSlots users "follow" the beacon to your party.
	*
	* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.
	*
	* @param	openSlots				Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).
	* @param	beaconLocation			Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.
	* @param	connectString			Connect string that will be given to the game on launch for a user that follows the beacon.
	* @param	metadata				Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Change Num Open Slots"), Category = "SteamCore|SteamParties|Async")
		static USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(UObject* WorldContextObject, FPartyBeaconID beaconId, int32 openSlots);
public:
	UFUNCTION()
		void HandleCallback(const FChangeNumOpenSlotsData& data, bool bWasSuccessful);
};
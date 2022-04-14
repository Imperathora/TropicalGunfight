/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamInventoryTypes.h"
#include "SteamInventoryAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, const FSteamInventoryEligiblePromoItemDefIDs&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamInventoryRequestPricesResultAsyncDelegate, const FSteamInventoryRequestPricesResult&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamInventoryStartPurchaseResultAsyncDelegate, const FSteamInventoryStartPurchaseResult&, data, bool, bWasSuccessful);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate OnCallback;
public:
	/**
	* Request the list of "eligible" promo items that can be manually granted to the given user.
	* These are promo items of type "manual" that won't be granted automatically. An example usage of this is an item that becomes available every week.
	* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.
	*
	* @param	steamID		The Steam ID of the user to request the eligible promo items for.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Eligible Promo Item Definitions IDs"), Category = "SteamCore|Inventory|Async")
		static USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(UObject* WorldContextObject, FSteamID steamID);
public:
	UFUNCTION()
		void HandleCallback(const FSteamInventoryEligiblePromoItemDefIDs& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSteamInventoryRequestPricesResultAsyncDelegate OnCallback;
public:
	/**
	* Request prices for all item definitions that can be purchased in the user's local currency.
	* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.
	* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Prices"), Category = "SteamCore|Inventory|Async")
		static USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(UObject* WorldContextObject);
public:
	UFUNCTION()
		void HandleCallback(const FSteamInventoryRequestPricesResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionStartPurchaseResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSteamInventoryStartPurchaseResultAsyncDelegate OnCallback;
public:
	/**
	* Starts the purchase process for the user, given a "shopping cart" of item definitions that the user would like to buy.
	*
	* The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.
	* If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.
	* If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.
	* NOTE: You must call DestroyResult on the inventory result for when you are done with it.
	*
	* @param	itemDefs		The array of item definition ids that the user wants to purchase.
	* @param	quantity		The array of quantities of each item definition that the user wants to purchase.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Start Purchase"), Category = "SteamCore|Inventory|Async")
		static USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(UObject* WorldContextObject, const TArray<FSteamItemDef> itemDefs, const TArray<int32> quantity);
public:
	UFUNCTION()
		void HandleCallback(const FSteamInventoryStartPurchaseResult& data, bool bWasSuccessful);
};
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamInventoryTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestEligiblePromoItemDefinitionsIDs m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(class USteamCoreSubsystem* subsystem, FOnRequestEligiblePromoItemDefinitionsIDs callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_SteamID(steamID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs() = delete;
protected:
	SteamInventoryEligiblePromoItemDefIDs_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSteamInventoryRequestPricesResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(class USteamCoreSubsystem* subsystem, FOnSteamInventoryRequestPricesResult callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
	{}
	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult() = delete;
protected:
	SteamInventoryRequestPricesResult_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSteamInventoryStartPurchaseResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult(class USteamCoreSubsystem* subsystem, FOnSteamInventoryStartPurchaseResult callback, TArray<FSteamItemDef> itemDefs, TArray<int32> quantity)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_ItemDefs(itemDefs)
		, m_Quantity(quantity)
	{}
	FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<FSteamItemDef> itemDefs, TArray<int32> quantity)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_ItemDefs(itemDefs)
		, m_Quantity(quantity)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult() = delete;
protected:
	SteamInventoryStartPurchaseResult_t m_CallbackResults;
	TArray<FSteamItemDef> m_ItemDefs;
	TArray<int32> m_Quantity;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult")); }
};
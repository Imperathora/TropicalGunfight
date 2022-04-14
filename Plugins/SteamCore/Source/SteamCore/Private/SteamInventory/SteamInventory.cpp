/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#include "SteamInventory/SteamInventory.h"
#include "SteamInventory/SteamInventoryAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UInventory::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnSteamInventoryResultReadyCallback.Register(this, &UInventory::OnSteamInventoryResultReady);
	OnSteamInventoryFullUpdateCallback.Register(this, &UInventory::OnSteamInventoryFullUpdate);
	OnSteamInventoryDefinitionUpdateCallback.Register(this, &UInventory::OnSteamInventoryDefinitionUpdate);
	OnSteamInventoryStartPurchaseResultCallback.Register(this, &UInventory::OnSteamInventoryStartPurchaseResult);
	OnSteamInventoryRequestPricesResultCallback.Register(this, &UInventory::OnSteamInventoryRequestPricesResult);
	OnSteamInventoryEligiblePromoItemDefIDsCallback.Register(this, &UInventory::OnSteamInventoryEligiblePromoItemDefIDs);

	if (IsRunningDedicatedServer())
	{
		OnSteamInventoryResultReadyCallback.SetGameserverFlag();
		OnSteamInventoryFullUpdateCallback.SetGameserverFlag();
		OnSteamInventoryDefinitionUpdateCallback.SetGameserverFlag();
		OnSteamInventoryStartPurchaseResultCallback.SetGameserverFlag();
		OnSteamInventoryRequestPricesResultCallback.SetGameserverFlag();
		OnSteamInventoryEligiblePromoItemDefIDsCallback.SetGameserverFlag();
	}
}

void UInventory::Deinitialize()
{
	OnSteamInventoryResultReadyCallback.Unregister();
	OnSteamInventoryFullUpdateCallback.Unregister();
	OnSteamInventoryDefinitionUpdateCallback.Unregister();
	OnSteamInventoryStartPurchaseResultCallback.Unregister();
	OnSteamInventoryRequestPricesResultCallback.Unregister();
	OnSteamInventoryEligiblePromoItemDefIDsCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

ESteamResult UInventory::GetResultStatus(FSteamInventoryResult handle)
{
	LogVeryVerbose("");

	ESteamResult Result = ESteamResult::AccessDenied;

	if (GetInventory())
	{
		Result = _SteamResult(GetInventory()->GetResultStatus(handle));
	}

	return Result;
}

bool UInventory::GetResultItems(FSteamInventoryResult handle, TArray<FSteamItemDetails>& outItems)
{
	LogVeryVerbose("");

	bool bResult = false;
	outItems.Empty();

	if (GetInventory())
	{
		uint32 ArraySize = 0;

		if (GetInventory()->GetResultItems(handle, nullptr, &ArraySize))
		{
			TArray<SteamItemDetails_t> DataArray;
			DataArray.SetNum(ArraySize);

			bResult = GetInventory()->GetResultItems(handle, DataArray.GetData(), &ArraySize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				outItems.Add(DataArray[i]);
			}
		}
	}

	return bResult;
}

int32 UInventory::GetResultTimestamp(FSteamInventoryResult handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetInventory())
	{
		Result = GetInventory()->GetResultTimestamp(handle);
	}

	return Result;
}

bool UInventory::CheckResultSteamID(FSteamInventoryResult handle, FSteamID steamIDExpected)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->CheckResultSteamID(handle, steamIDExpected);
	}

	return bResult;
}

void UInventory::DestroyResult(FSteamInventoryResult handle)
{
	LogVerbose("");

	if (GetInventory())
		GetInventory()->DestroyResult(handle);
}

bool UInventory::GetAllItems(FSteamInventoryResult& handle)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		SteamInventoryResult_t Result;
		
		bResult = GetInventory()->GetAllItems(&Result);
		handle = Result;
	}

	return bResult;
}

bool UInventory::GetItemsByID(FSteamInventoryResult& outInventoryResult, TArray<FSteamItemInstanceID> instanceIDs)
{
	LogVerbose("");

	bool bResult = false;
	outInventoryResult = FSteamInventoryResult();

	if (GetInventory())
	{
		if (GetInventory())
		{
			TArray<SteamItemInstanceID_t> DataArray;
			DataArray.SetNum(instanceIDs.Num());
			SteamInventoryResult_t InventoryResult;

			for (int32 i = 0; i < instanceIDs.Num(); i++)
			{
				DataArray[i] = instanceIDs[i];
			}

			bResult = GetInventory()->GetItemsByID(&InventoryResult, DataArray.GetData(), DataArray.Num());
			outInventoryResult = InventoryResult;
		}
	}

	return bResult;
}

bool UInventory::GetItemPrice(FSteamItemDef itemDef, int32& outPrice, int32& outBasePrice)
{
	LogVerbose("");

	bool bResult = false;
	uint64 Price = 0;
	uint64 BasePrice = 0;

	if (GetInventory())
	{
#if STEAM_VERSION > 142
		bResult = GetInventory()->GetItemPrice(itemDef, &Price, &BasePrice);
#else
		bResult = GetInventory()->GetItemPrice(itemDef, &Price);
#endif
	}

	outPrice = Price;
	outBasePrice = BasePrice;

	return bResult;
}

bool UInventory::GetItemsWithPrices(TArray<FSteamItemDef>& outItemDefs, TArray<int32>& outPrices, TArray<int32>& outBasePrices)
{
	LogVerbose("");

	bool bResult = false;
	outItemDefs.Empty();
	outPrices.Empty();
	outBasePrices.Empty();

	if (GetInventory())
	{
		if (GetInventory())
		{
			int32 ArraySize = GetInventory()->GetNumItemsWithPrices();

			TArray<SteamItemDef_t> SteamItemDefs;
			TArray<uint64> ItemPrices;
			TArray<uint64> BasePrices;
			SteamItemDefs.SetNum(ArraySize);
			ItemPrices.SetNum(ArraySize);
			BasePrices.SetNum(ArraySize);

#if STEAM_VERSION > 142
			bResult = GetInventory()->GetItemsWithPrices(SteamItemDefs.GetData(), ItemPrices.GetData(), BasePrices.GetData(), ArraySize);

			if (bResult)
			{
				for (int32 i = 0; i < ArraySize; i++)
				{
					outItemDefs.Add(SteamItemDefs[i]);
					outPrices.Add(ItemPrices[i]);
					outBasePrices.Add(BasePrices[i]);
				}
			}
#else
			bResult = GetInventory()->GetItemsWithPrices(SteamItemDefs.GetData(), ItemPrices.GetData(), ArraySize);
			
			if (bResult)
			{
				for (int32 i = 0; i < ArraySize; i++)
				{
					outItemDefs.Add(SteamItemDefs[i]);
					outPrices.Add(ItemPrices[i]);
				}
			}
#endif
		}
	}

	return bResult;
}

int32 UInventory::GetNumItemsWithPrices()
{
	LogVerbose("");

	int32 Result = 0;

	if (GetInventory())
	{
		Result = GetInventory()->GetNumItemsWithPrices();
	}

	return Result;
}

bool UInventory::GetResultItemProperty(FSteamInventoryResult handle, int32 itemIndex, FString propertyName, FString& outValue)
{
	LogVerbose("");

	bool bResult = false;
	outValue.Empty();

	if (GetInventory())
	{
		char PropertyName[256];
		FCStringAnsi::Strncpy(PropertyName, TCHAR_TO_UTF8(*propertyName), propertyName.GetAllocatedSize());
		
		uint32 DataSize = 0;

		GetInventory()->GetResultItemProperty(handle, itemIndex, PropertyName, nullptr, &DataSize);

		TArray<char> DataArray;
		DataArray.SetNum(DataSize);

		bResult = GetInventory()->GetResultItemProperty(handle, itemIndex, PropertyName, DataArray.GetData(), &DataSize);

		if (bResult)
		{
			outValue = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	return bResult;
}

bool UInventory::SerializeResult(FSteamInventoryResult handle, TArray<uint8>& outBuffer)
{
	LogVerbose("");

	bool bResult = false;
	outBuffer.Empty();

	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->SerializeResult(handle, nullptr, &DataSize))
		{
			outBuffer.SetNum(DataSize);
			bResult = GetInventory()->SerializeResult(handle, outBuffer.GetData(), &DataSize);
		}
	}
	
	return bResult;
}

void UInventory::StartPurchase(const FOnSteamInventoryStartPurchaseResult& callback, const TArray<FSteamItemDef> itemDefs, const TArray<int32> quantity)
{
	LogVerbose("");

	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult* Task = new FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult(this, callback, itemDefs, quantity);
		QueueAsyncTask(Task);
	}
}

bool UInventory::DeserializeResult(FSteamInventoryResult& outResult, TArray<uint8> buffer, bool bReservedMustBeFalse)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->DeserializeResult(&SteamInventoryResult, buffer.GetData(), buffer.Num(), bReservedMustBeFalse);

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::GenerateItems(FSteamInventoryResult& outResult, TArray<FSteamItemDef> itemDefs, TArray<int32> quantities)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		TArray<SteamItemDef_t> SteamItemDefs;
		TArray<uint32> ItemQuantities;

		SteamItemDefs.SetNum(itemDefs.Num());
		ItemQuantities.SetNum(quantities.Num());

		for (int32 i = 0; i < itemDefs.Num(); i++)
		{
			SteamItemDefs[i] = itemDefs[i];
			ItemQuantities[i] = quantities[i];
		}

		bResult = GetInventory()->GenerateItems(&SteamInventoryResult, SteamItemDefs.GetData(), ItemQuantities.GetData(), SteamItemDefs.Num());

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::GrantPromoItems(FSteamInventoryResult& outResult)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->GrantPromoItems(&SteamInventoryResult);

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::AddPromoItem(FSteamInventoryResult& outResult, FSteamItemDef itemDefinition)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->AddPromoItem(&SteamInventoryResult, itemDefinition);

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::AddPromoItems(FSteamInventoryResult& outResult, TArray<FSteamItemDef> itemDefs)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		TArray<SteamItemDef_t> SteamItemDefs;
		for (int32 i = 0; i < itemDefs.Num(); i++)
		{
			SteamItemDefs.Add(itemDefs[i]);
		}

		bResult = GetInventory()->AddPromoItems(&SteamInventoryResult, SteamItemDefs.GetData(), SteamItemDefs.Num());

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}

		return bResult;
	}

	return bResult;
}

bool UInventory::ConsumeItem(FSteamInventoryResult& outResult, FSteamItemInstanceID itemToConsume, int32 quantity)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->ConsumeItem(&SteamInventoryResult, itemToConsume, quantity);

		outResult = SteamInventoryResult;
	}

	return bResult;
}

bool UInventory::ExchangeItems(FSteamInventoryResult& outResult, TArray<FSteamItemDef> arrayGenerate, TArray<int32> arrayGenerateQuantity, TArray<FSteamItemInstanceID> arrayDestroy, TArray<int32> arrayDestroyQuantity)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	if (GetInventory())
	{
		TArray<SteamItemDef_t> SteamItemDefsGenerate;
		TArray<uint32> SteamGenerateQuantity;
		SteamItemDefsGenerate.SetNum(arrayGenerate.Num());
		SteamGenerateQuantity.SetNum(arrayGenerateQuantity.Num());

		TArray<SteamItemInstanceID_t> SteamItemInstanceIdsDestroy;
		TArray<uint32> SteamDestroyQuantity;
		SteamItemInstanceIdsDestroy.SetNum(arrayDestroy.Num());
		SteamDestroyQuantity.SetNum(arrayDestroyQuantity.Num());

		for (int32 i = 0; i < SteamItemDefsGenerate.Num(); i++)
		{
			SteamItemDefsGenerate[i] = arrayGenerate[i];
			SteamGenerateQuantity[i] = arrayGenerateQuantity[i];
		}

		for (int32 i = 0; i < arrayDestroy.Num(); i++)
		{
			SteamItemInstanceIdsDestroy[i] = arrayDestroy[i];
			SteamDestroyQuantity[i] = arrayDestroyQuantity[i];
		}

		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->ExchangeItems(&SteamInventoryResult, 
			SteamItemDefsGenerate.GetData(), SteamGenerateQuantity.GetData(), SteamGenerateQuantity.Num(), 
			SteamItemInstanceIdsDestroy.GetData(), SteamDestroyQuantity.GetData(), SteamItemInstanceIdsDestroy.Num());
			
		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::TransferItemQuantity(FSteamInventoryResult& outResult, FSteamItemInstanceID itemIDSource, int32 quantity, FSteamItemInstanceID itemIDDest)
{
	LogVerbose("");

	bool bResult = false;

	SteamInventoryResult_t SteamInventoryResult;

	if (GetInventory())
	{
		bResult = GetInventory()->TransferItemQuantity(&SteamInventoryResult, itemIDSource, quantity, itemIDDest);

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::TriggerItemDrop(FSteamInventoryResult& outResult, FSteamItemDef listDefinition)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	SteamInventoryResult_t SteamInventoryResult;

	if (GetInventory())
	{
		bResult = GetInventory()->TriggerItemDrop(&SteamInventoryResult, listDefinition);

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}

	return bResult;
}

FSteamInventoryUpdateHandle UInventory::StartUpdateProperties()
{
	LogVerbose("");

	FSteamInventoryUpdateHandle Handle;

	if (GetInventory())
	{
		Handle = GetInventory()->StartUpdateProperties();
	}

	return Handle;
}

bool UInventory::SubmitUpdateProperties(FSteamInventoryUpdateHandle result, FSteamInventoryResult& resultHandle)
{
	LogVerbose("");

	bool bResult = false;
	resultHandle = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;
	
		bResult = GetInventory()->SubmitUpdateProperties(result, &SteamInventoryResult);

		if (bResult)
		{
			resultHandle = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::RemoveProperty(FSteamInventoryUpdateHandle result, FSteamItemInstanceID itemID, FString propertyName)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->RemoveProperty(result, itemID, TCHAR_TO_UTF8(*propertyName));
	}

	return bResult;
}

bool UInventory::SetPropertyString(FSteamInventoryUpdateHandle result, FSteamItemInstanceID itemID, FString propertyName, FString value)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		char PropertyName[256];
		char PropertyValue[1024];

		FCStringAnsi::Strncpy(PropertyName, TCHAR_TO_UTF8(*propertyName), propertyName.GetAllocatedSize());
		FCStringAnsi::Strncpy(PropertyValue, TCHAR_TO_UTF8(*value), value.GetAllocatedSize());
		
		bResult = GetInventory()->SetProperty(result, itemID, PropertyName, PropertyValue);
	}

	return bResult;
}

bool UInventory::SetPropertyBool(FSteamInventoryUpdateHandle result, FSteamItemInstanceID itemID, FString propertyName, bool value)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(result, itemID, TCHAR_TO_UTF8(*propertyName), value);
	}

	return bResult;
}

bool UInventory::SetPropertyInt(FSteamInventoryUpdateHandle result, FSteamItemInstanceID itemID, FString propertyName, int32 value)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(result, itemID, TCHAR_TO_UTF8(*propertyName), static_cast<int64>(value));
	}

	return bResult;
}

bool UInventory::SetPropertyFloat(FSteamInventoryUpdateHandle result, FSteamItemInstanceID itemID, FString propertyName, float value)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(result, itemID, TCHAR_TO_UTF8(*propertyName), value);
	}

	return bResult;
}

bool UInventory::LoadItemDefinitions()
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->LoadItemDefinitions();
	}

	return bResult;
}

bool UInventory::GetItemDefinitionIDs(TArray<FSteamItemDef>& outItemDefs)
{
	LogVeryVerbose("");

	bool bResult = false;
	outItemDefs.Empty();

	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetItemDefinitionIDs(nullptr, &DataSize))
		{
			TArray<SteamItemDef_t> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetItemDefinitionIDs(DataArray.GetData(), &DataSize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				outItemDefs.Add(DataArray[i]);
			}
		}
	}

	return bResult;
}

bool UInventory::GetItemDefinitionProperty(FSteamItemDef itemDef, FString propertyName, FString& outValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	outValue.Empty();

	if (GetInventory())
	{
		char PropertyName[256];
		FCStringAnsi::Strncpy(PropertyName, TCHAR_TO_UTF8(*propertyName), propertyName.GetAllocatedSize());
		
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetItemDefinitionProperty(itemDef, PropertyName, nullptr, &DataSize))
		{
			TArray<char> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetItemDefinitionProperty(itemDef, PropertyName, DataArray.GetData(), &DataSize);
			
			if (bResult)
			{
				outValue = FString(UTF8_TO_TCHAR(DataArray.GetData()));
			}
		}
	}

	return bResult;
}

bool UInventory::GetEligiblePromoItemDefinitionIDs(FSteamID steamID, TArray<FSteamItemDef>& outItemDefs)
{
	LogVeryVerbose("");

	bool bResult = false;
	outItemDefs.Empty();

	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetEligiblePromoItemDefinitionIDs(steamID, nullptr, &DataSize))
		{
			TArray<SteamItemDef_t> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetEligiblePromoItemDefinitionIDs(steamID, DataArray.GetData(), &DataSize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				outItemDefs.Add(DataArray[i]);
			}
		}
	}

	return bResult;
}

void UInventory::RequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs& callback, FSteamID steamID)
{
	LogVerbose("");

	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs* Task = new FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(this, callback, steamID);
		QueueAsyncTask(Task);
	}
}

void UInventory::RequestPrices(const FOnSteamInventoryRequestPricesResult& callback)
{
	LogVerbose("");

	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult* Task = new FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(this, callback);
		QueueAsyncTask(Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UInventory::OnSteamInventoryResultReady(SteamInventoryResultReady_t *pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamInventoryResultReady.Broadcast(Data);
		});
}

void UInventory::OnSteamInventoryFullUpdate(SteamInventoryFullUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamInventoryFullUpdate.Broadcast(Data);
		});
}

void UInventory::OnSteamInventoryDefinitionUpdate(SteamInventoryDefinitionUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamInventoryDefinitionUpdate.Broadcast();
		});
}

void UInventory::OnSteamInventoryStartPurchaseResult(SteamInventoryStartPurchaseResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamInventoryStartPurchaseResult.Broadcast(Data);
		});
}

void UInventory::OnSteamInventoryRequestPricesResult(SteamInventoryRequestPricesResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamInventoryRequestPricesResultDelegate.Broadcast(Data);
		});
}

void UInventory::OnSteamInventoryEligiblePromoItemDefIDs(SteamInventoryEligiblePromoItemDefIDs_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamInventoryEligiblePromoItemDefIDs.Broadcast(Data);
		});
}
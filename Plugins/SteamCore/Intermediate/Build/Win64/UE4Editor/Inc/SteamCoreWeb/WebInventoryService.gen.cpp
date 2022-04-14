// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/InventoryService/WebInventoryService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInventoryService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebInventoryService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebInventoryService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebInventoryService::execModifyItems)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_timestamp);
		P_GET_PROPERTY(FStrProperty,Z_Param_updates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyItems(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_inputJson,Z_Param_steamID,Z_Param_timestamp,Z_Param_updates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execGetQuantity)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(int32,Z_Param_itemdefIDs);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetQuantity(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_itemdefIDs,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execConsolidate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(int32,Z_Param_itemdefIDs);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Consolidate(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_itemdefIDs,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execGetPriceSheet)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_currency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPriceSheet(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_currency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execGetItemDefs)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_modifiedSince);
		P_GET_TARRAY(int32,Z_Param_itemdefIDs);
		P_GET_TARRAY(int32,Z_Param_workshopIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_cacheMaxAgeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemDefs(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_modifiedSince,Z_Param_itemdefIDs,Z_Param_workshopIDs,Z_Param_cacheMaxAgeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execGetInventory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInventory(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execExchangeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(int32,Z_Param_materialsItemID);
		P_GET_TARRAY(int32,Z_Param_materialsQuantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_outputItemdefID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExchangeItem(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_materialsItemID,Z_Param_materialsQuantity,Z_Param_outputItemdefID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execConsumeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_quantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_requestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeItem(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_itemID,Z_Param_quantity,Z_Param_steamID,Z_Param_requestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execAddPromoItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_itemdefID);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemPropsJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_PROPERTY(FStrProperty,Z_Param_requestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPromoItem(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_itemdefID,Z_Param_itemPropsJson,Z_Param_steamID,Z_Param_bNotify,Z_Param_requestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebInventoryService::execAddItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_TARRAY(int32,Z_Param_itemdefID);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemPropsJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_PROPERTY(FStrProperty,Z_Param_requestID);
		P_GET_UBOOL(Z_Param_bTradeRestriction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_itemdefID,Z_Param_itemPropsJson,Z_Param_steamID,Z_Param_bNotify,Z_Param_requestID,Z_Param_bTradeRestriction);
		P_NATIVE_END;
	}
	void UWebInventoryService::StaticRegisterNativesUWebInventoryService()
	{
		UClass* Class = UWebInventoryService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UWebInventoryService::execAddItem },
			{ "AddPromoItem", &UWebInventoryService::execAddPromoItem },
			{ "Consolidate", &UWebInventoryService::execConsolidate },
			{ "ConsumeItem", &UWebInventoryService::execConsumeItem },
			{ "ExchangeItem", &UWebInventoryService::execExchangeItem },
			{ "GetInventory", &UWebInventoryService::execGetInventory },
			{ "GetItemDefs", &UWebInventoryService::execGetItemDefs },
			{ "GetPriceSheet", &UWebInventoryService::execGetPriceSheet },
			{ "GetQuantity", &UWebInventoryService::execGetQuantity },
			{ "ModifyItems", &UWebInventoryService::execModifyItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebInventoryService_AddItem_Statics
	{
		struct WebInventoryService_eventAddItem_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			TArray<int32> itemdefID;
			FString itemPropsJson;
			FString steamID;
			bool bNotify;
			FString requestID;
			bool bTradeRestriction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemdefID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemPropsJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotify;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestID;
		static void NewProp_bTradeRestriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTradeRestriction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_itemdefID_Inner = { "itemdefID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_itemdefID = { "itemdefID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, itemdefID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_itemPropsJson = { "itemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, itemPropsJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((WebInventoryService_eventAddItem_Parms*)Obj)->bNotify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventAddItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_requestID = { "requestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddItem_Parms, requestID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction_SetBit(void* Obj)
	{
		((WebInventoryService_eventAddItem_Parms*)Obj)->bTradeRestriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction = { "bTradeRestriction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventAddItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_itemdefID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_itemdefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_itemPropsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_requestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::NewProp_bTradeRestriction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\x09*\n\x09* Items of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\n\x09* This call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\x09*\n\x09* Player notification of a new item, if any, is best handled by the game client. \n\x09* Calls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\x09*\n\x09* The optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\n\x09* If the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\x09*\n\x09* If the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09itemdefID (int64)\x09List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09* @param\x09itemPropsJson\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09* @param\x09""bNotify\x09\x09\x09\x09Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n\x09* @param\x09requestID (int64)\x09Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n\x09* @param\x09""bTradeRestriction\x09Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\nItems of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\nThis call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\nPlayer notification of a new item, if any, is best handled by the game client.\nCalls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\nThe optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\nIf the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\nIf the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The ID of the application associated with the item.\n@param        itemdefID (int64)       List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param        itemPropsJson\n@param        steamID                         SteamID of the player to receive the items.\n@param        bNotify                         Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n@param        requestID (int64)       Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n@param        bTradeRestriction       Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "AddItem", nullptr, nullptr, sizeof(WebInventoryService_eventAddItem_Parms), Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics
	{
		struct WebInventoryService_eventAddPromoItem_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 itemdefID;
			FString itemPropsJson;
			FString steamID;
			bool bNotify;
			FString requestID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemPropsJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotify;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_itemdefID = { "itemdefID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, itemdefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_itemPropsJson = { "itemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, itemPropsJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((WebInventoryService_eventAddPromoItem_Parms*)Obj)->bNotify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventAddPromoItem_Parms), &Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_requestID = { "requestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventAddPromoItem_Parms, requestID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_itemdefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_itemPropsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_bNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::NewProp_requestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Adds a promo item to a user's inventory\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09\n\x09* @param\x09itemdefID (int64)\x09\n\x09* @param\x09itemPropsJson\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09* @param\x09""bNotify\x09\x09\x09\x09Should notify the user that the item was added to their Steam Inventory.\n\x09* @param\x09requestID (int64)\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Adds a promo item to a user's inventory\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID\n@param        itemdefID (int64)\n@param        itemPropsJson\n@param        steamID                         SteamID of the player to receive the items.\n@param        bNotify                         Should notify the user that the item was added to their Steam Inventory.\n@param        requestID (int64)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "AddPromoItem", nullptr, nullptr, sizeof(WebInventoryService_eventAddPromoItem_Parms), Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_AddPromoItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_AddPromoItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics
	{
		struct WebInventoryService_eventConsolidate_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			TArray<int32> itemdefIDs;
			bool bForce;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemdefIDs;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_itemdefIDs_Inner = { "itemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_itemdefIDs = { "itemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsolidate_Parms, itemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((WebInventoryService_eventConsolidate_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventConsolidate_Parms), &Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_itemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_itemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Consolidate items of the given type within an user's inventory.\n\x09*\n\x09* Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item. \n\x09* The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The ID of the application associated with the item.\n\x09* @param\x09steamID\n\x09* @param\x09itemdefIDs\n\x09* @param\x09""bForce\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Consolidate items of the given type within an user's inventory.\n\nWhenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item.\nThe Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The ID of the application associated with the item.\n@param        steamID\n@param        itemdefIDs\n@param        bForce" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "Consolidate", nullptr, nullptr, sizeof(WebInventoryService_eventConsolidate_Parms), Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_Consolidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_Consolidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics
	{
		struct WebInventoryService_eventConsumeItem_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString itemID;
			FString quantity;
			FString steamID;
			FString requestID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, itemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_requestID = { "requestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventConsumeItem_Parms, requestID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::NewProp_requestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Marks an item as wholly or partially consumed. This action cannot be reversed.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\n\x09* @param\x09itemID\x09\x09\x09\x09Item ID to be consumed\n\x09* @param\x09quantity\x09\x09\x09""Amount of the given item stack to be consumed\n\x09* @param\x09steamID\n\x09* @param\x09requestID (int64)\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Marks an item as wholly or partially consumed. This action cannot be reversed.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID\n@param        itemID                          Item ID to be consumed\n@param        quantity                        Amount of the given item stack to be consumed\n@param        steamID\n@param        requestID (int64)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ConsumeItem", nullptr, nullptr, sizeof(WebInventoryService_eventConsumeItem_Parms), Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_ConsumeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ConsumeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics
	{
		struct WebInventoryService_eventExchangeItem_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			TArray<int32> materialsItemID;
			TArray<int32> materialsQuantity;
			FString outputItemdefID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_materialsItemID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_materialsItemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_materialsQuantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_materialsQuantity;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outputItemdefID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_materialsItemID_Inner = { "materialsItemID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_materialsItemID = { "materialsItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, materialsItemID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_materialsQuantity_Inner = { "materialsQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_materialsQuantity = { "materialsQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, materialsQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_outputItemdefID = { "outputItemdefID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventExchangeItem_Parms, outputItemdefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_materialsItemID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_materialsItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_materialsQuantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_materialsQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::NewProp_outputItemdefID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\x09*\n\x09* The target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\x09*\n\x09* See the Inventory Service Schema documentation for more detail on crafting recipes.\n\x09* The crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\x09*\n\x09* If successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of the player that owns the items.\n\x09* @param\x09materialsItemID\x09\x09The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n\x09* @param\x09materialsQuantity\x09The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n\x09* @param\x09outputItemdefID\x09\x09The ItemDef of the item to be created.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\nThe target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\nSee the Inventory Service Schema documentation for more detail on crafting recipes.\nThe crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\nIf successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The ID of the application associated with the item.\n@param        steamID                         SteamID of the player that owns the items.\n@param        materialsItemID         The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n@param        materialsQuantity       The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n@param        outputItemdefID         The ItemDef of the item to be created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ExchangeItem", nullptr, nullptr, sizeof(WebInventoryService_eventExchangeItem_Parms), Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_ExchangeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ExchangeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics
	{
		struct WebInventoryService_eventGetInventory_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetInventory_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* GetInventory is used to retrieve a user's inventory.\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The ID of the application associated with the item.\n\x09* @param\x09steamID\x09\x09""64-bit Steam ID of the user whos inventory you are requesting.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The ID of the application associated with the item.\n@param        steamID         64-bit Steam ID of the user whos inventory you are requesting." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetInventory", nullptr, nullptr, sizeof(WebInventoryService_eventGetInventory_Parms), Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics
	{
		struct WebInventoryService_eventGetItemDefs_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString modifiedSince;
			TArray<int32> itemdefIDs;
			TArray<int32> workshopIDs;
			int32 cacheMaxAgeSeconds;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_modifiedSince;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemdefIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_workshopIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_workshopIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cacheMaxAgeSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_modifiedSince = { "modifiedSince", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, modifiedSince), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_itemdefIDs_Inner = { "itemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_itemdefIDs = { "itemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, itemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_workshopIDs_Inner = { "workshopIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_workshopIDs = { "workshopIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, workshopIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_cacheMaxAgeSeconds = { "cacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetItemDefs_Parms, cacheMaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_modifiedSince,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_itemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_itemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_workshopIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_workshopIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::NewProp_cacheMaxAgeSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "itemdefIDs, workshopIDs" },
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* GetInventory is used to retrieve a user's inventory.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09modifiedSince\x09\x09\x09Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n\x09* @param\x09itemdefIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by itemdefid\n\x09* @param\x09workshopIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by workshopid\n\x09* @param\x09""cacheMaxAgeSeconds\x09\x09""Allow stale data to be returned for the specified number of seconds.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        appID                                   The ID of the application associated with the item.\n@param        modifiedSince                   Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n@param        itemdefIDs                              Use to retrieve just specific itemdefs by itemdefid\n@param        workshopIDs                             Use to retrieve just specific itemdefs by workshopid\n@param        cacheMaxAgeSeconds              Allow stale data to be returned for the specified number of seconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetItemDefs", nullptr, nullptr, sizeof(WebInventoryService_eventGetItemDefs_Parms), Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_GetItemDefs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetItemDefs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics
	{
		struct WebInventoryService_eventGetPriceSheet_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 currency;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetPriceSheet_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::NewProp_currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Get the Inventory Service price sheet\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Get the Inventory Service price sheet\n\n@param        key                     Steamworks Web API publisher authentication key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetPriceSheet", nullptr, nullptr, sizeof(WebInventoryService_eventGetPriceSheet_Parms), Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_GetPriceSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetPriceSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics
	{
		struct WebInventoryService_eventGetQuantity_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			TArray<int32> itemdefIDs;
			bool bForce;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemdefIDs;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_itemdefIDs_Inner = { "itemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_itemdefIDs = { "itemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventGetQuantity_Parms, itemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((WebInventoryService_eventGetQuantity_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebInventoryService_eventGetQuantity_Parms), &Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_itemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_itemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Get the total number of available items of the given type\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The ID of the application associated with the item.\n\x09* @param\x09steamID\n\x09* @param\x09itemdefIDs\x09List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09* @param\x09""bForce\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The ID of the application associated with the item.\n@param        steamID\n@param        itemdefIDs      List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param        bForce" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "GetQuantity", nullptr, nullptr, sizeof(WebInventoryService_eventGetQuantity_Parms), Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics
	{
		struct WebInventoryService_eventModifyItems_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString inputJson;
			FString steamID;
			int32 timestamp;
			FString updates;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_updates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_inputJson = { "inputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, inputJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_updates = { "updates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebInventoryService_eventModifyItems_Parms, updates), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_inputJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::NewProp_updates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|InventoryService" },
		{ "Comment", "/**\n\x09* Get the total number of available items of the given type\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The ID of the application associated with the item.\n\x09* @param\x09inputJson\n\x09* @param\x09steamID\x09\x09The steamid of the user who owns the items. Must be specified in the input_json parameter.\n\x09* @param\x09timestamp\x09Unix timestamp of the request. An error will be returned if the items have been modified since this request time. Must be specified in the input_json parameter.\n\x09* @param\x09updates\x09\x09The list of items and properties being modified. Must be specified in the input_json parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The ID of the application associated with the item.\n@param        inputJson\n@param        steamID         The steamid of the user who owns the items. Must be specified in the input_json parameter.\n@param        timestamp       Unix timestamp of the request. An error will be returned if the items have been modified since this request time. Must be specified in the input_json parameter.\n@param        updates         The list of items and properties being modified. Must be specified in the input_json parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebInventoryService, nullptr, "ModifyItems", nullptr, nullptr, sizeof(WebInventoryService_eventModifyItems_Parms), Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebInventoryService_ModifyItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebInventoryService_ModifyItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebInventoryService_NoRegister()
	{
		return UWebInventoryService::StaticClass();
	}
	struct Z_Construct_UClass_UWebInventoryService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebInventoryService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebInventoryService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebInventoryService_AddItem, "AddItem" }, // 293642505
		{ &Z_Construct_UFunction_UWebInventoryService_AddPromoItem, "AddPromoItem" }, // 290139917
		{ &Z_Construct_UFunction_UWebInventoryService_Consolidate, "Consolidate" }, // 1343207966
		{ &Z_Construct_UFunction_UWebInventoryService_ConsumeItem, "ConsumeItem" }, // 2799870085
		{ &Z_Construct_UFunction_UWebInventoryService_ExchangeItem, "ExchangeItem" }, // 1127097541
		{ &Z_Construct_UFunction_UWebInventoryService_GetInventory, "GetInventory" }, // 4034029535
		{ &Z_Construct_UFunction_UWebInventoryService_GetItemDefs, "GetItemDefs" }, // 3420251086
		{ &Z_Construct_UFunction_UWebInventoryService_GetPriceSheet, "GetPriceSheet" }, // 1284991468
		{ &Z_Construct_UFunction_UWebInventoryService_GetQuantity, "GetQuantity" }, // 189628698
		{ &Z_Construct_UFunction_UWebInventoryService_ModifyItems, "ModifyItems" }, // 1800084905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebInventoryService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryService/WebInventoryService.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebInventoryService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebInventoryService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebInventoryService_Statics::ClassParams = {
		&UWebInventoryService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebInventoryService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebInventoryService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebInventoryService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebInventoryService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebInventoryService, 178594041);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebInventoryService>()
	{
		return UWebInventoryService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebInventoryService(Z_Construct_UClass_UWebInventoryService, &UWebInventoryService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebInventoryService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebInventoryService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

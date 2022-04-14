// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/InventoryService/WebInventoryServiceAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebInventoryServiceAsyncActions() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddItem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionAddItem::execAddItemAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionAddItem**)Z_Param__Result=USteamCoreWebAsyncActionAddItem::AddItemAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_itemdefID,Z_Param_itemPropsJson,Z_Param_steamID,Z_Param_bNotify,Z_Param_requestID,Z_Param_bTradeRestriction);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionAddItem::StaticRegisterNativesUSteamCoreWebAsyncActionAddItem()
	{
		UClass* Class = USteamCoreWebAsyncActionAddItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemAsync", &USteamCoreWebAsyncActionAddItem::execAddItemAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics
	{
		struct SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			TArray<int32> itemdefID;
			FString itemPropsJson;
			FString steamID;
			bool bNotify;
			FString requestID;
			bool bTradeRestriction;
			USteamCoreWebAsyncActionAddItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_itemdefID_Inner = { "itemdefID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_itemdefID = { "itemdefID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, itemdefID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_itemPropsJson = { "itemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, itemPropsJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms*)Obj)->bNotify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_requestID = { "requestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, requestID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms*)Obj)->bTradeRestriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction = { "bTradeRestriction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_itemdefID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_itemdefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_itemPropsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_requestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_bTradeRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\x09*\n\x09* Items of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\n\x09* This call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\x09*\n\x09* Player notification of a new item, if any, is best handled by the game client.\n\x09* Calls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\x09*\n\x09* The optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\n\x09* If the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\x09*\n\x09* If the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09itemdefID (int64)\x09List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09* @param\x09itemPropsJson\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09* @param\x09""bNotify\x09\x09\x09\x09Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n\x09* @param\x09requestID (int64)\x09Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n\x09* @param\x09""bTradeRestriction\x09Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item.\n\x09*/" },
		{ "DisplayName", "Add Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n\nItems of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.\nThis call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.\n\nPlayer notification of a new item, if any, is best handled by the game client.\nCalls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.\n\nThe optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.\nIf the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.\n\nIf the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The ID of the application associated with the item.\n@param        itemdefID (int64)       List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param        itemPropsJson\n@param        steamID                         SteamID of the player to receive the items.\n@param        bNotify                         Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.\n@param        requestID (int64)       Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.\n@param        bTradeRestriction       Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAddItem, nullptr, "AddItemAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionAddItem_eventAddItemAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_NoRegister()
	{
		return USteamCoreWebAsyncActionAddItem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAddItem_AddItemAsync, "AddItemAsync" }, // 1726111061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionAddItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionAddItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAddItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::ClassParams = {
		&USteamCoreWebAsyncActionAddItem::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionAddItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionAddItem, 1961917107);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionAddItem>()
	{
		return USteamCoreWebAsyncActionAddItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionAddItem(Z_Construct_UClass_USteamCoreWebAsyncActionAddItem, &USteamCoreWebAsyncActionAddItem::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionAddItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionAddItem);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionAddPromoItem::execAddPromoItemAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_itemdefID);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemPropsJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_PROPERTY(FStrProperty,Z_Param_requestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionAddPromoItem**)Z_Param__Result=USteamCoreWebAsyncActionAddPromoItem::AddPromoItemAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_itemdefID,Z_Param_itemPropsJson,Z_Param_steamID,Z_Param_bNotify,Z_Param_requestID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionAddPromoItem::StaticRegisterNativesUSteamCoreWebAsyncActionAddPromoItem()
	{
		UClass* Class = USteamCoreWebAsyncActionAddPromoItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPromoItemAsync", &USteamCoreWebAsyncActionAddPromoItem::execAddPromoItemAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics
	{
		struct SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			int32 itemdefID;
			FString itemPropsJson;
			FString steamID;
			bool bNotify;
			FString requestID;
			USteamCoreWebAsyncActionAddPromoItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemPropsJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotify;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemdefID = { "itemdefID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, itemdefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemPropsJson = { "itemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, itemPropsJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms*)Obj)->bNotify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_requestID = { "requestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, requestID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemdefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_itemPropsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_bNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_requestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Adds a promo item to a user's inventory\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\n\x09* @param\x09itemdefID (int64)\n\x09* @param\x09itemPropsJson\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of the player to receive the items.\n\x09* @param\x09""bNotify\x09\x09\x09\x09Should notify the user that the item was added to their Steam Inventory.\n\x09* @param\x09requestID (int64)\n\x09*/" },
		{ "DisplayName", "Add Promo Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Adds a promo item to a user's inventory\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID\n@param        itemdefID (int64)\n@param        itemPropsJson\n@param        steamID                         SteamID of the player to receive the items.\n@param        bNotify                         Should notify the user that the item was added to their Steam Inventory.\n@param        requestID (int64)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem, nullptr, "AddPromoItemAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionAddPromoItem_eventAddPromoItemAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_NoRegister()
	{
		return USteamCoreWebAsyncActionAddPromoItem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync, "AddPromoItemAsync" }, // 147638384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionAddPromoItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionAddPromoItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionAddPromoItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::ClassParams = {
		&USteamCoreWebAsyncActionAddPromoItem::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionAddPromoItem, 1450958940);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionAddPromoItem>()
	{
		return USteamCoreWebAsyncActionAddPromoItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionAddPromoItem(Z_Construct_UClass_USteamCoreWebAsyncActionAddPromoItem, &USteamCoreWebAsyncActionAddPromoItem::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionAddPromoItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionAddPromoItem);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionConsumeItem::execConsumeItemAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_itemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_quantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_requestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionConsumeItem**)Z_Param__Result=USteamCoreWebAsyncActionConsumeItem::ConsumeItemAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_itemID,Z_Param_quantity,Z_Param_steamID,Z_Param_requestID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionConsumeItem::StaticRegisterNativesUSteamCoreWebAsyncActionConsumeItem()
	{
		UClass* Class = USteamCoreWebAsyncActionConsumeItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsumeItemAsync", &USteamCoreWebAsyncActionConsumeItem::execConsumeItemAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics
	{
		struct SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			FString itemID;
			FString quantity;
			FString steamID;
			FString requestID;
			USteamCoreWebAsyncActionConsumeItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requestID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, itemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_requestID = { "requestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, requestID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_requestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Marks an item as wholly or partially consumed. This action cannot be reversed.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\n\x09* @param\x09itemID\x09\x09\x09\x09Item ID to be consumed\n\x09* @param\x09quantity\x09\x09\x09""Amount of the given item stack to be consumed\n\x09* @param\x09steamID\n\x09* @param\x09requestID (int64)\n\x09*/" },
		{ "DisplayName", "Consume Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Marks an item as wholly or partially consumed. This action cannot be reversed.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID\n@param        itemID                          Item ID to be consumed\n@param        quantity                        Amount of the given item stack to be consumed\n@param        steamID\n@param        requestID (int64)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem, nullptr, "ConsumeItemAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionConsumeItem_eventConsumeItemAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_NoRegister()
	{
		return USteamCoreWebAsyncActionConsumeItem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync, "ConsumeItemAsync" }, // 3468040620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionConsumeItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionConsumeItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionConsumeItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::ClassParams = {
		&USteamCoreWebAsyncActionConsumeItem::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionConsumeItem, 745831279);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionConsumeItem>()
	{
		return USteamCoreWebAsyncActionConsumeItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionConsumeItem(Z_Construct_UClass_USteamCoreWebAsyncActionConsumeItem, &USteamCoreWebAsyncActionConsumeItem::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionConsumeItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionConsumeItem);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionExchangeItem::execExchangeItemAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(int32,Z_Param_materialsItemID);
		P_GET_TARRAY(int32,Z_Param_materialsQuantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_outputItemdefID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionExchangeItem**)Z_Param__Result=USteamCoreWebAsyncActionExchangeItem::ExchangeItemAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_materialsItemID,Z_Param_materialsQuantity,Z_Param_outputItemdefID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionExchangeItem::StaticRegisterNativesUSteamCoreWebAsyncActionExchangeItem()
	{
		UClass* Class = USteamCoreWebAsyncActionExchangeItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExchangeItemAsync", &USteamCoreWebAsyncActionExchangeItem::execExchangeItemAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics
	{
		struct SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			FString steamID;
			TArray<int32> materialsItemID;
			TArray<int32> materialsQuantity;
			FString outputItemdefID;
			USteamCoreWebAsyncActionExchangeItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_materialsItemID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_materialsItemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_materialsQuantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_materialsQuantity;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outputItemdefID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_materialsItemID_Inner = { "materialsItemID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_materialsItemID = { "materialsItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, materialsItemID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_materialsQuantity_Inner = { "materialsQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_materialsQuantity = { "materialsQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, materialsQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_outputItemdefID = { "outputItemdefID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, outputItemdefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_materialsItemID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_materialsItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_materialsQuantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_materialsQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_outputItemdefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\x09*\n\x09* The target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\x09*\n\x09* See the Inventory Service Schema documentation for more detail on crafting recipes.\n\x09* The crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\x09*\n\x09* If successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of the player that owns the items.\n\x09* @param\x09materialsItemID\x09\x09The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n\x09* @param\x09materialsQuantity\x09The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n\x09* @param\x09outputItemdefID\x09\x09The ItemDef of the item to be created.\n\x09*/" },
		{ "DisplayName", "Exchange Item" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.\n\nThe target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.\n\nSee the Inventory Service Schema documentation for more detail on crafting recipes.\nThe crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.\n\nIf successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The ID of the application associated with the item.\n@param        steamID                         SteamID of the player that owns the items.\n@param        materialsItemID         The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.\n@param        materialsQuantity       The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.\n@param        outputItemdefID         The ItemDef of the item to be created." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem, nullptr, "ExchangeItemAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionExchangeItem_eventExchangeItemAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_NoRegister()
	{
		return USteamCoreWebAsyncActionExchangeItem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync, "ExchangeItemAsync" }, // 3039544859
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionExchangeItem\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionExchangeItem\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionExchangeItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::ClassParams = {
		&USteamCoreWebAsyncActionExchangeItem::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionExchangeItem, 898589030);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionExchangeItem>()
	{
		return USteamCoreWebAsyncActionExchangeItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionExchangeItem(Z_Construct_UClass_USteamCoreWebAsyncActionExchangeItem, &USteamCoreWebAsyncActionExchangeItem::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionExchangeItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionExchangeItem);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetInventory::execGetInventoryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetInventory**)Z_Param__Result=USteamCoreWebAsyncActionGetInventory::GetInventoryAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_steamID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetInventory::StaticRegisterNativesUSteamCoreWebAsyncActionGetInventory()
	{
		UClass* Class = USteamCoreWebAsyncActionGetInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInventoryAsync", &USteamCoreWebAsyncActionGetInventory::execGetInventoryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			FString steamID;
			USteamCoreWebAsyncActionGetInventory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* GetInventory is used to retrieve a user's inventory.\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The ID of the application associated with the item.\n\x09* @param\x09steamID\x09\x09""64-bit Steam ID of the user whos inventory you are requesting.\n\x09*/" },
		{ "DisplayName", "Get Inventory" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The ID of the application associated with the item.\n@param        steamID         64-bit Steam ID of the user whos inventory you are requesting." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory, nullptr, "GetInventoryAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetInventory_eventGetInventoryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_NoRegister()
	{
		return USteamCoreWebAsyncActionGetInventory::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetInventory_GetInventoryAsync, "GetInventoryAsync" }, // 407428964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetInventory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetInventory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetInventory::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetInventory, 954335306);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetInventory>()
	{
		return USteamCoreWebAsyncActionGetInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetInventory(Z_Construct_UClass_USteamCoreWebAsyncActionGetInventory, &USteamCoreWebAsyncActionGetInventory::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetInventory);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetItemDefs::execGetItemDefsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_modifiedSince);
		P_GET_TARRAY(int32,Z_Param_itemdefIDs);
		P_GET_TARRAY(int32,Z_Param_workshopIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_cacheMaxAgeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetItemDefs**)Z_Param__Result=USteamCoreWebAsyncActionGetItemDefs::GetItemDefsAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_modifiedSince,Z_Param_itemdefIDs,Z_Param_workshopIDs,Z_Param_cacheMaxAgeSeconds);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetItemDefs::StaticRegisterNativesUSteamCoreWebAsyncActionGetItemDefs()
	{
		UClass* Class = USteamCoreWebAsyncActionGetItemDefs::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemDefsAsync", &USteamCoreWebAsyncActionGetItemDefs::execGetItemDefsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			FString modifiedSince;
			TArray<int32> itemdefIDs;
			TArray<int32> workshopIDs;
			int32 cacheMaxAgeSeconds;
			USteamCoreWebAsyncActionGetItemDefs* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_modifiedSince;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemdefIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_workshopIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_workshopIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cacheMaxAgeSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_modifiedSince = { "modifiedSince", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, modifiedSince), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_itemdefIDs_Inner = { "itemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_itemdefIDs = { "itemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, itemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_workshopIDs_Inner = { "workshopIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_workshopIDs = { "workshopIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, workshopIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_cacheMaxAgeSeconds = { "cacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, cacheMaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_modifiedSince,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_itemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_itemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_workshopIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_workshopIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_cacheMaxAgeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "itemdefIDs, workshopIDs" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* GetInventory is used to retrieve a user's inventory.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The ID of the application associated with the item.\n\x09* @param\x09modifiedSince\x09\x09\x09Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n\x09* @param\x09itemdefIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by itemdefid\n\x09* @param\x09workshopIDs\x09\x09\x09\x09Use to retrieve just specific itemdefs by workshopid\n\x09* @param\x09""cacheMaxAgeSeconds\x09\x09""Allow stale data to be returned for the specified number of seconds.\n\x09*/" },
		{ "DisplayName", "Get Item Defs" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "GetInventory is used to retrieve a user's inventory.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        appID                                   The ID of the application associated with the item.\n@param        modifiedSince                   Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).\n@param        itemdefIDs                              Use to retrieve just specific itemdefs by itemdefid\n@param        workshopIDs                             Use to retrieve just specific itemdefs by workshopid\n@param        cacheMaxAgeSeconds              Allow stale data to be returned for the specified number of seconds." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs, nullptr, "GetItemDefsAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetItemDefs_eventGetItemDefsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_NoRegister()
	{
		return USteamCoreWebAsyncActionGetItemDefs::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync, "GetItemDefsAsync" }, // 1471122549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetItemDefs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetItemDefs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetItemDefs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetItemDefs::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetItemDefs, 3423216675);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetItemDefs>()
	{
		return USteamCoreWebAsyncActionGetItemDefs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetItemDefs(Z_Construct_UClass_USteamCoreWebAsyncActionGetItemDefs, &USteamCoreWebAsyncActionGetItemDefs::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetItemDefs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetItemDefs);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPriceSheet::execGetPriceSheetAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_currency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPriceSheet**)Z_Param__Result=USteamCoreWebAsyncActionGetPriceSheet::GetPriceSheetAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_currency);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPriceSheet::StaticRegisterNativesUSteamCoreWebAsyncActionGetPriceSheet()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPriceSheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriceSheetAsync", &USteamCoreWebAsyncActionGetPriceSheet::execGetPriceSheetAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 currency;
			USteamCoreWebAsyncActionGetPriceSheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Get the Inventory Service price sheet\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09*/" },
		{ "DisplayName", "Get Price Sheet" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Get the Inventory Service price sheet\n\n@param        key                     Steamworks Web API publisher authentication key." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet, nullptr, "GetPriceSheetAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetPriceSheet_eventGetPriceSheetAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPriceSheet::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync, "GetPriceSheetAsync" }, // 4008753332
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetPriceSheet\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetPriceSheet\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPriceSheet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetPriceSheet::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetPriceSheet, 1232370603);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPriceSheet>()
	{
		return USteamCoreWebAsyncActionGetPriceSheet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetPriceSheet(Z_Construct_UClass_USteamCoreWebAsyncActionGetPriceSheet, &USteamCoreWebAsyncActionGetPriceSheet::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetPriceSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPriceSheet);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionConsolidate::execConsolidateAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(int32,Z_Param_itemdefIDs);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionConsolidate**)Z_Param__Result=USteamCoreWebAsyncActionConsolidate::ConsolidateAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_itemdefIDs,Z_Param_bForce);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionConsolidate::StaticRegisterNativesUSteamCoreWebAsyncActionConsolidate()
	{
		UClass* Class = USteamCoreWebAsyncActionConsolidate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsolidateAsync", &USteamCoreWebAsyncActionConsolidate::execConsolidateAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics
	{
		struct SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			FString steamID;
			TArray<int32> itemdefIDs;
			bool bForce;
			USteamCoreWebAsyncActionConsolidate* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemdefIDs;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_itemdefIDs_Inner = { "itemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_itemdefIDs = { "itemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, itemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_itemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_itemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Consolidate items of the given type within an user's inventory.\n\x09*\n\x09* Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item.\n\x09* The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The ID of the application associated with the item.\n\x09* @param\x09steamID\n\x09* @param\x09itemdefIDs\n\x09* @param\x09""bForce\n\x09*/" },
		{ "DisplayName", "Consolidate" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Consolidate items of the given type within an user's inventory.\n\nWhenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item.\nThe Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The ID of the application associated with the item.\n@param        steamID\n@param        itemdefIDs\n@param        bForce" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate, nullptr, "ConsolidateAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionConsolidate_eventConsolidateAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_NoRegister()
	{
		return USteamCoreWebAsyncActionConsolidate::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionConsolidate_ConsolidateAsync, "ConsolidateAsync" }, // 543813752
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionConsolidate\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionConsolidate\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionConsolidate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::ClassParams = {
		&USteamCoreWebAsyncActionConsolidate::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionConsolidate, 870813819);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionConsolidate>()
	{
		return USteamCoreWebAsyncActionConsolidate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionConsolidate(Z_Construct_UClass_USteamCoreWebAsyncActionConsolidate, &USteamCoreWebAsyncActionConsolidate::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionConsolidate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionConsolidate);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetQuantity::execGetQuantityAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(int32,Z_Param_itemdefIDs);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetQuantity**)Z_Param__Result=USteamCoreWebAsyncActionGetQuantity::GetQuantityAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_itemdefIDs,Z_Param_bForce);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetQuantity::StaticRegisterNativesUSteamCoreWebAsyncActionGetQuantity()
	{
		UClass* Class = USteamCoreWebAsyncActionGetQuantity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetQuantityAsync", &USteamCoreWebAsyncActionGetQuantity::execGetQuantityAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			FString steamID;
			TArray<int32> itemdefIDs;
			bool bForce;
			USteamCoreWebAsyncActionGetQuantity* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemdefIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemdefIDs;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_itemdefIDs_Inner = { "itemdefIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_itemdefIDs = { "itemdefIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, itemdefIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_itemdefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_itemdefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Get the total number of available items of the given type\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The ID of the application associated with the item.\n\x09* @param\x09steamID\n\x09* @param\x09itemdefIDs\x09List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n\x09* @param\x09""bForce\n\x09*/" },
		{ "DisplayName", "Get Quantity" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The ID of the application associated with the item.\n@param        steamID\n@param        itemdefIDs      List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.\n@param        bForce" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity, nullptr, "GetQuantityAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetQuantity_eventGetQuantityAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_NoRegister()
	{
		return USteamCoreWebAsyncActionGetQuantity::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync, "GetQuantityAsync" }, // 765247085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetQuantity\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetQuantity\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetQuantity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetQuantity::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetQuantity, 3836118278);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetQuantity>()
	{
		return USteamCoreWebAsyncActionGetQuantity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetQuantity(Z_Construct_UClass_USteamCoreWebAsyncActionGetQuantity, &USteamCoreWebAsyncActionGetQuantity::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetQuantity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetQuantity);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionModifyItems::execModifyItemsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputJson);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_timestamp);
		P_GET_PROPERTY(FStrProperty,Z_Param_updates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionModifyItems**)Z_Param__Result=USteamCoreWebAsyncActionModifyItems::ModifyItemsAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_inputJson,Z_Param_steamID,Z_Param_timestamp,Z_Param_updates);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionModifyItems::StaticRegisterNativesUSteamCoreWebAsyncActionModifyItems()
	{
		UClass* Class = USteamCoreWebAsyncActionModifyItems::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyItemsAsync", &USteamCoreWebAsyncActionModifyItems::execModifyItemsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics
	{
		struct SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			FString inputJson;
			FString steamID;
			int32 timestamp;
			FString updates;
			USteamCoreWebAsyncActionModifyItems* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timestamp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_updates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_inputJson = { "inputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, inputJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, timestamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_updates = { "updates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, updates), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_inputJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_updates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|InventoryService|Async" },
		{ "Comment", "/**\n\x09* Get the total number of available items of the given type\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The ID of the application associated with the item.\n\x09* @param\x09inputJson\n\x09* @param\x09steamID\x09\x09The steamid of the user who owns the items. Must be specified in the input_json parameter.\n\x09* @param\x09timestamp\x09Unix timestamp of the request. An error will be returned if the items have been modified since this request time. Must be specified in the input_json parameter.\n\x09* @param\x09updates\x09\x09The list of items and properties being modified. Must be specified in the input_json parameter.\n\x09*/" },
		{ "DisplayName", "Modify Items" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "Get the total number of available items of the given type\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The ID of the application associated with the item.\n@param        inputJson\n@param        steamID         The steamid of the user who owns the items. Must be specified in the input_json parameter.\n@param        timestamp       Unix timestamp of the request. An error will be returned if the items have been modified since this request time. Must be specified in the input_json parameter.\n@param        updates         The list of items and properties being modified. Must be specified in the input_json parameter." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems, nullptr, "ModifyItemsAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionModifyItems_eventModifyItemsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_NoRegister()
	{
		return USteamCoreWebAsyncActionModifyItems::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync, "ModifyItemsAsync" }, // 1344938237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionModifyItems\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/InventoryService/WebInventoryServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionModifyItems\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionModifyItems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::ClassParams = {
		&USteamCoreWebAsyncActionModifyItems::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionModifyItems, 1802930158);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionModifyItems>()
	{
		return USteamCoreWebAsyncActionModifyItems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionModifyItems(Z_Construct_UClass_USteamCoreWebAsyncActionModifyItems, &USteamCoreWebAsyncActionModifyItems::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionModifyItems"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionModifyItems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

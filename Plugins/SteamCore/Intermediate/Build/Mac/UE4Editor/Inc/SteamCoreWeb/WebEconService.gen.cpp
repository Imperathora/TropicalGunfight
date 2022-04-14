// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/EconService/WebEconService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebEconService::execCancelTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_tradeOfferID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execDeclineTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeclineTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_tradeOfferID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffersSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeLastVisit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffersSummary(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_timeLastVisit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_tradeOfferID,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_bGetSentOffers);
		P_GET_UBOOL(Z_Param_bGetReceivedOffers);
		P_GET_UBOOL(Z_Param_bGetDescriptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_UBOOL(Z_Param_bActiveOnly);
		P_GET_UBOOL(Z_Param_bHistoricalOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeHistoricalCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffers(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_bGetSentOffers,Z_Param_bGetReceivedOffers,Z_Param_bGetDescriptions,Z_Param_language,Z_Param_bActiveOnly,Z_Param_bHistoricalOnly,Z_Param_timeHistoricalCutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushContextCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushContextCache(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushAssetAppearanceCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushAssetAppearanceCache(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushInventoryCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushInventoryCache(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_contextID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxTrades);
		P_GET_PROPERTY(FIntProperty,Z_Param_startAfterTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_startAfterTradeID);
		P_GET_UBOOL(Z_Param_bNavigatingBack);
		P_GET_UBOOL(Z_Param_bGetDescriptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_UBOOL(Z_Param_bIncludeFailed);
		P_GET_UBOOL(Z_Param_bIncludeTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeHistory(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_maxTrades,Z_Param_startAfterTime,Z_Param_startAfterTradeID,Z_Param_bNavigatingBack,Z_Param_bGetDescriptions,Z_Param_language,Z_Param_bIncludeFailed,Z_Param_bIncludeTotal);
		P_NATIVE_END;
	}
	void UWebEconService::StaticRegisterNativesUWebEconService()
	{
		UClass* Class = UWebEconService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTradeOffer", &UWebEconService::execCancelTradeOffer },
			{ "DeclineTradeOffer", &UWebEconService::execDeclineTradeOffer },
			{ "FlushAssetAppearanceCache", &UWebEconService::execFlushAssetAppearanceCache },
			{ "FlushContextCache", &UWebEconService::execFlushContextCache },
			{ "FlushInventoryCache", &UWebEconService::execFlushInventoryCache },
			{ "GetTradeHistory", &UWebEconService::execGetTradeHistory },
			{ "GetTradeOffer", &UWebEconService::execGetTradeOffer },
			{ "GetTradeOffers", &UWebEconService::execGetTradeOffers },
			{ "GetTradeOffersSummary", &UWebEconService::execGetTradeOffersSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics
	{
		struct WebEconService_eventCancelTradeOffer_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString tradeOfferID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, tradeOfferID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_tradeOfferID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Cancel a trade offer we sent\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09tradeOfferID\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Cancel a trade offer we sent\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        tradeOfferID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "CancelTradeOffer", nullptr, nullptr, sizeof(WebEconService_eventCancelTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_CancelTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics
	{
		struct WebEconService_eventDeclineTradeOffer_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString tradeOfferID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, tradeOfferID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_tradeOfferID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Decline a trade offer someone sent to us\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09tradeOfferID\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Decline a trade offer someone sent to us\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        tradeOfferID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "DeclineTradeOffer", nullptr, nullptr, sizeof(WebEconService_eventDeclineTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_DeclineTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics
	{
		struct WebEconService_eventFlushAssetAppearanceCache_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushAssetAppearanceCache", nullptr, nullptr, sizeof(WebEconService_eventFlushAssetAppearanceCache_Parms), Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics
	{
		struct WebEconService_eventFlushContextCache_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushContextCache", nullptr, nullptr, sizeof(WebEconService_eventFlushContextCache_Parms), Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushContextCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics
	{
		struct WebEconService_eventFlushInventoryCache_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString contextID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, contextID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_contextID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Flushes the cache for a user's inventory in a specific app context\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09User to clear cache for.\n\x09* @param\x09""appID\x09\x09\x09""App to clear cache for.\n\x09* @param\x09""contextID\x09\x09""Context to clear cache for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 User to clear cache for.\n@param        appID                   App to clear cache for.\n@param        contextID               Context to clear cache for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushInventoryCache", nullptr, nullptr, sizeof(WebEconService_eventFlushInventoryCache_Parms), Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushInventoryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics
	{
		struct WebEconService_eventGetTradeHistory_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 maxTrades;
			int32 startAfterTime;
			FString startAfterTradeID;
			bool bNavigatingBack;
			bool bGetDescriptions;
			FString language;
			bool bIncludeFailed;
			bool bIncludeTotal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxTrades;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startAfterTime;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_startAfterTradeID;
		static void NewProp_bNavigatingBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavigatingBack;
		static void NewProp_bGetDescriptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static void NewProp_bIncludeFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeFailed;
		static void NewProp_bIncludeTotal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeTotal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_maxTrades = { "maxTrades", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, maxTrades), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTime = { "startAfterTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, startAfterTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTradeID = { "startAfterTradeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, startAfterTradeID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bNavigatingBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bIncludeFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bIncludeTotal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_maxTrades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_startAfterTradeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Gets a history of trades\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09maxTrades\x09\x09\x09\x09The number of trades to return information for\n\x09* @param\x09startAfterTime\x09\x09\x09The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n\x09* @param\x09startAfterTradeID\x09\x09The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n\x09* @param\x09""bNavigatingBack\x09\x09\x09The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trades will also be returned\n\x09* @param\x09language\x09\x09\x09\x09The language to use when loading item display data\n\x09* @param\x09""bIncludeFailed\x09\x09\x09Include Failed\n\x09* @param\x09""bIncludeTotal\x09\x09\x09If set, the total number of trades the account has participated in will be included in the response\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Gets a history of trades\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        maxTrades                               The number of trades to return information for\n@param        startAfterTime                  The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n@param        startAfterTradeID               The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n@param        bNavigatingBack                 The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trades will also be returned\n@param        language                                The language to use when loading item display data\n@param        bIncludeFailed                  Include Failed\n@param        bIncludeTotal                   If set, the total number of trades the account has participated in will be included in the response" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeHistory", nullptr, nullptr, sizeof(WebEconService_eventGetTradeHistory_Parms), Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics
	{
		struct WebEconService_eventGetTradeOffer_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString tradeOfferID;
			FString language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, tradeOfferID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_tradeOfferID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Gets a specific trade offer\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Gets a specific trade offer\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffer", nullptr, nullptr, sizeof(WebEconService_eventGetTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics
	{
		struct WebEconService_eventGetTradeOffers_Parms
		{
			FScriptDelegate callback;
			FString key;
			bool bGetSentOffers;
			bool bGetReceivedOffers;
			bool bGetDescriptions;
			FString language;
			bool bActiveOnly;
			bool bHistoricalOnly;
			int32 timeHistoricalCutoff;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static void NewProp_bGetSentOffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetSentOffers;
		static void NewProp_bGetReceivedOffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetReceivedOffers;
		static void NewProp_bGetDescriptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static void NewProp_bActiveOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActiveOnly;
		static void NewProp_bHistoricalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHistoricalOnly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeHistoricalCutoff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetSentOffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers = { "bGetSentOffers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetReceivedOffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers = { "bGetReceivedOffers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bActiveOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly = { "bActiveOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bHistoricalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly = { "bHistoricalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_timeHistoricalCutoff = { "timeHistoricalCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, timeHistoricalCutoff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_timeHistoricalCutoff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Get a list of sent or received trade offers\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""bGetSentOffers\x09\x09\x09Request the list of sent offers.\n\x09* @param\x09""bGetReceivedOffers\x09\x09Request the list of received offers.\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trade offers will also be returned.\n\x09* @param\x09language\x09\x09\x09\x09The language to use when loading item display data.\n\x09* @param\x09""bActiveOnly\x09\x09\x09\x09Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n\x09* @param\x09""bHistoricalOnly\x09\x09\x09Indicates we should only return offers which are not active.\n\x09* @param\x09timeHistoricalCutoff\x09When active_only is set, offers updated since this time will also be returned\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Get a list of sent or received trade offers\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        bGetSentOffers                  Request the list of sent offers.\n@param        bGetReceivedOffers              Request the list of received offers.\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trade offers will also be returned.\n@param        language                                The language to use when loading item display data.\n@param        bActiveOnly                             Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n@param        bHistoricalOnly                 Indicates we should only return offers which are not active.\n@param        timeHistoricalCutoff    When active_only is set, offers updated since this time will also be returned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffers", nullptr, nullptr, sizeof(WebEconService_eventGetTradeOffers_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics
	{
		struct WebEconService_eventGetTradeOffersSummary_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 timeLastVisit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeLastVisit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_timeLastVisit = { "timeLastVisit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, timeLastVisit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_timeLastVisit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Get counts of pending and new trade offers\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09timeLastVisit\x09\x09\x09The time the user last visited. If not passed, will use the time the user last visited the trade offer page.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Get counts of pending and new trade offers\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        timeLastVisit                   The time the user last visited. If not passed, will use the time the user last visited the trade offer page." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffersSummary", nullptr, nullptr, sizeof(WebEconService_eventGetTradeOffersSummary_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebEconService_NoRegister()
	{
		return UWebEconService::StaticClass();
	}
	struct Z_Construct_UClass_UWebEconService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebEconService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebEconService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebEconService_CancelTradeOffer, "CancelTradeOffer" }, // 2027813871
		{ &Z_Construct_UFunction_UWebEconService_DeclineTradeOffer, "DeclineTradeOffer" }, // 1932148046
		{ &Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache, "FlushAssetAppearanceCache" }, // 2725404859
		{ &Z_Construct_UFunction_UWebEconService_FlushContextCache, "FlushContextCache" }, // 1710890958
		{ &Z_Construct_UFunction_UWebEconService_FlushInventoryCache, "FlushInventoryCache" }, // 4018941861
		{ &Z_Construct_UFunction_UWebEconService_GetTradeHistory, "GetTradeHistory" }, // 2647961435
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffer, "GetTradeOffer" }, // 1139373043
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffers, "GetTradeOffers" }, // 3769453623
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary, "GetTradeOffersSummary" }, // 2456947736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EconService/WebEconService.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebEconService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebEconService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebEconService_Statics::ClassParams = {
		&UWebEconService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebEconService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebEconService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebEconService, 1632445940);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebEconService>()
	{
		return UWebEconService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebEconService(Z_Construct_UClass_UWebEconService, &UWebEconService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebEconService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebEconService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

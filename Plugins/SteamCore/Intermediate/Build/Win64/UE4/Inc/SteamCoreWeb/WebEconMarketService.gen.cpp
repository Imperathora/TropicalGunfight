// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/EconMarket/WebEconMarketService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconMarketService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebEconMarketService::execGetPopular)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_PROPERTY(FIntProperty,Z_Param_rows);
		P_GET_PROPERTY(FIntProperty,Z_Param_start);
		P_GET_PROPERTY(FIntProperty,Z_Param_filterAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_eCurrency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPopular(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_language,Z_Param_rows,Z_Param_start,Z_Param_filterAppID,Z_Param_eCurrency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconMarketService::execGetAssetID)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_listingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAssetID(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_listingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconMarketService::execCancelAppListingsForUser)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_UBOOL(Z_Param_bSynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAppListingsForUser(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_bSynchronous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconMarketService::execGetMarketEligibility)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMarketEligibility(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID);
		P_NATIVE_END;
	}
	void UWebEconMarketService::StaticRegisterNativesUWebEconMarketService()
	{
		UClass* Class = UWebEconMarketService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAppListingsForUser", &UWebEconMarketService::execCancelAppListingsForUser },
			{ "GetAssetID", &UWebEconMarketService::execGetAssetID },
			{ "GetMarketEligibility", &UWebEconMarketService::execGetMarketEligibility },
			{ "GetPopular", &UWebEconMarketService::execGetPopular },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics
	{
		struct WebEconMarketService_eventCancelAppListingsForUser_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			bool bSynchronous;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static void NewProp_bSynchronous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit(void* Obj)
	{
		((WebEconMarketService_eventCancelAppListingsForUser_Parms*)Obj)->bSynchronous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebEconMarketService_eventCancelAppListingsForUser_Parms), &Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Cancels all of a user's listings for a specific app ID.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09The app making the request\n\x09* @param\x09steamID\x09\x09\x09The SteamID of the user whose listings should be canceled\n\x09* @param\x09""bSynchronous\x09Whether or not to wait until all listings have been canceled before returning the response\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Cancels all of a user's listings for a specific app ID.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   The app making the request\n@param        steamID                 The SteamID of the user whose listings should be canceled\n@param        bSynchronous    Whether or not to wait until all listings have been canceled before returning the response" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "CancelAppListingsForUser", nullptr, nullptr, sizeof(WebEconMarketService_eventCancelAppListingsForUser_Parms), Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics
	{
		struct WebEconMarketService_eventGetAssetID_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString listingID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_listingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_listingID = { "listingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, listingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_listingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Returns the asset ID of the item sold in a listing\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API key making the request\n\x09* @param\x09listingid (int64)\x09The identifier of the listing to get information for\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Returns the asset ID of the item sold in a listing\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API key making the request\n@param        listingid (int64)       The identifier of the listing to get information for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetAssetID", nullptr, nullptr, sizeof(WebEconMarketService_eventGetAssetID_Parms), Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetAssetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics
	{
		struct WebEconMarketService_eventGetMarketEligibility_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Checks whether or not an account is allowed to use the market\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09The SteamID of the user to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Checks whether or not an account is allowed to use the market\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         The SteamID of the user to check" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetMarketEligibility", nullptr, nullptr, sizeof(WebEconMarketService_eventGetMarketEligibility_Parms), Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics
	{
		struct WebEconMarketService_eventGetPopular_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString language;
			int32 rows;
			int32 start;
			int32 filterAppID;
			int32 eCurrency;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rows;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_filterAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_eCurrency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_rows = { "rows", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, rows), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, start), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_filterAppID = { "filterAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, filterAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_eCurrency = { "eCurrency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, eCurrency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_rows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_filterAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_eCurrency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Gets the most popular items\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09language\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API key making the request\n\x09* @param\x09rows\x09\x09\x09\x09Number of rows per page\n\x09* @param\x09start\x09\x09\x09\x09The result number to start at\n\x09* @param\x09""filterAppID\x09\x09\x09If present, the app ID to limit results to\n\x09* @param\x09""eCurrency\x09\x09\x09If present, prices returned will be represented in this currency\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Gets the most popular items\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        language                        The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API key making the request\n@param        rows                            Number of rows per page\n@param        start                           The result number to start at\n@param        filterAppID                     If present, the app ID to limit results to\n@param        eCurrency                       If present, prices returned will be represented in this currency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetPopular", nullptr, nullptr, sizeof(WebEconMarketService_eventGetPopular_Parms), Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetPopular()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister()
	{
		return UWebEconMarketService::StaticClass();
	}
	struct Z_Construct_UClass_UWebEconMarketService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebEconMarketService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebEconMarketService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser, "CancelAppListingsForUser" }, // 1217187508
		{ &Z_Construct_UFunction_UWebEconMarketService_GetAssetID, "GetAssetID" }, // 1299413114
		{ &Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility, "GetMarketEligibility" }, // 22972850
		{ &Z_Construct_UFunction_UWebEconMarketService_GetPopular, "GetPopular" }, // 2391260548
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EconMarket/WebEconMarketService.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebEconMarketService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebEconMarketService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebEconMarketService_Statics::ClassParams = {
		&UWebEconMarketService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebEconMarketService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebEconMarketService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebEconMarketService, 2505284474);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebEconMarketService>()
	{
		return UWebEconMarketService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebEconMarketService(Z_Construct_UClass_UWebEconMarketService, &UWebEconMarketService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebEconMarketService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebEconMarketService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

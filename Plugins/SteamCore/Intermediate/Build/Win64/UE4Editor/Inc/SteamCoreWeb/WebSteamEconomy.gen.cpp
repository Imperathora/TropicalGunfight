// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamEconomy/WebSteamEconomy.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamEconomy() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamEconomy_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamEconomy();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamEconomy::execStartTrade)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID1);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTrade(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID1,Z_Param_steamID2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execStartAssetTransaction)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_assetID);
		P_GET_PROPERTY(FIntProperty,Z_Param_assetQuantity);
		P_GET_PROPERTY(FStrProperty,Z_Param_currency);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipaddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_referer);
		P_GET_UBOOL(Z_Param_bClientAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAssetTransaction(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_assetID,Z_Param_assetQuantity,Z_Param_currency,Z_Param_language,Z_Param_ipaddress,Z_Param_referer,Z_Param_bClientAuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execGetMarketPrices)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMarketPrices(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execGetExportedAssetsForUser)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetExportedAssetsForUser(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_contextID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execGetAssetPrices)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_currency);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAssetPrices(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_currency,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execGetAssetClassInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_PROPERTY(FIntProperty,Z_Param_classCount);
		P_GET_PROPERTY(FStrProperty,Z_Param_classID);
		P_GET_PROPERTY(FStrProperty,Z_Param_instanceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAssetClassInfo(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_language,Z_Param_classCount,Z_Param_classID,Z_Param_instanceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execFinalizeAssetTransaction)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_txnID);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeAssetTransaction(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_txnID,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamEconomy::execCanTrade)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CanTrade(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_targetID);
		P_NATIVE_END;
	}
	void UWebSteamEconomy::StaticRegisterNativesUWebSteamEconomy()
	{
		UClass* Class = UWebSteamEconomy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanTrade", &UWebSteamEconomy::execCanTrade },
			{ "FinalizeAssetTransaction", &UWebSteamEconomy::execFinalizeAssetTransaction },
			{ "GetAssetClassInfo", &UWebSteamEconomy::execGetAssetClassInfo },
			{ "GetAssetPrices", &UWebSteamEconomy::execGetAssetPrices },
			{ "GetExportedAssetsForUser", &UWebSteamEconomy::execGetExportedAssetsForUser },
			{ "GetMarketPrices", &UWebSteamEconomy::execGetMarketPrices },
			{ "StartAssetTransaction", &UWebSteamEconomy::execStartAssetTransaction },
			{ "StartTrade", &UWebSteamEconomy::execStartTrade },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics
	{
		struct WebSteamEconomy_eventCanTrade_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			FString targetID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_targetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_targetID = { "targetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, targetID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_targetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Can trade\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09That the key is associated with. Must be a steam economy app.\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of user attempting to initiate a trade\n\x09* @param\x09targetID (int64)\x09SteamID of user that is the target of the trade invitation\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Can trade\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           That the key is associated with. Must be a steam economy app.\n@param        steamID                         SteamID of user attempting to initiate a trade\n@param        targetID (int64)        SteamID of user that is the target of the trade invitation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "CanTrade", nullptr, nullptr, sizeof(WebSteamEconomy_eventCanTrade_Parms), Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_CanTrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics
	{
		struct WebSteamEconomy_eventFinalizeAssetTransaction_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			FString txnID;
			FString language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_txnID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_txnID = { "txnID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, txnID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_txnID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Finalize Asset Transaction\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The app ID the user is buying assets for\n\x09* @param\x09steamID\x09\x09SteamID of the user making a purchase\n\x09* @param\x09txnID\x09\x09The transaction ID\n\x09* @param\x09language\x09The local language for the user\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Finalize Asset Transaction\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The app ID the user is buying assets for\n@param        steamID         SteamID of the user making a purchase\n@param        txnID           The transaction ID\n@param        language        The local language for the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "FinalizeAssetTransaction", nullptr, nullptr, sizeof(WebSteamEconomy_eventFinalizeAssetTransaction_Parms), Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics
	{
		struct WebSteamEconomy_eventGetAssetClassInfo_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString language;
			int32 classCount;
			FString classID;
			FString instanceID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_classCount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_classID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_instanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_classCount = { "classCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, classCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_classID = { "classID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, classID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_instanceID = { "instanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, instanceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_classCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_classID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_instanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Get Asset Class Info\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09language\x09\x09The user's local language\n\x09* @param\x09""classCount\x09\x09Number of classes requested. Must be at least one.\n\x09* @param\x09""classID\x09\x09\x09""Class ID of the nth class.\n\x09* @param\x09instanceID\x09\x09Instance ID of the nth class.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Get Asset Class Info\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   The app ID the user is buying assets for\n@param        language                The user's local language\n@param        classCount              Number of classes requested. Must be at least one.\n@param        classID                 Class ID of the nth class.\n@param        instanceID              Instance ID of the nth class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetAssetClassInfo", nullptr, nullptr, sizeof(WebSteamEconomy_eventGetAssetClassInfo_Parms), Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics
	{
		struct WebSteamEconomy_eventGetAssetPrices_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString currency;
			FString language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Returns prices and categories for items that users are able to purchase.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09""currency\x09\x09The currency to filter for\n\x09* @param\x09language\x09\x09The user's local language\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Returns prices and categories for items that users are able to purchase.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   The app ID the user is buying assets for\n@param        currency                The currency to filter for\n@param        language                The user's local language" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetAssetPrices", nullptr, nullptr, sizeof(WebSteamEconomy_eventGetAssetPrices_Parms), Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics
	{
		struct WebSteamEconomy_eventGetExportedAssetsForUser_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, contextID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_contextID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Get Exported Assets for User\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09The app to get exported items from.\n\x09* @param\x09""contextID (int64)\x09The context in the app to get exported items from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Get Exported Assets for User\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         SteamID of user\n@param        appID                           The app to get exported items from.\n@param        contextID (int64)       The context in the app to get exported items from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetExportedAssetsForUser", nullptr, nullptr, sizeof(WebSteamEconomy_eventGetExportedAssetsForUser_Parms), Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics
	{
		struct WebSteamEconomy_eventGetMarketPrices_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Get Market Prices\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09The app ID the user is buying assets for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Get Market Prices\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   The app ID the user is buying assets for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetMarketPrices", nullptr, nullptr, sizeof(WebSteamEconomy_eventGetMarketPrices_Parms), Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics
	{
		struct WebSteamEconomy_eventStartAssetTransaction_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			FString assetID;
			int32 assetQuantity;
			FString currency;
			FString language;
			FString ipaddress;
			FString referer;
			bool bClientAuth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_assetID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_assetQuantity;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipaddress;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_referer;
		static void NewProp_bClientAuth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientAuth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_assetID = { "assetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, assetID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_assetQuantity = { "assetQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, assetQuantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_referer = { "referer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, referer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth_SetBit(void* Obj)
	{
		((WebSteamEconomy_eventStartAssetTransaction_Parms*)Obj)->bClientAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth = { "bClientAuth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamEconomy_eventStartAssetTransaction_Parms), &Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_assetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_assetQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_ipaddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_referer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Start Asset Transaction\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of user making a purchase\n\x09* @param\x09""assetID\x09\x09\x09\x09The ID of the first asset the user is buying - there must be at least one\n\x09* @param\x09""assetQuantity\x09\x09The quantity of assetid0's the the user is buying\n\x09* @param\x09""currency\x09\x09\x09The local currency for the user\n\x09* @param\x09language\x09\x09\x09The local language for the user\n\x09* @param\x09ipaddress\x09\x09\x09The user's IP address\n\x09* @param\x09referer\x09\x09\x09\x09The referring URL\n\x09* @param\x09""bClientAuth\x09\x09\x09If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Start Asset Transaction\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The app ID the user is buying assets for\n@param        steamID                         SteamID of user making a purchase\n@param        assetID                         The ID of the first asset the user is buying - there must be at least one\n@param        assetQuantity           The quantity of assetid0's the the user is buying\n@param        currency                        The local currency for the user\n@param        language                        The local language for the user\n@param        ipaddress                       The user's IP address\n@param        referer                         The referring URL\n@param        bClientAuth                     If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "StartAssetTransaction", nullptr, nullptr, sizeof(WebSteamEconomy_eventStartAssetTransaction_Parms), Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics
	{
		struct WebSteamEconomy_eventStartTrade_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID1;
			FString steamID2;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_steamID1 = { "steamID1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, steamID1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_steamID2 = { "steamID2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, steamID2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_steamID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_steamID2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Start Trade\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09steamID1\x09\x09SteamID of first user in the trade\n\x09* @param\x09steamID2\x09\x09SteamID of second user in the trade\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Start Trade\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   The app ID the user is buying assets for\n@param        steamID1                SteamID of first user in the trade\n@param        steamID2                SteamID of second user in the trade" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "StartTrade", nullptr, nullptr, sizeof(WebSteamEconomy_eventStartTrade_Parms), Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamEconomy_StartTrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamEconomy_NoRegister()
	{
		return UWebSteamEconomy::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamEconomy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamEconomy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamEconomy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamEconomy_CanTrade, "CanTrade" }, // 2485011481
		{ &Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction, "FinalizeAssetTransaction" }, // 1855273508
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo, "GetAssetClassInfo" }, // 1402380851
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices, "GetAssetPrices" }, // 4146546633
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser, "GetExportedAssetsForUser" }, // 4124214520
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices, "GetMarketPrices" }, // 1625551912
		{ &Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction, "StartAssetTransaction" }, // 4009674195
		{ &Z_Construct_UFunction_UWebSteamEconomy_StartTrade, "StartTrade" }, // 2260429016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamEconomy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamEconomy/WebSteamEconomy.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamEconomy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamEconomy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamEconomy_Statics::ClassParams = {
		&UWebSteamEconomy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamEconomy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamEconomy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamEconomy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamEconomy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamEconomy, 4202352184);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamEconomy>()
	{
		return UWebSteamEconomy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamEconomy(Z_Construct_UClass_UWebSteamEconomy, &UWebSteamEconomy::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamEconomy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamEconomy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

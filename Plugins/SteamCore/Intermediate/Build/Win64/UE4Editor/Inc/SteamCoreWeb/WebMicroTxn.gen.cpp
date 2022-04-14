// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/MicroTxn/WebMicroTxn.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebMicroTxn() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebMicroTxn_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebMicroTxn();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebMicroTxn::execMakeTransactionID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWebMicroTxn::MakeTransactionID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execRefundTxn)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_orderID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefundTxn(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_orderID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execQueryTxn)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_orderID);
		P_GET_PROPERTY(FStrProperty,Z_Param_transID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryTxn(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_orderID,Z_Param_transID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execProcessAgreement)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_orderID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_agreementID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_GET_PROPERTY(FStrProperty,Z_Param_currency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessAgreement(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_orderID,Z_Param_steamID,Z_Param_agreementID,Z_Param_appID,Z_Param_amount,Z_Param_currency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execInitTxn)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_orderID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_PROPERTY(FStrProperty,Z_Param_currency);
		P_GET_PROPERTY(FStrProperty,Z_Param_userSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipaddress);
		P_GET_TARRAY(int32,Z_Param_itemID);
		P_GET_TARRAY(int32,Z_Param_quantity);
		P_GET_TARRAY(FString,Z_Param_amount);
		P_GET_TARRAY(FString,Z_Param_description);
		P_GET_TARRAY(FString,Z_Param_category);
		P_GET_TARRAY(int32,Z_Param_associatedBundle);
		P_GET_TARRAY(FString,Z_Param_billingType);
		P_GET_TARRAY(FString,Z_Param_startDate);
		P_GET_TARRAY(FString,Z_Param_endDate);
		P_GET_TARRAY(FString,Z_Param_period);
		P_GET_TARRAY(int32,Z_Param_frequency);
		P_GET_TARRAY(FString,Z_Param_recurringAmt);
		P_GET_TARRAY(int32,Z_Param_bundleCount);
		P_GET_TARRAY(int32,Z_Param_bundleID);
		P_GET_TARRAY(int32,Z_Param_bundleQty);
		P_GET_TARRAY(FString,Z_Param_bundleDesc);
		P_GET_TARRAY(FString,Z_Param_bundleCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitTxn(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_orderID,Z_Param_steamID,Z_Param_appID,Z_Param_language,Z_Param_currency,Z_Param_userSession,Z_Param_ipaddress,Z_Param_itemID,Z_Param_quantity,Z_Param_amount,Z_Param_description,Z_Param_category,Z_Param_associatedBundle,Z_Param_billingType,Z_Param_startDate,Z_Param_endDate,Z_Param_period,Z_Param_frequency,Z_Param_recurringAmt,Z_Param_bundleCount,Z_Param_bundleID,Z_Param_bundleQty,Z_Param_bundleDesc,Z_Param_bundleCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execGetUserInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ipaddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserInfo(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_ipaddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execGetUserAgreementInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserAgreementInfo(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execGetReport)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_time);
		P_GET_PROPERTY(FStrProperty,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetReport(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_time,Z_Param_type,Z_Param_MaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execFinalizeTxn)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_orderID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinalizeTxn(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_orderID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execCancelAgreement)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_agreementID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAgreement(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_agreementID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebMicroTxn::execAdjustAgreement)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_agreementID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_nextProcessDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAgreement(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_agreementID,Z_Param_appID,Z_Param_nextProcessDate);
		P_NATIVE_END;
	}
	void UWebMicroTxn::StaticRegisterNativesUWebMicroTxn()
	{
		UClass* Class = UWebMicroTxn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAgreement", &UWebMicroTxn::execAdjustAgreement },
			{ "CancelAgreement", &UWebMicroTxn::execCancelAgreement },
			{ "FinalizeTxn", &UWebMicroTxn::execFinalizeTxn },
			{ "GetReport", &UWebMicroTxn::execGetReport },
			{ "GetUserAgreementInfo", &UWebMicroTxn::execGetUserAgreementInfo },
			{ "GetUserInfo", &UWebMicroTxn::execGetUserInfo },
			{ "InitTxn", &UWebMicroTxn::execInitTxn },
			{ "MakeTransactionID", &UWebMicroTxn::execMakeTransactionID },
			{ "ProcessAgreement", &UWebMicroTxn::execProcessAgreement },
			{ "QueryTxn", &UWebMicroTxn::execQueryTxn },
			{ "RefundTxn", &UWebMicroTxn::execRefundTxn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics
	{
		struct WebMicroTxn_eventAdjustAgreement_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			FString agreementID;
			int32 appID;
			FString nextProcessDate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_agreementID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nextProcessDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_agreementID = { "agreementID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, agreementID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_nextProcessDate = { "nextProcessDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, nextProcessDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_agreementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_nextProcessDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Add time to the payment schedule of an agreement with billing type \"steam\".\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09Steam ID of the client that is adjusting the agreement.\n\x09* @param\x09""agreementID\x09\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""appID\x09\x09\x09\x09""App ID of the game the agreement is for.\n\x09* @param\x09nextProcessDate\x09\x09""Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Add time to the payment schedule of an agreement with billing type \"steam\".\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         Steam ID of the client that is adjusting the agreement.\n@param        agreementID                     Unique 64-bit Steam billing agreement ID.\n@param        appID                           App ID of the game the agreement is for.\n@param        nextProcessDate         Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "AdjustAgreement", nullptr, nullptr, sizeof(WebMicroTxn_eventAdjustAgreement_Parms), Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics
	{
		struct WebMicroTxn_eventCancelAgreement_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			FString agreementID;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_agreementID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_agreementID = { "agreementID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, agreementID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_agreementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Cancels a recurring billing agreement (subscription).\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09Steam ID of the client that is canceling the agreement.\n\x09* @param\x09""agreementID\x09\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""appID\x09\x09\x09\x09""App ID of the game the agreement is for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Cancels a recurring billing agreement (subscription).\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         Steam ID of the client that is canceling the agreement.\n@param        agreementID                     Unique 64-bit Steam billing agreement ID.\n@param        appID                           App ID of the game the agreement is for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "CancelAgreement", nullptr, nullptr, sizeof(WebMicroTxn_eventCancelAgreement_Parms), Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_CancelAgreement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics
	{
		struct WebMicroTxn_eventFinalizeTxn_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString orderID;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_orderID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_orderID = { "orderID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, orderID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_orderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Completes a purchase that was started by the InitTxn API.\n\x09*\n\x09* This command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.\n\x09* Notification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam). \n\x09* The usersession value specified in InitTxn determines the notification mechanism.\n\x09* A successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09orderID\x09\x09\x09\x09Unique 64-bit ID for order\n\x09* @param\x09""appID\x09\x09\x09\x09""App ID for game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Completes a purchase that was started by the InitTxn API.\n\nThis command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.\nNotification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam).\nThe usersession value specified in InitTxn determines the notification mechanism.\nA successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        orderID                         Unique 64-bit ID for order\n@param        appID                           App ID for game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "FinalizeTxn", nullptr, nullptr, sizeof(WebMicroTxn_eventFinalizeTxn_Parms), Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics
	{
		struct WebMicroTxn_eventGetReport_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString time;
			FString type;
			int32 MaxResults;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Steam offers transaction reports that can be downloaded for reconciliation purposes. These reports show detailed information about each transaction that affects the settlement of funds into your accounts.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09""App ID for game.\n\x09* @param\x09time\x09\x09\x09\x09Start time of the report. (RFC 3339 UTC formatted like: 2010-01-01T00:00:00Z)\n\x09* @param\x09type\x09\x09\x09\x09Report type (One of: \"GAMESALES\", \"STEAMSTORESALES\", \"SETTLEMENT\")\n\x09* @param\x09MaxResults\x09\x09\x09Maximum number of results to return in report. (Default is 1000 if no value is set)\n\x09*/" },
		{ "CPP_Default_MaxResults", "1000" },
		{ "CPP_Default_time", "2010-01-01T00:00:00Z" },
		{ "CPP_Default_type", "GAMESALES" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Steam offers transaction reports that can be downloaded for reconciliation purposes. These reports show detailed information about each transaction that affects the settlement of funds into your accounts.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           App ID for game.\n@param        time                            Start time of the report. (RFC 3339 UTC formatted like: 2010-01-01T00:00:00Z)\n@param        type                            Report type (One of: \"GAMESALES\", \"STEAMSTORESALES\", \"SETTLEMENT\")\n@param        MaxResults                      Maximum number of results to return in report. (Default is 1000 if no value is set)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetReport", nullptr, nullptr, sizeof(WebMicroTxn_eventGetReport_Parms), Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_GetReport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics
	{
		struct WebMicroTxn_eventGetUserAgreementInfo_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Get detailed information of all recurring billing agreements (subscriptions) for a user.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""appID\x09\x09\x09\x09""App ID for game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Get detailed information of all recurring billing agreements (subscriptions) for a user.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         Steam ID of the client.\n@param        appID                           App ID for game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetUserAgreementInfo", nullptr, nullptr, sizeof(WebMicroTxn_eventGetUserAgreementInfo_Parms), Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics
	{
		struct WebMicroTxn_eventGetUserInfo_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 ipaddress;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ipaddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_ipaddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Retrieves details for a user's purchasing info.\n\x09*\n\x09* These details are based upon the user's Steam wallet.\n\x09* For new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09ipaddress\x09\x09\x09IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Retrieves details for a user's purchasing info.\n\nThese details are based upon the user's Steam wallet.\nFor new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         Steam ID of the client.\n@param        ipaddress                       IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetUserInfo", nullptr, nullptr, sizeof(WebMicroTxn_eventGetUserInfo_Parms), Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_GetUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics
	{
		struct WebMicroTxn_eventInitTxn_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString orderID;
			FString steamID;
			int32 appID;
			FString language;
			FString currency;
			FString userSession;
			FString ipaddress;
			TArray<int32> itemID;
			TArray<int32> quantity;
			TArray<FString> amount;
			TArray<FString> description;
			TArray<FString> category;
			TArray<int32> associatedBundle;
			TArray<FString> billingType;
			TArray<FString> startDate;
			TArray<FString> endDate;
			TArray<FString> period;
			TArray<int32> frequency;
			TArray<FString> recurringAmt;
			TArray<int32> bundleCount;
			TArray<int32> bundleID;
			TArray<int32> bundleQty;
			TArray<FString> bundleDesc;
			TArray<FString> bundleCategory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_orderID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userSession;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipaddress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_amount_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_description_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_description;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_category_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_category;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_associatedBundle_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_associatedBundle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_billingType_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_billingType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_startDate_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_startDate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endDate_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_period_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_period;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_frequency_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_frequency;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_recurringAmt_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_recurringAmt;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bundleCount_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bundleID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bundleQty_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleQty;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bundleDesc_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleDesc;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bundleCategory_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bundleCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_orderID = { "orderID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, orderID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_userSession = { "userSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, userSession), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_itemID_Inner = { "itemID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, itemID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_quantity_Inner = { "quantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, quantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_amount_Inner = { "amount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, amount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_description_Inner = { "description", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, description), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_category_Inner = { "category", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, category), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_associatedBundle_Inner = { "associatedBundle", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_associatedBundle = { "associatedBundle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, associatedBundle), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_billingType_Inner = { "billingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_billingType = { "billingType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, billingType), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_startDate_Inner = { "startDate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, startDate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_endDate_Inner = { "endDate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, endDate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_period_Inner = { "period", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_period = { "period", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, period), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_frequency_Inner = { "frequency", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, frequency), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_recurringAmt_Inner = { "recurringAmt", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_recurringAmt = { "recurringAmt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, recurringAmt), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCount_Inner = { "bundleCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCount = { "bundleCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleCount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleID_Inner = { "bundleID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleID = { "bundleID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleQty_Inner = { "bundleQty", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleQty = { "bundleQty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleQty), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleDesc_Inner = { "bundleDesc", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleDesc = { "bundleDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleDesc), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCategory_Inner = { "bundleCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCategory = { "bundleCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, bundleCategory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_orderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_userSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ipaddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_itemID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_quantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_amount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_description_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_associatedBundle_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_associatedBundle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_billingType_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_billingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_startDate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_startDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_endDate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_period_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_frequency_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_recurringAmt_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_recurringAmt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleQty_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleQty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleDesc_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_bundleCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "category, associatedBundle, billingType, startDate, endDate, period, frequency, recurringAmt, bundleCount, bundleID, bundleQty, bundleDesc, bundleCategory" },
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n\x09*\n\x09* This command allows you to create a shopping cart of one or more items for a user. \n\x09* The cost and descriptions of these items will be displayed to the user for their approval. \n\x09* The purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.\n\x09*\n\x09* A successful response to this command means the transaction has been created. \n\x09* If the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase. \n\x09* For a web interface, redirect the user to the steam URL returned in the response. \n\x09* In the event of a timeout or some other communication error, abandon the transaction and create a new one.\n\x09*\n\x09* When a \"client\" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client. \n\x09* Web sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09orderID\x09\x09\x09\x09Unique 64-bit ID for order\n\x09* @param\x09steamID\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""appID\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09language\x09\x09\x09ISO 639-1 language code of the item descriptions.\n\x09* @param\x09""currency\x09\x09\x09ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies\n\x09* @param\x09userSession\x09\x09\x09Session where user will authorize the transaction. Valid options are \"client\" or \"web\". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.\n\x09* @param\x09ipaddress\x09\x09\x09IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.\n\x09* @param\x09itemID\x09\x09\x09\x09""3rd party ID for item.\n\x09* @param\x09quantity\x09\x09\x09Quantity of this item.\n\x09* @param\x09""amount\x09\x09\x09\x09Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the \"currency\" code you pass.\n\x09* @param\x09""description\x09\x09\x09""Description of item.\n\x09* @param\x09""category\x09\x09\x09Optional category grouping for item.\n\x09* @param\x09""associatedBundle\x09Optional bundleid of associated bundle.\n\x09* @param\x09""billingType\x09\x09\x09Optional recurring billing type.\n\x09* @param\x09startDate\x09\x09\x09Optional start date for recurring billing.\n\x09* @param\x09""endDate\x09\x09\x09\x09Optional end date for recurring billing.\n\x09* @param\x09period\x09\x09\x09\x09Optional period for recurring billing.\n\x09* @param\x09""frequency\x09\x09\x09Optional frequency for recurring billing.\n\x09* @param\x09recurringAmt\x09\x09Optional amount to be billed for future recurring billing transactions.\n\x09* @param\x09""bundleCount\x09\x09\x09Number of bundles in cart.\n\x09* @param\x09""bundleID\x09\x09\x09""3rd party ID of the bundle. This shares the same ID space as 3rd party items.\n\x09* @param\x09""bundleQty\x09\x09\x09Quantity of this bundle.\n\x09* @param\x09""bundleDesc\x09\x09\x09""Description of bundle.\n\x09* @param\x09""bundleCategory\x09\x09Optional category grouping for bundle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n\nThis command allows you to create a shopping cart of one or more items for a user.\nThe cost and descriptions of these items will be displayed to the user for their approval.\nThe purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.\n\nA successful response to this command means the transaction has been created.\nIf the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase.\nFor a web interface, redirect the user to the steam URL returned in the response.\nIn the event of a timeout or some other communication error, abandon the transaction and create a new one.\n\nWhen a \"client\" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client.\nWeb sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        orderID                         Unique 64-bit ID for order\n@param        steamID                         Steam ID of the client.\n@param        appID                           App ID of game this transaction is for.\n@param        language                        ISO 639-1 language code of the item descriptions.\n@param        currency                        ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies\n@param        userSession                     Session where user will authorize the transaction. Valid options are \"client\" or \"web\". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.\n@param        ipaddress                       IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.\n@param        itemID                          3rd party ID for item.\n@param        quantity                        Quantity of this item.\n@param        amount                          Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the \"currency\" code you pass.\n@param        description                     Description of item.\n@param        category                        Optional category grouping for item.\n@param        associatedBundle        Optional bundleid of associated bundle.\n@param        billingType                     Optional recurring billing type.\n@param        startDate                       Optional start date for recurring billing.\n@param        endDate                         Optional end date for recurring billing.\n@param        period                          Optional period for recurring billing.\n@param        frequency                       Optional frequency for recurring billing.\n@param        recurringAmt            Optional amount to be billed for future recurring billing transactions.\n@param        bundleCount                     Number of bundles in cart.\n@param        bundleID                        3rd party ID of the bundle. This shares the same ID space as 3rd party items.\n@param        bundleQty                       Quantity of this bundle.\n@param        bundleDesc                      Description of bundle.\n@param        bundleCategory          Optional category grouping for bundle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "InitTxn", nullptr, nullptr, sizeof(WebMicroTxn_eventInitTxn_Parms), Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_InitTxn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics
	{
		struct WebMicroTxn_eventMakeTransactionID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventMakeTransactionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Utility function to create a unique int64 transaction ID\n\x09* Blueprints don't support int64 which is why it returns a string value\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Utility function to create a unique int64 transaction ID\nBlueprints don't support int64 which is why it returns a string value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "MakeTransactionID", nullptr, nullptr, sizeof(WebMicroTxn_eventMakeTransactionID_Parms), Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics
	{
		struct WebMicroTxn_eventProcessAgreement_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString orderID;
			FString steamID;
			FString agreementID;
			int32 appID;
			int32 amount;
			FString currency;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_orderID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_agreementID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_orderID = { "orderID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, orderID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_agreementID = { "agreementID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, agreementID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_orderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_agreementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Initiate a recurring payment (subscription) for the user.\n\x09*\n\x09* A successful response means that Steam will initiate a billing cycle for the user.\n\x09* It does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09orderID\x09\x09\x09Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.\n\x09* @param\x09steamID\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""agreementID\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""appID\x09\x09\x09""App ID of the game the agreement is for.\n\x09* @param\x09""amount\x09\x09\x09Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.\n\x09* @param\x09""currency\x09\x09ISO 4217 currency code of prices\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Initiate a recurring payment (subscription) for the user.\n\nA successful response means that Steam will initiate a billing cycle for the user.\nIt does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        orderID                 Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.\n@param        steamID                 Steam ID of the client.\n@param        agreementID             Unique 64-bit Steam billing agreement ID.\n@param        appID                   App ID of the game the agreement is for.\n@param        amount                  Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.\n@param        currency                ISO 4217 currency code of prices" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "ProcessAgreement", nullptr, nullptr, sizeof(WebMicroTxn_eventProcessAgreement_Parms), Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics
	{
		struct WebMicroTxn_eventQueryTxn_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString orderID;
			FString transID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_orderID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_transID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_orderID = { "orderID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, orderID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_transID = { "transID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, transID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_orderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_transID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Query the status of an order that was previously created with InitTxn.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09orderID\x09\x09\x09\x09Unique 64-bit ID for order.\n\x09* @param\x09transID\x09\x09\x09\x09Unique 64-bit Steam transaction ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Query the status of an order that was previously created with InitTxn.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           App ID of game this transaction is for.\n@param        orderID                         Unique 64-bit ID for order.\n@param        transID                         Unique 64-bit Steam transaction ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "QueryTxn", nullptr, nullptr, sizeof(WebMicroTxn_eventQueryTxn_Parms), Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_QueryTxn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics
	{
		struct WebMicroTxn_eventRefundTxn_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString orderID;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_orderID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_orderID = { "orderID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, orderID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_orderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09orderID\x09\x09\x09\x09Unique 64-bit ID for order.\n\x09* @param\x09transID\x09\x09\x09\x09Unique 64-bit Steam transaction ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           App ID of game this transaction is for.\n@param        orderID                         Unique 64-bit ID for order.\n@param        transID                         Unique 64-bit Steam transaction ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "RefundTxn", nullptr, nullptr, sizeof(WebMicroTxn_eventRefundTxn_Parms), Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebMicroTxn_RefundTxn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebMicroTxn_NoRegister()
	{
		return UWebMicroTxn::StaticClass();
	}
	struct Z_Construct_UClass_UWebMicroTxn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebMicroTxn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebMicroTxn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement, "AdjustAgreement" }, // 1918884003
		{ &Z_Construct_UFunction_UWebMicroTxn_CancelAgreement, "CancelAgreement" }, // 3120064903
		{ &Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn, "FinalizeTxn" }, // 3629937414
		{ &Z_Construct_UFunction_UWebMicroTxn_GetReport, "GetReport" }, // 3135032485
		{ &Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo, "GetUserAgreementInfo" }, // 3330399158
		{ &Z_Construct_UFunction_UWebMicroTxn_GetUserInfo, "GetUserInfo" }, // 2299039683
		{ &Z_Construct_UFunction_UWebMicroTxn_InitTxn, "InitTxn" }, // 3769030245
		{ &Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID, "MakeTransactionID" }, // 572955753
		{ &Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement, "ProcessAgreement" }, // 2677576963
		{ &Z_Construct_UFunction_UWebMicroTxn_QueryTxn, "QueryTxn" }, // 1270073400
		{ &Z_Construct_UFunction_UWebMicroTxn_RefundTxn, "RefundTxn" }, // 2293773644
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebMicroTxn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MicroTxn/WebMicroTxn.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebMicroTxn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebMicroTxn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebMicroTxn_Statics::ClassParams = {
		&UWebMicroTxn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebMicroTxn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebMicroTxn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebMicroTxn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebMicroTxn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebMicroTxn, 2079482194);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebMicroTxn>()
	{
		return UWebMicroTxn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebMicroTxn(Z_Construct_UClass_UWebMicroTxn, &UWebMicroTxn::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebMicroTxn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebMicroTxn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

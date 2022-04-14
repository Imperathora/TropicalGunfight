// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/GameServersService/WebGameServersService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebGameServersService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameServersService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameServersService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebGameServersService::execGetServerIPsBySteamID)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverSteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerIPsBySteamID(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_serverSteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetServerSteamIDsByIP)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverIP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerSteamIDsByIP(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_serverIP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execSetBanStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_UBOOL(Z_Param_bBanned);
		P_GET_PROPERTY(FIntProperty,Z_Param_banSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBanStatus(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_bBanned,Z_Param_banSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execQueryLoginToken)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_loginToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryLoginToken(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_loginToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetAccountPublicInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAccountPublicInfo(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execDeleteAccount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAccount(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execResetLoginToken)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLoginToken(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execSetMemo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_memo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMemo(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_memo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execCreateAccount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_memo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAccount(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_memo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetAccountList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAccountList(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key);
		P_NATIVE_END;
	}
	void UWebGameServersService::StaticRegisterNativesUWebGameServersService()
	{
		UClass* Class = UWebGameServersService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAccount", &UWebGameServersService::execCreateAccount },
			{ "DeleteAccount", &UWebGameServersService::execDeleteAccount },
			{ "GetAccountList", &UWebGameServersService::execGetAccountList },
			{ "GetAccountPublicInfo", &UWebGameServersService::execGetAccountPublicInfo },
			{ "GetServerIPsBySteamID", &UWebGameServersService::execGetServerIPsBySteamID },
			{ "GetServerSteamIDsByIP", &UWebGameServersService::execGetServerSteamIDsByIP },
			{ "QueryLoginToken", &UWebGameServersService::execQueryLoginToken },
			{ "ResetLoginToken", &UWebGameServersService::execResetLoginToken },
			{ "SetBanStatus", &UWebGameServersService::execSetBanStatus },
			{ "SetMemo", &UWebGameServersService::execSetMemo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics
	{
		struct WebGameServersService_eventCreateAccount_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString memo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_memo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_memo = { "memo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, memo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_memo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Creates a persistent game server account\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The app to use the account for\n\x09* @param\x09memo\x09\x09The memo to set on the new account\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Creates a persistent game server account\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The app to use the account for\n@param        memo            The memo to set on the new account" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "CreateAccount", nullptr, nullptr, sizeof(WebGameServersService_eventCreateAccount_Parms), Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_CreateAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics
	{
		struct WebGameServersService_eventDeleteAccount_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Deletes a persistent game server account\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09The SteamID of the game server account to delete\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Deletes a persistent game server account\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         The SteamID of the game server account to delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "DeleteAccount", nullptr, nullptr, sizeof(WebGameServersService_eventDeleteAccount_Parms), Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_DeleteAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics
	{
		struct WebGameServersService_eventGetAccountList_Parms
		{
			FScriptDelegate callback;
			FString key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountList_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountList_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Gets a list of game server accounts with their logon tokens\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Gets a list of game server accounts with their logon tokens\n\n@param        key                     Steamworks Web API publisher authentication key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetAccountList", nullptr, nullptr, sizeof(WebGameServersService_eventGetAccountList_Parms), Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetAccountList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics
	{
		struct WebGameServersService_eventGetAccountPublicInfo_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Gets public information about a given game server account\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09The SteamID of the game server to get info on\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Gets public information about a given game server account\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         The SteamID of the game server to get info on" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetAccountPublicInfo", nullptr, nullptr, sizeof(WebGameServersService_eventGetAccountPublicInfo_Parms), Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics
	{
		struct WebGameServersService_eventGetServerIPsBySteamID_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString serverSteamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverSteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamID_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamID_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_serverSteamID = { "serverSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamID_Parms, serverSteamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_serverSteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Gets a list of server IP addresses given a list of SteamIDs\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09serverSteamID\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Gets a list of server IP addresses given a list of SteamIDs\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        serverSteamID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetServerIPsBySteamID", nullptr, nullptr, sizeof(WebGameServersService_eventGetServerIPsBySteamID_Parms), Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics
	{
		struct WebGameServersService_eventGetServerSteamIDsByIP_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString serverIP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverIP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIDsByIP_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIDsByIP_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_serverIP = { "serverIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIDsByIP_Parms, serverIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_serverIP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Gets a list of server SteamIDs given a list of IPs\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09serverIP\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Gets a list of server SteamIDs given a list of IPs\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        serverIP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetServerSteamIDsByIP", nullptr, nullptr, sizeof(WebGameServersService_eventGetServerSteamIDsByIP_Parms), Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics
	{
		struct WebGameServersService_eventQueryLoginToken_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString loginToken;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_loginToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_loginToken = { "loginToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, loginToken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_loginToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Queries the status of the specified token, which must be owned by you\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09loginToken\x09\x09Login token to query\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Queries the status of the specified token, which must be owned by you\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        loginToken              Login token to query" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "QueryLoginToken", nullptr, nullptr, sizeof(WebGameServersService_eventQueryLoginToken_Parms), Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_QueryLoginToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics
	{
		struct WebGameServersService_eventResetLoginToken_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Generates a new login token for the specified game server\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09The SteamID of the game server to reset the login token of\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Generates a new login token for the specified game server\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         The SteamID of the game server to reset the login token of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "ResetLoginToken", nullptr, nullptr, sizeof(WebGameServersService_eventResetLoginToken_Parms), Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_ResetLoginToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics
	{
		struct WebGameServersService_eventSetBanStatus_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			bool bBanned;
			int32 banSeconds;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static void NewProp_bBanned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBanned;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_banSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((WebGameServersService_eventSetBanStatus_Parms*)Obj)->bBanned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebGameServersService_eventSetBanStatus_Parms), &Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_banSeconds = { "banSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, banSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_banSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* performs a GSLT ban/unban of GSLT associated with a GS. If banning, also bans associated users' GSLTs.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\n\x09* @param\x09""bBanned\x09\x09\x09\n\x09* @param\x09""banSeconds\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "performs a GSLT ban/unban of GSLT associated with a GS. If banning, also bans associated users' GSLTs.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID\n@param        bBanned\n@param        banSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "SetBanStatus", nullptr, nullptr, sizeof(WebGameServersService_eventSetBanStatus_Parms), Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_SetBanStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics
	{
		struct WebGameServersService_eventSetMemo_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			FString memo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_memo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_memo = { "memo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, memo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_memo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* This method changes the memo associated with the game server account. Memos do not affect the account in any way.\n\x09* The memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for.\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09The SteamID of the game server to set the memo on\n\x09* @param\x09memo\x09\x09The memo to set on the new account\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "This method changes the memo associated with the game server account. Memos do not affect the account in any way.\nThe memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for.\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         The SteamID of the game server to set the memo on\n@param        memo            The memo to set on the new account" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "SetMemo", nullptr, nullptr, sizeof(WebGameServersService_eventSetMemo_Parms), Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_SetMemo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebGameServersService_NoRegister()
	{
		return UWebGameServersService::StaticClass();
	}
	struct Z_Construct_UClass_UWebGameServersService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebGameServersService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebGameServersService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameServersService_CreateAccount, "CreateAccount" }, // 1344397621
		{ &Z_Construct_UFunction_UWebGameServersService_DeleteAccount, "DeleteAccount" }, // 579759904
		{ &Z_Construct_UFunction_UWebGameServersService_GetAccountList, "GetAccountList" }, // 434641400
		{ &Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo, "GetAccountPublicInfo" }, // 4182423773
		{ &Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID, "GetServerIPsBySteamID" }, // 4206578126
		{ &Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP, "GetServerSteamIDsByIP" }, // 3324178566
		{ &Z_Construct_UFunction_UWebGameServersService_QueryLoginToken, "QueryLoginToken" }, // 3750387049
		{ &Z_Construct_UFunction_UWebGameServersService_ResetLoginToken, "ResetLoginToken" }, // 1796822520
		{ &Z_Construct_UFunction_UWebGameServersService_SetBanStatus, "SetBanStatus" }, // 484108532
		{ &Z_Construct_UFunction_UWebGameServersService_SetMemo, "SetMemo" }, // 3792624716
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameServersService/WebGameServersService.h" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebGameServersService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameServersService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebGameServersService_Statics::ClassParams = {
		&UWebGameServersService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebGameServersService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebGameServersService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebGameServersService, 4135337114);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebGameServersService>()
	{
		return UWebGameServersService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebGameServersService(Z_Construct_UClass_UWebGameServersService, &UWebGameServersService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebGameServersService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameServersService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

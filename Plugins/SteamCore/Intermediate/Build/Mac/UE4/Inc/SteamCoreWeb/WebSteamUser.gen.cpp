// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamUser/WebSteamUser.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamUser() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamUser_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamUser();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamUser::execResolveVanityURL)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_vanityURL);
		P_GET_ENUM(EVanityUrlType,Z_Param_urlType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResolveVanityURL(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_vanityURL,EVanityUrlType(Z_Param_urlType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGrantPackage)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_packageID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipaddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_thirdPartyKey);
		P_GET_PROPERTY(FIntProperty,Z_Param_thirdPartyAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrantPackage(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_packageID,Z_Param_ipaddress,Z_Param_thirdPartyKey,Z_Param_thirdPartyAppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetUserGroupList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserGroupList(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetPublisherAppOwnershipChanges)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_packageRowVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_cdkeyRowVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublisherAppOwnershipChanges(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_packageRowVersion,Z_Param_cdkeyRowVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetPublisherAppOwnership)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublisherAppOwnership(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetPlayerSummaries)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY(FString,Z_Param_steamIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerSummaries(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetPlayerBans)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY(FString,Z_Param_steamIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerBans(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetFriendList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_relationship);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFriendList(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_relationship);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetAppPriceInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(int32,Z_Param_appIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppPriceInfo(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execCheckAppOwnership)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckAppOwnership(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	void UWebSteamUser::StaticRegisterNativesUWebSteamUser()
	{
		UClass* Class = UWebSteamUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAppOwnership", &UWebSteamUser::execCheckAppOwnership },
			{ "GetAppPriceInfo", &UWebSteamUser::execGetAppPriceInfo },
			{ "GetFriendList", &UWebSteamUser::execGetFriendList },
			{ "GetPlayerBans", &UWebSteamUser::execGetPlayerBans },
			{ "GetPlayerSummaries", &UWebSteamUser::execGetPlayerSummaries },
			{ "GetPublisherAppOwnership", &UWebSteamUser::execGetPublisherAppOwnership },
			{ "GetPublisherAppOwnershipChanges", &UWebSteamUser::execGetPublisherAppOwnershipChanges },
			{ "GetUserGroupList", &UWebSteamUser::execGetUserGroupList },
			{ "GrantPackage", &UWebSteamUser::execGrantPackage },
			{ "ResolveVanityURL", &UWebSteamUser::execResolveVanityURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics
	{
		struct WebSteamUser_eventCheckAppOwnership_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Checks if the specified user owns the app.\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09""AppID to check for ownership\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Checks if the specified user owns the app.\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         SteamID of user\n@param        appID           AppID to check for ownership" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "CheckAppOwnership", nullptr, nullptr, sizeof(WebSteamUser_eventCheckAppOwnership_Parms), Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics
	{
		struct WebSteamUser_eventGetAppPriceInfo_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			TArray<int32> appIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_appIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_appIDs_Inner = { "appIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_appIDs = { "appIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, appIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_appIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_appIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Get App Price Info\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09SteamID of user\n\x09* @param\x09""appIDs\x09\x09Max: 100\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Get App Price Info\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         SteamID of user\n@param        appIDs          Max: 100" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetAppPriceInfo", nullptr, nullptr, sizeof(WebSteamUser_eventGetAppPriceInfo_Parms), Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics
	{
		struct WebSteamUser_eventGetFriendList_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			FString relationship;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_relationship;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_relationship = { "relationship", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, relationship), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_relationship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Get Friend List\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09SteamID of user\n\x09* @param\x09relationship\x09relationship type (ex: friend)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Get Friend List\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 SteamID of user\n@param        relationship    relationship type (ex: friend)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetFriendList", nullptr, nullptr, sizeof(WebSteamUser_eventGetFriendList_Parms), Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics
	{
		struct WebSteamUser_eventGetPlayerBans_Parms
		{
			FScriptDelegate callback;
			FString key;
			TArray<FString> steamIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_steamIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_steamIDs_Inner = { "steamIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_steamIDs = { "steamIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, steamIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_steamIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_steamIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Get Player Bans\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Get Player Bans\n\n@param        key                             Steamworks Web API publisher authentication key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPlayerBans", nullptr, nullptr, sizeof(WebSteamUser_eventGetPlayerBans_Parms), Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetPlayerBans()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics
	{
		struct WebSteamUser_eventGetPlayerSummaries_Parms
		{
			FScriptDelegate callback;
			FString key;
			TArray<FString> steamIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_steamIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_steamIDs_Inner = { "steamIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_steamIDs = { "steamIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, steamIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_steamIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_steamIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Get Player Summaries\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamIDs\x09\x09Max: 100\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Get Player Summaries\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamIDs                Max: 100" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPlayerSummaries", nullptr, nullptr, sizeof(WebSteamUser_eventGetPlayerSummaries_Parms), Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics
	{
		struct WebSteamUser_eventGetPublisherAppOwnership_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Get Publisher App Ownership\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09SteamID of user\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Get Publisher App Ownership\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 SteamID of user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPublisherAppOwnership", nullptr, nullptr, sizeof(WebSteamUser_eventGetPublisherAppOwnership_Parms), Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics
	{
		struct WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString packageRowVersion;
			FString cdkeyRowVersion;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageRowVersion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cdkeyRowVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_packageRowVersion = { "packageRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, packageRowVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_cdkeyRowVersion = { "cdkeyRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, cdkeyRowVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_packageRowVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_cdkeyRowVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* This method can be used to determine what SteamIDs have ownership changes starting from a particular package or key row version number. \n\x09* From the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the key passed in. \n\x09""A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09packageRowVersion\x09\x09""64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n\x09* @param\x09""cdkeyRowVersion\x09\x09\x09""64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "This method can be used to determine what SteamIDs have ownership changes starting from a particular package or key row version number.\nFrom the list of SteamIDs returned, a call to GetPublisherAppOwnership can then return the associated ownership data for the applications in the group associated with the key passed in.\n       A partner may wish to track this data in conjunction with linked Steam Accounts to better understand the state of product ownership on Steam.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        packageRowVersion               64 - bit row version to read package changes from. The row version of data read up to will be returned for use in future calls.\n@param        cdkeyRowVersion                 64 - bit row version to read CD Key changes from. The row version of data read up to will be returned for use in future calls." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPublisherAppOwnershipChanges", nullptr, nullptr, sizeof(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms), Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics
	{
		struct WebSteamUser_eventGetUserGroupList_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Get User Group List\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09SteamID of user\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Get User Group List\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 SteamID of user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetUserGroupList", nullptr, nullptr, sizeof(WebSteamUser_eventGetUserGroupList_Parms), Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetUserGroupList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics
	{
		struct WebSteamUser_eventGrantPackage_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 packageID;
			FString ipaddress;
			FString thirdPartyKey;
			int32 thirdPartyAppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_packageID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipaddress;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_thirdPartyKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_thirdPartyAppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_packageID = { "packageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, packageID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, ipaddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyKey = { "thirdPartyKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, thirdPartyKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyAppID = { "thirdPartyAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, thirdPartyAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_packageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ipaddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyAppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Get User Group List\n\x09*\n\x09* This call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID of user\n\x09* @param\x09packageID\x09\x09\x09PackageID to grant\n\x09* @param\x09ipaddress\x09\x09\x09ip address of user in string format(xxx.xxx.xxx.xxx).\n\x09* @param\x09thirdPartyKey\x09\x09Optionally associate third party key during grant. 'thirdpartyappid' will have to be set.\n\x09* @param\x09thirdPartyAppID\x09\x09Has to be set if 'thirdpartykey' is set.The appid associated with the 'thirdpartykey'.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Get User Group List\n\nThis call will only work on packages which have \"canbegrantedfromexternal\" set to 1.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         SteamID of user\n@param        packageID                       PackageID to grant\n@param        ipaddress                       ip address of user in string format(xxx.xxx.xxx.xxx).\n@param        thirdPartyKey           Optionally associate third party key during grant. 'thirdpartyappid' will have to be set.\n@param        thirdPartyAppID         Has to be set if 'thirdpartykey' is set.The appid associated with the 'thirdpartykey'." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GrantPackage", nullptr, nullptr, sizeof(WebSteamUser_eventGrantPackage_Parms), Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GrantPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics
	{
		struct WebSteamUser_eventResolveVanityURL_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString vanityURL;
			EVanityUrlType urlType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vanityURL;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_urlType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_urlType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_vanityURL = { "vanityURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, vanityURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_urlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_urlType = { "urlType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, urlType), Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_vanityURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_urlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_urlType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamUser" },
		{ "Comment", "/**\n\x09* Resolve Vanity URL\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09vanityURL\x09\x09The vanity URL to get a SteamID for\n\x09* @param\x09urlType\x09\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
		{ "ToolTip", "Resolve Vanity URL\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        vanityURL               The vanity URL to get a SteamID for\n@param        urlType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "ResolveVanityURL", nullptr, nullptr, sizeof(WebSteamUser_eventResolveVanityURL_Parms), Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamUser_NoRegister()
	{
		return UWebSteamUser::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership, "CheckAppOwnership" }, // 1452830313
		{ &Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo, "GetAppPriceInfo" }, // 2049805083
		{ &Z_Construct_UFunction_UWebSteamUser_GetFriendList, "GetFriendList" }, // 457491108
		{ &Z_Construct_UFunction_UWebSteamUser_GetPlayerBans, "GetPlayerBans" }, // 4032394515
		{ &Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries, "GetPlayerSummaries" }, // 3050223295
		{ &Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership, "GetPublisherAppOwnership" }, // 3902579468
		{ &Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges, "GetPublisherAppOwnershipChanges" }, // 748639183
		{ &Z_Construct_UFunction_UWebSteamUser_GetUserGroupList, "GetUserGroupList" }, // 110743330
		{ &Z_Construct_UFunction_UWebSteamUser_GrantPackage, "GrantPackage" }, // 276023170
		{ &Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL, "ResolveVanityURL" }, // 1817402112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamUser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUser/WebSteamUser.h" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamUser_Statics::ClassParams = {
		&UWebSteamUser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamUser, 2746130528);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamUser>()
	{
		return UWebSteamUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamUser(Z_Construct_UClass_UWebSteamUser, &UWebSteamUser::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

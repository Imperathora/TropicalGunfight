// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/GameNotificationsService/WebGameNotificationsService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebGameNotificationsService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameNotificationsService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameNotificationsService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebGameNotificationsService::execDeleteSessionBatch)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSessionBatch(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_sessionID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execDeleteSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSession(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_sessionID,Z_Param_appID,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execRequestNotifications)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestNotifications(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execGetSessionDetailsForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessions);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSessionDetailsForApp(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_sessions,Z_Param_appID,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execEnumerateSessionsForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_UBOOL(Z_Param_bIncludeAllUserMessages);
		P_GET_UBOOL(Z_Param_bIncludeAuthUserMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateSessionsForApp(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_bIncludeAllUserMessages,Z_Param_bIncludeAuthUserMessage,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execUpdateSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_title);
		P_GET_PROPERTY(FStrProperty,Z_Param_users);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSession(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_sessionID,Z_Param_appID,Z_Param_title,Z_Param_users,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execCreateSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_context);
		P_GET_PROPERTY(FStrProperty,Z_Param_title);
		P_GET_PROPERTY(FStrProperty,Z_Param_users);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSession(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_context,Z_Param_title,Z_Param_users,Z_Param_steamID);
		P_NATIVE_END;
	}
	void UWebGameNotificationsService::StaticRegisterNativesUWebGameNotificationsService()
	{
		UClass* Class = UWebGameNotificationsService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSession", &UWebGameNotificationsService::execCreateSession },
			{ "DeleteSession", &UWebGameNotificationsService::execDeleteSession },
			{ "DeleteSessionBatch", &UWebGameNotificationsService::execDeleteSessionBatch },
			{ "EnumerateSessionsForApp", &UWebGameNotificationsService::execEnumerateSessionsForApp },
			{ "GetSessionDetailsForApp", &UWebGameNotificationsService::execGetSessionDetailsForApp },
			{ "RequestNotifications", &UWebGameNotificationsService::execRequestNotifications },
			{ "UpdateSession", &UWebGameNotificationsService::execUpdateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics
	{
		struct WebGameNotificationsService_eventCreateSession_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString context;
			FString title;
			FString users;
			FString steamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_context;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_users;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, context), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_users = { "users", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, users), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_users,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameNotificationsService" },
		{ "Comment", "/**\n\x09* Creates a brand new async session with the players specified in the request.\n\x09*\n\x09* The unique session id returned in this API call should be stored with the game session state of the game, as it will be used to reference other calls in the Game Notifications API\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID of the session to update.\n\x09* @param\x09""context\x09(int64)\x09\x09Game-specified context value the game can use to associate the session with some object on their backend.\n\x09* @param\x09title\x09\x09\x09\x09The title of the session to be displayed within each user's list of sessions.\n\x09* @param\x09users\x09\x09\x09\x09The initial state of all users in the session.\n\x09* @param\x09steamID\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session and all users being added to the session must be friends with the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
		{ "ToolTip", "Creates a brand new async session with the players specified in the request.\n\nThe unique session id returned in this API call should be stored with the game session state of the game, as it will be used to reference other calls in the Game Notifications API\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The App ID of the session to update.\n@param        context (int64)         Game-specified context value the game can use to associate the session with some object on their backend.\n@param        title                           The title of the session to be displayed within each user's list of sessions.\n@param        users                           The initial state of all users in the session.\n@param        steamID                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session and all users being added to the session must be friends with the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "CreateSession", nullptr, nullptr, sizeof(WebGameNotificationsService_eventCreateSession_Parms), Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_CreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics
	{
		struct WebGameNotificationsService_eventDeleteSession_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString sessionID;
			int32 appID;
			FString steamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_sessionID = { "sessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, sessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_sessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameNotificationsService" },
		{ "Comment", "/**\n\x09* Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09sessionID (int64)\x09The sessionid to delete.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID of the session to delete.\n\x09* @param\x09steamID\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
		{ "ToolTip", "Delete an active async game session. This will remove all notifications to any user that is part of the game session.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        sessionID (int64)       The sessionid to delete.\n@param        appID                           The App ID of the session to delete.\n@param        steamID                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "DeleteSession", nullptr, nullptr, sizeof(WebGameNotificationsService_eventDeleteSession_Parms), Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics
	{
		struct WebGameNotificationsService_eventDeleteSessionBatch_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString sessionID;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_sessionID = { "sessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, sessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_sessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameNotificationsService" },
		{ "Comment", "/**\n\x09* Deletes a batch of async game sessions\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09sessionID (int64)\x09The sessionid to delete.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID of the session to delete.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
		{ "ToolTip", "Deletes a batch of async game sessions\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        sessionID (int64)       The sessionid to delete.\n@param        appID                           The App ID of the session to delete." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "DeleteSessionBatch", nullptr, nullptr, sizeof(WebGameNotificationsService_eventDeleteSessionBatch_Parms), Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics
	{
		struct WebGameNotificationsService_eventEnumerateSessionsForApp_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			bool bIncludeAllUserMessages;
			bool bIncludeAuthUserMessage;
			FString language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static void NewProp_bIncludeAllUserMessages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAllUserMessages;
		static void NewProp_bIncludeAuthUserMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAuthUserMessage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages_SetBit(void* Obj)
	{
		((WebGameNotificationsService_eventEnumerateSessionsForApp_Parms*)Obj)->bIncludeAllUserMessages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages = { "bIncludeAllUserMessages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage_SetBit(void* Obj)
	{
		((WebGameNotificationsService_eventEnumerateSessionsForApp_Parms*)Obj)->bIncludeAuthUserMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage = { "bIncludeAuthUserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameNotificationsService" },
		{ "Comment", "/**\n\x09* This returns a list of sessions that a Steam ID is part of.\n\x09*\n\x09* The optional bools will return further details about each session if set.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09\x09\x09The sessionid to request details for. Optional. If not specified, all the user's sessions will be returned.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09\x09The user whose sessions are to be enumerated.\n\x09* @param\x09""bIncludeAllUserMessages\x09\x09(Optional) Set whether the message for all users should be included. Defaults to false.\n\x09* @param\x09""bIncludeAuthUserMessage\x09\x09(Optional) Set whether the message for the authenticated user should be included. Defaults to false.\n\x09* @param\x09language\x09\x09\x09\x09\x09(Optional) Language to localize the text in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
		{ "ToolTip", "This returns a list of sessions that a Steam ID is part of.\n\nThe optional bools will return further details about each session if set.\n\n@param        key                                                     Steamworks Web API publisher authentication key.\n@param        appID                                           The sessionid to request details for. Optional. If not specified, all the user's sessions will be returned.\n@param        steamID                                         The user whose sessions are to be enumerated.\n@param        bIncludeAllUserMessages         (Optional) Set whether the message for all users should be included. Defaults to false.\n@param        bIncludeAuthUserMessage         (Optional) Set whether the message for the authenticated user should be included. Defaults to false.\n@param        language                                        (Optional) Language to localize the text in." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "EnumerateSessionsForApp", nullptr, nullptr, sizeof(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics
	{
		struct WebGameNotificationsService_eventGetSessionDetailsForApp_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString sessions;
			int32 appID;
			FString language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessions;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_sessions = { "sessions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, sessions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_sessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameNotificationsService" },
		{ "Comment", "/**\n\x09* Returns details about specific session(s).\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09sessions\x09\x09\x09The session(s) to receive the details for\n\x09* @param\x09""appID\x09\x09\x09\x09The appid for the sessions.\n\x09* @param\x09language\x09\x09\x09Language to localize the text in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
		{ "ToolTip", "Returns details about specific session(s).\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        sessions                        The session(s) to receive the details for\n@param        appID                           The appid for the sessions.\n@param        language                        Language to localize the text in." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "GetSessionDetailsForApp", nullptr, nullptr, sizeof(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms), Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics
	{
		struct WebGameNotificationsService_eventRequestNotifications_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameNotificationsService" },
		{ "Comment", "/**\n\x09* Requests that a user receive game notifications for an app.\n\x09*\n\x09* Whenever a user starts a game that requires game notifications, the server must make a RequestNotifications call for the signed in user. \n\x09* This will register your game to use offline notifications with the user by asking the user to opt into game notifications for your specific game. \n\x09* Make this call, at most, once per game launch. Subsequent calls will not ask the user to opt in if the user has decided to opt out.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09The Steam ID to request notifications for.\n\x09* @param\x09""appID\x09\x09\x09The App ID to request notifications for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
		{ "ToolTip", "Requests that a user receive game notifications for an app.\n\nWhenever a user starts a game that requires game notifications, the server must make a RequestNotifications call for the signed in user.\nThis will register your game to use offline notifications with the user by asking the user to opt into game notifications for your specific game.\nMake this call, at most, once per game launch. Subsequent calls will not ask the user to opt in if the user has decided to opt out.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 The Steam ID to request notifications for.\n@param        appID                   The App ID to request notifications for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "RequestNotifications", nullptr, nullptr, sizeof(WebGameNotificationsService_eventRequestNotifications_Parms), Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics
	{
		struct WebGameNotificationsService_eventUpdateSession_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString sessionID;
			int32 appID;
			FString title;
			FString users;
			FString steamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_users;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_sessionID = { "sessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, sessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_users = { "users", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, users), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_sessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_users,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameNotificationsService" },
		{ "Comment", "/**\n\x09* Update a game session whenever the state of the game changes.\n\x09*\n\x09* Be sure to update the state of each user accordingly, as what is sent here will be reflected in user notifications for all users in the game. \n\x09* Any users that were in the session that are not specified will be removed from the session, and any newly specified users will be added to the session. \n\x09* You must send the complete state of the session -- all previous state will be replaced by the newly specified state.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09sessionID (int64)\x09The sessionid to update.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID of the session to update.\n\x09* @param\x09title\x09\x09\x09\x09(Optional) The new title of the session. If not specified, the title will not be changed.\n\x09* @param\x09users\x09\x09\x09\x09(Optional) A list of users whose state will be updated to reflect the given state. If the users are not already in the session, they will be added to it.\n\x09* @param\x09steamID\x09\x09\x09\x09(Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
		{ "ToolTip", "Update a game session whenever the state of the game changes.\n\nBe sure to update the state of each user accordingly, as what is sent here will be reflected in user notifications for all users in the game.\nAny users that were in the session that are not specified will be removed from the session, and any newly specified users will be added to the session.\nYou must send the complete state of the session -- all previous state will be replaced by the newly specified state.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        sessionID (int64)       The sessionid to update.\n@param        appID                           The App ID of the session to update.\n@param        title                           (Optional) The new title of the session. If not specified, the title will not be changed.\n@param        users                           (Optional) A list of users whose state will be updated to reflect the given state. If the users are not already in the session, they will be added to it.\n@param        steamID                         (Optional) Steam ID to make the request on behalf of -- if specified, the user must be in the session." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "UpdateSession", nullptr, nullptr, sizeof(WebGameNotificationsService_eventUpdateSession_Parms), Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebGameNotificationsService_NoRegister()
	{
		return UWebGameNotificationsService::StaticClass();
	}
	struct Z_Construct_UClass_UWebGameNotificationsService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebGameNotificationsService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebGameNotificationsService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameNotificationsService_CreateSession, "CreateSession" }, // 1057304655
		{ &Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession, "DeleteSession" }, // 3684872835
		{ &Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch, "DeleteSessionBatch" }, // 3838725762
		{ &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp, "EnumerateSessionsForApp" }, // 72696638
		{ &Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp, "GetSessionDetailsForApp" }, // 3037357343
		{ &Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications, "RequestNotifications" }, // 253930480
		{ &Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession, "UpdateSession" }, // 820763432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebGameNotificationsService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameNotificationsService/WebGameNotificationsService.h" },
		{ "ModuleRelativePath", "Public/GameNotificationsService/WebGameNotificationsService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebGameNotificationsService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameNotificationsService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebGameNotificationsService_Statics::ClassParams = {
		&UWebGameNotificationsService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebGameNotificationsService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameNotificationsService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebGameNotificationsService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebGameNotificationsService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebGameNotificationsService, 3456441651);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebGameNotificationsService>()
	{
		return UWebGameNotificationsService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebGameNotificationsService(Z_Construct_UClass_UWebGameNotificationsService, &UWebGameNotificationsService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebGameNotificationsService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameNotificationsService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/CheatReporting/WebCheatReporting.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebCheatReporting() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebCheatReporting_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebCheatReporting();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebCheatReporting::execEndSecureMultiplayerSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndSecureMultiplayerSession(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_sessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execStartSecureMultiplayerSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSecureMultiplayerSession(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execRequestVacStatusForUser)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestVacStatusForUser(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_sessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execReportCheatData)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_pathAndFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_webCheatURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeNow);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeStarted);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeStopped);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_gameProcessID);
		P_GET_PROPERTY(FIntProperty,Z_Param_cheatProcessID);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatParam1);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatParam2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportCheatData(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_pathAndFileName,Z_Param_webCheatURL,Z_Param_timeNow,Z_Param_timeStarted,Z_Param_timeStopped,Z_Param_cheatName,Z_Param_gameProcessID,Z_Param_cheatProcessID,Z_Param_cheatParam1,Z_Param_cheatParam2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execGetCheatingReports)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeBegin);
		P_GET_PROPERTY(FStrProperty,Z_Param_reportIDmin);
		P_GET_UBOOL(Z_Param_bIncludeReports);
		P_GET_UBOOL(Z_Param_bIncludeBans);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCheatingReports(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_timeEnd,Z_Param_timeBegin,Z_Param_reportIDmin,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execRemovePlayerGameBan)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePlayerGameBan(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execRequestPlayerGameBan)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_reportID);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatDescription);
		P_GET_PROPERTY(FIntProperty,Z_Param_duration);
		P_GET_UBOOL(Z_Param_bDelayBan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPlayerGameBan(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_reportID,Z_Param_cheatDescription,Z_Param_duration,Z_Param_bDelayBan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebCheatReporting::execReportPlayerCheating)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDReporter);
		P_GET_PROPERTY(FStrProperty,Z_Param_appData);
		P_GET_UBOOL(Z_Param_bHeuristic);
		P_GET_UBOOL(Z_Param_bDetection);
		P_GET_UBOOL(Z_Param_bPlayerReport);
		P_GET_UBOOL(Z_Param_bNoReportID);
		P_GET_PROPERTY(FIntProperty,Z_Param_gameMode);
		P_GET_PROPERTY(FIntProperty,Z_Param_suspicionStartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_severity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportPlayerCheating(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_steamIDReporter,Z_Param_appData,Z_Param_bHeuristic,Z_Param_bDetection,Z_Param_bPlayerReport,Z_Param_bNoReportID,Z_Param_gameMode,Z_Param_suspicionStartTime,Z_Param_severity);
		P_NATIVE_END;
	}
	void UWebCheatReporting::StaticRegisterNativesUWebCheatReporting()
	{
		UClass* Class = UWebCheatReporting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSecureMultiplayerSession", &UWebCheatReporting::execEndSecureMultiplayerSession },
			{ "GetCheatingReports", &UWebCheatReporting::execGetCheatingReports },
			{ "RemovePlayerGameBan", &UWebCheatReporting::execRemovePlayerGameBan },
			{ "ReportCheatData", &UWebCheatReporting::execReportCheatData },
			{ "ReportPlayerCheating", &UWebCheatReporting::execReportPlayerCheating },
			{ "RequestPlayerGameBan", &UWebCheatReporting::execRequestPlayerGameBan },
			{ "RequestVacStatusForUser", &UWebCheatReporting::execRequestVacStatusForUser },
			{ "StartSecureMultiplayerSession", &UWebCheatReporting::execStartSecureMultiplayerSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics
	{
		struct WebCheatReporting_eventEndSecureMultiplayerSession_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString sessionID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_sessionID = { "sessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, sessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_sessionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has ended.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09sessionID (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession. \n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has ended.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         The Steam ID of the user.\n@param        appID                           The App ID for the game.\n@param        sessionID (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "EndSecureMultiplayerSession", nullptr, nullptr, sizeof(WebCheatReporting_eventEndSecureMultiplayerSession_Parms), Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics
	{
		struct WebCheatReporting_eventGetCheatingReports_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 timeEnd;
			int32 timeBegin;
			FString reportIDmin;
			bool bIncludeReports;
			bool bIncludeBans;
			FString steamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeBegin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_reportIDmin;
		static void NewProp_bIncludeReports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
		static void NewProp_bIncludeBans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_timeEnd = { "timeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, timeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_timeBegin = { "timeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, timeBegin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_reportIDmin = { "reportIDmin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, reportIDmin), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((WebCheatReporting_eventGetCheatingReports_Parms*)Obj)->bIncludeReports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((WebCheatReporting_eventGetCheatingReports_Parms*)Obj)->bIncludeBans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_timeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_timeBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_reportIDmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Get a list of cheating reports submitted for this app.\n\x09*\n\x09* Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09timeEnd\x09\x09\x09\x09The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09timeBegin\x09\x09\x09The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09reportIDmin\x09\x09\x09Minimum reportID to include. (can pass 0 - end of previous report range)\n\x09* @param\x09""bIncludeReports\x09\x09(Optional) Include reports. If false includebans must be true.\n\x09* @param\x09""bIncludeBans\x09\x09(Optional) Include ban requests? If false includereports must be true.\n\x09* @param\x09steamID\x09\x09\x09\x09(Optional) Query just for this Steam ID.\n\x09*/" },
		{ "CPP_Default_bIncludeBans", "false" },
		{ "CPP_Default_bIncludeReports", "false" },
		{ "CPP_Default_reportIDmin", "0" },
		{ "CPP_Default_steamID", "" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The App ID for the game.\n@param        timeEnd                         The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        timeBegin                       The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        reportIDmin                     Minimum reportID to include. (can pass 0 - end of previous report range)\n@param        bIncludeReports         (Optional) Include reports. If false includebans must be true.\n@param        bIncludeBans            (Optional) Include ban requests? If false includereports must be true.\n@param        steamID                         (Optional) Query just for this Steam ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "GetCheatingReports", nullptr, nullptr, sizeof(WebCheatReporting_eventGetCheatingReports_Parms), Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics
	{
		struct WebCheatReporting_eventRemovePlayerGameBan_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Remove a game ban on a player.\n\x09*\n\x09* This is used if a Game ban is determined to be a false positive.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""appID\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Remove a game ban on a player.\n\nThis is used if a Game ban is determined to be a false positive.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 The Steam ID of the user to remove the game ban on.\n@param        appID                   The App ID for the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RemovePlayerGameBan", nullptr, nullptr, sizeof(WebCheatReporting_eventRemovePlayerGameBan_Parms), Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics
	{
		struct WebCheatReporting_eventReportCheatData_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString pathAndFileName;
			FString webCheatURL;
			FString timeNow;
			FString timeStarted;
			FString timeStopped;
			FString cheatName;
			int32 gameProcessID;
			int32 cheatProcessID;
			FString cheatParam1;
			FString cheatParam2;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pathAndFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_webCheatURL;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeNow;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeStarted;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeStopped;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameProcessID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cheatProcessID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatParam1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatParam2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_pathAndFileName = { "pathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, pathAndFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_webCheatURL = { "webCheatURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, webCheatURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_timeNow = { "timeNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, timeNow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_timeStarted = { "timeStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, timeStarted), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_timeStopped = { "timeStopped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, timeStopped), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_cheatName = { "cheatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, cheatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_gameProcessID = { "gameProcessID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, gameProcessID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_cheatProcessID = { "cheatProcessID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, cheatProcessID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_cheatParam1 = { "cheatParam1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, cheatParam1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_cheatParam2 = { "cheatParam2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, cheatParam2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_pathAndFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_webCheatURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_timeNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_timeStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_timeStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_cheatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_gameProcessID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_cheatProcessID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_cheatParam1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_cheatParam2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\x09*\n\x09* This is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09pathAndFileName\x09\x09\x09Path and file name of the cheat executable.\n\x09* @param\x09webCheatURL\x09\x09\x09\x09Web url where the cheat was found and downloaded.\n\x09* @param\x09timeNow\x09\x09\x09\x09\x09Local system time now. 64 bit windows system time.\n\x09* @param\x09timeStarted\x09\x09\x09\x09Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n\x09* @param\x09timeStopped\x09\x09\x09\x09Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n\x09* @param\x09""cheatName\x09\x09\x09\x09""Descriptive name for the cheat.\n\x09* @param\x09gameProcessID\x09\x09\x09Process ID of the running game.\n\x09* @param\x09""cheatProcessID\x09\x09\x09Process ID of the cheat process that ran.\n\x09* @param\x09""cheatParam1\x09(int64)\x09\x09""Extra cheat data. \n\x09* @param\x09""cheatParam2\x09(int64)\x09\x09""Extra cheat data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\nThis is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamID                                 The Steam ID of the user to remove the game ban on.\n@param        appID                                   The App ID for the game.\n@param        pathAndFileName                 Path and file name of the cheat executable.\n@param        webCheatURL                             Web url where the cheat was found and downloaded.\n@param        timeNow                                 Local system time now. 64 bit windows system time.\n@param        timeStarted                             Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n@param        timeStopped                             Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n@param        cheatName                               Descriptive name for the cheat.\n@param        gameProcessID                   Process ID of the running game.\n@param        cheatProcessID                  Process ID of the cheat process that ran.\n@param        cheatParam1     (int64)         Extra cheat data.\n@param        cheatParam2     (int64)         Extra cheat data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "ReportCheatData", nullptr, nullptr, sizeof(WebCheatReporting_eventReportCheatData_Parms), Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_ReportCheatData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics
	{
		struct WebCheatReporting_eventReportPlayerCheating_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			FString steamIDReporter;
			FString appData;
			bool bHeuristic;
			bool bDetection;
			bool bPlayerReport;
			bool bNoReportID;
			int32 gameMode;
			int32 suspicionStartTime;
			int32 severity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDReporter;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appData;
		static void NewProp_bHeuristic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHeuristic;
		static void NewProp_bDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetection;
		static void NewProp_bPlayerReport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerReport;
		static void NewProp_bNoReportID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoReportID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_suspicionStartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_severity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_steamIDReporter = { "steamIDReporter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, steamIDReporter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_appData = { "appData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, appData), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic_SetBit(void* Obj)
	{
		((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bHeuristic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic = { "bHeuristic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection_SetBit(void* Obj)
	{
		((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection = { "bDetection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport_SetBit(void* Obj)
	{
		((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bPlayerReport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport = { "bPlayerReport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID_SetBit(void* Obj)
	{
		((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bNoReportID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID = { "bNoReportID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_gameMode = { "gameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, gameMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_suspicionStartTime = { "suspicionStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, suspicionStartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_severity = { "severity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, severity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_steamIDReporter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_appData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_gameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_suspicionStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_severity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\x09*\n\x09* It is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09steamID\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09steamIDReporter\x09\x09(Optional) The Steam ID of the user or game server who is reporting the cheating.\n\x09* @param\x09""appData\x09\x09\x09\x09(Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n\x09* @param\x09""bHeuristic\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a heuristic.\n\x09* @param\x09""bDetection\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a detection.\n\x09* @param\x09""bPlayerReport\x09\x09(Optional) Extra information about the source of the cheating - was it a player report.\n\x09* @param\x09""bNoReportID\x09\x09\x09(Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n\x09* @param\x09gameMode\x09\x09\x09(Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n\x09* @param\x09suspicionStartTime\x09(Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09severity\x09\x09\x09(Optional) Level of severity of bad action being reported. Scale set by developer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\nIt is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The App ID for the game.\n@param        steamID                         The Steam ID of the user who is being reported for cheating.\n@param        steamIDReporter         (Optional) The Steam ID of the user or game server who is reporting the cheating.\n@param        appData                         (Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n@param        bHeuristic                      (Optional) Extra information about the source of the cheating - was it a heuristic.\n@param        bDetection                      (Optional) Extra information about the source of the cheating - was it a detection.\n@param        bPlayerReport           (Optional) Extra information about the source of the cheating - was it a player report.\n@param        bNoReportID                     (Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n@param        gameMode                        (Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n@param        suspicionStartTime      (Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n@param        severity                        (Optional) Level of severity of bad action being reported. Scale set by developer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "ReportPlayerCheating", nullptr, nullptr, sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics
	{
		struct WebCheatReporting_eventRequestPlayerGameBan_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString reportID;
			FString cheatDescription;
			int32 duration;
			bool bDelayBan;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_reportID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatDescription;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_duration;
		static void NewProp_bDelayBan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayBan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_reportID = { "reportID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, reportID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_cheatDescription = { "cheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, cheatDescription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan_SetBit(void* Obj)
	{
		((WebCheatReporting_eventRequestPlayerGameBan_Parms*)Obj)->bDelayBan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebCheatReporting_eventRequestPlayerGameBan_Parms), &Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_reportID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_cheatDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Requests a game ban on a specific player.\n\x09*\n\x09* This is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09reportID\x09\x09\x09The reportid originally used to report cheating.\n\x09* @param\x09""cheatDescription\x09Text describing cheating infraction.\n\x09* @param\x09""duration\x09\x09\x09""Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n\x09* @param\x09""bDelayBan\x09\x09\x09""Delay the ban according to default ban delay rules.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Requests a game ban on a specific player.\n\nThis is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         The Steam ID of the user who is being reported for cheating.\n@param        appID                           The App ID for the game.\n@param        reportID                        The reportid originally used to report cheating.\n@param        cheatDescription        Text describing cheating infraction.\n@param        duration                        Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n@param        bDelayBan                       Delay the ban according to default ban delay rules." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RequestPlayerGameBan", nullptr, nullptr, sizeof(WebCheatReporting_eventRequestPlayerGameBan_Parms), Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics
	{
		struct WebCheatReporting_eventRequestVacStatusForUser_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString sessionID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_sessionID = { "sessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, sessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_sessionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\x09*\n\x09* This is used before a user enters matchmaking or joins a game.\n\x09* If the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false. \n\x09* Checking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ). \n\x09* The VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false. \n\x09* It is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09sessionID (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession. \n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\nThis is used before a user enters matchmaking or joins a game.\nIf the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\nChecking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\nThe VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\nIt is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         The Steam ID of the user.\n@param        appID                           The App ID for the game.\n@param        sessionID (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RequestVacStatusForUser", nullptr, nullptr, sizeof(WebCheatReporting_eventRequestVacStatusForUser_Parms), Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics
	{
		struct WebCheatReporting_eventStartSecureMultiplayerSession_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has started.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""appID\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has started.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 The Steam ID of the user.\n@param        appID                   The App ID for the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "StartSecureMultiplayerSession", nullptr, nullptr, sizeof(WebCheatReporting_eventStartSecureMultiplayerSession_Parms), Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebCheatReporting_NoRegister()
	{
		return UWebCheatReporting::StaticClass();
	}
	struct Z_Construct_UClass_UWebCheatReporting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebCheatReporting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebCheatReporting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession, "EndSecureMultiplayerSession" }, // 1999492611
		{ &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports, "GetCheatingReports" }, // 3976669260
		{ &Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan, "RemovePlayerGameBan" }, // 1378393973
		{ &Z_Construct_UFunction_UWebCheatReporting_ReportCheatData, "ReportCheatData" }, // 1943530119
		{ &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating, "ReportPlayerCheating" }, // 2338030945
		{ &Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan, "RequestPlayerGameBan" }, // 445647313
		{ &Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser, "RequestVacStatusForUser" }, // 2475617238
		{ &Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession, "StartSecureMultiplayerSession" }, // 8901132
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebCheatReporting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CheatReporting/WebCheatReporting.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebCheatReporting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebCheatReporting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebCheatReporting_Statics::ClassParams = {
		&UWebCheatReporting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebCheatReporting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebCheatReporting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebCheatReporting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebCheatReporting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebCheatReporting, 3909300746);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebCheatReporting>()
	{
		return UWebCheatReporting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebCheatReporting(Z_Construct_UClass_UWebCheatReporting, &UWebCheatReporting::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebCheatReporting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebCheatReporting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

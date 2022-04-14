// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamUserStats/WebUserStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebUserStats() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserStats_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserStats();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebUserStats::execSetUserStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_TARRAY(FString,Z_Param_names);
		P_GET_TARRAY(int32,Z_Param_values);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_names,Z_Param_values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetUserStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetSchemaForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSchemaForGame(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetPlayerAchievements)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerAchievements(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetNumberOfCurrentPlayers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNumberOfCurrentPlayers(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetGlobalStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_TARRAY(FString,Z_Param_names);
		P_GET_PROPERTY(FIntProperty,Z_Param_startDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGlobalStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_appID,Z_Param_names,Z_Param_startDate,Z_Param_endDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetGlobalAchievementPercentagesForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGlobalAchievementPercentagesForApp(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_gameID);
		P_NATIVE_END;
	}
	void UWebUserStats::StaticRegisterNativesUWebUserStats()
	{
		UClass* Class = UWebUserStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalAchievementPercentagesForApp", &UWebUserStats::execGetGlobalAchievementPercentagesForApp },
			{ "GetGlobalStatsForGame", &UWebUserStats::execGetGlobalStatsForGame },
			{ "GetNumberOfCurrentPlayers", &UWebUserStats::execGetNumberOfCurrentPlayers },
			{ "GetPlayerAchievements", &UWebUserStats::execGetPlayerAchievements },
			{ "GetSchemaForGame", &UWebUserStats::execGetSchemaForGame },
			{ "GetUserStatsForGame", &UWebUserStats::execGetUserStatsForGame },
			{ "SetUserStatsForGame", &UWebUserStats::execSetUserStatsForGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics
	{
		struct WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms
		{
			FScriptDelegate callback;
			FString gameID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_gameID = { "gameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms, gameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_gameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Retrieves the global achievement percentages for the specified app.\n\x09*\n\x09* @param\x09gameID\x09\x09GameID to retrieve the achievement percentages for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Retrieves the global achievement percentages for the specified app.\n\n@param        gameID          GameID to retrieve the achievement percentages for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetGlobalAchievementPercentagesForApp", nullptr, nullptr, sizeof(WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms), Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics
	{
		struct WebUserStats_eventGetGlobalStatsForGame_Parms
		{
			FScriptDelegate callback;
			int32 appID;
			TArray<FString> names;
			int32 startDate;
			int32 endDate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_names_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_names;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_names_Inner = { "names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_names = { "names", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, names), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, startDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_startDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_endDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Retrieves the global stats percentages for the specified app.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09""AppID that we're getting global stats for\n\x09* @param\x09names\x09\x09\x09Names of stat to get data for\n\x09* @param\x09startDate\x09\x09Start date for daily totals (unix epoch timestamp)\n\x09* @param\x09""endDate\x09\x09\x09""End date for daily totals (unix epoch timestamp)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Retrieves the global stats percentages for the specified app.\n\n@param        appID                   AppID that we're getting global stats for\n@param        names                   Names of stat to get data for\n@param        startDate               Start date for daily totals (unix epoch timestamp)\n@param        endDate                 End date for daily totals (unix epoch timestamp)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetGlobalStatsForGame", nullptr, nullptr, sizeof(WebUserStats_eventGetGlobalStatsForGame_Parms), Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics
	{
		struct WebUserStats_eventGetNumberOfCurrentPlayers_Parms
		{
			FScriptDelegate callback;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetNumberOfCurrentPlayers_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetNumberOfCurrentPlayers_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Gets the total number of players currently active in the specified app on Steam.\n\x09*\n\x09* Note that this will not return players that are playing while not connected to Steam.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09""AppID that we're getting user count for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Gets the total number of players currently active in the specified app on Steam.\n\nNote that this will not return players that are playing while not connected to Steam.\n\n@param        appID                   AppID that we're getting user count for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetNumberOfCurrentPlayers", nullptr, nullptr, sizeof(WebUserStats_eventGetNumberOfCurrentPlayers_Parms), Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics
	{
		struct WebUserStats_eventGetPlayerAchievements_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Gets the list of achievements the specified user has unlocked in an app.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API user authentication key.\n\x09* @param\x09steamID\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09language\x09\x09Language to return strings for\n\x09*/" },
		{ "CPP_Default_language", "english" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Gets the list of achievements the specified user has unlocked in an app.\n\n@param        key                             Steamworks Web API user authentication key.\n@param        steamID                 SteamID of user\n@param        appID                   AppID to get achievements for\n@param        language                Language to return strings for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetPlayerAchievements", nullptr, nullptr, sizeof(WebUserStats_eventGetPlayerAchievements_Parms), Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics
	{
		struct WebUserStats_eventGetSchemaForGame_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Gets the complete list of stats and achievements for the specified game.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API user authentication key.\n\x09* @param\x09""appID\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09language\x09\x09Language to return strings for\n\x09*/" },
		{ "CPP_Default_language", "english" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Gets the complete list of stats and achievements for the specified game.\n\n@param        key                             Steamworks Web API user authentication key.\n@param        appID                   AppID to get achievements for\n@param        language                Language to return strings for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetSchemaForGame", nullptr, nullptr, sizeof(WebUserStats_eventGetSchemaForGame_Parms), Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetSchemaForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics
	{
		struct WebUserStats_eventGetUserStatsForGame_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Gets the list of stats that the specified user has set in an app.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API user authentication key.\n\x09* @param\x09steamID\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09""AppID to get achievements for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Gets the list of stats that the specified user has set in an app.\n\n@param        key                             Steamworks Web API user authentication key.\n@param        steamID                 SteamID of user\n@param        appID                   AppID to get achievements for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetUserStatsForGame", nullptr, nullptr, sizeof(WebUserStats_eventGetUserStatsForGame_Parms), Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics
	{
		struct WebUserStats_eventSetUserStatsForGame_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			TArray<FString> names;
			TArray<int32> values;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_names_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_names;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_names_Inner = { "names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_names = { "names", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, names), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_values_Inner = { "values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_values,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Sets a stat for the specified user for the game.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API user authentication key.\n\x09* @param\x09steamID\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09names\x09\x09\x09Names of stat or achievement to set\n\x09* @param\x09values\x09\x09\x09Values to set\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Sets a stat for the specified user for the game.\n\n@param        key                             Steamworks Web API user authentication key.\n@param        steamID                 SteamID of user\n@param        appID                   AppID to get achievements for\n@param        names                   Names of stat or achievement to set\n@param        values                  Values to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "SetUserStatsForGame", nullptr, nullptr, sizeof(WebUserStats_eventSetUserStatsForGame_Parms), Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebUserStats_NoRegister()
	{
		return UWebUserStats::StaticClass();
	}
	struct Z_Construct_UClass_UWebUserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebUserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebUserStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp, "GetGlobalAchievementPercentagesForApp" }, // 2688109810
		{ &Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame, "GetGlobalStatsForGame" }, // 4135926888
		{ &Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 1256115836
		{ &Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements, "GetPlayerAchievements" }, // 743652687
		{ &Z_Construct_UFunction_UWebUserStats_GetSchemaForGame, "GetSchemaForGame" }, // 2717930125
		{ &Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame, "GetUserStatsForGame" }, // 415204364
		{ &Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame, "SetUserStatsForGame" }, // 2998279385
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebUserStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUserStats/WebUserStats.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebUserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebUserStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebUserStats_Statics::ClassParams = {
		&UWebUserStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebUserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebUserStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebUserStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebUserStats, 2099732175);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebUserStats>()
	{
		return UWebUserStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebUserStats(Z_Construct_UClass_UWebUserStats, &UWebUserStats::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebUserStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebUserStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

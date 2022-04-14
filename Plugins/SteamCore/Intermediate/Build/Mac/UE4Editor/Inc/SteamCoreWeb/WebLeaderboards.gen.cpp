// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/Leaderboards/WebLeaderboards.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebLeaderboards() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLeaderboards_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLeaderboards();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebLeaderboards::execSetLeaderboardScore)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_leaderbordID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_TARRAY(uint8,Z_Param_details);
		P_GET_PROPERTY(FStrProperty,Z_Param_scoreMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeaderboardScore(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_leaderbordID,Z_Param_steamID,Z_Param_score,Z_Param_details,Z_Param_scoreMethod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execResetLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_leaderbordID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_leaderbordID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execGetLeaderboardsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardsForGame(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execGetLeaderboardEntries)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_leaderboardID);
		P_GET_PROPERTY(FIntProperty,Z_Param_dataRequest);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardEntries(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_rangeStart,Z_Param_rangeEnd,Z_Param_leaderboardID,Z_Param_dataRequest,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execFindOrCreateLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FStrProperty,Z_Param_sortMethod);
		P_GET_PROPERTY(FStrProperty,Z_Param_displayType);
		P_GET_UBOOL(Z_Param_bCreateIfNotFound);
		P_GET_UBOOL(Z_Param_bOnlyTrustedWrites);
		P_GET_UBOOL(Z_Param_bOnlyFriendsReads);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindOrCreateLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_name,Z_Param_sortMethod,Z_Param_displayType,Z_Param_bCreateIfNotFound,Z_Param_bOnlyTrustedWrites,Z_Param_bOnlyFriendsReads);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execDeleteLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_name);
		P_NATIVE_END;
	}
	void UWebLeaderboards::StaticRegisterNativesUWebLeaderboards()
	{
		UClass* Class = UWebLeaderboards::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteLeaderboard", &UWebLeaderboards::execDeleteLeaderboard },
			{ "FindOrCreateLeaderboard", &UWebLeaderboards::execFindOrCreateLeaderboard },
			{ "GetLeaderboardEntries", &UWebLeaderboards::execGetLeaderboardEntries },
			{ "GetLeaderboardsForGame", &UWebLeaderboards::execGetLeaderboardsForGame },
			{ "ResetLeaderboard", &UWebLeaderboards::execResetLeaderboard },
			{ "SetLeaderboardScore", &UWebLeaderboards::execSetLeaderboardScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics
	{
		struct WebLeaderboards_eventDeleteLeaderboard_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Delete Leaderboard\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09""appid of game\n\x09* @param\x09name\x09\x09name of the leaderboard to delete\n\x09*/" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
		{ "ToolTip", "Delete Leaderboard\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           appid of game\n@param        name            name of the leaderboard to delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "DeleteLeaderboard", nullptr, nullptr, sizeof(WebLeaderboards_eventDeleteLeaderboard_Parms), Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics
	{
		struct WebLeaderboards_eventFindOrCreateLeaderboard_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString name;
			FString sortMethod;
			FString displayType;
			bool bCreateIfNotFound;
			bool bOnlyTrustedWrites;
			bool bOnlyFriendsReads;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sortMethod;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_displayType;
		static void NewProp_bCreateIfNotFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNotFound;
		static void NewProp_bOnlyTrustedWrites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyTrustedWrites;
		static void NewProp_bOnlyFriendsReads_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFriendsReads;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_sortMethod = { "sortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, sortMethod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_displayType = { "displayType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, displayType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound_SetBit(void* Obj)
	{
		((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bCreateIfNotFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound = { "bCreateIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites_SetBit(void* Obj)
	{
		((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bOnlyTrustedWrites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites = { "bOnlyTrustedWrites", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads_SetBit(void* Obj)
	{
		((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bOnlyFriendsReads = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads = { "bOnlyFriendsReads", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_sortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_displayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Find Or Create Leaderboard\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appid of game\n\x09* @param\x09name\x09\x09\x09\x09\x09name of the leaderboard to delete\n\x09* @param\x09sortMethod\x09\x09\x09\x09sort method to use for this leaderboard (defaults to Ascending)\n\x09* @param\x09""displayType\x09\x09\x09\x09""display type for this leaderboard (defaults to Numeric)\n\x09* @param\x09""bCreateIfNotFound\x09\x09if this is true the leaderboard will be created if it doesn't exist. Defaults to true.\n\x09* @param\x09""bOnlyTrustedWrites\x09\x09if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.\n\x09* @param\x09""bOnlyFriendsReads\x09\x09if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false.\n\x09*/" },
		{ "CPP_Default_bCreateIfNotFound", "false" },
		{ "CPP_Default_bOnlyFriendsReads", "false" },
		{ "CPP_Default_bOnlyTrustedWrites", "false" },
		{ "CPP_Default_displayType", "Numeric" },
		{ "CPP_Default_sortMethod", "Ascending" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
		{ "ToolTip", "Find Or Create Leaderboard\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        appID                                   appid of game\n@param        name                                    name of the leaderboard to delete\n@param        sortMethod                              sort method to use for this leaderboard (defaults to Ascending)\n@param        displayType                             display type for this leaderboard (defaults to Numeric)\n@param        bCreateIfNotFound               if this is true the leaderboard will be created if it doesn't exist. Defaults to true.\n@param        bOnlyTrustedWrites              if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.\n@param        bOnlyFriendsReads               if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "FindOrCreateLeaderboard", nullptr, nullptr, sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics
	{
		struct WebLeaderboards_eventGetLeaderboardEntries_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 rangeStart;
			int32 rangeEnd;
			int32 leaderboardID;
			int32 dataRequest;
			FString steamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderboardID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_dataRequest;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_rangeStart = { "rangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, rangeStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_rangeEnd = { "rangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, rangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_leaderboardID = { "leaderboardID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, leaderboardID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_dataRequest = { "dataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, dataRequest), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_rangeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_rangeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_leaderboardID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_dataRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Get Leaderboard Entries\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09""appid of game\n\x09* @param\x09rangeStart\x09\x09\x09range start or 0\n\x09* @param\x09rangeEnd\x09\x09\x09range end or max LB entries\n\x09* @param\x09leaderboardID\x09\x09ID of the leaderboard to view\n\x09* @param\x09""dataRequest\x09\x09\x09type of request: RequestGlobal, RequestAroundUser, RequestFriends\n\x09* @param\x09steamID\x09\x09\x09\x09SteamID used for friend & around user requests\n\x09*/" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
		{ "ToolTip", "Get Leaderboard Entries\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           appid of game\n@param        rangeStart                      range start or 0\n@param        rangeEnd                        range end or max LB entries\n@param        leaderboardID           ID of the leaderboard to view\n@param        dataRequest                     type of request: RequestGlobal, RequestAroundUser, RequestFriends\n@param        steamID                         SteamID used for friend & around user requests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "GetLeaderboardEntries", nullptr, nullptr, sizeof(WebLeaderboards_eventGetLeaderboardEntries_Parms), Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics
	{
		struct WebLeaderboards_eventGetLeaderboardsForGame_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Get Leaderboards for Game\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09""appid of game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
		{ "ToolTip", "Get Leaderboards for Game\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           appid of game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "GetLeaderboardsForGame", nullptr, nullptr, sizeof(WebLeaderboards_eventGetLeaderboardsForGame_Parms), Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics
	{
		struct WebLeaderboards_eventResetLeaderboard_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 leaderbordID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderbordID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_leaderbordID = { "leaderbordID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, leaderbordID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_leaderbordID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Reset Leaderboard\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09""appid of game\n\x09* @param\x09leaderbordID\x09\x09numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n\x09*/" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
		{ "ToolTip", "Reset Leaderboard\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           appid of game\n@param        leaderbordID            numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "ResetLeaderboard", nullptr, nullptr, sizeof(WebLeaderboards_eventResetLeaderboard_Parms), Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics
	{
		struct WebLeaderboards_eventSetLeaderboardScore_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 leaderbordID;
			FString steamID;
			int32 score;
			TArray<uint8> details;
			FString scoreMethod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderbordID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_details_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_details;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scoreMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_leaderbordID = { "leaderbordID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, leaderbordID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_details_Inner = { "details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, details), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_scoreMethod = { "scoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, scoreMethod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_leaderbordID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_details_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_scoreMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "details" },
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Set Leaderboard Score\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09""appid of game\n\x09* @param\x09leaderbordID\x09\x09numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n\x09* @param\x09steamID\x09\x09\x09\x09steamID to set the score for\n\x09* @param\x09score\x09\x09\x09\x09the score to set for this user\n\x09* @param\x09""details\x09\x09\x09\x09game-specific details for how the score was earned. Up to 256 bytes.\n\x09* @param\x09scoreMethod\x09\x09\x09update method to use. Can be \"KeepBest\" or \"ForceUpdate\"\n\x09*/" },
		{ "CPP_Default_scoreMethod", "KeepBest" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
		{ "ToolTip", "Set Leaderboard Score\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           appid of game\n@param        leaderbordID            numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame\n@param        steamID                         steamID to set the score for\n@param        score                           the score to set for this user\n@param        details                         game-specific details for how the score was earned. Up to 256 bytes.\n@param        scoreMethod                     update method to use. Can be \"KeepBest\" or \"ForceUpdate\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "SetLeaderboardScore", nullptr, nullptr, sizeof(WebLeaderboards_eventSetLeaderboardScore_Parms), Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebLeaderboards_NoRegister()
	{
		return UWebLeaderboards::StaticClass();
	}
	struct Z_Construct_UClass_UWebLeaderboards_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebLeaderboards_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebLeaderboards_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard, "DeleteLeaderboard" }, // 1114871759
		{ &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 432116159
		{ &Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries, "GetLeaderboardEntries" }, // 3284357974
		{ &Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame, "GetLeaderboardsForGame" }, // 3886514482
		{ &Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard, "ResetLeaderboard" }, // 2486440821
		{ &Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore, "SetLeaderboardScore" }, // 1171537164
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebLeaderboards_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Leaderboards/WebLeaderboards.h" },
		{ "ModuleRelativePath", "Public/Leaderboards/WebLeaderboards.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebLeaderboards_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebLeaderboards>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebLeaderboards_Statics::ClassParams = {
		&UWebLeaderboards::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebLeaderboards_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebLeaderboards_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebLeaderboards()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebLeaderboards_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebLeaderboards, 2880496588);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebLeaderboards>()
	{
		return UWebLeaderboards::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebLeaderboards(Z_Construct_UClass_UWebLeaderboards, &UWebLeaderboards::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebLeaderboards"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebLeaderboards);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

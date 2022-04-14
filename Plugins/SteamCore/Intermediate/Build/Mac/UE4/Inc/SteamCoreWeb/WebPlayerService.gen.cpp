// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PlayerService/WebPlayerService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPlayerService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPlayerService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPlayerService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebPlayerService::execIsPlayingSharedGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appIDplaying);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsPlayingSharedGame(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appIDplaying);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetCommunityBadgeProgress)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_badgeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCommunityBadgeProgress(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_badgeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetBadges)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBadges(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetSteamLevel)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSteamLevel(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetOwnedGames)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_UBOOL(Z_Param_bIncludeAppInfo);
		P_GET_UBOOL(Z_Param_bIncludePlayedFreeGames);
		P_GET_TARRAY(int32,Z_Param_filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedGames(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_bIncludeAppInfo,Z_Param_bIncludePlayedFreeGames,Z_Param_filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetRecentlyPlayedGames)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRecentlyPlayedGames(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_count);
		P_NATIVE_END;
	}
	void UWebPlayerService::StaticRegisterNativesUWebPlayerService()
	{
		UClass* Class = UWebPlayerService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBadges", &UWebPlayerService::execGetBadges },
			{ "GetCommunityBadgeProgress", &UWebPlayerService::execGetCommunityBadgeProgress },
			{ "GetOwnedGames", &UWebPlayerService::execGetOwnedGames },
			{ "GetRecentlyPlayedGames", &UWebPlayerService::execGetRecentlyPlayedGames },
			{ "GetSteamLevel", &UWebPlayerService::execGetSteamLevel },
			{ "IsPlayingSharedGame", &UWebPlayerService::execIsPlayingSharedGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics
	{
		struct WebPlayerService_eventGetBadges_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Gets badges that are owned by a specific user\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09The player we're asking about\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Gets badges that are owned by a specific user\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 The player we're asking about" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetBadges", nullptr, nullptr, sizeof(WebPlayerService_eventGetBadges_Parms), Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetBadges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics
	{
		struct WebPlayerService_eventGetCommunityBadgeProgress_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 badgeID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_badgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_badgeID = { "badgeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, badgeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_badgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Gets all the quests needed to get the specified badge, and which are completed\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09The player we're asking about\n\x09* @param\x09""badgeID\x09\x09\x09The badge we're asking about\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Gets all the quests needed to get the specified badge, and which are completed\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 The player we're asking about\n@param        badgeID                 The badge we're asking about" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetCommunityBadgeProgress", nullptr, nullptr, sizeof(WebPlayerService_eventGetCommunityBadgeProgress_Parms), Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics
	{
		struct WebPlayerService_eventGetOwnedGames_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			bool bIncludeAppInfo;
			bool bIncludePlayedFreeGames;
			TArray<int32> filter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static void NewProp_bIncludeAppInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAppInfo;
		static void NewProp_bIncludePlayedFreeGames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludePlayedFreeGames;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_filter_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo_SetBit(void* Obj)
	{
		((WebPlayerService_eventGetOwnedGames_Parms*)Obj)->bIncludeAppInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo = { "bIncludeAppInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPlayerService_eventGetOwnedGames_Parms), &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames_SetBit(void* Obj)
	{
		((WebPlayerService_eventGetOwnedGames_Parms*)Obj)->bIncludePlayedFreeGames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames = { "bIncludePlayedFreeGames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPlayerService_eventGetOwnedGames_Parms), &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_filter_Inner = { "filter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, filter), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_filter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Return a list of games owned by the player\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09* @param\x09""bIncludeAppInfo\x09\x09\x09\x09true if we want additional details (name, icon) about each game\n\x09* @param\x09""bIncludePlayedFreeGames\x09\x09""Free games are excluded by default. If this is set, free games the user has played will be returned.\n\x09* @param\x09""filter\x09\x09\x09\x09\x09\x09if set, restricts result set to the passed in apps\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Return a list of games owned by the player\n\n@param        key                                                     Steamworks Web API publisher authentication key.\n@param        steamID                                         The player we're asking about\n@param        bIncludeAppInfo                         true if we want additional details (name, icon) about each game\n@param        bIncludePlayedFreeGames         Free games are excluded by default. If this is set, free games the user has played will be returned.\n@param        filter                                          if set, restricts result set to the passed in apps" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetOwnedGames", nullptr, nullptr, sizeof(WebPlayerService_eventGetOwnedGames_Parms), Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetOwnedGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics
	{
		struct WebPlayerService_eventGetRecentlyPlayedGames_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Gets information about a player's recently played games\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09The player we're asking about\n\x09* @param\x09""count\x09\x09The number of games to return (0/unset: all)\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Gets information about a player's recently played games\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         The player we're asking about\n@param        count           The number of games to return (0/unset: all)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetRecentlyPlayedGames", nullptr, nullptr, sizeof(WebPlayerService_eventGetRecentlyPlayedGames_Parms), Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics
	{
		struct WebPlayerService_eventGetSteamLevel_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Returns the Steam Level of a user\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Returns the Steam Level of a user\n\n@param        key                                                     Steamworks Web API publisher authentication key.\n@param        steamID                                         The player we're asking about" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetSteamLevel", nullptr, nullptr, sizeof(WebPlayerService_eventGetSteamLevel_Parms), Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics
	{
		struct WebPlayerService_eventIsPlayingSharedGame_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appIDplaying;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appIDplaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_appIDplaying = { "appIDplaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, appIDplaying), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_appIDplaying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Returns valid lender SteamID if game currently played is borrowed\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09The player we're asking about\n\x09* @param\x09""appIDplaying\x09The game player is currently playing\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Returns valid lender SteamID if game currently played is borrowed\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 The player we're asking about\n@param        appIDplaying    The game player is currently playing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "IsPlayingSharedGame", nullptr, nullptr, sizeof(WebPlayerService_eventIsPlayingSharedGame_Parms), Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebPlayerService_NoRegister()
	{
		return UWebPlayerService::StaticClass();
	}
	struct Z_Construct_UClass_UWebPlayerService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebPlayerService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebPlayerService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPlayerService_GetBadges, "GetBadges" }, // 1368195778
		{ &Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress, "GetCommunityBadgeProgress" }, // 1842663689
		{ &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames, "GetOwnedGames" }, // 2453429869
		{ &Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames, "GetRecentlyPlayedGames" }, // 798231996
		{ &Z_Construct_UFunction_UWebPlayerService_GetSteamLevel, "GetSteamLevel" }, // 2747563043
		{ &Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame, "IsPlayingSharedGame" }, // 333836729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebPlayerService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerService/WebPlayerService.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebPlayerService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPlayerService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebPlayerService_Statics::ClassParams = {
		&UWebPlayerService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebPlayerService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebPlayerService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebPlayerService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebPlayerService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebPlayerService, 4062013039);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebPlayerService>()
	{
		return UWebPlayerService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebPlayerService(Z_Construct_UClass_UWebPlayerService, &UWebPlayerService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebPlayerService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPlayerService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

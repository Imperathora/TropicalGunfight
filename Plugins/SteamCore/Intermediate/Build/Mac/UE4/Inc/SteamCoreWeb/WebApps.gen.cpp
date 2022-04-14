// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/Apps/WebApps.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebApps() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebApps_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebApps();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebApps::execUpToDateCheck)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpToDateCheck(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_appID,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execSetAppBuildLive)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buildID);
		P_GET_PROPERTY(FStrProperty,Z_Param_betaKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_description);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAppBuildLive(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_buildID,Z_Param_betaKey,Z_Param_description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetServersAtAddress)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_addr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServersAtAddress(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_addr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_filter);
		P_GET_PROPERTY(FIntProperty,Z_Param_limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerList(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_filter,Z_Param_limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetPlayersBanned)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayersBanned(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetCheatingReports)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeBegin);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeEnd);
		P_GET_UBOOL(Z_Param_bIncludeReports);
		P_GET_UBOOL(Z_Param_bIncludeBans);
		P_GET_PROPERTY(FIntProperty,Z_Param_reportidMin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCheatingReports(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_timeBegin,Z_Param_timeEnd,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_reportidMin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppList(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppDepotVersions)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppDepotVersions(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppBuilds)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppBuilds(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppBetas)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppBetas(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	void UWebApps::StaticRegisterNativesUWebApps()
	{
		UClass* Class = UWebApps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAppBetas", &UWebApps::execGetAppBetas },
			{ "GetAppBuilds", &UWebApps::execGetAppBuilds },
			{ "GetAppDepotVersions", &UWebApps::execGetAppDepotVersions },
			{ "GetAppList", &UWebApps::execGetAppList },
			{ "GetCheatingReports", &UWebApps::execGetCheatingReports },
			{ "GetPlayersBanned", &UWebApps::execGetPlayersBanned },
			{ "GetServerList", &UWebApps::execGetServerList },
			{ "GetServersAtAddress", &UWebApps::execGetServersAtAddress },
			{ "SetAppBuildLive", &UWebApps::execSetAppBuildLive },
			{ "UpToDateCheck", &UWebApps::execUpToDateCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebApps_GetAppBetas_Statics
	{
		struct WebApps_eventGetAppBetas_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Gets all of the beta branches for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The App ID to get the betas of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "Gets all of the beta branches for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The App ID to get the betas of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppBetas", nullptr, nullptr, sizeof(WebApps_eventGetAppBetas_Parms), Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppBetas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics
	{
		struct WebApps_eventGetAppBuilds_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09*?Gets an applications build history.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The App ID to get the build history of.\n\x09* @param\x09""count\x09\x09The number of builds to retrieve, the default is 10.\n\x09*/" },
		{ "CPP_Default_count", "10" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "?Gets an applications build history.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The App ID to get the build history of.\n@param        count           The number of builds to retrieve, the default is 10." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppBuilds", nullptr, nullptr, sizeof(WebApps_eventGetAppBuilds_Parms), Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppBuilds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics
	{
		struct WebApps_eventGetAppDepotVersions_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Gets all the versions of all the depots for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The App ID to get the depot versions for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "Gets all the versions of all the depots for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The App ID to get the depot versions for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppDepotVersions", nullptr, nullptr, sizeof(WebApps_eventGetAppDepotVersions_Parms), Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppDepotVersions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppList_Statics
	{
		struct WebApps_eventGetAppList_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppList_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetAppList_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Gets the complete list of public apps.\n\x09*\n\x09* @param\x09key\x09\x09Steamworks Web API publisher authentication key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "Gets the complete list of public apps.\n\n@param        key             Steamworks Web API publisher authentication key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppList", nullptr, nullptr, sizeof(WebApps_eventGetAppList_Parms), Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics
	{
		struct WebApps_eventGetCheatingReports_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 timeBegin;
			int32 timeEnd;
			bool bIncludeReports;
			bool bIncludeBans;
			int32 reportidMin;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeBegin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeEnd;
		static void NewProp_bIncludeReports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
		static void NewProp_bIncludeBans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_reportidMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_timeBegin = { "timeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, timeBegin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_timeEnd = { "timeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, timeEnd), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((WebApps_eventGetCheatingReports_Parms*)Obj)->bIncludeReports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebApps_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((WebApps_eventGetCheatingReports_Parms*)Obj)->bIncludeBans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebApps_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_reportidMin = { "reportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, reportidMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_timeBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_timeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_reportidMin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Get a list of cheating reports submitted for this app.\n\x09*\n\x09* Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09""AppID of game\n\x09* @param\x09timeBegin\x09\x09\x09Time range begin\n\x09* @param\x09timeEnd\x09\x09\x09\x09Time range end\n\x09* @param\x09""bIncludeReports\x09\x09include reports that were not bans\n\x09* @param\x09""bIncludeBans\x09\x09include reports that were bans\n\x09* @param\x09reportidMin\x09\x09\x09minimum report id\n\x09*/" },
		{ "CPP_Default_reportidMin", "0" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\nNOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           AppID of game\n@param        timeBegin                       Time range begin\n@param        timeEnd                         Time range end\n@param        bIncludeReports         include reports that were not bans\n@param        bIncludeBans            include reports that were bans\n@param        reportidMin                     minimum report id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetCheatingReports", nullptr, nullptr, sizeof(WebApps_eventGetCheatingReports_Parms), Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetCheatingReports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics
	{
		struct WebApps_eventGetPlayersBanned_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09key\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09""AppID of game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        key             Steamworks Web API publisher authentication key.\n@param        appID           AppID of game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetPlayersBanned", nullptr, nullptr, sizeof(WebApps_eventGetPlayersBanned_Parms), Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetPlayersBanned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetServerList_Statics
	{
		struct WebApps_eventGetServerList_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString filter;
			int32 limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filter;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, filter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""filter\x09\x09Query filter string\n\x09* @param\x09limit\x09\x09Limit number of servers in the response\n\x09*/" },
		{ "CPP_Default_limit", "10" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        filter          Query filter string\n@param        limit           Limit number of servers in the response" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetServerList", nullptr, nullptr, sizeof(WebApps_eventGetServerList_Parms), Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics
	{
		struct WebApps_eventGetServersAtAddress_Parms
		{
			FScriptDelegate callback;
			FString addr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServersAtAddress_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_addr = { "addr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventGetServersAtAddress_Parms, addr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_addr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* @param\x09""addr\x09IP or IP:queryport to list\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "@param        addr    IP or IP:queryport to list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetServersAtAddress", nullptr, nullptr, sizeof(WebApps_eventGetServersAtAddress_Parms), Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetServersAtAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics
	{
		struct WebApps_eventSetAppBuildLive_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 buildID;
			FString betaKey;
			FString description;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buildID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_betaKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_buildID = { "buildID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, buildID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_betaKey = { "betaKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, betaKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_buildID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_betaKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_description,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""AppID of game\n\x09* @param\x09""buildID\x09\x09\x09""BuildID\n\x09* @param\x09""betaKey\x09\x09\x09""beta key, required. Use public for default branch\n\x09* @param\x09""description\x09\x09optional description for this build\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   AppID of game\n@param        buildID                 BuildID\n@param        betaKey                 beta key, required. Use public for default branch\n@param        description             optional description for this build" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "SetAppBuildLive", nullptr, nullptr, sizeof(WebApps_eventSetAppBuildLive_Parms), Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_SetAppBuildLive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics
	{
		struct WebApps_eventUpToDateCheck_Parms
		{
			FScriptDelegate callback;
			int32 appID;
			int32 version;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* @param\x09""appID\x09\x09""AppID of game\n\x09* @param\x09version\x09\x09The installed version of the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "@param        appID           AppID of game\n@param        version         The installed version of the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "UpToDateCheck", nullptr, nullptr, sizeof(WebApps_eventUpToDateCheck_Parms), Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_UpToDateCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebApps_NoRegister()
	{
		return UWebApps::StaticClass();
	}
	struct Z_Construct_UClass_UWebApps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebApps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebApps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebApps_GetAppBetas, "GetAppBetas" }, // 232147309
		{ &Z_Construct_UFunction_UWebApps_GetAppBuilds, "GetAppBuilds" }, // 3569185763
		{ &Z_Construct_UFunction_UWebApps_GetAppDepotVersions, "GetAppDepotVersions" }, // 161647350
		{ &Z_Construct_UFunction_UWebApps_GetAppList, "GetAppList" }, // 807749572
		{ &Z_Construct_UFunction_UWebApps_GetCheatingReports, "GetCheatingReports" }, // 3636773917
		{ &Z_Construct_UFunction_UWebApps_GetPlayersBanned, "GetPlayersBanned" }, // 411200637
		{ &Z_Construct_UFunction_UWebApps_GetServerList, "GetServerList" }, // 3635136879
		{ &Z_Construct_UFunction_UWebApps_GetServersAtAddress, "GetServersAtAddress" }, // 3240712632
		{ &Z_Construct_UFunction_UWebApps_SetAppBuildLive, "SetAppBuildLive" }, // 2150823208
		{ &Z_Construct_UFunction_UWebApps_UpToDateCheck, "UpToDateCheck" }, // 1645518651
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Apps/WebApps.h" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebApps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebApps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebApps_Statics::ClassParams = {
		&UWebApps::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebApps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebApps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebApps, 4164200627);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebApps>()
	{
		return UWebApps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebApps(Z_Construct_UClass_UWebApps, &UWebApps::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebApps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebApps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

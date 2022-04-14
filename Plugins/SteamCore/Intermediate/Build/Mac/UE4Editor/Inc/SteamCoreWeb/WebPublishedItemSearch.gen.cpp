// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedItemSearch/WebPublishedItemSearch.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemSearch() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execResultSetSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_TARRAY(FString,Z_Param_tag);
		P_GET_TARRAY(FString,Z_Param_userTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResultSetSummary(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_startID,Z_Param_bHasAppAdminAccess,Z_Param_fileType,Z_Param_tag,Z_Param_userTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_TARRAY(FString,Z_Param_tag);
		P_GET_TARRAY(FString,Z_Param_userTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByVote(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_startID,Z_Param_count,Z_Param_bHasAppAdminAccess,Z_Param_fileType,Z_Param_tag,Z_Param_userTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByTrend)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_days);
		P_GET_TARRAY(FString,Z_Param_tag);
		P_GET_TARRAY(FString,Z_Param_userTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByTrend(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_startID,Z_Param_count,Z_Param_bHasAppAdminAccess,Z_Param_fileType,Z_Param_days,Z_Param_tag,Z_Param_userTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByPublicationOrder)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_TARRAY(FString,Z_Param_tag);
		P_GET_TARRAY(FString,Z_Param_userTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByPublicationOrder(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_startID,Z_Param_count,Z_Param_bHasAppAdminAccess,Z_Param_fileType,Z_Param_tag,Z_Param_userTag);
		P_NATIVE_END;
	}
	void UWebSteamPublishedItemSearch::StaticRegisterNativesUWebSteamPublishedItemSearch()
	{
		UClass* Class = UWebSteamPublishedItemSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByPublicationOrder", &UWebSteamPublishedItemSearch::execRankedByPublicationOrder },
			{ "RankedByTrend", &UWebSteamPublishedItemSearch::execRankedByTrend },
			{ "RankedByVote", &UWebSteamPublishedItemSearch::execRankedByVote },
			{ "ResultSetSummary", &UWebSteamPublishedItemSearch::execResultSetSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			int32 startID;
			int32 count;
			bool bHasAppAdminAccess;
			int32 fileType;
			TArray<FString> tag;
			TArray<FString> userTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_tag_Inner = { "tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_userTag_Inner = { "userTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_userTag = { "userTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, userTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_userTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_userTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "tag,usertag" },
		{ "Category", "SteamCoreWeb|SteamPublishedItemSearch" },
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09startID\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""fileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09userTag\x09\x09\x09\x09\x09""A user specific tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ToolTip", "Ranked by Publication Order\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        appID                                   appID of product\n@param        startID                                 Starting index in the result set(0 based)\n@param        count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        fileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        tag                                             Tag to filter result set\n@param        userTag                                 A user specific tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByPublicationOrder", nullptr, nullptr, sizeof(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByTrend_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			int32 startID;
			int32 count;
			bool bHasAppAdminAccess;
			int32 fileType;
			int32 days;
			TArray<FString> tag;
			TArray<FString> userTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_days;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByTrend_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByTrend_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_days = { "days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, days), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_tag_Inner = { "tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_userTag_Inner = { "userTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_userTag = { "userTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, userTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_userTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_userTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "tag,usertag" },
		{ "Category", "SteamCoreWeb|SteamPublishedItemSearch" },
		{ "Comment", "/**\n\x09* Ranked by Trend\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09startID\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""fileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09""days\x09\x09\x09\x09\x09Number of days for the trend period, including today\n\x09* @param\x09tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09userTag\x09\x09\x09\x09\x09""A user specific tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ToolTip", "Ranked by Trend\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        appID                                   appID of product\n@param        startID                                 Starting index in the result set(0 based)\n@param        count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        fileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        days                                    Number of days for the trend period, including today\n@param        tag                                             Tag to filter result set\n@param        userTag                                 A user specific tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByTrend", nullptr, nullptr, sizeof(WebSteamPublishedItemSearch_eventRankedByTrend_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByVote_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			int32 startID;
			int32 count;
			bool bHasAppAdminAccess;
			int32 fileType;
			TArray<FString> tag;
			TArray<FString> userTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByVote_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByVote_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_tag_Inner = { "tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_userTag_Inner = { "userTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_userTag = { "userTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, userTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_userTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_userTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "tag,usertag" },
		{ "Category", "SteamCoreWeb|SteamPublishedItemSearch" },
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09startID\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""fileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09userTag\x09\x09\x09\x09\x09""A user specific tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ToolTip", "Ranked by Publication Order\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        appID                                   appID of product\n@param        startID                                 Starting index in the result set(0 based)\n@param        count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        fileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        tag                                             Tag to filter result set\n@param        userTag                                 A user specific tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByVote", nullptr, nullptr, sizeof(WebSteamPublishedItemSearch_eventRankedByVote_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics
	{
		struct WebSteamPublishedItemSearch_eventResultSetSummary_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			int32 startID;
			bool bHasAppAdminAccess;
			int32 fileType;
			TArray<FString> tag;
			TArray<FString> userTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventResultSetSummary_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventResultSetSummary_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_tag_Inner = { "tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_userTag_Inner = { "userTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_userTag = { "userTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, userTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_userTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_userTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "tag,usertag" },
		{ "Category", "SteamCoreWeb|SteamPublishedItemSearch" },
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09startID\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""fileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09userTag\x09\x09\x09\x09\x09""A user specific tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ToolTip", "Ranked by Publication Order\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        appID                                   appID of product\n@param        startID                                 Starting index in the result set(0 based)\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        fileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        tag                                             Tag to filter result set\n@param        userTag                                 A user specific tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "ResultSetSummary", nullptr, nullptr, sizeof(WebSteamPublishedItemSearch_eventResultSetSummary_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch_NoRegister()
	{
		return UWebSteamPublishedItemSearch::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder, "RankedByPublicationOrder" }, // 948086773
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend, "RankedByTrend" }, // 2186547301
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote, "RankedByVote" }, // 3716154242
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary, "ResultSetSummary" }, // 829272014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearch.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamPublishedItemSearch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::ClassParams = {
		&UWebSteamPublishedItemSearch::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamPublishedItemSearch, 368875091);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamPublishedItemSearch>()
	{
		return UWebSteamPublishedItemSearch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamPublishedItemSearch(Z_Construct_UClass_UWebSteamPublishedItemSearch, &UWebSteamPublishedItemSearch::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamPublishedItemSearch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamPublishedItemSearch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

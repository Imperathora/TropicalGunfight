// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedFileService/WebPublishedFileService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedFileService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedFileService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedFileService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateTags)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_publishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_addTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_removeTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTags(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_publishedFileID,Z_Param_appID,Z_Param_addTags,Z_Param_removeTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateIncompatibleStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_publishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_UBOOL(Z_Param_bIncompatible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIncompatibleStatus(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_publishedFileID,Z_Param_appID,Z_Param_bIncompatible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateBanStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_publishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_UBOOL(Z_Param_bBanned);
		P_GET_PROPERTY(FStrProperty,Z_Param_reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBanStatus(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_publishedFileID,Z_Param_appID,Z_Param_bBanned,Z_Param_reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execSetDeveloperMetadata)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_publishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_metaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeveloperMetadata(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_publishedFileID,Z_Param_appID,Z_Param_metaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execQueryFiles)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_queryType);
		P_GET_PROPERTY(FIntProperty,Z_Param_page);
		P_GET_PROPERTY(FStrProperty,Z_Param_cursor);
		P_GET_PROPERTY(FIntProperty,Z_Param_numPerPage);
		P_GET_PROPERTY(FIntProperty,Z_Param_creatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_requiredTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_excludedTags);
		P_GET_UBOOL(Z_Param_bMatchAllTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_requiredFlags);
		P_GET_PROPERTY(FStrProperty,Z_Param_omittedFlags);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchText);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_childPublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_days);
		P_GET_UBOOL(Z_Param_bIncludeRecentVotesOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_cacheMaxAgeSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_language);
		P_GET_PROPERTY(FStrProperty,Z_Param_requiredKvTags);
		P_GET_UBOOL(Z_Param_bTotalOnly);
		P_GET_UBOOL(Z_Param_bIDsOnly);
		P_GET_UBOOL(Z_Param_bReturnVoteData);
		P_GET_UBOOL(Z_Param_bReturnTags);
		P_GET_UBOOL(Z_Param_bReturnKvTags);
		P_GET_UBOOL(Z_Param_bReturnPreviews);
		P_GET_UBOOL(Z_Param_bReturnChildren);
		P_GET_UBOOL(Z_Param_bReturnShortDescription);
		P_GET_UBOOL(Z_Param_bReturnForSaleData);
		P_GET_UBOOL(Z_Param_bReturnMetaData);
		P_GET_PROPERTY(FIntProperty,Z_Param_returnPlaytimeStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryFiles(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_queryType,Z_Param_page,Z_Param_cursor,Z_Param_numPerPage,Z_Param_creatorAppID,Z_Param_appID,Z_Param_requiredTags,Z_Param_excludedTags,Z_Param_bMatchAllTags,Z_Param_requiredFlags,Z_Param_omittedFlags,Z_Param_searchText,Z_Param_fileType,Z_Param_childPublishedFileID,Z_Param_days,Z_Param_bIncludeRecentVotesOnly,Z_Param_cacheMaxAgeSeconds,Z_Param_language,Z_Param_requiredKvTags,Z_Param_bTotalOnly,Z_Param_bIDsOnly,Z_Param_bReturnVoteData,Z_Param_bReturnTags,Z_Param_bReturnKvTags,Z_Param_bReturnPreviews,Z_Param_bReturnChildren,Z_Param_bReturnShortDescription,Z_Param_bReturnForSaleData,Z_Param_bReturnMetaData,Z_Param_returnPlaytimeStats);
		P_NATIVE_END;
	}
	void UWebPublishedFileService::StaticRegisterNativesUWebPublishedFileService()
	{
		UClass* Class = UWebPublishedFileService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryFiles", &UWebPublishedFileService::execQueryFiles },
			{ "SetDeveloperMetadata", &UWebPublishedFileService::execSetDeveloperMetadata },
			{ "UpdateBanStatus", &UWebPublishedFileService::execUpdateBanStatus },
			{ "UpdateIncompatibleStatus", &UWebPublishedFileService::execUpdateIncompatibleStatus },
			{ "UpdateTags", &UWebPublishedFileService::execUpdateTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics
	{
		struct WebPublishedFileService_eventQueryFiles_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 queryType;
			int32 page;
			FString cursor;
			int32 numPerPage;
			int32 creatorAppID;
			int32 appID;
			FString requiredTags;
			FString excludedTags;
			bool bMatchAllTags;
			FString requiredFlags;
			FString omittedFlags;
			FString searchText;
			int32 fileType;
			FString childPublishedFileID;
			int32 days;
			bool bIncludeRecentVotesOnly;
			int32 cacheMaxAgeSeconds;
			int32 language;
			FString requiredKvTags;
			bool bTotalOnly;
			bool bIDsOnly;
			bool bReturnVoteData;
			bool bReturnTags;
			bool bReturnKvTags;
			bool bReturnPreviews;
			bool bReturnChildren;
			bool bReturnShortDescription;
			bool bReturnForSaleData;
			bool bReturnMetaData;
			int32 returnPlaytimeStats;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_queryType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_page;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cursor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numPerPage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_creatorAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requiredTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_excludedTags;
		static void NewProp_bMatchAllTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchAllTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requiredFlags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_omittedFlags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_childPublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_days;
		static void NewProp_bIncludeRecentVotesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeRecentVotesOnly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cacheMaxAgeSeconds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requiredKvTags;
		static void NewProp_bTotalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTotalOnly;
		static void NewProp_bIDsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIDsOnly;
		static void NewProp_bReturnVoteData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnVoteData;
		static void NewProp_bReturnTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnTags;
		static void NewProp_bReturnKvTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnKvTags;
		static void NewProp_bReturnPreviews_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnPreviews;
		static void NewProp_bReturnChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
		static void NewProp_bReturnShortDescription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnShortDescription;
		static void NewProp_bReturnForSaleData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnForSaleData;
		static void NewProp_bReturnMetaData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnMetaData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_returnPlaytimeStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_queryType = { "queryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, queryType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_page = { "page", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, page), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_cursor = { "cursor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, cursor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_numPerPage = { "numPerPage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, numPerPage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_creatorAppID = { "creatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, creatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredTags = { "requiredTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, requiredTags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_excludedTags = { "excludedTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, excludedTags), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bMatchAllTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags = { "bMatchAllTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredFlags = { "requiredFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, requiredFlags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_omittedFlags = { "omittedFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, omittedFlags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_searchText = { "searchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, searchText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_childPublishedFileID = { "childPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, childPublishedFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_days = { "days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bIncludeRecentVotesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly = { "bIncludeRecentVotesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_cacheMaxAgeSeconds = { "cacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, cacheMaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredKvTags = { "requiredKvTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, requiredKvTags), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bTotalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly = { "bTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bIDsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly = { "bIDsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnVoteData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData = { "bReturnVoteData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags = { "bReturnTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnKvTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags = { "bReturnKvTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnPreviews = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews = { "bReturnPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnShortDescription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription = { "bReturnShortDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnForSaleData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData = { "bReturnForSaleData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetaData_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnMetaData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetaData = { "bReturnMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetaData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_returnPlaytimeStats = { "returnPlaytimeStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, returnPlaytimeStats), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_queryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_page,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_cursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_numPerPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_creatorAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_excludedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_omittedFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_searchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_childPublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_cacheMaxAgeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredKvTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_returnPlaytimeStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Performs a search query for published files\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09queryType\x09\x09\x09\x09\x09""enumeration EPublishedFileQueryType in clientenums.h\n\x09* @param\x09page\x09\x09\x09\x09\x09\x09""Current page. Currently there is an upper limit of 1000.\n\x09* @param\x09""cursor\x09\x09\x09\x09\x09\x09""Cursor to paginate through the results (set to '*' for the first request). Prefer this over using the page parameter, as it will allow you to do deep pagination. When used, the page parameter will be ignored. Use the \"next_cursor\" value returned in the response to set up the next query to get the next set of results.\n\x09* @param\x09numPerPage\x09\x09\x09\x09\x09(Optional) The number of results, per page to return.\n\x09* @param\x09""creatorAppID\x09\x09\x09\x09""App that created the files\n\x09* @param\x09""appID\x09\x09\x09\x09\x09\x09""App that consumes the files\n\x09* @param\x09requiredTags\x09\x09\x09\x09Tags to match on. See match_all_tags parameter below\n\x09* @param\x09""excludedTags\x09\x09\x09\x09(Optional) Tags that must NOT be present on a published file to satisfy the query.\n\x09* @param\x09""bMatchAllTags\x09\x09\x09\x09If true, then items must have all the tags specified, otherwise they must have at least one of the tags.\n\x09* @param\x09requiredFlags\x09\x09\x09\x09Required flags that must be set on any returned items\n\x09* @param\x09omittedFlags\x09\x09\x09\x09""Flags that must not be set on any returned items\n\x09* @param\x09searchText\x09\x09\x09\x09\x09Text to match in the item's title or description\n\x09* @param\x09""fileType\x09\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType\n\x09* @param\x09""childPublishedFileID\x09\x09""Find all items that reference the given item.\n\x09* @param\x09""days\x09\x09\x09\x09\x09\x09If query_type is k_PublishedFileQueryType_RankedByTrend, then this is the number of days to get votes for [1,7].\n\x09* @param\x09""bIncludeRecentVotesOnly\x09\x09If query_type is k_PublishedFileQueryType_RankedByTrend, then limit result set just to items that have votes within the day range given\n\x09* @param\x09""cacheMaxAgeSeconds\x09\x09\x09""Allow stale data to be returned for the specified number of seconds.\n\x09* @param\x09language\x09\x09\x09\x09\x09Language to search in and also what gets returned. Defaults to English.\n\x09* @param\x09requiredKvTags\x09\x09\x09\x09Required key-value tags to match on.\n\x09* @param\x09""bTotalOnly\x09\x09\x09\x09\x09(Optional) If true, only return the total number of files that satisfy this query.\n\x09* @param\x09""bIDsOnly\x09\x09\x09\x09\x09(Optional) If true, only return the published file ids of files that satisfy this query.\n\x09* @param\x09""bReturnVoteData\x09\x09\x09\x09Return vote data\n\x09* @param\x09""bReturnTags\x09\x09\x09\x09\x09Return tags in the file details\n\x09* @param\x09""bReturnKvTags\x09\x09\x09\x09Return key-value tags in the file details\n\x09* @param\x09""bReturnPreviews\x09\x09\x09\x09Return preview image and video details in the file details\n\x09* @param\x09""bReturnChildren\x09\x09\x09\x09Return child item ids in the file details\n\x09* @param\x09""bReturnShortDescription\x09\x09Populate the short_description field instead of file_description\n\x09* @param\x09""bReturnForSaleData\x09\x09\x09Return pricing information, if applicable\n\x09* @param\x09""bReturnMetaData\x09\x09\x09\x09Populate the metadata\n\x09* @param\x09returnPlaytimeStats\x09\x09\x09Return playtime stats for the specified number of days before today.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Performs a search query for published files\n\n@param        key                                                     Steamworks Web API publisher authentication key.\n@param        queryType                                       enumeration EPublishedFileQueryType in clientenums.h\n@param        page                                            Current page. Currently there is an upper limit of 1000.\n@param        cursor                                          Cursor to paginate through the results (set to '*' for the first request). Prefer this over using the page parameter, as it will allow you to do deep pagination. When used, the page parameter will be ignored. Use the \"next_cursor\" value returned in the response to set up the next query to get the next set of results.\n@param        numPerPage                                      (Optional) The number of results, per page to return.\n@param        creatorAppID                            App that created the files\n@param        appID                                           App that consumes the files\n@param        requiredTags                            Tags to match on. See match_all_tags parameter below\n@param        excludedTags                            (Optional) Tags that must NOT be present on a published file to satisfy the query.\n@param        bMatchAllTags                           If true, then items must have all the tags specified, otherwise they must have at least one of the tags.\n@param        requiredFlags                           Required flags that must be set on any returned items\n@param        omittedFlags                            Flags that must not be set on any returned items\n@param        searchText                                      Text to match in the item's title or description\n@param        fileType                                        EPublishedFileInfoMatchingFileType\n@param        childPublishedFileID            Find all items that reference the given item.\n@param        days                                            If query_type is k_PublishedFileQueryType_RankedByTrend, then this is the number of days to get votes for [1,7].\n@param        bIncludeRecentVotesOnly         If query_type is k_PublishedFileQueryType_RankedByTrend, then limit result set just to items that have votes within the day range given\n@param        cacheMaxAgeSeconds                      Allow stale data to be returned for the specified number of seconds.\n@param        language                                        Language to search in and also what gets returned. Defaults to English.\n@param        requiredKvTags                          Required key-value tags to match on.\n@param        bTotalOnly                                      (Optional) If true, only return the total number of files that satisfy this query.\n@param        bIDsOnly                                        (Optional) If true, only return the published file ids of files that satisfy this query.\n@param        bReturnVoteData                         Return vote data\n@param        bReturnTags                                     Return tags in the file details\n@param        bReturnKvTags                           Return key-value tags in the file details\n@param        bReturnPreviews                         Return preview image and video details in the file details\n@param        bReturnChildren                         Return child item ids in the file details\n@param        bReturnShortDescription         Populate the short_description field instead of file_description\n@param        bReturnForSaleData                      Return pricing information, if applicable\n@param        bReturnMetaData                         Populate the metadata\n@param        returnPlaytimeStats                     Return playtime stats for the specified number of days before today." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "QueryFiles", nullptr, nullptr, sizeof(WebPublishedFileService_eventQueryFiles_Parms), Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_QueryFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics
	{
		struct WebPublishedFileService_eventSetDeveloperMetadata_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString publishedFileID;
			int32 appID;
			FString metaData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_metaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, publishedFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_metaData = { "metaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, metaData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_metaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Sets the metadata for a developer on the published file\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09publishedFileID\x09\x09\n\x09* @param\x09""appID\x09\x09\n\x09* @param\x09metaData\x09\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Sets the metadata for a developer on the published file\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        publishedFileID\n@param        appID\n@param        metaData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "SetDeveloperMetadata", nullptr, nullptr, sizeof(WebPublishedFileService_eventSetDeveloperMetadata_Parms), Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics
	{
		struct WebPublishedFileService_eventUpdateBanStatus_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString publishedFileID;
			int32 appID;
			bool bBanned;
			FString reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static void NewProp_bBanned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBanned;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, publishedFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventUpdateBanStatus_Parms*)Obj)->bBanned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventUpdateBanStatus_Parms), &Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_reason = { "reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, reason), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Updates the ban status on the published file\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09publishedFileID\n\x09* @param\x09""appID\n\x09* @param\x09""bBanned\n\x09* @param\x09reason\x09\x09\x09\x09Reason why the item was banned. Only visible to admins.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Updates the ban status on the published file\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        publishedFileID\n@param        appID\n@param        bBanned\n@param        reason                          Reason why the item was banned. Only visible to admins." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateBanStatus", nullptr, nullptr, sizeof(WebPublishedFileService_eventUpdateBanStatus_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics
	{
		struct WebPublishedFileService_eventUpdateIncompatibleStatus_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString publishedFileID;
			int32 appID;
			bool bIncompatible;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static void NewProp_bIncompatible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncompatible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, publishedFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventUpdateIncompatibleStatus_Parms*)Obj)->bIncompatible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible = { "bIncompatible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms), &Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Updates the incompatible status on the published file. \"Incompatible\" items are hidden from community hubs and user profiles, but can still be accessed by a direct link.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09publishedFileID\n\x09* @param\x09""appID\n\x09* @param\x09""bIncompatible\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Updates the incompatible status on the published file. \"Incompatible\" items are hidden from community hubs and user profiles, but can still be accessed by a direct link.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        publishedFileID\n@param        appID\n@param        bIncompatible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateIncompatibleStatus", nullptr, nullptr, sizeof(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics
	{
		struct WebPublishedFileService_eventUpdateTags_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString publishedFileID;
			int32 appID;
			FString addTags;
			FString removeTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_removeTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, publishedFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_addTags = { "addTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, addTags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_removeTags = { "removeTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, removeTags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_addTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_removeTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PublishedFileService" },
		{ "Comment", "/**\n\x09* Updates tags on the published file. Existing tags will not be removed unless they are specified in the remove_tags parameter.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09publishedFileID\n\x09* @param\x09""appID\n\x09* @param\x09""addTags\n\x09* @param\x09removeTags\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
		{ "ToolTip", "Updates tags on the published file. Existing tags will not be removed unless they are specified in the remove_tags parameter.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        publishedFileID\n@param        appID\n@param        addTags\n@param        removeTags" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateTags", nullptr, nullptr, sizeof(WebPublishedFileService_eventUpdateTags_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebPublishedFileService_NoRegister()
	{
		return UWebPublishedFileService::StaticClass();
	}
	struct Z_Construct_UClass_UWebPublishedFileService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebPublishedFileService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebPublishedFileService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles, "QueryFiles" }, // 2204362110
		{ &Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata, "SetDeveloperMetadata" }, // 4055320641
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus, "UpdateBanStatus" }, // 3744309989
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus, "UpdateIncompatibleStatus" }, // 3937035734
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateTags, "UpdateTags" }, // 3729572699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublishedFileService/WebPublishedFileService.h" },
		{ "ModuleRelativePath", "Public/PublishedFileService/WebPublishedFileService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebPublishedFileService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPublishedFileService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebPublishedFileService_Statics::ClassParams = {
		&UWebPublishedFileService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebPublishedFileService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebPublishedFileService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebPublishedFileService, 2765517555);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebPublishedFileService>()
	{
		return UWebPublishedFileService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebPublishedFileService(Z_Construct_UClass_UWebPublishedFileService, &UWebPublishedFileService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebPublishedFileService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPublishedFileService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamRemoteStorage/WebRemoteStorage.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebRemoteStorage() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebRemoteStorage();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebRemoteStorage::execUnsubscribePublishedFile)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribePublishedFile(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execSubscribePublishedFile)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribePublishedFile(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execSetUGCUsedByGC)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_UBOOL(Z_Param_bUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUGCUsedByGC(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_UGCID,Z_Param_appID,Z_Param_bUsed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execGetUGCFileDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUGCFileDetails(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_UGCID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execGetPublishedFileDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublishedFileDetails(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execGetCollectionDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_TARRAY(FString,Z_Param_publishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCollectionDetails(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_publishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execEnumerateUserSubscribedFiles)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_listType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateUserSubscribedFiles(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_listType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execEnumerateUserPublishedFiles)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateUserPublishedFiles(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	void UWebRemoteStorage::StaticRegisterNativesUWebRemoteStorage()
	{
		UClass* Class = UWebRemoteStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateUserPublishedFiles", &UWebRemoteStorage::execEnumerateUserPublishedFiles },
			{ "EnumerateUserSubscribedFiles", &UWebRemoteStorage::execEnumerateUserSubscribedFiles },
			{ "GetCollectionDetails", &UWebRemoteStorage::execGetCollectionDetails },
			{ "GetPublishedFileDetails", &UWebRemoteStorage::execGetPublishedFileDetails },
			{ "GetUGCFileDetails", &UWebRemoteStorage::execGetUGCFileDetails },
			{ "SetUGCUsedByGC", &UWebRemoteStorage::execSetUGCUsedByGC },
			{ "SubscribePublishedFile", &UWebRemoteStorage::execSubscribePublishedFile },
			{ "UnsubscribePublishedFile", &UWebRemoteStorage::execUnsubscribePublishedFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics
	{
		struct WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Enumerate User Published Files\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09""appID of product\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Enumerate User Published Files\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         SteamID of user\n@param        appID           appID of product" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "EnumerateUserPublishedFiles", nullptr, nullptr, sizeof(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms), Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics
	{
		struct WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			int32 listType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_listType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_listType = { "listType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, listType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_listType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Enumerate User Subscribed Files\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09""appID of product\n\x09* @param\x09listType\x09""EUCMListType\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Enumerate User Subscribed Files\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID         SteamID of user\n@param        appID           appID of product\n@param        listType        EUCMListType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "EnumerateUserSubscribedFiles", nullptr, nullptr, sizeof(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms), Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics
	{
		struct WebRemoteStorage_eventGetCollectionDetails_Parms
		{
			FScriptDelegate callback;
			TArray<FString> publishedFileIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_publishedFileIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetCollectionDetails_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_publishedFileIDs_Inner = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_publishedFileIDs = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetCollectionDetails_Parms, publishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_publishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_publishedFileIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09publishedFileIDs\x09\x09""collection ids to get the details for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get Collection Details\n\n@param        publishedFileIDs                collection ids to get the details for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetCollectionDetails", nullptr, nullptr, sizeof(WebRemoteStorage_eventGetCollectionDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics
	{
		struct WebRemoteStorage_eventGetPublishedFileDetails_Parms
		{
			FScriptDelegate callback;
			FString publishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetPublishedFileDetails_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetPublishedFileDetails_Parms, publishedFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_publishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get Collection Details\n\x09*\n\x09* @param\x09publishedFileIDs\x09\x09""collection ids to get the details for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get Collection Details\n\n@param        publishedFileIDs                collection ids to get the details for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetPublishedFileDetails", nullptr, nullptr, sizeof(WebRemoteStorage_eventGetPublishedFileDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics
	{
		struct WebRemoteStorage_eventGetUGCFileDetails_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			FString UGCID;
			int32 appID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, UGCID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Get UGC File Details\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""appID\x09\x09\x09""appID of product\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Get UGC File Details\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        steamID                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        appID                   appID of product" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetUGCFileDetails", nullptr, nullptr, sizeof(WebRemoteStorage_eventGetUGCFileDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics
	{
		struct WebRemoteStorage_eventSetUGCUsedByGC_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			FString UGCID;
			int32 appID;
			bool bUsed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static void NewProp_bUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, UGCID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed_SetBit(void* Obj)
	{
		((WebRemoteStorage_eventSetUGCUsedByGC_Parms*)Obj)->bUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed = { "bUsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebRemoteStorage_eventSetUGCUsedByGC_Parms), &Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Set UGC Used By GC\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09* @param\x09""appID\x09\x09\x09""appID of product\n\x09* @param\x09""bUsed\x09\x09\x09New state of flag\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Set UGC Used By GC\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 If specified, only returns details if the file is owned by the SteamID specified\n@param        UGCID                   ID of UGC file to get info for\n@param        appID                   appID of product\n@param        bUsed                   New state of flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "SetUGCUsedByGC", nullptr, nullptr, sizeof(WebRemoteStorage_eventSetUGCUsedByGC_Parms), Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics
	{
		struct WebRemoteStorage_eventSubscribePublishedFile_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString publishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, publishedFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_publishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Subscribe Published File\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09publishedFileID\x09\x09\x09published file id to subscribe to\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Subscribe Published File\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamID                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        appID                                   appID of product\n@param        publishedFileID                 published file id to subscribe to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "SubscribePublishedFile", nullptr, nullptr, sizeof(WebRemoteStorage_eventSubscribePublishedFile_Parms), Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics
	{
		struct WebRemoteStorage_eventUnsubscribePublishedFile_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			FString publishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, publishedFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_publishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|RemoteStorage" },
		{ "Comment", "/**\n\x09* Unsubscribe Published File\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09publishedFileID\x09\x09\x09published file id to unsubscribe from\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ToolTip", "Unsubscribe Published File\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamID                                 If specified, only returns details if the file is owned by the SteamID specified\n@param        appID                                   appID of product\n@param        publishedFileID                 published file id to unsubscribe from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "UnsubscribePublishedFile", nullptr, nullptr, sizeof(WebRemoteStorage_eventUnsubscribePublishedFile_Parms), Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister()
	{
		return UWebRemoteStorage::StaticClass();
	}
	struct Z_Construct_UClass_UWebRemoteStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebRemoteStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebRemoteStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles, "EnumerateUserPublishedFiles" }, // 3812325425
		{ &Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles, "EnumerateUserSubscribedFiles" }, // 2732676764
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails, "GetCollectionDetails" }, // 2878403883
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails, "GetPublishedFileDetails" }, // 337133307
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails, "GetUGCFileDetails" }, // 190499915
		{ &Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC, "SetUGCUsedByGC" }, // 3780739993
		{ &Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile, "SubscribePublishedFile" }, // 2419611614
		{ &Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile, "UnsubscribePublishedFile" }, // 3279043643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorage.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebRemoteStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebRemoteStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebRemoteStorage_Statics::ClassParams = {
		&UWebRemoteStorage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebRemoteStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebRemoteStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebRemoteStorage, 1828013874);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebRemoteStorage>()
	{
		return UWebRemoteStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebRemoteStorage(Z_Construct_UClass_UWebRemoteStorage, &UWebRemoteStorage::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebRemoteStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebRemoteStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

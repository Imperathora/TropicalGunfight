// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/GameInventory/WebGameInventory.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebGameInventory() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameInventory_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameInventory();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebGameInventory::execUpdateItemDefs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemDefs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execSupportGetAssetHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_assetID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SupportGetAssetHistory(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_assetID,Z_Param_contextID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execHistoryExecuteCommands)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_GET_PROPERTY(FIntProperty,Z_Param_actorID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HistoryExecuteCommands(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_contextID,Z_Param_actorID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execGetUserHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_endTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserHistory(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_contextID,Z_Param_startTime,Z_Param_endTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execGetHistoryCommandDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_command);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_GET_PROPERTY(FStrProperty,Z_Param_arguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHistoryCommandDetails(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_command,Z_Param_contextID,Z_Param_arguments);
		P_NATIVE_END;
	}
	void UWebGameInventory::StaticRegisterNativesUWebGameInventory()
	{
		UClass* Class = UWebGameInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHistoryCommandDetails", &UWebGameInventory::execGetHistoryCommandDetails },
			{ "GetUserHistory", &UWebGameInventory::execGetUserHistory },
			{ "HistoryExecuteCommands", &UWebGameInventory::execHistoryExecuteCommands },
			{ "SupportGetAssetHistory", &UWebGameInventory::execSupportGetAssetHistory },
			{ "UpdateItemDefs", &UWebGameInventory::execUpdateItemDefs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics
	{
		struct WebGameInventory_eventGetHistoryCommandDetails_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			FString command;
			FString contextID;
			FString arguments;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_command;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_arguments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_command = { "command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, command), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, contextID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_arguments = { "arguments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, arguments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_arguments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* Gets a history of commands\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""appid of game\n\x09* @param\x09steamID\x09\x09\x09The steam ID of the account to operate on\n\x09* @param\x09""command\x09\x09\x09The command to run on that asset\n\x09* @param\x09""contextID\x09\x09The context to fetch history for\n\x09* @param\x09""arguments\x09\x09The arguments that were provided with the command in the first place\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "Gets a history of commands\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   appid of game\n@param        steamID                 The steam ID of the account to operate on\n@param        command                 The command to run on that asset\n@param        contextID               The context to fetch history for\n@param        arguments               The arguments that were provided with the command in the first place" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "GetHistoryCommandDetails", nullptr, nullptr, sizeof(WebGameInventory_eventGetHistoryCommandDetails_Parms), Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics
	{
		struct WebGameInventory_eventGetUserHistory_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			FString contextID;
			int32 startTime;
			int32 endTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, contextID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_startTime = { "startTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, startTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, endTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_startTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_endTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""appid of game\n\x09* @param\x09steamID\x09\x09\x09The Steam ID to fetch history for\n\x09* @param\x09""contextID\x09\x09The context to fetch history for\n\x09* @param\x09startTime\x09\x09Start time of the history range to collect\n\x09* @param\x09""endTime\x09\x09\x09""End time of the history range to collect\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "Gets a history of user\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   appid of game\n@param        steamID                 The Steam ID to fetch history for\n@param        contextID               The context to fetch history for\n@param        startTime               Start time of the history range to collect\n@param        endTime                 End time of the history range to collect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "GetUserHistory", nullptr, nullptr, sizeof(WebGameInventory_eventGetUserHistory_Parms), Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_GetUserHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics
	{
		struct WebGameInventory_eventHistoryExecuteCommands_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			FString contextID;
			int32 actorID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_actorID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, contextID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_actorID = { "actorID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, actorID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_actorID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""appid of game\n\x09* @param\x09steamID\x09\x09\x09The Steam ID to fetch history for\n\x09* @param\x09""contextID\x09\x09The context to fetch history for\n\x09* @param\x09""actorID\x09\x09\x09""A unique 32 bit ID for the support person executing the command\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "Gets a history of user\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   appid of game\n@param        steamID                 The Steam ID to fetch history for\n@param        contextID               The context to fetch history for\n@param        actorID                 A unique 32 bit ID for the support person executing the command" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "HistoryExecuteCommands", nullptr, nullptr, sizeof(WebGameInventory_eventHistoryExecuteCommands_Parms), Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics
	{
		struct WebGameInventory_eventSupportGetAssetHistory_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString assetID;
			FString contextID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_assetID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_assetID = { "assetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, assetID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, contextID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_assetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_contextID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""appid of game\n\x09* @param\x09""assetID\x09\x09\x09The asset ID to operate on\n\x09* @param\x09""contextID\x09\x09The context to fetch history for\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "Gets a history of user\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   appid of game\n@param        assetID                 The asset ID to operate on\n@param        contextID               The context to fetch history for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "SupportGetAssetHistory", nullptr, nullptr, sizeof(WebGameInventory_eventSupportGetAssetHistory_Parms), Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* FUNCTION NOT SUPPORTED\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "FUNCTION NOT SUPPORTED" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "UpdateItemDefs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebGameInventory_NoRegister()
	{
		return UWebGameInventory::StaticClass();
	}
	struct Z_Construct_UClass_UWebGameInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebGameInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebGameInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails, "GetHistoryCommandDetails" }, // 1323286188
		{ &Z_Construct_UFunction_UWebGameInventory_GetUserHistory, "GetUserHistory" }, // 2710262220
		{ &Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands, "HistoryExecuteCommands" }, // 1658873307
		{ &Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory, "SupportGetAssetHistory" }, // 2658176932
		{ &Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs, "UpdateItemDefs" }, // 1392681784
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameInventory/WebGameInventory.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebGameInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebGameInventory_Statics::ClassParams = {
		&UWebGameInventory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebGameInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebGameInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebGameInventory, 3832109916);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebGameInventory>()
	{
		return UWebGameInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebGameInventory(Z_Construct_UClass_UWebGameInventory, &UWebGameInventory::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebGameInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

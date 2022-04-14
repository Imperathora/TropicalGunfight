// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/LobbyMatchmakingService/WebLobbyMatchmakingService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebLobbyMatchmakingService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLobbyMatchmakingService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType();
// End Cross Module References
	DEFINE_FUNCTION(UWebLobbyMatchmakingService::execRemoveUserFromLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDToRemove);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUserFromLobby(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamIDToRemove,Z_Param_steamIDLobby,Z_Param_inputJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLobbyMatchmakingService::execCreateLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxMembers);
		P_GET_ENUM(ESteamCoreWebLobbyType,Z_Param_lobbyType);
		P_GET_PROPERTY(FStrProperty,Z_Param_lobbyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputJson);
		P_GET_TARRAY(FString,Z_Param_steamIDInvitedMembers);
		P_GET_PROPERTY(FStrProperty,Z_Param_lobbyMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateLobby(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_maxMembers,ESteamCoreWebLobbyType(Z_Param_lobbyType),Z_Param_lobbyName,Z_Param_inputJson,Z_Param_steamIDInvitedMembers,Z_Param_lobbyMetaData);
		P_NATIVE_END;
	}
	void UWebLobbyMatchmakingService::StaticRegisterNativesUWebLobbyMatchmakingService()
	{
		UClass* Class = UWebLobbyMatchmakingService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLobby", &UWebLobbyMatchmakingService::execCreateLobby },
			{ "RemoveUserFromLobby", &UWebLobbyMatchmakingService::execRemoveUserFromLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics
	{
		struct WebLobbyMatchmakingService_eventCreateLobby_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 maxMembers;
			ESteamCoreWebLobbyType lobbyType;
			FString lobbyName;
			FString inputJson;
			TArray<FString> steamIDInvitedMembers;
			FString lobbyMetaData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxMembers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lobbyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lobbyType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lobbyName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDInvitedMembers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_steamIDInvitedMembers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lobbyMetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_maxMembers = { "maxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, maxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyType = { "lobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, lobbyType), Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyName = { "lobbyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, lobbyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_inputJson = { "inputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, inputJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_steamIDInvitedMembers_Inner = { "steamIDInvitedMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_steamIDInvitedMembers = { "steamIDInvitedMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, steamIDInvitedMembers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyMetaData = { "lobbyMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, lobbyMetaData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_maxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_inputJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_steamIDInvitedMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_steamIDInvitedMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyMetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|LobbyMatchmakingService" },
		{ "Comment", "/**\n\x09* When using the CreateLobby WebAPI, you'll probably want to set lobby_type to 4 (k_ELobbyTypePrivateUnique). \n\x09* This lobby type is a private, unique lobby that does not get deleted when emptied, and only one will exist per unique appid/lobby_name.\n\x09* A private unique lobby can only be created by this WebAPI call. But you can also use CreateLobby to generate the more traditional and ephemeral lobbies when no lobby_name is used.\n\x09*\n\x09* Steamid_invited_members will be a json array of all the steamIDs that should be currently allowed into the lobby. \n\x09* You can update the list of members by calling CreateLobby with the same lobby_name and new complete set of steamIDs.\n\x09* Any steamIDs that were previously in the lobby and not included in the new call will be removed from the lobby.\n\x09* Lobby_metadata is completely optional, but can be used to send general lobby data that needs to be communicated to users in the client.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API user authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The ID of the application associated with the lobby.\n\x09* @param\x09maxMembers\x09\x09\x09\x09Maximum number of members for this lobby.\n\x09* @param\x09lobbyType\x09\x09\x09\x09""ESteamCoreWebLobbyType - The type and visibility of this lobby.\n\x09* @param\x09lobbyName\x09\x09\x09\x09Unique lobby name if lobby_type = 4. Find lobby with this name if it exists.\n\x09* @param\x09inputJson\x09\x09\x09\x09Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters\n\x09* @param\x09steamIDInvitedMembers\x09""Array of steamIDs to add slots for. Must be specified in the input_json parameter.\n\x09* @param\x09lobbyMetaData\x09\x09\x09Optional lobby data. Must be specified in the input_json parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingService.h" },
		{ "ToolTip", "When using the CreateLobby WebAPI, you'll probably want to set lobby_type to 4 (k_ELobbyTypePrivateUnique).\nThis lobby type is a private, unique lobby that does not get deleted when emptied, and only one will exist per unique appid/lobby_name.\nA private unique lobby can only be created by this WebAPI call. But you can also use CreateLobby to generate the more traditional and ephemeral lobbies when no lobby_name is used.\n\nSteamid_invited_members will be a json array of all the steamIDs that should be currently allowed into the lobby.\nYou can update the list of members by calling CreateLobby with the same lobby_name and new complete set of steamIDs.\nAny steamIDs that were previously in the lobby and not included in the new call will be removed from the lobby.\nLobby_metadata is completely optional, but can be used to send general lobby data that needs to be communicated to users in the client.\n\n@param        key                                             Steamworks Web API user authentication key.\n@param        appID                                   The ID of the application associated with the lobby.\n@param        maxMembers                              Maximum number of members for this lobby.\n@param        lobbyType                               ESteamCoreWebLobbyType - The type and visibility of this lobby.\n@param        lobbyName                               Unique lobby name if lobby_type = 4. Find lobby with this name if it exists.\n@param        inputJson                               Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters\n@param        steamIDInvitedMembers   Array of steamIDs to add slots for. Must be specified in the input_json parameter.\n@param        lobbyMetaData                   Optional lobby data. Must be specified in the input_json parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLobbyMatchmakingService, nullptr, "CreateLobby", nullptr, nullptr, sizeof(WebLobbyMatchmakingService_eventCreateLobby_Parms), Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics
	{
		struct WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamIDToRemove;
			FString steamIDLobby;
			FString inputJson;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDToRemove;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputJson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDToRemove = { "steamIDToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, steamIDToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, steamIDLobby), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_inputJson = { "inputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, inputJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_inputJson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|LobbyMatchmakingService" },
		{ "Comment", "/**\n\x09* Remove user from lobby\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API user authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The ID of the application associated with the lobby.\n\x09* @param\x09steamIDToRemove\x09\x09\x09SteamID of the user to remove. If the user is not online when called, this will remove their reserved slot in the lobby.\n\x09* @param\x09steamIDLobby\x09\x09\x09Lobby ID\n\x09* @param\x09inputJson\x09\x09\x09\x09Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters\n\x09*/" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingService.h" },
		{ "ToolTip", "Remove user from lobby\n\n@param        key                                             Steamworks Web API user authentication key.\n@param        appID                                   The ID of the application associated with the lobby.\n@param        steamIDToRemove                 SteamID of the user to remove. If the user is not online when called, this will remove their reserved slot in the lobby.\n@param        steamIDLobby                    Lobby ID\n@param        inputJson                               Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLobbyMatchmakingService, nullptr, "RemoveUserFromLobby", nullptr, nullptr, sizeof(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms), Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister()
	{
		return UWebLobbyMatchmakingService::StaticClass();
	}
	struct Z_Construct_UClass_UWebLobbyMatchmakingService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby, "CreateLobby" }, // 1267275800
		{ &Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby, "RemoveUserFromLobby" }, // 4191260842
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LobbyMatchmakingService/WebLobbyMatchmakingService.h" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebLobbyMatchmakingService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::ClassParams = {
		&UWebLobbyMatchmakingService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebLobbyMatchmakingService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebLobbyMatchmakingService, 3716125918);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebLobbyMatchmakingService>()
	{
		return UWebLobbyMatchmakingService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebLobbyMatchmakingService(Z_Construct_UClass_UWebLobbyMatchmakingService, &UWebLobbyMatchmakingService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebLobbyMatchmakingService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebLobbyMatchmakingService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

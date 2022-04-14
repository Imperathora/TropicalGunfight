// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameSearch/SteamGameSearch.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameSearch() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UGameSearch_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UGameSearch();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGameSearch::execEndGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_uniqueGameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGame(Z_Param_uniqueGameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execSubmitPlayerResult)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_uniqueGameID);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
		P_GET_ENUM(ESteamPlayerResult,Z_Param_playerResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SubmitPlayerResult(Z_Param_uniqueGameID,Z_Param_steamIDPlayer,ESteamPlayerResult(Z_Param_playerResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execCancelRequestPlayersForGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->CancelRequestPlayersForGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execHostConfirmGameStart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_uniqueGameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->HostConfirmGameStart(Z_Param_uniqueGameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execRequestPlayersForGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerMin);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerMax);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxTeamSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RequestPlayersForGame(Z_Param_playerMin,Z_Param_playerMax,Z_Param_maxTeamSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execSetConnectionDetails)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_connectionDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetConnectionDetails(Z_Param_connectionDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execSetGameHostParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY(FString,Z_Param_values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetGameHostParams(Z_Param_key,Z_Param_values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execEndGameSearch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGameSearch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execRetrieveConnectionDetails)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDHost);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_connectionDetails);
		P_GET_PROPERTY(FIntProperty,Z_Param_numConnectionDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RetrieveConnectionDetails(Z_Param_steamIDHost,Z_Param_Out_connectionDetails,Z_Param_numConnectionDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execDeclineGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->DeclineGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execAcceptGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AcceptGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execSearchForGameSolo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerMin);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameSolo(Z_Param_playerMin,Z_Param_playerMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execSearchForGameWithLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerMin);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameWithLobby(Z_Param_steamIDLobby,Z_Param_playerMin,Z_Param_playerMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSearch::execAddGameSearchParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_keyToFind);
		P_GET_TARRAY(FString,Z_Param_valuesToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AddGameSearchParams(Z_Param_keyToFind,Z_Param_valuesToFind);
		P_NATIVE_END;
	}
	void UGameSearch::StaticRegisterNativesUGameSearch()
	{
		UClass* Class = UGameSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptGame", &UGameSearch::execAcceptGame },
			{ "AddGameSearchParams", &UGameSearch::execAddGameSearchParams },
			{ "CancelRequestPlayersForGame", &UGameSearch::execCancelRequestPlayersForGame },
			{ "DeclineGame", &UGameSearch::execDeclineGame },
			{ "EndGame", &UGameSearch::execEndGame },
			{ "EndGameSearch", &UGameSearch::execEndGameSearch },
			{ "HostConfirmGameStart", &UGameSearch::execHostConfirmGameStart },
			{ "RequestPlayersForGame", &UGameSearch::execRequestPlayersForGame },
			{ "RetrieveConnectionDetails", &UGameSearch::execRetrieveConnectionDetails },
			{ "SearchForGameSolo", &UGameSearch::execSearchForGameSolo },
			{ "SearchForGameWithLobby", &UGameSearch::execSearchForGameWithLobby },
			{ "SetConnectionDetails", &UGameSearch::execSetConnectionDetails },
			{ "SetGameHostParams", &UGameSearch::execSetGameHostParams },
			{ "SubmitPlayerResult", &UGameSearch::execSubmitPlayerResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSearch_AcceptGame_Statics
	{
		struct GameSearch_eventAcceptGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventAcceptGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "AcceptGame", nullptr, nullptr, sizeof(GameSearch_eventAcceptGame_Parms), Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_AcceptGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_AcceptGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics
	{
		struct GameSearch_eventAddGameSearchParams_Parms
		{
			FString keyToFind;
			TArray<FString> valuesToFind;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_keyToFind;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_valuesToFind_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_valuesToFind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_keyToFind = { "keyToFind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventAddGameSearchParams_Parms, keyToFind), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_valuesToFind_Inner = { "valuesToFind", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_valuesToFind = { "valuesToFind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventAddGameSearchParams_Parms, valuesToFind), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventAddGameSearchParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_keyToFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_valuesToFind_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_valuesToFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n\x09* fails if a search is currently in progress\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n* fails if a search is currently in progress" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "AddGameSearchParams", nullptr, nullptr, sizeof(GameSearch_eventAddGameSearchParams_Parms), Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_AddGameSearchParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_AddGameSearchParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics
	{
		struct GameSearch_eventCancelRequestPlayersForGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventCancelRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* cancel request and leave the pool of game hosts looking for players\n\x09* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* cancel request and leave the pool of game hosts looking for players\n* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "CancelRequestPlayersForGame", nullptr, nullptr, sizeof(GameSearch_eventCancelRequestPlayersForGame_Parms), Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_DeclineGame_Statics
	{
		struct GameSearch_eventDeclineGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventDeclineGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "DeclineGame", nullptr, nullptr, sizeof(GameSearch_eventDeclineGame_Parms), Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_DeclineGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_DeclineGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_EndGame_Statics
	{
		struct GameSearch_eventEndGame_Parms
		{
			FString uniqueGameID;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uniqueGameID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_EndGame_Statics::NewProp_uniqueGameID = { "uniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventEndGame_Parms, uniqueGameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_EndGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventEndGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_EndGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_EndGame_Statics::NewProp_uniqueGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_EndGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_EndGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n\x09* any future requests will provide a new ullUniqueGameID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n* any future requests will provide a new ullUniqueGameID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "EndGame", nullptr, nullptr, sizeof(GameSearch_eventEndGame_Parms), Z_Construct_UFunction_UGameSearch_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_EndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics
	{
		struct GameSearch_eventEndGameSearch_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventEndGameSearch_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* leaves queue if still waiting\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* leaves queue if still waiting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "EndGameSearch", nullptr, nullptr, sizeof(GameSearch_eventEndGameSearch_Parms), Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_EndGameSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_EndGameSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics
	{
		struct GameSearch_eventHostConfirmGameStart_Parms
		{
			FString uniqueGameID;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uniqueGameID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::NewProp_uniqueGameID = { "uniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventHostConfirmGameStart_Parms, uniqueGameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventHostConfirmGameStart_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::NewProp_uniqueGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* accept the player list and release connection details to players\n\x09* players will only be given connection details and host steamid when this is called\n\x09* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* accept the player list and release connection details to players\n* players will only be given connection details and host steamid when this is called\n* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "HostConfirmGameStart", nullptr, nullptr, sizeof(GameSearch_eventHostConfirmGameStart_Parms), Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_HostConfirmGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_HostConfirmGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics
	{
		struct GameSearch_eventRequestPlayersForGame_Parms
		{
			int32 playerMin;
			int32 playerMax;
			int32 maxTeamSize;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerMax;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxTeamSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_playerMin = { "playerMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventRequestPlayersForGame_Parms, playerMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_playerMax = { "playerMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventRequestPlayersForGame_Parms, playerMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_maxTeamSize = { "maxTeamSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventRequestPlayersForGame_Parms, maxTeamSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_playerMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_playerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_maxTeamSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* mark server as available for more players with nPlayerMin,nPlayerMax desired\n\x09* accept no lobbies with playercount greater than nMaxTeamSize\n\x09* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n\x09* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n\x09* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* mark server as available for more players with nPlayerMin,nPlayerMax desired\n* accept no lobbies with playercount greater than nMaxTeamSize\n* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "RequestPlayersForGame", nullptr, nullptr, sizeof(GameSearch_eventRequestPlayersForGame_Parms), Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_RequestPlayersForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_RequestPlayersForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics
	{
		struct GameSearch_eventRetrieveConnectionDetails_Parms
		{
			FSteamID steamIDHost;
			FString connectionDetails;
			int32 numConnectionDetails;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDHost;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_connectionDetails;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numConnectionDetails;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_steamIDHost = { "steamIDHost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventRetrieveConnectionDetails_Parms, steamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_connectionDetails = { "connectionDetails", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventRetrieveConnectionDetails_Parms, connectionDetails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_numConnectionDetails = { "numConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventRetrieveConnectionDetails_Parms, numConnectionDetails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventRetrieveConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_steamIDHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_connectionDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_numConnectionDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving GameStartedByHostCallback_t get connection details to server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving GameStartedByHostCallback_t get connection details to server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "RetrieveConnectionDetails", nullptr, nullptr, sizeof(GameSearch_eventRetrieveConnectionDetails_Parms), Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics
	{
		struct GameSearch_eventSearchForGameSolo_Parms
		{
			int32 playerMin;
			int32 playerMax;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::NewProp_playerMin = { "playerMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSearchForGameSolo_Parms, playerMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::NewProp_playerMax = { "playerMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSearchForGameSolo_Parms, playerMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSearchForGameSolo_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::NewProp_playerMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::NewProp_playerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09* periodic callbacks will be sent as queue time estimates change\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* periodic callbacks will be sent as queue time estimates change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "SearchForGameSolo", nullptr, nullptr, sizeof(GameSearch_eventSearchForGameSolo_Parms), Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_SearchForGameSolo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_SearchForGameSolo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics
	{
		struct GameSearch_eventSearchForGameWithLobby_Parms
		{
			FSteamID steamIDLobby;
			int32 playerMin;
			int32 playerMax;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSearchForGameWithLobby_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_playerMin = { "playerMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSearchForGameWithLobby_Parms, playerMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_playerMax = { "playerMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSearchForGameWithLobby_Parms, playerMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSearchForGameWithLobby_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_steamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_playerMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_playerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09* if not the owner of the lobby or search already in progress this call fails\n\x09* periodic callbacks will be sent as queue time estimates change\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* if not the owner of the lobby or search already in progress this call fails\n* periodic callbacks will be sent as queue time estimates change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "SearchForGameWithLobby", nullptr, nullptr, sizeof(GameSearch_eventSearchForGameWithLobby_Parms), Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics
	{
		struct GameSearch_eventSetConnectionDetails_Parms
		{
			FString connectionDetails;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_connectionDetails;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::NewProp_connectionDetails = { "connectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSetConnectionDetails_Parms, connectionDetails), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSetConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::NewProp_connectionDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* set connection details for players once game is found so they can connect to this server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* set connection details for players once game is found so they can connect to this server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "SetConnectionDetails", nullptr, nullptr, sizeof(GameSearch_eventSetConnectionDetails_Parms), Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_SetConnectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_SetConnectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics
	{
		struct GameSearch_eventSetGameHostParams_Parms
		{
			FString key;
			TArray<FString> values;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSetGameHostParams_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_values_Inner = { "values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSetGameHostParams_Parms, values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSetGameHostParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* a keyname and a list of comma separated values: all the values you allow\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* a keyname and a list of comma separated values: all the values you allow" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "SetGameHostParams", nullptr, nullptr, sizeof(GameSearch_eventSetGameHostParams_Parms), Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_SetGameHostParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_SetGameHostParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics
	{
		struct GameSearch_eventSubmitPlayerResult_Parms
		{
			FString uniqueGameID;
			FSteamID steamIDPlayer;
			ESteamPlayerResult playerResult;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uniqueGameID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_uniqueGameID = { "uniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSubmitPlayerResult_Parms, uniqueGameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSubmitPlayerResult_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_playerResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_playerResult = { "playerResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSubmitPlayerResult_Parms, playerResult), Z_Construct_UEnum_SteamCore_ESteamPlayerResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSearch_eventSubmitPlayerResult_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_uniqueGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_steamIDPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_playerResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_playerResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSearch, nullptr, "SubmitPlayerResult", nullptr, nullptr, sizeof(GameSearch_eventSubmitPlayerResult_Parms), Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSearch_SubmitPlayerResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSearch_SubmitPlayerResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSearch_NoRegister()
	{
		return UGameSearch::StaticClass();
	}
	struct Z_Construct_UClass_UGameSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchForGameProgressDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameProgressDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchForGameResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameProgressDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameProgressDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameFinalResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmitPlayerResultResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SubmitPlayerResultResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndGameResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndGameResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSearch_AcceptGame, "AcceptGame" }, // 896021008
		{ &Z_Construct_UFunction_UGameSearch_AddGameSearchParams, "AddGameSearchParams" }, // 3096846570
		{ &Z_Construct_UFunction_UGameSearch_CancelRequestPlayersForGame, "CancelRequestPlayersForGame" }, // 2155994363
		{ &Z_Construct_UFunction_UGameSearch_DeclineGame, "DeclineGame" }, // 1296460750
		{ &Z_Construct_UFunction_UGameSearch_EndGame, "EndGame" }, // 1121749504
		{ &Z_Construct_UFunction_UGameSearch_EndGameSearch, "EndGameSearch" }, // 2090251272
		{ &Z_Construct_UFunction_UGameSearch_HostConfirmGameStart, "HostConfirmGameStart" }, // 2336873953
		{ &Z_Construct_UFunction_UGameSearch_RequestPlayersForGame, "RequestPlayersForGame" }, // 1663488631
		{ &Z_Construct_UFunction_UGameSearch_RetrieveConnectionDetails, "RetrieveConnectionDetails" }, // 3715641810
		{ &Z_Construct_UFunction_UGameSearch_SearchForGameSolo, "SearchForGameSolo" }, // 382242618
		{ &Z_Construct_UFunction_UGameSearch_SearchForGameWithLobby, "SearchForGameWithLobby" }, // 3057568109
		{ &Z_Construct_UFunction_UGameSearch_SetConnectionDetails, "SetConnectionDetails" }, // 678640371
		{ &Z_Construct_UFunction_UGameSearch_SetGameHostParams, "SetGameHostParams" }, // 4131279535
		{ &Z_Construct_UFunction_UGameSearch_SubmitPlayerResult, "SubmitPlayerResult" }, // 1477559904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSearch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies.\n*/" },
		{ "IncludePath", "SteamGameSearch/SteamGameSearch.h" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameProgressDelegate = { "SearchForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSearch, SearchForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameResultDelegate = { "SearchForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSearch, SearchForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate = { "RequestPlayersForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSearch, RequestPlayersForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate = { "RequestPlayersForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSearch, RequestPlayersForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate = { "RequestPlayersForGameFinalResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSearch, RequestPlayersForGameFinalResultDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate = { "SubmitPlayerResultResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSearch, SubmitPlayerResultResultDelegate), Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSearch_Statics::NewProp_EndGameResultDelegate = { "EndGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSearch, EndGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameProgressDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSearch_Statics::NewProp_SearchForGameResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSearch_Statics::NewProp_EndGameResultDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSearch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSearch_Statics::ClassParams = {
		&UGameSearch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSearch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSearch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSearch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSearch, 293697188);
	template<> STEAMCORE_API UClass* StaticClass<UGameSearch>()
	{
		return UGameSearch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSearch(Z_Construct_UClass_UGameSearch, &UGameSearch::StaticClass, TEXT("/Script/SteamCore"), TEXT("UGameSearch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSearch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

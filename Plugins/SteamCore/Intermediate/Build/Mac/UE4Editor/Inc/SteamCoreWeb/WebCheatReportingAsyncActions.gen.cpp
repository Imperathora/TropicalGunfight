// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/CheatReporting/WebCheatReportingAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebCheatReportingAsyncActions() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionReportPlayerCheating::execReportPlayerCheatingAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDReporter);
		P_GET_PROPERTY(FStrProperty,Z_Param_appData);
		P_GET_UBOOL(Z_Param_bHeuristic);
		P_GET_UBOOL(Z_Param_bDetection);
		P_GET_UBOOL(Z_Param_bPlayerReport);
		P_GET_UBOOL(Z_Param_bNoReportID);
		P_GET_PROPERTY(FIntProperty,Z_Param_gameMode);
		P_GET_PROPERTY(FIntProperty,Z_Param_suspicionStartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_severity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionReportPlayerCheating**)Z_Param__Result=USteamCoreWebAsyncActionReportPlayerCheating::ReportPlayerCheatingAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_steamIDReporter,Z_Param_appData,Z_Param_bHeuristic,Z_Param_bDetection,Z_Param_bPlayerReport,Z_Param_bNoReportID,Z_Param_gameMode,Z_Param_suspicionStartTime,Z_Param_severity);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionReportPlayerCheating::StaticRegisterNativesUSteamCoreWebAsyncActionReportPlayerCheating()
	{
		UClass* Class = USteamCoreWebAsyncActionReportPlayerCheating::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportPlayerCheatingAsync", &USteamCoreWebAsyncActionReportPlayerCheating::execReportPlayerCheatingAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics
	{
		struct SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			FString steamID;
			FString steamIDReporter;
			FString appData;
			bool bHeuristic;
			bool bDetection;
			bool bPlayerReport;
			bool bNoReportID;
			int32 gameMode;
			int32 suspicionStartTime;
			int32 severity;
			USteamCoreWebAsyncActionReportPlayerCheating* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDReporter;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appData;
		static void NewProp_bHeuristic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHeuristic;
		static void NewProp_bDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetection;
		static void NewProp_bPlayerReport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerReport;
		static void NewProp_bNoReportID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoReportID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_suspicionStartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_severity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_steamIDReporter = { "steamIDReporter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, steamIDReporter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_appData = { "appData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, appData), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bHeuristic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic = { "bHeuristic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection = { "bDetection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bPlayerReport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport = { "bPlayerReport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bNoReportID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID = { "bNoReportID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_gameMode = { "gameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, gameMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_suspicionStartTime = { "suspicionStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, suspicionStartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_severity = { "severity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, severity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_steamIDReporter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_appData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_gameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_suspicionStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_severity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\x09*\n\x09* It is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09steamID\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09steamIDReporter\x09\x09(Optional) The Steam ID of the user or game server who is reporting the cheating.\n\x09* @param\x09""appData\x09\x09\x09\x09(Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n\x09* @param\x09""bHeuristic\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a heuristic.\n\x09* @param\x09""bDetection\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a detection.\n\x09* @param\x09""bPlayerReport\x09\x09(Optional) Extra information about the source of the cheating - was it a player report.\n\x09* @param\x09""bNoReportID\x09\x09\x09(Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n\x09* @param\x09gameMode\x09\x09\x09(Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n\x09* @param\x09suspicionStartTime\x09(Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09severity\x09\x09\x09(Optional) Level of severity of bad action being reported. Scale set by developer.\n\x09*/" },
		{ "DisplayName", "Report Player Cheating" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\nIt is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The App ID for the game.\n@param        steamID                         The Steam ID of the user who is being reported for cheating.\n@param        steamIDReporter         (Optional) The Steam ID of the user or game server who is reporting the cheating.\n@param        appData                         (Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n@param        bHeuristic                      (Optional) Extra information about the source of the cheating - was it a heuristic.\n@param        bDetection                      (Optional) Extra information about the source of the cheating - was it a detection.\n@param        bPlayerReport           (Optional) Extra information about the source of the cheating - was it a player report.\n@param        bNoReportID                     (Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n@param        gameMode                        (Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n@param        suspicionStartTime      (Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n@param        severity                        (Optional) Level of severity of bad action being reported. Scale set by developer." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating, nullptr, "ReportPlayerCheatingAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_NoRegister()
	{
		return USteamCoreWebAsyncActionReportPlayerCheating::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync, "ReportPlayerCheatingAsync" }, // 1757099964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionReportPlayerCheating\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionReportPlayerCheating\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionReportPlayerCheating>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::ClassParams = {
		&USteamCoreWebAsyncActionReportPlayerCheating::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionReportPlayerCheating, 3797035638);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionReportPlayerCheating>()
	{
		return USteamCoreWebAsyncActionReportPlayerCheating::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionReportPlayerCheating(Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating, &USteamCoreWebAsyncActionReportPlayerCheating::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionReportPlayerCheating"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionReportPlayerCheating);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_reportID);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatDescription);
		P_GET_PROPERTY(FIntProperty,Z_Param_duration);
		P_GET_UBOOL(Z_Param_bDelayBan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionRequestPlayerGameBan**)Z_Param__Result=USteamCoreWebAsyncActionRequestPlayerGameBan::RequestPlayerGameBanAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_reportID,Z_Param_cheatDescription,Z_Param_duration,Z_Param_bDelayBan);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRequestPlayerGameBan::StaticRegisterNativesUSteamCoreWebAsyncActionRequestPlayerGameBan()
	{
		UClass* Class = USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestPlayerGameBanAsync", &USteamCoreWebAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics
	{
		struct SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			FString reportID;
			FString cheatDescription;
			int32 duration;
			bool bDelayBan;
			USteamCoreWebAsyncActionRequestPlayerGameBan* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_reportID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatDescription;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_duration;
		static void NewProp_bDelayBan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayBan;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_reportID = { "reportID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, reportID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_cheatDescription = { "cheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, cheatDescription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms*)Obj)->bDelayBan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_reportID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_cheatDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Requests a game ban on a specific player.\n\x09*\n\x09* This is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09reportID\x09\x09\x09The reportid originally used to report cheating.\n\x09* @param\x09""cheatDescription\x09Text describing cheating infraction.\n\x09* @param\x09""duration\x09\x09\x09""Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n\x09* @param\x09""bDelayBan\x09\x09\x09""Delay the ban according to default ban delay rules.\n\x09*/" },
		{ "DisplayName", "Request Player Game Ban" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Requests a game ban on a specific player.\n\nThis is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         The Steam ID of the user who is being reported for cheating.\n@param        appID                           The App ID for the game.\n@param        reportID                        The reportid originally used to report cheating.\n@param        cheatDescription        Text describing cheating infraction.\n@param        duration                        Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n@param        bDelayBan                       Delay the ban according to default ban delay rules." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, nullptr, "RequestPlayerGameBanAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister()
	{
		return USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync, "RequestPlayerGameBanAsync" }, // 2659620007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRequestPlayerGameBan\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRequestPlayerGameBan\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRequestPlayerGameBan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionRequestPlayerGameBan, 2716948041);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRequestPlayerGameBan>()
	{
		return USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, &USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionRequestPlayerGameBan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRequestPlayerGameBan);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRemovePlayerGameBan::execRemovePlayerGameBanAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionRemovePlayerGameBan**)Z_Param__Result=USteamCoreWebAsyncActionRemovePlayerGameBan::RemovePlayerGameBanAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRemovePlayerGameBan::StaticRegisterNativesUSteamCoreWebAsyncActionRemovePlayerGameBan()
	{
		UClass* Class = USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemovePlayerGameBanAsync", &USteamCoreWebAsyncActionRemovePlayerGameBan::execRemovePlayerGameBanAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics
	{
		struct SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			USteamCoreWebAsyncActionRemovePlayerGameBan* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Remove a game ban on a player.\n\x09*\n\x09* This is used if a Game ban is determined to be a false positive.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""appID\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "DisplayName", "Remove Player Game Ban" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Remove a game ban on a player.\n\nThis is used if a Game ban is determined to be a false positive.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 The Steam ID of the user to remove the game ban on.\n@param        appID                   The App ID for the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan, nullptr, "RemovePlayerGameBanAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_NoRegister()
	{
		return USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync, "RemovePlayerGameBanAsync" }, // 3291594722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRemovePlayerGameBan\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRemovePlayerGameBan\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRemovePlayerGameBan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionRemovePlayerGameBan, 1312254051);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRemovePlayerGameBan>()
	{
		return USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan(Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan, &USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionRemovePlayerGameBan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRemovePlayerGameBan);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetCheatingReports::execGetCheatingReportsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeBegin);
		P_GET_PROPERTY(FStrProperty,Z_Param_reportIDmin);
		P_GET_UBOOL(Z_Param_bIncludeReports);
		P_GET_UBOOL(Z_Param_bIncludeBans);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetCheatingReports**)Z_Param__Result=USteamCoreWebAsyncActionGetCheatingReports::GetCheatingReportsAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_timeEnd,Z_Param_timeBegin,Z_Param_reportIDmin,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_steamID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetCheatingReports::StaticRegisterNativesUSteamCoreWebAsyncActionGetCheatingReports()
	{
		UClass* Class = USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheatingReportsAsync", &USteamCoreWebAsyncActionGetCheatingReports::execGetCheatingReportsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			int32 timeEnd;
			int32 timeBegin;
			FString reportIDmin;
			bool bIncludeReports;
			bool bIncludeBans;
			FString steamID;
			USteamCoreWebAsyncActionGetCheatingReports* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeBegin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_reportIDmin;
		static void NewProp_bIncludeReports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
		static void NewProp_bIncludeBans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeEnd = { "timeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, timeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeBegin = { "timeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, timeBegin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportIDmin = { "reportIDmin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, reportIDmin), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeReports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeBans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportIDmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Get a list of cheating reports submitted for this app.\n\x09*\n\x09* Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09timeEnd\x09\x09\x09\x09The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09timeBegin\x09\x09\x09The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09reportIDmin\x09\x09\x09Minimum reportID to include. (can pass 0 - end of previous report range)\n\x09* @param\x09""bIncludeReports\x09\x09(Optional) Include reports. If false includebans must be true.\n\x09* @param\x09""bIncludeBans\x09\x09(Optional) Include ban requests? If false includereports must be true.\n\x09* @param\x09steamID\x09\x09\x09\x09(Optional) Query just for this Steam ID.\n\x09*/" },
		{ "DisplayName", "Get Cheating Reports" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        appID                           The App ID for the game.\n@param        timeEnd                         The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        timeBegin                       The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        reportIDmin                     Minimum reportID to include. (can pass 0 - end of previous report range)\n@param        bIncludeReports         (Optional) Include reports. If false includebans must be true.\n@param        bIncludeBans            (Optional) Include ban requests? If false includereports must be true.\n@param        steamID                         (Optional) Query just for this Steam ID." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports, nullptr, "GetCheatingReportsAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister()
	{
		return USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync, "GetCheatingReportsAsync" }, // 2599030881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetCheatingReports\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetCheatingReports\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetCheatingReports>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetCheatingReports::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetCheatingReports, 1449944211);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetCheatingReports>()
	{
		return USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetCheatingReports(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports, &USteamCoreWebAsyncActionGetCheatingReports::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetCheatingReports"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetCheatingReports);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionReportCheatData::execReportCheatDataAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_pathAndFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_webCheatURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeNow);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeStarted);
		P_GET_PROPERTY(FStrProperty,Z_Param_timeStopped);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_gameProcessID);
		P_GET_PROPERTY(FIntProperty,Z_Param_cheatProcessID);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatParam1);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatParam2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionReportCheatData**)Z_Param__Result=USteamCoreWebAsyncActionReportCheatData::ReportCheatDataAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_pathAndFileName,Z_Param_webCheatURL,Z_Param_timeNow,Z_Param_timeStarted,Z_Param_timeStopped,Z_Param_cheatName,Z_Param_gameProcessID,Z_Param_cheatProcessID,Z_Param_cheatParam1,Z_Param_cheatParam2);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionReportCheatData::StaticRegisterNativesUSteamCoreWebAsyncActionReportCheatData()
	{
		UClass* Class = USteamCoreWebAsyncActionReportCheatData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportCheatDataAsync", &USteamCoreWebAsyncActionReportCheatData::execReportCheatDataAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics
	{
		struct SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			FString pathAndFileName;
			FString webCheatURL;
			FString timeNow;
			FString timeStarted;
			FString timeStopped;
			FString cheatName;
			int32 gameProcessID;
			int32 cheatProcessID;
			FString cheatParam1;
			FString cheatParam2;
			USteamCoreWebAsyncActionReportCheatData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pathAndFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_webCheatURL;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeNow;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeStarted;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeStopped;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameProcessID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cheatProcessID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatParam1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatParam2;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_pathAndFileName = { "pathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, pathAndFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_webCheatURL = { "webCheatURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, webCheatURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_timeNow = { "timeNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, timeNow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_timeStarted = { "timeStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, timeStarted), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_timeStopped = { "timeStopped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, timeStopped), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_cheatName = { "cheatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, cheatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_gameProcessID = { "gameProcessID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, gameProcessID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_cheatProcessID = { "cheatProcessID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, cheatProcessID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_cheatParam1 = { "cheatParam1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, cheatParam1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_cheatParam2 = { "cheatParam2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, cheatParam2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_pathAndFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_webCheatURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_timeNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_timeStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_timeStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_cheatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_gameProcessID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_cheatProcessID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_cheatParam1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_cheatParam2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\x09*\n\x09* This is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09pathAndFileName\x09\x09\x09Path and file name of the cheat executable.\n\x09* @param\x09webCheatURL\x09\x09\x09\x09Web url where the cheat was found and downloaded.\n\x09* @param\x09timeNow\x09\x09\x09\x09\x09Local system time now. 64 bit windows system time.\n\x09* @param\x09timeStarted\x09\x09\x09\x09Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n\x09* @param\x09timeStopped\x09\x09\x09\x09Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n\x09* @param\x09""cheatName\x09\x09\x09\x09""Descriptive name for the cheat.\n\x09* @param\x09gameProcessID\x09\x09\x09Process ID of the running game.\n\x09* @param\x09""cheatProcessID\x09\x09\x09Process ID of the cheat process that ran.\n\x09* @param\x09""cheatParam1\x09(int64)\x09\x09""Extra cheat data.\n\x09* @param\x09""cheatParam2\x09(int64)\x09\x09""Extra cheat data.\n\x09*/" },
		{ "DisplayName", "Report Cheat Data" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\nThis is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamID                                 The Steam ID of the user to remove the game ban on.\n@param        appID                                   The App ID for the game.\n@param        pathAndFileName                 Path and file name of the cheat executable.\n@param        webCheatURL                             Web url where the cheat was found and downloaded.\n@param        timeNow                                 Local system time now. 64 bit windows system time.\n@param        timeStarted                             Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n@param        timeStopped                             Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n@param        cheatName                               Descriptive name for the cheat.\n@param        gameProcessID                   Process ID of the running game.\n@param        cheatProcessID                  Process ID of the cheat process that ran.\n@param        cheatParam1     (int64)         Extra cheat data.\n@param        cheatParam2     (int64)         Extra cheat data." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData, nullptr, "ReportCheatDataAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_NoRegister()
	{
		return USteamCoreWebAsyncActionReportCheatData::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync, "ReportCheatDataAsync" }, // 2561552450
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionReportCheatData\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionReportCheatData\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionReportCheatData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::ClassParams = {
		&USteamCoreWebAsyncActionReportCheatData::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionReportCheatData, 3293245591);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionReportCheatData>()
	{
		return USteamCoreWebAsyncActionReportCheatData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionReportCheatData(Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData, &USteamCoreWebAsyncActionReportCheatData::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionReportCheatData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionReportCheatData);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRequestVacStatusForUser::execRequestVacStatusForUserAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionRequestVacStatusForUser**)Z_Param__Result=USteamCoreWebAsyncActionRequestVacStatusForUser::RequestVacStatusForUserAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_sessionID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRequestVacStatusForUser::StaticRegisterNativesUSteamCoreWebAsyncActionRequestVacStatusForUser()
	{
		UClass* Class = USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestVacStatusForUserAsync", &USteamCoreWebAsyncActionRequestVacStatusForUser::execRequestVacStatusForUserAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics
	{
		struct SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			FString sessionID;
			USteamCoreWebAsyncActionRequestVacStatusForUser* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_sessionID = { "sessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, sessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_sessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\x09*\n\x09* This is used before a user enters matchmaking or joins a game.\n\x09* If the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\n\x09* Checking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\n\x09* The VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\n\x09* It is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09sessionID (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession.\n\x09*/" },
		{ "DisplayName", "Request VAC Status for User" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\nThis is used before a user enters matchmaking or joins a game.\nIf the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\nChecking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\nThe VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\nIt is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         The Steam ID of the user.\n@param        appID                           The App ID for the game.\n@param        sessionID (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser, nullptr, "RequestVacStatusForUserAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_NoRegister()
	{
		return USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync, "RequestVacStatusForUserAsync" }, // 1976517282
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRequestVacStatusForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRequestVacStatusForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRequestVacStatusForUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionRequestVacStatusForUser, 109679132);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRequestVacStatusForUser>()
	{
		return USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser(Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser, &USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionRequestVacStatusForUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRequestVacStatusForUser);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionStartSecureMultiplayerSession::execStartSecureMultiplayerSessionAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionStartSecureMultiplayerSession**)Z_Param__Result=USteamCoreWebAsyncActionStartSecureMultiplayerSession::StartSecureMultiplayerSessionAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticRegisterNativesUSteamCoreWebAsyncActionStartSecureMultiplayerSession()
	{
		UClass* Class = USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSecureMultiplayerSessionAsync", &USteamCoreWebAsyncActionStartSecureMultiplayerSession::execStartSecureMultiplayerSessionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics
	{
		struct SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			USteamCoreWebAsyncActionStartSecureMultiplayerSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has started.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""appID\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "DisplayName", "Start Secure Multiplayer Session" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has started.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 The Steam ID of the user.\n@param        appID                   The App ID for the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession, nullptr, "StartSecureMultiplayerSessionAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_NoRegister()
	{
		return USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync, "StartSecureMultiplayerSessionAsync" }, // 2698755581
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionStartSecureMultiplayerSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionStartSecureMultiplayerSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionStartSecureMultiplayerSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::ClassParams = {
		&USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionStartSecureMultiplayerSession, 604904954);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionStartSecureMultiplayerSession>()
	{
		return USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession(Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession, &USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionStartSecureMultiplayerSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionStartSecureMultiplayerSession);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionEndSecureMultiplayerSession**)Z_Param__Result=USteamCoreWebAsyncActionEndSecureMultiplayerSession::EndSecureMultiplayerSessionAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_sessionID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticRegisterNativesUSteamCoreWebAsyncActionEndSecureMultiplayerSession()
	{
		UClass* Class = USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSecureMultiplayerSessionAsync", &USteamCoreWebAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics
	{
		struct SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			FString sessionID;
			USteamCoreWebAsyncActionEndSecureMultiplayerSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_sessionID = { "sessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, sessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_sessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has ended.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09sessionID (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession.\n\x09*/" },
		{ "DisplayName", "End Secure Multiplayer Session" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has ended.\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        steamID                         The Steam ID of the user.\n@param        appID                           The App ID for the game.\n@param        sessionID (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, nullptr, "EndSecureMultiplayerSessionAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister()
	{
		return USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync, "EndSecureMultiplayerSessionAsync" }, // 3069617987
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionEndSecureMultiplayerSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionEndSecureMultiplayerSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEndSecureMultiplayerSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::ClassParams = {
		&USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionEndSecureMultiplayerSession, 534371875);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionEndSecureMultiplayerSession>()
	{
		return USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, &USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionEndSecureMultiplayerSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionEndSecureMultiplayerSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

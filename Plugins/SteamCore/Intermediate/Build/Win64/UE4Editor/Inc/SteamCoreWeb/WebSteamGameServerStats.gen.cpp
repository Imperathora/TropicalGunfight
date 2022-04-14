// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamGameServerStats/WebSteamGameServerStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamGameServerStats() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamGameServerStats_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamGameServerStats();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamGameServerStats::execGetGameServerPlayerStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_rangeStart);
		P_GET_PROPERTY(FStrProperty,Z_Param_rangeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameServerPlayerStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_gameID,Z_Param_appID,Z_Param_rangeStart,Z_Param_rangeEnd,Z_Param_MaxResults);
		P_NATIVE_END;
	}
	void UWebSteamGameServerStats::StaticRegisterNativesUWebSteamGameServerStats()
	{
		UClass* Class = UWebSteamGameServerStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameServerPlayerStatsForGame", &UWebSteamGameServerStats::execGetGameServerPlayerStatsForGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics
	{
		struct WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString gameID;
			int32 appID;
			FString rangeStart;
			FString rangeEnd;
			int32 MaxResults;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rangeStart;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rangeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_gameID = { "gameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, gameID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_rangeStart = { "rangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, rangeStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_rangeEnd = { "rangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, rangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_gameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_rangeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_rangeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamGameServerStats" },
		{ "Comment", "/**\n\x09* Get Game Server Player Stats For Game\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09gameID\x09\x09\x09game id to get stats for, if not a mod, it's safe to use appid here\n\x09* @param\x09""appID\x09\x09\x09""appID of the game\n\x09* @param\x09rangeStart\x09\x09range start date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n\x09* @param\x09rangeEnd\x09\x09range end date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n\x09* @param\x09MaxResults\x09\x09Max number of results to return (up to 1000)\n\x09*/" },
		{ "CPP_Default_MaxResults", "1000" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/WebSteamGameServerStats.h" },
		{ "ToolTip", "Get Game Server Player Stats For Game\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        gameID                  game id to get stats for, if not a mod, it's safe to use appid here\n@param        appID                   appID of the game\n@param        rangeStart              range start date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n@param        rangeEnd                range end date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n@param        MaxResults              Max number of results to return (up to 1000)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamGameServerStats, nullptr, "GetGameServerPlayerStatsForGame", nullptr, nullptr, sizeof(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms), Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamGameServerStats_NoRegister()
	{
		return UWebSteamGameServerStats::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamGameServerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamGameServerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamGameServerStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame, "GetGameServerPlayerStatsForGame" }, // 696418136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServerStats/WebSteamGameServerStats.h" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/WebSteamGameServerStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamGameServerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamGameServerStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamGameServerStats_Statics::ClassParams = {
		&UWebSteamGameServerStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamGameServerStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamGameServerStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamGameServerStats, 2852755627);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamGameServerStats>()
	{
		return UWebSteamGameServerStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamGameServerStats(Z_Construct_UClass_UWebSteamGameServerStats, &UWebSteamGameServerStats::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamGameServerStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamGameServerStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

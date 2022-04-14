// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/EconService/WebEconServiceAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconServiceAsyncActions() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeHistory::execGetTradeHistoryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxTrades);
		P_GET_PROPERTY(FIntProperty,Z_Param_startAfterTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_startAfterTradeID);
		P_GET_UBOOL(Z_Param_bNavigatingBack);
		P_GET_UBOOL(Z_Param_bGetDescriptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_UBOOL(Z_Param_bIncludeFailed);
		P_GET_UBOOL(Z_Param_bIncludeTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetTradeHistory**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeHistory::GetTradeHistoryAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_maxTrades,Z_Param_startAfterTime,Z_Param_startAfterTradeID,Z_Param_bNavigatingBack,Z_Param_bGetDescriptions,Z_Param_language,Z_Param_bIncludeFailed,Z_Param_bIncludeTotal);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeHistory::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeHistory()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeHistoryAsync", &USteamCoreWebAsyncActionGetTradeHistory::execGetTradeHistoryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 maxTrades;
			int32 startAfterTime;
			FString startAfterTradeID;
			bool bNavigatingBack;
			bool bGetDescriptions;
			FString language;
			bool bIncludeFailed;
			bool bIncludeTotal;
			USteamCoreWebAsyncActionGetTradeHistory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxTrades;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startAfterTime;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_startAfterTradeID;
		static void NewProp_bNavigatingBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavigatingBack;
		static void NewProp_bGetDescriptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static void NewProp_bIncludeFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeFailed;
		static void NewProp_bIncludeTotal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeTotal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_maxTrades = { "maxTrades", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, maxTrades), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTime = { "startAfterTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, startAfterTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTradeID = { "startAfterTradeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, startAfterTradeID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bNavigatingBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeTotal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_maxTrades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_startAfterTradeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Gets a history of trades\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09maxTrades\x09\x09\x09\x09The number of trades to return information for\n\x09* @param\x09startAfterTime\x09\x09\x09The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n\x09* @param\x09startAfterTradeID\x09\x09The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n\x09* @param\x09""bNavigatingBack\x09\x09\x09The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trades will also be returned\n\x09* @param\x09language\x09\x09\x09\x09The language to use when loading item display data\n\x09* @param\x09""bIncludeFailed\x09\x09\x09Include Failed\n\x09* @param\x09""bIncludeTotal\x09\x09\x09If set, the total number of trades the account has participated in will be included in the response\n\x09*/" },
		{ "DisplayName", "Get Trade History" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Gets a history of trades\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        maxTrades                               The number of trades to return information for\n@param        startAfterTime                  The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n@param        startAfterTradeID               The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n@param        bNavigatingBack                 The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trades will also be returned\n@param        language                                The language to use when loading item display data\n@param        bIncludeFailed                  Include Failed\n@param        bIncludeTotal                   If set, the total number of trades the account has participated in will be included in the response" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory, nullptr, "GetTradeHistoryAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync, "GetTradeHistoryAsync" }, // 1099688936
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeHistory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeHistory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeHistory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeHistory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetTradeHistory, 3572564815);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeHistory>()
	{
		return USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetTradeHistory(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory, &USteamCoreWebAsyncActionGetTradeHistory::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetTradeHistory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeHistory);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionFlushInventoryCache::execFlushInventoryCacheAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionFlushInventoryCache**)Z_Param__Result=USteamCoreWebAsyncActionFlushInventoryCache::FlushInventoryCacheAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_contextID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionFlushInventoryCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushInventoryCache()
	{
		UClass* Class = USteamCoreWebAsyncActionFlushInventoryCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlushInventoryCacheAsync", &USteamCoreWebAsyncActionFlushInventoryCache::execFlushInventoryCacheAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics
	{
		struct SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			FString contextID;
			USteamCoreWebAsyncActionFlushInventoryCache* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, contextID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the cache for a user's inventory in a specific app context\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09User to clear cache for.\n\x09* @param\x09""appID\x09\x09\x09""App to clear cache for.\n\x09* @param\x09""contextID\x09\x09""Context to clear cache for.\n\x09*/" },
		{ "DisplayName", "Flush Inventory Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamID                 User to clear cache for.\n@param        appID                   App to clear cache for.\n@param        contextID               Context to clear cache for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache, nullptr, "FlushInventoryCacheAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_NoRegister()
	{
		return USteamCoreWebAsyncActionFlushInventoryCache::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync, "FlushInventoryCacheAsync" }, // 4020417838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushInventoryCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushInventoryCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushInventoryCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::ClassParams = {
		&USteamCoreWebAsyncActionFlushInventoryCache::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionFlushInventoryCache, 1464533808);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFlushInventoryCache>()
	{
		return USteamCoreWebAsyncActionFlushInventoryCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionFlushInventoryCache(Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache, &USteamCoreWebAsyncActionFlushInventoryCache::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionFlushInventoryCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFlushInventoryCache);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionFlushAssetAppearanceCache::execFlushAssetAppearanceCacheAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionFlushAssetAppearanceCache**)Z_Param__Result=USteamCoreWebAsyncActionFlushAssetAppearanceCache::FlushAssetAppearanceCacheAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushAssetAppearanceCache()
	{
		UClass* Class = USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlushAssetAppearanceCacheAsync", &USteamCoreWebAsyncActionFlushAssetAppearanceCache::execFlushAssetAppearanceCacheAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics
	{
		struct SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			USteamCoreWebAsyncActionFlushAssetAppearanceCache* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Flush Asset Appearance Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache, nullptr, "FlushAssetAppearanceCacheAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_NoRegister()
	{
		return USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync, "FlushAssetAppearanceCacheAsync" }, // 3613971771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushAssetAppearanceCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushAssetAppearanceCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushAssetAppearanceCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::ClassParams = {
		&USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionFlushAssetAppearanceCache, 3523282204);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFlushAssetAppearanceCache>()
	{
		return USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache(Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache, &USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionFlushAssetAppearanceCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFlushAssetAppearanceCache);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionFlushContextCache::execFlushContextCacheAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionFlushContextCache**)Z_Param__Result=USteamCoreWebAsyncActionFlushContextCache::FlushContextCacheAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionFlushContextCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushContextCache()
	{
		UClass* Class = USteamCoreWebAsyncActionFlushContextCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlushContextCacheAsync", &USteamCoreWebAsyncActionFlushContextCache::execFlushContextCacheAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics
	{
		struct SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			USteamCoreWebAsyncActionFlushContextCache* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Flush Context Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache, nullptr, "FlushContextCacheAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_NoRegister()
	{
		return USteamCoreWebAsyncActionFlushContextCache::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync, "FlushContextCacheAsync" }, // 3810750776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushContextCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushContextCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushContextCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::ClassParams = {
		&USteamCoreWebAsyncActionFlushContextCache::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionFlushContextCache, 4131997607);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFlushContextCache>()
	{
		return USteamCoreWebAsyncActionFlushContextCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionFlushContextCache(Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache, &USteamCoreWebAsyncActionFlushContextCache::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionFlushContextCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFlushContextCache);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeOffers::execGetTradeOffersAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_bGetSentOffers);
		P_GET_UBOOL(Z_Param_bGetReceivedOffers);
		P_GET_UBOOL(Z_Param_bGetDescriptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_UBOOL(Z_Param_bActiveOnly);
		P_GET_UBOOL(Z_Param_bHistoricalOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeHistoricalCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetTradeOffers**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeOffers::GetTradeOffersAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_bGetSentOffers,Z_Param_bGetReceivedOffers,Z_Param_bGetDescriptions,Z_Param_language,Z_Param_bActiveOnly,Z_Param_bHistoricalOnly,Z_Param_timeHistoricalCutoff);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeOffers::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffers()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeOffersAsync", &USteamCoreWebAsyncActionGetTradeOffers::execGetTradeOffersAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			bool bGetSentOffers;
			bool bGetReceivedOffers;
			bool bGetDescriptions;
			FString language;
			bool bActiveOnly;
			bool bHistoricalOnly;
			int32 timeHistoricalCutoff;
			USteamCoreWebAsyncActionGetTradeOffers* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static void NewProp_bGetSentOffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetSentOffers;
		static void NewProp_bGetReceivedOffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetReceivedOffers;
		static void NewProp_bGetDescriptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static void NewProp_bActiveOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActiveOnly;
		static void NewProp_bHistoricalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHistoricalOnly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeHistoricalCutoff;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetSentOffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers = { "bGetSentOffers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetReceivedOffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers = { "bGetReceivedOffers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bActiveOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly = { "bActiveOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bHistoricalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly = { "bHistoricalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_timeHistoricalCutoff = { "timeHistoricalCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, timeHistoricalCutoff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_timeHistoricalCutoff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Get a list of sent or received trade offers\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""bGetSentOffers\x09\x09\x09Request the list of sent offers.\n\x09* @param\x09""bGetReceivedOffers\x09\x09Request the list of received offers.\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trade offers will also be returned.\n\x09* @param\x09language\x09\x09\x09\x09The language to use when loading item display data.\n\x09* @param\x09""bActiveOnly\x09\x09\x09\x09Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n\x09* @param\x09""bHistoricalOnly\x09\x09\x09Indicates we should only return offers which are not active.\n\x09* @param\x09timeHistoricalCutoff\x09When active_only is set, offers updated since this time will also be returned\n\x09*/" },
		{ "DisplayName", "Get Trade Offers" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Get a list of sent or received trade offers\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        bGetSentOffers                  Request the list of sent offers.\n@param        bGetReceivedOffers              Request the list of received offers.\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trade offers will also be returned.\n@param        language                                The language to use when loading item display data.\n@param        bActiveOnly                             Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n@param        bHistoricalOnly                 Indicates we should only return offers which are not active.\n@param        timeHistoricalCutoff    When active_only is set, offers updated since this time will also be returned" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers, nullptr, "GetTradeOffersAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync, "GetTradeOffersAsync" }, // 1462879243
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeOffers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetTradeOffers, 1444583097);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeOffers>()
	{
		return USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetTradeOffers(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers, &USteamCoreWebAsyncActionGetTradeOffers::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetTradeOffers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeOffers);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeOffer::execGetTradeOfferAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetTradeOffer**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeOffer::GetTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_tradeOfferID,Z_Param_language);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffer()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeOffer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeOfferAsync", &USteamCoreWebAsyncActionGetTradeOffer::execGetTradeOfferAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString tradeOfferID;
			FString language;
			USteamCoreWebAsyncActionGetTradeOffer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, tradeOfferID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_tradeOfferID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Gets a specific trade offer\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Get Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Gets a specific trade offer\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer, nullptr, "GetTradeOfferAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeOffer::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync, "GetTradeOfferAsync" }, // 1882610907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeOffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetTradeOffer, 802896233);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeOffer>()
	{
		return USteamCoreWebAsyncActionGetTradeOffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetTradeOffer(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer, &USteamCoreWebAsyncActionGetTradeOffer::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetTradeOffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeOffer);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeOffersSummary::execGetTradeOffersSummaryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeLastVisit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetTradeOffersSummary**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeOffersSummary::GetTradeOffersSummaryAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_timeLastVisit);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeOffersSummary::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffersSummary()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeOffersSummaryAsync", &USteamCoreWebAsyncActionGetTradeOffersSummary::execGetTradeOffersSummaryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 timeLastVisit;
			USteamCoreWebAsyncActionGetTradeOffersSummary* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeLastVisit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_timeLastVisit = { "timeLastVisit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, timeLastVisit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_timeLastVisit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Get counts of pending and new trade offers\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09timeLastVisit\x09\x09\x09The time the user last visited. If not passed, will use the time the user last visited the trade offer page.\n\x09*/" },
		{ "DisplayName", "Get Trade Offers Summary" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Get counts of pending and new trade offers\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        timeLastVisit                   The time the user last visited. If not passed, will use the time the user last visited the trade offer page." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary, nullptr, "GetTradeOffersSummaryAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync, "GetTradeOffersSummaryAsync" }, // 2235446336
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffersSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffersSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffersSummary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetTradeOffersSummary, 1368854306);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeOffersSummary>()
	{
		return USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary, &USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetTradeOffersSummary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeOffersSummary);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionDeclineTradeOffer::execDeclineTradeOfferAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionDeclineTradeOffer**)Z_Param__Result=USteamCoreWebAsyncActionDeclineTradeOffer::DeclineTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_tradeOfferID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionDeclineTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionDeclineTradeOffer()
	{
		UClass* Class = USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeclineTradeOfferAsync", &USteamCoreWebAsyncActionDeclineTradeOffer::execDeclineTradeOfferAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics
	{
		struct SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString tradeOfferID;
			USteamCoreWebAsyncActionDeclineTradeOffer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, tradeOfferID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_tradeOfferID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Decline a trade offer someone sent to us\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09tradeOfferID\n\x09*/" },
		{ "DisplayName", "Decline Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Decline a trade offer someone sent to us\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        tradeOfferID" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer, nullptr, "DeclineTradeOfferAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_NoRegister()
	{
		return USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync, "DeclineTradeOfferAsync" }, // 2613002712
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffersSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffersSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionDeclineTradeOffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::ClassParams = {
		&USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionDeclineTradeOffer, 4166940463);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionDeclineTradeOffer>()
	{
		return USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionDeclineTradeOffer(Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer, &USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionDeclineTradeOffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionDeclineTradeOffer);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionCancelTradeOffer::execCancelTradeOfferAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_tradeOfferID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionCancelTradeOffer**)Z_Param__Result=USteamCoreWebAsyncActionCancelTradeOffer::CancelTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_tradeOfferID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionCancelTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionCancelTradeOffer()
	{
		UClass* Class = USteamCoreWebAsyncActionCancelTradeOffer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTradeOfferAsync", &USteamCoreWebAsyncActionCancelTradeOffer::execCancelTradeOfferAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics
	{
		struct SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString tradeOfferID;
			USteamCoreWebAsyncActionCancelTradeOffer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tradeOfferID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_tradeOfferID = { "tradeOfferID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, tradeOfferID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_tradeOfferID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Cancel a trade offer we sent\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09tradeOfferID\n\x09*/" },
		{ "DisplayName", "Cancel Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Cancel a trade offer we sent\n\n@param        key                                     Steamworks Web API publisher authentication key.\n@param        tradeOfferID" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer, nullptr, "CancelTradeOfferAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_NoRegister()
	{
		return USteamCoreWebAsyncActionCancelTradeOffer::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync, "CancelTradeOfferAsync" }, // 630771451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCancelTradeOffer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCancelTradeOffer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCancelTradeOffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::ClassParams = {
		&USteamCoreWebAsyncActionCancelTradeOffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionCancelTradeOffer, 2085979148);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionCancelTradeOffer>()
	{
		return USteamCoreWebAsyncActionCancelTradeOffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionCancelTradeOffer(Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer, &USteamCoreWebAsyncActionCancelTradeOffer::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionCancelTradeOffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionCancelTradeOffer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

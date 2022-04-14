// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamNews/WebSteamNews.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamNews() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamNews_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamNews();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamNews::execGetNewsForAppAuthed)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxLength);
		P_GET_TARRAY(FString,Z_Param_feeds);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNewsForAppAuthed(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_maxLength,Z_Param_feeds,Z_Param_endDate,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamNews::execGetNewsForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxLength);
		P_GET_TARRAY(FString,Z_Param_feeds);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNewsForApp(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_appID,Z_Param_maxLength,Z_Param_feeds,Z_Param_endDate,Z_Param_count);
		P_NATIVE_END;
	}
	void UWebSteamNews::StaticRegisterNativesUWebSteamNews()
	{
		UClass* Class = UWebSteamNews::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewsForApp", &UWebSteamNews::execGetNewsForApp },
			{ "GetNewsForAppAuthed", &UWebSteamNews::execGetNewsForAppAuthed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics
	{
		struct WebSteamNews_eventGetNewsForApp_Parms
		{
			FScriptDelegate callback;
			int32 appID;
			int32 maxLength;
			TArray<FString> feeds;
			int32 endDate;
			int32 count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxLength;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_feeds_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_feeds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_maxLength = { "maxLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, maxLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_feeds_Inner = { "feeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_feeds = { "feeds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForApp_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_maxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_feeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_feeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "Category", "SteamCoreWeb|SteamNews" },
		{ "Comment", "/**\n\x09* Get the news for the specified app.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""AppID to retrieve news for\n\x09* @param\x09maxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09* @param\x09""endDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09* @param\x09""feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09* @param\x09""count\x09\x09\x09List of feed names to return news for\n\x09*/" },
		{ "CPP_Default_count", "20" },
		{ "CPP_Default_endDate", "1549795233" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNews.h" },
		{ "ToolTip", "Get the news for the specified app.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   AppID to retrieve news for\n@param        maxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param        endDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param        feeds                   # of posts to retrieve (default 20)\n@param        count                   List of feed names to return news for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamNews, nullptr, "GetNewsForApp", nullptr, nullptr, sizeof(WebSteamNews_eventGetNewsForApp_Parms), Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamNews_GetNewsForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamNews_GetNewsForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics
	{
		struct WebSteamNews_eventGetNewsForAppAuthed_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			int32 maxLength;
			TArray<FString> feeds;
			int32 endDate;
			int32 count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxLength;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_feeds_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_feeds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_maxLength = { "maxLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, maxLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_feeds_Inner = { "feeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_feeds = { "feeds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamNews_eventGetNewsForAppAuthed_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_maxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_feeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_feeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "Category", "SteamCoreWeb|SteamNews" },
		{ "Comment", "/**\n\x09* Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""AppID to retrieve news for\n\x09* @param\x09maxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09* @param\x09""endDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09* @param\x09""feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09* @param\x09""count\x09\x09\x09List of feed names to return news for\n\x09*/" },
		{ "CPP_Default_count", "20" },
		{ "CPP_Default_endDate", "1549795233" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNews.h" },
		{ "ToolTip", "Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   AppID to retrieve news for\n@param        maxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param        endDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param        feeds                   # of posts to retrieve (default 20)\n@param        count                   List of feed names to return news for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamNews, nullptr, "GetNewsForAppAuthed", nullptr, nullptr, sizeof(WebSteamNews_eventGetNewsForAppAuthed_Parms), Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamNews_NoRegister()
	{
		return UWebSteamNews::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamNews_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamNews_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamNews_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamNews_GetNewsForApp, "GetNewsForApp" }, // 3289132864
		{ &Z_Construct_UFunction_UWebSteamNews_GetNewsForAppAuthed, "GetNewsForAppAuthed" }, // 2445671537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamNews/WebSteamNews.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNews.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamNews_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamNews>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamNews_Statics::ClassParams = {
		&UWebSteamNews::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamNews_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamNews()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamNews_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamNews, 887679232);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamNews>()
	{
		return UWebSteamNews::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamNews(Z_Construct_UClass_UWebSteamNews, &UWebSteamNews::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamNews"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamNews);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamNews/WebSteamNewsAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamNewsAsyncActions() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetNewsForApp::execGetNewsForAppAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxLength);
		P_GET_TARRAY(FString,Z_Param_feeds);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetNewsForApp**)Z_Param__Result=USteamCoreWebAsyncActionGetNewsForApp::GetNewsForAppAsync(Z_Param_WorldContextObject,Z_Param_appID,Z_Param_maxLength,Z_Param_feeds,Z_Param_endDate,Z_Param_count);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetNewsForApp::StaticRegisterNativesUSteamCoreWebAsyncActionGetNewsForApp()
	{
		UClass* Class = USteamCoreWebAsyncActionGetNewsForApp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewsForAppAsync", &USteamCoreWebAsyncActionGetNewsForApp::execGetNewsForAppAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms
		{
			UObject* WorldContextObject;
			int32 appID;
			int32 maxLength;
			TArray<FString> feeds;
			int32 endDate;
			int32 count;
			USteamCoreWebAsyncActionGetNewsForApp* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxLength;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_feeds_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_feeds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_maxLength = { "maxLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, maxLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_feeds_Inner = { "feeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_feeds = { "feeds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_maxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_feeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_feeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Get the news for the specified app.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""AppID to retrieve news for\n\x09* @param\x09maxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09* @param\x09""endDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09* @param\x09""feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09* @param\x09""count\x09\x09\x09List of feed names to return news for\n\x09*/" },
		{ "CPP_Default_count", "20" },
		{ "CPP_Default_endDate", "1549795233" },
		{ "DisplayName", "Get News for App" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "Get the news for the specified app.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   AppID to retrieve news for\n@param        maxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param        endDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param        feeds                   # of posts to retrieve (default 20)\n@param        count                   List of feed names to return news for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp, nullptr, "GetNewsForAppAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetNewsForApp_eventGetNewsForAppAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_NoRegister()
	{
		return USteamCoreWebAsyncActionGetNewsForApp::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync, "GetNewsForAppAsync" }, // 656363030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetNewsForApp\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetNewsForApp\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetNewsForApp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetNewsForApp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetNewsForApp, 146967921);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetNewsForApp>()
	{
		return USteamCoreWebAsyncActionGetNewsForApp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetNewsForApp(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForApp, &USteamCoreWebAsyncActionGetNewsForApp::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetNewsForApp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetNewsForApp);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetNewsForAppAuthed::execGetNewsForAppAuthedAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxLength);
		P_GET_TARRAY(FString,Z_Param_feeds);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetNewsForAppAuthed**)Z_Param__Result=USteamCoreWebAsyncActionGetNewsForAppAuthed::GetNewsForAppAuthedAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_appID,Z_Param_maxLength,Z_Param_feeds,Z_Param_endDate,Z_Param_count);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticRegisterNativesUSteamCoreWebAsyncActionGetNewsForAppAuthed()
	{
		UClass* Class = USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewsForAppAuthedAsync", &USteamCoreWebAsyncActionGetNewsForAppAuthed::execGetNewsForAppAuthedAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			int32 appID;
			int32 maxLength;
			TArray<FString> feeds;
			int32 endDate;
			int32 count;
			USteamCoreWebAsyncActionGetNewsForAppAuthed* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxLength;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_feeds_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_feeds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_maxLength = { "maxLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, maxLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_feeds_Inner = { "feeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_feeds = { "feeds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, feeds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_maxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_feeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_feeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "feeds" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09\x09""AppID to retrieve news for\n\x09* @param\x09maxLength\x09\x09Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n\x09* @param\x09""endDate\x09\x09\x09Retrieve posts earlier than this date (unix epoch timestamp)\n\x09* @param\x09""feeds\x09\x09\x09# of posts to retrieve (default 20)\n\x09* @param\x09""count\x09\x09\x09List of feed names to return news for\n\x09*/" },
		{ "CPP_Default_count", "20" },
		{ "CPP_Default_endDate", "1549795233" },
		{ "DisplayName", "Get News for App Authed" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "Get the news for the specified app. Publisher only version that can return info for unreleased games.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        appID                   AppID to retrieve news for\n@param        maxLength               Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.\n@param        endDate                 Retrieve posts earlier than this date (unix epoch timestamp)\n@param        feeds                   # of posts to retrieve (default 20)\n@param        count                   List of feed names to return news for" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed, nullptr, "GetNewsForAppAuthedAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetNewsForAppAuthed_eventGetNewsForAppAuthedAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_NoRegister()
	{
		return USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync, "GetNewsForAppAuthedAsync" }, // 274039270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetNewsForAppAuthed\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamNews/WebSteamNewsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetNewsForAppAuthed\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetNewsForAppAuthed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetNewsForAppAuthed, 866082598);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetNewsForAppAuthed>()
	{
		return USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed(Z_Construct_UClass_USteamCoreWebAsyncActionGetNewsForAppAuthed, &USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetNewsForAppAuthed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetNewsForAppAuthed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

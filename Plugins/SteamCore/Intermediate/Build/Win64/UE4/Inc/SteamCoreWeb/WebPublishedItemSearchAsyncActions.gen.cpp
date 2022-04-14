// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemSearchAsyncActions() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRankedByPublicationOrder::execRankedByPublicationOrderAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_TARRAY(FString,Z_Param_tag);
		P_GET_TARRAY(FString,Z_Param_userTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionRankedByPublicationOrder**)Z_Param__Result=USteamCoreWebAsyncActionRankedByPublicationOrder::RankedByPublicationOrderAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_startID,Z_Param_count,Z_Param_bHasAppAdminAccess,Z_Param_fileType,Z_Param_tag,Z_Param_userTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRankedByPublicationOrder::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByPublicationOrder()
	{
		UClass* Class = USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByPublicationOrderAsync", &USteamCoreWebAsyncActionRankedByPublicationOrder::execRankedByPublicationOrderAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics
	{
		struct SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			int32 startID;
			int32 count;
			bool bHasAppAdminAccess;
			int32 fileType;
			TArray<FString> tag;
			TArray<FString> userTag;
			USteamCoreWebAsyncActionRankedByPublicationOrder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_tag_Inner = { "tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_userTag_Inner = { "userTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_userTag = { "userTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, userTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_userTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_userTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "tag,usertag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Ranked by Publication Order\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09startID\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""fileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09userTag\x09\x09\x09\x09\x09""A user specific tag\n\x09*/" },
		{ "DisplayName", "Ranked by Publication Order" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "Ranked by Publication Order\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        appID                                   appID of product\n@param        startID                                 Starting index in the result set(0 based)\n@param        count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        fileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        tag                                             Tag to filter result set\n@param        userTag                                 A user specific tag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder, nullptr, "RankedByPublicationOrderAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionRankedByPublicationOrder_eventRankedByPublicationOrderAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_NoRegister()
	{
		return USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync, "RankedByPublicationOrderAsync" }, // 9208168
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByPublicationOrder\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByPublicationOrder\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByPublicationOrder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionRankedByPublicationOrder, 3505889548);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRankedByPublicationOrder>()
	{
		return USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByPublicationOrder, &USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionRankedByPublicationOrder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRankedByPublicationOrder);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRankedByTrend::execRankedByTrendAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_days);
		P_GET_TARRAY(FString,Z_Param_tag);
		P_GET_TARRAY(FString,Z_Param_userTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionRankedByTrend**)Z_Param__Result=USteamCoreWebAsyncActionRankedByTrend::RankedByTrendAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_startID,Z_Param_count,Z_Param_bHasAppAdminAccess,Z_Param_fileType,Z_Param_days,Z_Param_tag,Z_Param_userTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRankedByTrend::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByTrend()
	{
		UClass* Class = USteamCoreWebAsyncActionRankedByTrend::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByTrendAsync", &USteamCoreWebAsyncActionRankedByTrend::execRankedByTrendAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics
	{
		struct SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			int32 startID;
			int32 count;
			bool bHasAppAdminAccess;
			int32 fileType;
			int32 days;
			TArray<FString> tag;
			TArray<FString> userTag;
			USteamCoreWebAsyncActionRankedByTrend* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_days;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_days = { "days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, days), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_tag_Inner = { "tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_userTag_Inner = { "userTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_userTag = { "userTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, userTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_userTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_userTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "tag,usertag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Ranked by Trend\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09startID\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""fileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09""days\x09\x09\x09\x09\x09Number of days for the trend period, including today\n\x09* @param\x09tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09userTag\x09\x09\x09\x09\x09""A user specific tag\n\x09*/" },
		{ "DisplayName", "Ranked by Trend" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "Ranked by Trend\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        appID                                   appID of product\n@param        startID                                 Starting index in the result set(0 based)\n@param        count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        fileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        days                                    Number of days for the trend period, including today\n@param        tag                                             Tag to filter result set\n@param        userTag                                 A user specific tag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend, nullptr, "RankedByTrendAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionRankedByTrend_eventRankedByTrendAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_NoRegister()
	{
		return USteamCoreWebAsyncActionRankedByTrend::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync, "RankedByTrendAsync" }, // 2050258455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByTrend\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByTrend\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByTrend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRankedByTrend::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionRankedByTrend, 3641481676);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRankedByTrend>()
	{
		return USteamCoreWebAsyncActionRankedByTrend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionRankedByTrend(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByTrend, &USteamCoreWebAsyncActionRankedByTrend::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionRankedByTrend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRankedByTrend);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRankedByVote::execRankedByVoteAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_TARRAY(FString,Z_Param_tag);
		P_GET_TARRAY(FString,Z_Param_userTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionRankedByVote**)Z_Param__Result=USteamCoreWebAsyncActionRankedByVote::RankedByVoteAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_startID,Z_Param_count,Z_Param_bHasAppAdminAccess,Z_Param_fileType,Z_Param_tag,Z_Param_userTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRankedByVote::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByVote()
	{
		UClass* Class = USteamCoreWebAsyncActionRankedByVote::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByVoteAsync", &USteamCoreWebAsyncActionRankedByVote::execRankedByVoteAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics
	{
		struct SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			int32 startID;
			int32 count;
			bool bHasAppAdminAccess;
			int32 fileType;
			TArray<FString> tag;
			TArray<FString> userTag;
			USteamCoreWebAsyncActionRankedByVote* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_tag_Inner = { "tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_userTag_Inner = { "userTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_userTag = { "userTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, userTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_userTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_userTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "tag,usertag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Ranked by Vote\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09startID\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""count\x09\x09\x09\x09\x09Number Requested\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""fileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09userTag\x09\x09\x09\x09\x09""A user specific tag\n\x09*/" },
		{ "DisplayName", "Ranked by Vote" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "Ranked by Vote\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        appID                                   appID of product\n@param        startID                                 Starting index in the result set(0 based)\n@param        count                                   Number Requested\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        fileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        tag                                             Tag to filter result set\n@param        userTag                                 A user specific tag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote, nullptr, "RankedByVoteAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister()
	{
		return USteamCoreWebAsyncActionRankedByVote::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync, "RankedByVoteAsync" }, // 669276652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRankedByVote\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRankedByVote\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByVote>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRankedByVote::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionRankedByVote, 1535251050);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRankedByVote>()
	{
		return USteamCoreWebAsyncActionRankedByVote::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionRankedByVote(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote, &USteamCoreWebAsyncActionRankedByVote::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionRankedByVote"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRankedByVote);
	DEFINE_FUNCTION(USteamCoreWebAsyncActionResultSetSummary::execResultSetSummaryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_fileType);
		P_GET_TARRAY(FString,Z_Param_tag);
		P_GET_TARRAY(FString,Z_Param_userTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionResultSetSummary**)Z_Param__Result=USteamCoreWebAsyncActionResultSetSummary::ResultSetSummaryAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_startID,Z_Param_bHasAppAdminAccess,Z_Param_fileType,Z_Param_tag,Z_Param_userTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionResultSetSummary::StaticRegisterNativesUSteamCoreWebAsyncActionResultSetSummary()
	{
		UClass* Class = USteamCoreWebAsyncActionResultSetSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResultSetSummaryAsync", &USteamCoreWebAsyncActionResultSetSummary::execResultSetSummaryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics
	{
		struct SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamID;
			int32 appID;
			int32 startID;
			bool bHasAppAdminAccess;
			int32 fileType;
			TArray<FString> tag;
			TArray<FString> userTag;
			USteamCoreWebAsyncActionResultSetSummary* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_userTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, fileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_tag_Inner = { "tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_userTag_Inner = { "userTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_userTag = { "userTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, userTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_userTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_userTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "tag,usertag" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Result Set Summary\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamid\x09\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09startID\x09\x09\x09\x09\x09Starting index in the result set(0 based)\n\x09* @param\x09""bHasAppAdminAccess\x09\x09Whether the user making the request is an admin for the appand can see private files\n\x09* @param\x09""fileType\x09\x09\x09\x09""EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n\x09* @param\x09tag\x09\x09\x09\x09\x09\x09Tag to filter result set\n\x09* @param\x09userTag\x09\x09\x09\x09\x09""A user specific tag\n\x09*/" },
		{ "DisplayName", "Result Set Summary" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "Result Set Summary\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamid                                 SteamID of user\n@param        appID                                   appID of product\n@param        startID                                 Starting index in the result set(0 based)\n@param        bHasAppAdminAccess              Whether the user making the request is an admin for the appand can see private files\n@param        fileType                                EPublishedFileInfoMatchingFileType, defaults to k_PFI_MatchingFileType_Items\n@param        tag                                             Tag to filter result set\n@param        userTag                                 A user specific tag" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary, nullptr, "ResultSetSummaryAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionResultSetSummary_eventResultSetSummaryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_NoRegister()
	{
		return USteamCoreWebAsyncActionResultSetSummary::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync, "ResultSetSummaryAsync" }, // 236998836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionResultSetSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ModuleRelativePath", "Public/PublishedItemSearch/WebPublishedItemSearchAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionResultSetSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionResultSetSummary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::ClassParams = {
		&USteamCoreWebAsyncActionResultSetSummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionResultSetSummary, 2956937442);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionResultSetSummary>()
	{
		return USteamCoreWebAsyncActionResultSetSummary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionResultSetSummary(Z_Construct_UClass_USteamCoreWebAsyncActionResultSetSummary, &USteamCoreWebAsyncActionResultSetSummary::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionResultSetSummary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionResultSetSummary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

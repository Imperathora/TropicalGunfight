// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PublishedItemVoting/WebPublishedItemVoting.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemVoting() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedItemVoting();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebPublishedItemVoting::execUserVoteSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(FString,Z_Param_publishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UserVoteSummary(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_publishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedItemVoting::execItemVoteSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_TARRAY(FString,Z_Param_publishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemVoteSummary(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_steamID,Z_Param_appID,Z_Param_publishedFileIDs);
		P_NATIVE_END;
	}
	void UWebPublishedItemVoting::StaticRegisterNativesUWebPublishedItemVoting()
	{
		UClass* Class = UWebPublishedItemVoting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemVoteSummary", &UWebPublishedItemVoting::execItemVoteSummary },
			{ "UserVoteSummary", &UWebPublishedItemVoting::execUserVoteSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics
	{
		struct WebPublishedItemVoting_eventItemVoteSummary_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			int32 appID;
			TArray<FString> publishedFileIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_publishedFileIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_publishedFileIDs_Inner = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_publishedFileIDs = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, publishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_publishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_publishedFileIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "publishedFileIDs" },
		{ "Category", "SteamCoreWeb|PublishedItemVoting" },
		{ "Comment", "/**\n\x09* Item Vote Summary\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09Steam ID of user\n\x09* @param\x09""appID\x09\x09\x09\x09\x09""appID of product\n\x09* @param\x09publishedFileIDs\x09\x09The Published File ID who's vote details are required\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
		{ "ToolTip", "Item Vote Summary\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamID                                 Steam ID of user\n@param        appID                                   appID of product\n@param        publishedFileIDs                The Published File ID who's vote details are required" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedItemVoting, nullptr, "ItemVoteSummary", nullptr, nullptr, sizeof(WebPublishedItemVoting_eventItemVoteSummary_Parms), Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics
	{
		struct WebPublishedItemVoting_eventUserVoteSummary_Parms
		{
			FScriptDelegate callback;
			FString key;
			FString steamID;
			TArray<FString> publishedFileIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_publishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_publishedFileIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_publishedFileIDs_Inner = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_publishedFileIDs = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, publishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_publishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_publishedFileIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "publishedFileIDs" },
		{ "Category", "SteamCoreWeb|PublishedItemVoting" },
		{ "Comment", "/**\n\x09* Item Vote Summary\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamID\x09\x09\x09\x09\x09Steam ID of user\n\x09* @param\x09publishedFileIDs\x09\x09The Published File ID who's vote details are required\n\x09*/" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
		{ "ToolTip", "Item Vote Summary\n\n@param        key                                             Steamworks Web API publisher authentication key.\n@param        steamID                                 Steam ID of user\n@param        publishedFileIDs                The Published File ID who's vote details are required" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedItemVoting, nullptr, "UserVoteSummary", nullptr, nullptr, sizeof(WebPublishedItemVoting_eventUserVoteSummary_Parms), Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister()
	{
		return UWebPublishedItemVoting::StaticClass();
	}
	struct Z_Construct_UClass_UWebPublishedItemVoting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebPublishedItemVoting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebPublishedItemVoting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary, "ItemVoteSummary" }, // 143152471
		{ &Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary, "UserVoteSummary" }, // 3292873360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVoting.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebPublishedItemVoting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPublishedItemVoting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebPublishedItemVoting_Statics::ClassParams = {
		&UWebPublishedItemVoting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebPublishedItemVoting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebPublishedItemVoting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebPublishedItemVoting, 898033410);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebPublishedItemVoting>()
	{
		return UWebPublishedItemVoting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebPublishedItemVoting(Z_Construct_UClass_UWebPublishedItemVoting, &UWebPublishedItemVoting::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebPublishedItemVoting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPublishedItemVoting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

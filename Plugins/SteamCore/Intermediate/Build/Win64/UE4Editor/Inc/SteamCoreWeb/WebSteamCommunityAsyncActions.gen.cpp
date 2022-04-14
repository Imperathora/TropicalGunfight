// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCommunity/WebSteamCommunityAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamCommunityAsyncActions() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionReportAbuse::execReportAbuseAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDTarget);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_abuseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_contentType);
		P_GET_PROPERTY(FStrProperty,Z_Param_description);
		P_GET_PROPERTY(FStrProperty,Z_Param_gid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionReportAbuse**)Z_Param__Result=USteamCoreWebAsyncActionReportAbuse::ReportAbuseAsync(Z_Param_WorldContextObject,Z_Param_key,Z_Param_steamIDActor,Z_Param_steamIDTarget,Z_Param_appID,Z_Param_abuseType,Z_Param_contentType,Z_Param_description,Z_Param_gid);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionReportAbuse::StaticRegisterNativesUSteamCoreWebAsyncActionReportAbuse()
	{
		UClass* Class = USteamCoreWebAsyncActionReportAbuse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportAbuseAsync", &USteamCoreWebAsyncActionReportAbuse::execReportAbuseAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics
	{
		struct SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms
		{
			UObject* WorldContextObject;
			FString key;
			FString steamIDActor;
			FString steamIDTarget;
			int32 appID;
			int32 abuseType;
			int32 contentType;
			FString description;
			FString gid;
			USteamCoreWebAsyncActionReportAbuse* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDActor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDTarget;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_abuseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_contentType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_description;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_steamIDActor = { "steamIDActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, steamIDActor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_steamIDTarget = { "steamIDTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, steamIDTarget), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_abuseType = { "abuseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, abuseType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_contentType = { "contentType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, contentType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_gid = { "gid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, gid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_steamIDActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_steamIDTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_abuseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_contentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_gid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|PlayerService|Async" },
		{ "Comment", "/**\n\x09* Allows publishers to report users who are behaving badly on their community hub.\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09steamidActor\x09SteamID of user doing the reporting\n\x09* @param\x09steamidTarget\x09SteamID of the entity being accused of abuse\n\x09* @param\x09""appID\x09\x09\x09""AppID to check for ownership\n\x09* @param\x09""abuseType\x09\x09""Abuse type code (see EAbuseReportType enum)\n\x09* @param\x09""contentType\x09\x09""Content type code (see ECommunityContentType enum)\n\x09* @param\x09""description\x09\x09Narrative from user\n\x09* @param\x09gid\x09\x09\x09\x09GID of related record (depends on content type)\n\x09*/" },
		{ "DisplayName", "Report Abuse" },
		{ "ModuleRelativePath", "Public/SteamCommunity/WebSteamCommunityAsyncActions.h" },
		{ "ToolTip", "Allows publishers to report users who are behaving badly on their community hub.\n\n@param        key                             Steamworks Web API publisher authentication key.\n@param        steamidActor    SteamID of user doing the reporting\n@param        steamidTarget   SteamID of the entity being accused of abuse\n@param        appID                   AppID to check for ownership\n@param        abuseType               Abuse type code (see EAbuseReportType enum)\n@param        contentType             Content type code (see ECommunityContentType enum)\n@param        description             Narrative from user\n@param        gid                             GID of related record (depends on content type)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse, nullptr, "ReportAbuseAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionReportAbuse_eventReportAbuseAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_NoRegister()
	{
		return USteamCoreWebAsyncActionReportAbuse::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync, "ReportAbuseAsync" }, // 2803919627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionReportAbuse\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamCommunity/WebSteamCommunityAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamCommunity/WebSteamCommunityAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionReportAbuse\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionReportAbuse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::ClassParams = {
		&USteamCoreWebAsyncActionReportAbuse::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionReportAbuse, 158532480);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionReportAbuse>()
	{
		return USteamCoreWebAsyncActionReportAbuse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionReportAbuse(Z_Construct_UClass_USteamCoreWebAsyncActionReportAbuse, &USteamCoreWebAsyncActionReportAbuse::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionReportAbuse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionReportAbuse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

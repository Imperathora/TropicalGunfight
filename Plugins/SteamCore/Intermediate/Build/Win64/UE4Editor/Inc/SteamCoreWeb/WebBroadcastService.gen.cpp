// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/BroadcastService/WebBroadcastService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBroadcastService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebBroadcastService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebBroadcastService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebBroadcastService::execPostGameDataFrame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_broadcastID);
		P_GET_PROPERTY(FStrProperty,Z_Param_frameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostGameDataFrame(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_steamID,Z_Param_broadcastID,Z_Param_frameData);
		P_NATIVE_END;
	}
	void UWebBroadcastService::StaticRegisterNativesUWebBroadcastService()
	{
		UClass* Class = UWebBroadcastService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostGameDataFrame", &UWebBroadcastService::execPostGameDataFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics
	{
		struct WebBroadcastService_eventPostGameDataFrame_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString steamID;
			FString broadcastID;
			FString frameData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_broadcastID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_frameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_broadcastID = { "broadcastID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, broadcastID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_frameData = { "frameData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, frameData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_broadcastID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_frameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Gets all of the beta branches for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The App ID to get the betas of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastService.h" },
		{ "ToolTip", "Gets all of the beta branches for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The App ID to get the betas of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBroadcastService, nullptr, "PostGameDataFrame", nullptr, nullptr, sizeof(WebBroadcastService_eventPostGameDataFrame_Parms), Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebBroadcastService_NoRegister()
	{
		return UWebBroadcastService::StaticClass();
	}
	struct Z_Construct_UClass_UWebBroadcastService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBroadcastService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebBroadcastService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame, "PostGameDataFrame" }, // 617468276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BroadcastService/WebBroadcastService.h" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBroadcastService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBroadcastService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebBroadcastService_Statics::ClassParams = {
		&UWebBroadcastService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebBroadcastService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebBroadcastService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebBroadcastService, 772980602);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebBroadcastService>()
	{
		return UWebBroadcastService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebBroadcastService(Z_Construct_UClass_UWebBroadcastService, &UWebBroadcastService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebBroadcastService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBroadcastService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamUserAuth/WebUserAuth.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebUserAuth() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserAuth();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebUserAuth::execAuthenticateUserTicket)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthenticateUserTicket(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_key,Z_Param_appID,Z_Param_ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserAuth::execAuthenticateUser)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamID);
		P_GET_TARRAY(uint8,Z_Param_sessionKey);
		P_GET_TARRAY(uint8,Z_Param_encryptedLoginKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AuthenticateUser(FOnSteamCoreWebCallback(Z_Param_Out_callback),Z_Param_steamID,Z_Param_sessionKey,Z_Param_encryptedLoginKey);
		P_NATIVE_END;
	}
	void UWebUserAuth::StaticRegisterNativesUWebUserAuth()
	{
		UClass* Class = UWebUserAuth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateUser", &UWebUserAuth::execAuthenticateUser },
			{ "AuthenticateUserTicket", &UWebUserAuth::execAuthenticateUserTicket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics
	{
		struct WebUserAuth_eventAuthenticateUser_Parms
		{
			FScriptDelegate callback;
			FString steamID;
			TArray<uint8> sessionKey;
			TArray<uint8> encryptedLoginKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sessionKey_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sessionKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_encryptedLoginKey_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_encryptedLoginKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, steamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_sessionKey_Inner = { "sessionKey", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_sessionKey = { "sessionKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, sessionKey), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_encryptedLoginKey_Inner = { "encryptedLoginKey", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_encryptedLoginKey = { "encryptedLoginKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUser_Parms, encryptedLoginKey), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_sessionKey_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_sessionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_encryptedLoginKey_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::NewProp_encryptedLoginKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|UserAuth" },
		{ "Comment", "/**\n\x09* Authenticate User\n\x09*\n\x09* @param\x09steamID\x09\x09\x09\x09\x09Should be the users steamid, unencrypted.\n\x09* @param\x09sessionKey\x09\x09\x09\x09Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n\x09* @param\x09""encryptedLoginKey\x09\x09Should be the users hashed loginkey, AES encrypted with the sessionkey.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
		{ "ToolTip", "Authenticate User\n\n@param        steamID                                 Should be the users steamid, unencrypted.\n@param        sessionKey                              Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.\n@param        encryptedLoginKey               Should be the users hashed loginkey, AES encrypted with the sessionkey." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserAuth, nullptr, "AuthenticateUser", nullptr, nullptr, sizeof(WebUserAuth_eventAuthenticateUser_Parms), Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserAuth_AuthenticateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserAuth_AuthenticateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics
	{
		struct WebUserAuth_eventAuthenticateUserTicket_Parms
		{
			FScriptDelegate callback;
			FString key;
			int32 appID;
			FString ticket;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ticket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_ticket = { "ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserAuth_eventAuthenticateUserTicket_Parms, ticket), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::NewProp_ticket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|UserAuth" },
		{ "Comment", "/**\n\x09* Authenticate User Ticket\n\x09*\n\x09* @param\x09key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""appID\x09\x09The App ID to get the betas of.\n\x09* @param\x09ticket\x09\x09""Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
		{ "ToolTip", "Authenticate User Ticket\n\n@param        key                     Steamworks Web API publisher authentication key.\n@param        appID           The App ID to get the betas of.\n@param        ticket          Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserAuth, nullptr, "AuthenticateUserTicket", nullptr, nullptr, sizeof(WebUserAuth_eventAuthenticateUserTicket_Parms), Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebUserAuth_NoRegister()
	{
		return UWebUserAuth::StaticClass();
	}
	struct Z_Construct_UClass_UWebUserAuth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebUserAuth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebUserAuth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebUserAuth_AuthenticateUser, "AuthenticateUser" }, // 3160427620
		{ &Z_Construct_UFunction_UWebUserAuth_AuthenticateUserTicket, "AuthenticateUserTicket" }, // 108986467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUserAuth/WebUserAuth.h" },
		{ "ModuleRelativePath", "Public/SteamUserAuth/WebUserAuth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebUserAuth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebUserAuth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebUserAuth_Statics::ClassParams = {
		&UWebUserAuth::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserAuth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebUserAuth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebUserAuth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebUserAuth, 3902523804);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebUserAuth>()
	{
		return UWebUserAuth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebUserAuth(Z_Construct_UClass_UWebUserAuth, &UWebUserAuth::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebUserAuth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebUserAuth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

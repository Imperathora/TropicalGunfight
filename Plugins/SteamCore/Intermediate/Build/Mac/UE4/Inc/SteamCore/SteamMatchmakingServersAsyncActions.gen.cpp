// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServersAsyncActions() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRefreshCompleteDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms
		{
			TArray<FGameServerRule> data;
			bool bWasSuccessful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	void Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRuleAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnServerRuleAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms
		{
			FGameServerItem data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerUpdatedAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnPingServerAsyncDelegate_Parms
		{
			FGameServerItem data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	void Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnPingServerAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionPingServer::execHandleCallback)
	{
		P_GET_STRUCT_REF(FGameServerItem,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionPingServer::execPingServerAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionPingServer**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionPingServer::PingServerAsync(Z_Param_WorldContextObject,Z_Param_ip,Z_Param_port);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingServersAsyncActionPingServer::StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionPingServer()
	{
		UClass* Class = USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingServersAsyncActionPingServer::execHandleCallback },
			{ "PingServerAsync", &USteamCoreMatchmakingServersAsyncActionPingServer::execPingServerAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms
		{
			FGameServerItem data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms
		{
			UObject* WorldContextObject;
			FString ip;
			int32 port;
			USteamCoreMatchmakingServersAsyncActionPingServer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_port;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, ip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\x09*\n\x09* @param\x09ip\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09port\x09The port of the game server you are querying, in host order.\n\x09*/" },
		{ "DisplayName", "Ping Server" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\n@param        ip              The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        port    The port of the game server you are querying, in host order." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer, nullptr, "PingServerAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister()
	{
		return USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback, "HandleCallback" }, // 3137394397
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync, "PingServerAsync" }, // 1747861401
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingServersAsyncActionPingServer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingServersAsyncActionPingServer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionPingServer, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnPingServerAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingServersAsyncActionPingServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::ClassParams = {
		&USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingServersAsyncActionPingServer, 1220437383);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingServersAsyncActionPingServer>()
	{
		return USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingServersAsyncActionPingServer(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer, &USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingServersAsyncActionPingServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingServersAsyncActionPingServer);
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleServerListFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleServerListFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FGameServerItem,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestSpectatorServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestLANServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestInternetServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestHistoryServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFriendsServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFavoritesServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionRequestServerList()
	{
		UClass* Class = USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleCallback },
			{ "HandleServerListFinished", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleServerListFinished },
			{ "RequestFavoritesServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFavoritesServerListAsync },
			{ "RequestFriendsServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFriendsServerListAsync },
			{ "RequestHistoryServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestHistoryServerListAsync },
			{ "RequestInternetServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestInternetServerListAsync },
			{ "RequestLANServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestLANServerListAsync },
			{ "RequestSpectatorServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestSpectatorServerListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms
		{
			FGameServerItem Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "HandleServerListFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'FAVORITES' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Favorites  Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'FAVORITES' server list.\n\n@param        AppID   The app to request the server list of." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestFavoritesServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'FRIENDS' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Friends Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'FRIENDS' server list.\n\n@param        AppID   The app to request the server list of." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestFriendsServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'HISTORY' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request History Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'HISTORY' server list.\n\n@param        AppID   The app to request the server list of." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestHistoryServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'INTERNET' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Internet Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'INTERNET' server list.\n\n@param        AppID   The app to request the server list of." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestInternetServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'LAN' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request LAN Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'LAN' server list.\n\n@param        AppID   The app to request the server list of." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestLANServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Spectator Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        AppID   The app to request the server list of." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestSpectatorServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister()
	{
		return USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRefreshCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefreshCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback, "HandleCallback" }, // 22560438
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished, "HandleServerListFinished" }, // 474458473
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync, "RequestFavoritesServerListAsync" }, // 1942935612
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync, "RequestFriendsServerListAsync" }, // 2900858860
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync, "RequestHistoryServerListAsync" }, // 1206846347
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync, "RequestInternetServerListAsync" }, // 2526629288
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync, "RequestLANServerListAsync" }, // 2057287048
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync, "RequestSpectatorServerListAsync" }, // 2818693710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingServersAsyncActionRequestFavoritesServerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingServersAsyncActionRequestFavoritesServerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionRequestServerList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted_MetaData[] = {
		{ "Comment", "// This delegate will fire when Steam tells us that we've got the entire list, but could also mean it took too long and we've timed out.\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "This delegate will fire when Steam tells us that we've got the entire list, but could also mean it took too long and we've timed out." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted = { "OnRefreshCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionRequestServerList, OnRefreshCompleted), Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingServersAsyncActionRequestServerList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::ClassParams = {
		&USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingServersAsyncActionRequestServerList, 1989940739);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingServersAsyncActionRequestServerList>()
	{
		return USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, &USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingServersAsyncActionRequestServerList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingServersAsyncActionRequestServerList);
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionServerRules::execHandleCallback)
	{
		P_GET_TARRAY_REF(FGameServerRule,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionServerRules::execServerRulesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionServerRules**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(Z_Param_WorldContextObject,Z_Param_Ip,Z_Param_QueryPort);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingServersAsyncActionServerRules::StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionServerRules()
	{
		UClass* Class = USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingServersAsyncActionServerRules::execHandleCallback },
			{ "ServerRulesAsync", &USteamCoreMatchmakingServersAsyncActionServerRules::execServerRulesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms
		{
			TArray<FGameServerRule> Data;
			bool bWasSuccessful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms
		{
			UObject* WorldContextObject;
			FString Ip;
			int32 QueryPort;
			USteamCoreMatchmakingServersAsyncActionServerRules* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ip;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, Ip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\x09*\n\x09* @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09*/" },
		{ "DisplayName", "Server Rules" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\n@param        Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        QueryPort       The port of the game server you are querying, in host order." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, nullptr, "ServerRulesAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister()
	{
		return USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback, "HandleCallback" }, // 150051752
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync, "ServerRulesAsync" }, // 3380082388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingServersAsyncActionServerRules\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingServersAsyncActionServerRules\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionServerRules, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerRuleAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingServersAsyncActionServerRules>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::ClassParams = {
		&USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingServersAsyncActionServerRules, 4158489553);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingServersAsyncActionServerRules>()
	{
		return USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingServersAsyncActionServerRules(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules, &USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingServersAsyncActionServerRules"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingServersAsyncActionServerRules);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

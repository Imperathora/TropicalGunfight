// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameSearch/SteamGameSearchTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameSearchTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEndGameResultCallback();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameResultCallback();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameProgressCallback();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventEndGameResultDelegate_Parms
		{
			FEndGameResultCallback data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventEndGameResultDelegate_Parms, data), Z_Construct_UScriptStruct_FEndGameResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "EndGameResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventEndGameResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms
		{
			FSubmitPlayerResultResultCallback data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms, data), Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SubmitPlayerResultResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms
		{
			FRequestPlayersForGameFinalResultCallback data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms, data), Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameFinalResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms
		{
			FRequestPlayersForGameResultCallback data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms, data), Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms
		{
			FRequestPlayersForGameProgressCallback data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms, data), Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameProgressDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventSearchForGameResultDelegate_Parms
		{
			FSearchForGameResultCallback data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventSearchForGameResultDelegate_Parms, data), Z_Construct_UScriptStruct_FSearchForGameResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SearchForGameResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventSearchForGameResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventSearchForGameProgressDelegate_Parms
		{
			FSearchForGameProgressCallback data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventSearchForGameProgressDelegate_Parms, data), Z_Construct_UScriptStruct_FSearchForGameProgressCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SearchForGameProgressDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventSearchForGameProgressDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESteamPlayerAcceptState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPlayerAcceptState"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerAcceptState>()
	{
		return ESteamPlayerAcceptState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamPlayerAcceptState(ESteamPlayerAcceptState_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamPlayerAcceptState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Hash() { return 1712746517U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamPlayerAcceptState"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamPlayerAcceptState::Unknown", (int64)ESteamPlayerAcceptState::Unknown },
				{ "ESteamPlayerAcceptState::PlayerAccepted", (int64)ESteamPlayerAcceptState::PlayerAccepted },
				{ "ESteamPlayerAcceptState::PlayerDeclined", (int64)ESteamPlayerAcceptState::PlayerDeclined },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
				{ "PlayerAccepted.Name", "ESteamPlayerAcceptState::PlayerAccepted" },
				{ "PlayerDeclined.Name", "ESteamPlayerAcceptState::PlayerDeclined" },
				{ "Unknown.Name", "ESteamPlayerAcceptState::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamPlayerAcceptState",
				"ESteamPlayerAcceptState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamPlayerResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPlayerResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPlayerResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerResult>()
	{
		return ESteamPlayerResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamPlayerResult(ESteamPlayerResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamPlayerResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Hash() { return 1129968519U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamPlayerResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamPlayerResult::Invalid", (int64)ESteamPlayerResult::Invalid },
				{ "ESteamPlayerResult::FailedToConnect", (int64)ESteamPlayerResult::FailedToConnect },
				{ "ESteamPlayerResult::Abandoned", (int64)ESteamPlayerResult::Abandoned },
				{ "ESteamPlayerResult::Kicked", (int64)ESteamPlayerResult::Kicked },
				{ "ESteamPlayerResult::Incomplete", (int64)ESteamPlayerResult::Incomplete },
				{ "ESteamPlayerResult::Completed", (int64)ESteamPlayerResult::Completed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abandoned.Comment", "// failed to connect after confirming\n" },
				{ "Abandoned.Name", "ESteamPlayerResult::Abandoned" },
				{ "Abandoned.ToolTip", "failed to connect after confirming" },
				{ "BlueprintType", "true" },
				{ "Completed.Comment", "// player stayed to end but game did not conclude successfully ( nofault to player )\n" },
				{ "Completed.Name", "ESteamPlayerResult::Completed" },
				{ "Completed.ToolTip", "player stayed to end but game did not conclude successfully ( nofault to player )" },
				{ "FailedToConnect.Name", "ESteamPlayerResult::FailedToConnect" },
				{ "Incomplete.Comment", "// kicked by other players/moderator/server rules\n" },
				{ "Incomplete.Name", "ESteamPlayerResult::Incomplete" },
				{ "Incomplete.ToolTip", "kicked by other players/moderator/server rules" },
				{ "Invalid.Name", "ESteamPlayerResult::Invalid" },
				{ "Kicked.Comment", "// quit game without completing it\n" },
				{ "Kicked.Name", "ESteamPlayerResult::Kicked" },
				{ "Kicked.ToolTip", "quit game without completing it" },
				{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamPlayerResult",
				"ESteamPlayerResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamGameSearchErrorCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGameSearchErrorCode"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamGameSearchErrorCode>()
	{
		return ESteamGameSearchErrorCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamGameSearchErrorCode(ESteamGameSearchErrorCode_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamGameSearchErrorCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Hash() { return 2494651753U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamGameSearchErrorCode"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamGameSearchErrorCode::Invalid", (int64)ESteamGameSearchErrorCode::Invalid },
				{ "ESteamGameSearchErrorCode::OK", (int64)ESteamGameSearchErrorCode::OK },
				{ "ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress", (int64)ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress },
				{ "ESteamGameSearchErrorCode::Failed_No_Search_In_Progress", (int64)ESteamGameSearchErrorCode::Failed_No_Search_In_Progress },
				{ "ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader", (int64)ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader },
				{ "ESteamGameSearchErrorCode::Failed_No_Host_Available", (int64)ESteamGameSearchErrorCode::Failed_No_Host_Available },
				{ "ESteamGameSearchErrorCode::Failed_Search_Params_Invalid", (int64)ESteamGameSearchErrorCode::Failed_Search_Params_Invalid },
				{ "ESteamGameSearchErrorCode::Failed_Offline", (int64)ESteamGameSearchErrorCode::Failed_Offline },
				{ "ESteamGameSearchErrorCode::Failed_NotAuthorized", (int64)ESteamGameSearchErrorCode::Failed_NotAuthorized },
				{ "ESteamGameSearchErrorCode::Failed_Unknown_Error", (int64)ESteamGameSearchErrorCode::Failed_Unknown_Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "Failed_No_Host_Available.Comment", "// if not the lobby leader can not call SearchForGameWithLobby\n" },
				{ "Failed_No_Host_Available.Name", "ESteamGameSearchErrorCode::Failed_No_Host_Available" },
				{ "Failed_No_Host_Available.ToolTip", "if not the lobby leader can not call SearchForGameWithLobby" },
				{ "Failed_No_Search_In_Progress.Name", "ESteamGameSearchErrorCode::Failed_No_Search_In_Progress" },
				{ "Failed_Not_Lobby_Leader.Name", "ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader" },
				{ "Failed_NotAuthorized.Comment", "// offline, could not communicate with server\n" },
				{ "Failed_NotAuthorized.Name", "ESteamGameSearchErrorCode::Failed_NotAuthorized" },
				{ "Failed_NotAuthorized.ToolTip", "offline, could not communicate with server" },
				{ "Failed_Offline.Comment", "// search params are invalid\n" },
				{ "Failed_Offline.Name", "ESteamGameSearchErrorCode::Failed_Offline" },
				{ "Failed_Offline.ToolTip", "search params are invalid" },
				{ "Failed_Search_Already_In_Progress.Name", "ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress" },
				{ "Failed_Search_Params_Invalid.Comment", "// no host is available that matches those search params\n" },
				{ "Failed_Search_Params_Invalid.Name", "ESteamGameSearchErrorCode::Failed_Search_Params_Invalid" },
				{ "Failed_Search_Params_Invalid.ToolTip", "no host is available that matches those search params" },
				{ "Failed_Unknown_Error.Comment", "// either the user or the application does not have priveledges to do this\n" },
				{ "Failed_Unknown_Error.Name", "ESteamGameSearchErrorCode::Failed_Unknown_Error" },
				{ "Failed_Unknown_Error.ToolTip", "either the user or the application does not have priveledges to do this" },
				{ "Invalid.Name", "ESteamGameSearchErrorCode::Invalid" },
				{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
				{ "OK.Name", "ESteamGameSearchErrorCode::OK" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamGameSearchErrorCode",
				"ESteamGameSearchErrorCode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEndGameResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndGameResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("EndGameResultCallback"), sizeof(FEndGameResultCallback), Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FEndGameResultCallback>()
{
	return FEndGameResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEndGameResultCallback(FEndGameResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("EndGameResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFEndGameResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFEndGameResultCallback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EndGameResultCallback")),new UScriptStruct::TCppStructOps<FEndGameResultCallback>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFEndGameResultCallback;
	struct Z_Construct_UScriptStruct_FEndGameResultCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This callback confirms that the game is recorded as complete on the matchmaking service\n* The next call to RequestPlayersForGame will generate a new unique game ID\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* This callback confirms that the game is recorded as complete on the matchmaking service\n* The next call to RequestPlayersForGame will generate a new unique game ID" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndGameResultCallback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEndGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEndGameResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"EndGameResultCallback",
		sizeof(FEndGameResultCallback),
		alignof(FEndGameResultCallback),
		Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEndGameResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EndGameResultCallback"), sizeof(FEndGameResultCallback), Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash() { return 315440974U; }
class UScriptStruct* FSubmitPlayerResultResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("SubmitPlayerResultResultCallback"), sizeof(FSubmitPlayerResultResultCallback), Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSubmitPlayerResultResultCallback>()
{
	return FSubmitPlayerResultResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmitPlayerResultResultCallback(FSubmitPlayerResultResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SubmitPlayerResultResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSubmitPlayerResultResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSubmitPlayerResultResultCallback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmitPlayerResultResultCallback")),new UScriptStruct::TCppStructOps<FSubmitPlayerResultResultCallback>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSubmitPlayerResultResultCallback;
	struct Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This callback confirms that results were received by the matchmaking service for this player\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* This callback confirms that results were received by the matchmaking service for this player" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmitPlayerResultResultCallback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SubmitPlayerResultResultCallback",
		sizeof(FSubmitPlayerResultResultCallback),
		alignof(FSubmitPlayerResultResultCallback),
		Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmitPlayerResultResultCallback"), sizeof(FSubmitPlayerResultResultCallback), Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash() { return 1641887778U; }
class UScriptStruct* FRequestPlayersForGameFinalResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameFinalResultCallback"), sizeof(FRequestPlayersForGameFinalResultCallback), Get_Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestPlayersForGameFinalResultCallback>()
{
	return FRequestPlayersForGameFinalResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequestPlayersForGameFinalResultCallback(FRequestPlayersForGameFinalResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RequestPlayersForGameFinalResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameFinalResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameFinalResultCallback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RequestPlayersForGameFinalResultCallback")),new UScriptStruct::TCppStructOps<FRequestPlayersForGameFinalResultCallback>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameFinalResultCallback;
	struct Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameFinalResultCallback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestPlayersForGameFinalResultCallback",
		sizeof(FRequestPlayersForGameFinalResultCallback),
		alignof(FRequestPlayersForGameFinalResultCallback),
		Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RequestPlayersForGameFinalResultCallback"), sizeof(FRequestPlayersForGameFinalResultCallback), Get_Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Hash() { return 3614622107U; }
class UScriptStruct* FRequestPlayersForGameResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameResultCallback"), sizeof(FRequestPlayersForGameResultCallback), Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestPlayersForGameResultCallback>()
{
	return FRequestPlayersForGameResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequestPlayersForGameResultCallback(FRequestPlayersForGameResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RequestPlayersForGameResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameResultCallback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RequestPlayersForGameResultCallback")),new UScriptStruct::TCppStructOps<FRequestPlayersForGameResultCallback>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameResultCallback;
	struct Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDPlayerFound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayerFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerAcceptState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAcceptState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerAcceptState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersFound_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayersFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersAcceptedGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayersAcceptedGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuggestedTeamIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuggestedTeamIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Callback from RequestPlayersForGame\n* One of these will be sent per player \n* Followed by additional callbacks when players accept or decline the game\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Callback from RequestPlayersForGame\n* One of these will be sent per player\n* Followed by additional callbacks when players accept or decline the game" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameResultCallback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// SearchID will be non-zero if this is k_EResultOK\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "SearchID will be non-zero if this is k_EResultOK" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// player steamID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "player steamID" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound = { "SteamIDPlayerFound", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SteamIDPlayerFound), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if the player is in a lobby, the lobby ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if the player is in a lobby, the lobby ID" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState = { "PlayerAcceptState", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, PlayerAcceptState), Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, PlayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound = { "TotalPlayersFound", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, TotalPlayersFound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// expect this many callbacks at minimum\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "expect this many callbacks at minimum" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame = { "TotalPlayersAcceptedGame", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, TotalPlayersAcceptedGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex = { "SuggestedTeamIndex", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SuggestedTeamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestPlayersForGameResultCallback",
		sizeof(FRequestPlayersForGameResultCallback),
		alignof(FRequestPlayersForGameResultCallback),
		Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RequestPlayersForGameResultCallback"), sizeof(FRequestPlayersForGameResultCallback), Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash() { return 1373726936U; }
class UScriptStruct* FRequestPlayersForGameProgressCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameProgressCallback"), sizeof(FRequestPlayersForGameProgressCallback), Get_Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestPlayersForGameProgressCallback>()
{
	return FRequestPlayersForGameProgressCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequestPlayersForGameProgressCallback(FRequestPlayersForGameProgressCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RequestPlayersForGameProgressCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameProgressCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameProgressCallback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RequestPlayersForGameProgressCallback")),new UScriptStruct::TCppStructOps<FRequestPlayersForGameProgressCallback>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameProgressCallback;
	struct Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Callback from RequestPlayersForGame when the matchmaking service has started or ended search\n* Callback will also follow a call from CancelRequestPlayersForGame - m_bSearchInProgress will be false\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Callback from RequestPlayersForGame when the matchmaking service has started or ended search\n* Callback will also follow a call from CancelRequestPlayersForGame - m_bSearchInProgress will be false" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameProgressCallback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// SearchID will be non-zero if this is k_EResultOK\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "SearchID will be non-zero if this is k_EResultOK" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameProgressCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// all future callbacks referencing this search will include this Search ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "all future callbacks referencing this search will include this Search ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameProgressCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestPlayersForGameProgressCallback",
		sizeof(FRequestPlayersForGameProgressCallback),
		alignof(FRequestPlayersForGameProgressCallback),
		Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RequestPlayersForGameProgressCallback"), sizeof(FRequestPlayersForGameProgressCallback), Get_Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Hash() { return 1152009092U; }
class UScriptStruct* FSearchForGameResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchForGameResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("SearchForGameResultCallback"), sizeof(FSearchForGameResultCallback), Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSearchForGameResultCallback>()
{
	return FSearchForGameResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSearchForGameResultCallback(FSearchForGameResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SearchForGameResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameResultCallback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SearchForGameResultCallback")),new UScriptStruct::TCppStructOps<FSearchForGameResultCallback>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameResultCallback;
	struct Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountPlayersInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountPlayersInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountAcceptedGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountAcceptedGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinalCallback_MetaData[];
#endif
		static void NewProp_bFinalCallback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinalCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Notification to all players searching that a game has been found\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Notification to all players searching that a game has been found" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchForGameResultCallback>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if game/host was lost this will be an error value\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if game/host was lost this will be an error value" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if m_bGameFound is true the following are non-zero\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if m_bGameFound is true the following are non-zero" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame = { "CountPlayersInGame", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, CountPlayersInGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if m_bGameFound is true the following are non-zero\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if m_bGameFound is true the following are non-zero" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame = { "CountAcceptedGame", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, CountAcceptedGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if SteamIDHost is valid the host has started the game\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if SteamIDHost is valid the host has started the game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_SetBit(void* Obj)
	{
		((FSearchForGameResultCallback*)Obj)->bFinalCallback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback = { "bFinalCallback", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSearchForGameResultCallback), &Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SearchForGameResultCallback",
		sizeof(FSearchForGameResultCallback),
		alignof(FSearchForGameResultCallback),
		Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SearchForGameResultCallback"), sizeof(FSearchForGameResultCallback), Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash() { return 874061168U; }
class UScriptStruct* FSearchForGameProgressCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchForGameProgressCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("SearchForGameProgressCallback"), sizeof(FSearchForGameProgressCallback), Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSearchForGameProgressCallback>()
{
	return FSearchForGameProgressCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSearchForGameProgressCallback(FSearchForGameProgressCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SearchForGameProgressCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameProgressCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameProgressCallback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SearchForGameProgressCallback")),new UScriptStruct::TCppStructOps<FSearchForGameProgressCallback>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameProgressCallback;
	struct Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDEndedSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDEndedSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsRemainingEstimate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsRemainingEstimate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersSearching_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersSearching;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchForGameProgressCallback>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// all future callbacks referencing this search will include this Search ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "all future callbacks referencing this search will include this Search ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if search has started this result will be k_EResultOK, any other value indicates search has failed to start or has terminated\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if search has started this result will be k_EResultOK, any other value indicates search has failed to start or has terminated" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// lobby ID if lobby search, invalid steamID otherwise\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "lobby ID if lobby search, invalid steamID otherwise" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, LobbyID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if search was terminated, steamID that terminated search\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if search was terminated, steamID that terminated search" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch = { "SteamIDEndedSearch", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SteamIDEndedSearch), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate = { "SecondsRemainingEstimate", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SecondsRemainingEstimate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching = { "PlayersSearching", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, PlayersSearching), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SearchForGameProgressCallback",
		sizeof(FSearchForGameProgressCallback),
		alignof(FSearchForGameProgressCallback),
		Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameProgressCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SearchForGameProgressCallback"), sizeof(FSearchForGameProgressCallback), Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash() { return 3198841926U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

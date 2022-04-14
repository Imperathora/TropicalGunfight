// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWeb/SteamWebUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamWebUtilities() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamWebUtilities_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamWebUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult();
	STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreJson();
// End Cross Module References
	DEFINE_FUNCTION(USteamWebUtilities::execGetDevSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamWebUtilities::GetDevSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execGetProjectAppID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamWebUtilities::GetProjectAppID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execGetProjectKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamWebUtilities::GetProjectKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonNumbers)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY_REF(int32,Z_Param_Out_values);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonNumbers(Z_Param_jsonString,Z_Param_key,Z_Param_Out_values,(ESteamJsonResult&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonNumber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonNumber(Z_Param_jsonString,Z_Param_key,Z_Param_Out_value,(ESteamJsonResult&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonBools)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY_REF(bool,Z_Param_Out_values);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonBools(Z_Param_jsonString,Z_Param_key,Z_Param_Out_values,(ESteamJsonResult&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_value);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonBool(Z_Param_jsonString,Z_Param_key,Z_Param_Out_value,(ESteamJsonResult&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonStrings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_values);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonStrings(Z_Param_jsonString,Z_Param_key,Z_Param_Out_values,(ESteamJsonResult&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_value);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonString(Z_Param_jsonString,Z_Param_key,Z_Param_Out_value,(ESteamJsonResult&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execParseJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_GET_TARRAY_REF(FSteamCoreJson,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamWebUtilities::ParseJson(Z_Param_jsonString,Z_Param_Out_data);
		P_NATIVE_END;
	}
	void USteamWebUtilities::StaticRegisterNativesUSteamWebUtilities()
	{
		UClass* Class = USteamWebUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindJsonBool", &USteamWebUtilities::execFindJsonBool },
			{ "FindJsonBools", &USteamWebUtilities::execFindJsonBools },
			{ "FindJsonNumber", &USteamWebUtilities::execFindJsonNumber },
			{ "FindJsonNumbers", &USteamWebUtilities::execFindJsonNumbers },
			{ "FindJsonString", &USteamWebUtilities::execFindJsonString },
			{ "FindJsonStrings", &USteamWebUtilities::execFindJsonStrings },
			{ "GetDevSteamID", &USteamWebUtilities::execGetDevSteamID },
			{ "GetProjectAppID", &USteamWebUtilities::execGetProjectAppID },
			{ "GetProjectKey", &USteamWebUtilities::execGetProjectKey },
			{ "ParseJson", &USteamWebUtilities::execParseJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics
	{
		struct SteamWebUtilities_eventFindJsonBool_Parms
		{
			FString jsonString;
			FString key;
			bool value;
			ESteamJsonResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_jsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, jsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_jsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_jsonString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_value_SetBit(void* Obj)
	{
		((SteamWebUtilities_eventFindJsonBool_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamWebUtilities_eventFindJsonBool_Parms), &Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a bool value from a JsonResult\n\x09*\n\x09* @param\x09jsonString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a bool value from a JsonResult\n\n@param        jsonString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonBool", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonBool_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics
	{
		struct SteamWebUtilities_eventFindJsonBools_Parms
		{
			FString jsonString;
			FString key;
			TArray<bool> values;
			ESteamJsonResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_jsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, jsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_jsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_jsonString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_values_Inner = { "values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of bool values from a JsonResult\n\x09*\n\x09* @param\x09jsonString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of bool values from a JsonResult\n\n@param        jsonString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonBools", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonBools_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonBools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics
	{
		struct SteamWebUtilities_eventFindJsonNumber_Parms
		{
			FString jsonString;
			FString key;
			int32 value;
			ESteamJsonResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_jsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, jsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_jsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_jsonString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a number value from a JsonResult\n\x09*\n\x09* @param\x09jsonString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a number value from a JsonResult\n\n@param        jsonString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonNumber", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonNumber_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics
	{
		struct SteamWebUtilities_eventFindJsonNumbers_Parms
		{
			FString jsonString;
			FString key;
			TArray<int32> values;
			ESteamJsonResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_jsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, jsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_jsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_jsonString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_values_Inner = { "values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of number values from a JsonResult\n\x09*\n\x09* @param\x09jsonString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of number values from a JsonResult\n\n@param        jsonString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonNumbers", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonNumbers_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics
	{
		struct SteamWebUtilities_eventFindJsonString_Parms
		{
			FString jsonString;
			FString key;
			FString value;
			ESteamJsonResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_jsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, jsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_jsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_jsonString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a string value from a JsonResult\n\x09*\n\x09* @param\x09jsonString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a string value from a JsonResult\n\n@param        jsonString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonString", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonString_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics
	{
		struct SteamWebUtilities_eventFindJsonStrings_Parms
		{
			FString jsonString;
			FString key;
			TArray<FString> values;
			ESteamJsonResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_jsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, jsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_jsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_jsonString_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_values_Inner = { "values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of string values from a JsonResult\n\x09*\n\x09* @param\x09jsonString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of string values from a JsonResult\n\n@param        jsonString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonStrings", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonStrings_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics
	{
		struct SteamWebUtilities_eventGetDevSteamID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetDevSteamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetDevSteamID", nullptr, nullptr, sizeof(SteamWebUtilities_eventGetDevSteamID_Parms), Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics
	{
		struct SteamWebUtilities_eventGetProjectAppID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetProjectAppID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetProjectAppID", nullptr, nullptr, sizeof(SteamWebUtilities_eventGetProjectAppID_Parms), Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics
	{
		struct SteamWebUtilities_eventGetProjectKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetProjectKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetProjectKey", nullptr, nullptr, sizeof(SteamWebUtilities_eventGetProjectKey_Parms), Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetProjectKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics
	{
		struct SteamWebUtilities_eventParseJson_Parms
		{
			FString jsonString;
			TArray<FSteamCoreJson> data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_jsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventParseJson_Parms, jsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_jsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_jsonString_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamCoreJson, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventParseJson_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamWebUtilities_eventParseJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamWebUtilities_eventParseJson_Parms), &Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Parse JSON Result\n\x09*\n\x09* @param\x09jsonString\x09JsonString from Steam WEB Api\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Parse JSON Result\n\n@param        jsonString      JsonString from Steam WEB Api" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "ParseJson", nullptr, nullptr, sizeof(SteamWebUtilities_eventParseJson_Parms), Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_ParseJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamWebUtilities_NoRegister()
	{
		return USteamWebUtilities::StaticClass();
	}
	struct Z_Construct_UClass_USteamWebUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamWebUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamWebUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonBool, "FindJsonBool" }, // 177820978
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonBools, "FindJsonBools" }, // 4091980565
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber, "FindJsonNumber" }, // 3880212033
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers, "FindJsonNumbers" }, // 2114071973
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonString, "FindJsonString" }, // 564214999
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings, "FindJsonStrings" }, // 2522621032
		{ &Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID, "GetDevSteamID" }, // 3334960820
		{ &Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID, "GetProjectAppID" }, // 3546430935
		{ &Z_Construct_UFunction_USteamWebUtilities_GetProjectKey, "GetProjectKey" }, // 4071306914
		{ &Z_Construct_UFunction_USteamWebUtilities_ParseJson, "ParseJson" }, // 3802544360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreWeb/SteamWebUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamWebUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamWebUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamWebUtilities_Statics::ClassParams = {
		&USteamWebUtilities::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamWebUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamWebUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamWebUtilities, 3352968636);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamWebUtilities>()
	{
		return USteamWebUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamWebUtilities(Z_Construct_UClass_USteamWebUtilities, &USteamWebUtilities::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamWebUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamWebUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

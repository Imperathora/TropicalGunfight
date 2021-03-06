// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetworkingUtilsTypes() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamNetworkPingLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamNetworkPingLocation, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamNetworkPingLocation"), sizeof(FSteamNetworkPingLocation), Get_Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamNetworkPingLocation>()
{
	return FSteamNetworkPingLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamNetworkPingLocation(FSteamNetworkPingLocation::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamNetworkPingLocation"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamNetworkPingLocation
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamNetworkPingLocation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamNetworkPingLocation")),new UScriptStruct::TCppStructOps<FSteamNetworkPingLocation>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamNetworkPingLocation;
	struct Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Define these structs just so we can compile on earlier versions of the SDK\n*/" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h" },
		{ "ToolTip", "* Define these structs just so we can compile on earlier versions of the SDK" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamNetworkPingLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "NetworkingUtils" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamNetworkPingLocation, Location), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamNetworkPingLocation",
		sizeof(FSteamNetworkPingLocation),
		alignof(FSteamNetworkPingLocation),
		Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamNetworkPingLocation"), sizeof(FSteamNetworkPingLocation), Get_Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Hash() { return 2890901563U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

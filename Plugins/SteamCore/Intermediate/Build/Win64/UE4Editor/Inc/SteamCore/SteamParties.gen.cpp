// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamParties/SteamParties.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamParties() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamParties_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamParties();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamParties::execGetBeaconLocationData)
	{
		P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_beaconLocation);
		P_GET_ENUM(ESteamPartiesBeaconLocationData,Z_Param_eData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_pchDataStringOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::GetBeaconLocationData(Z_Param_beaconLocation,ESteamPartiesBeaconLocationData(Z_Param_eData),Z_Param_Out_pchDataStringOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execDestroyBeacon)
	{
		P_GET_STRUCT(FPartyBeaconID,Z_Param_beaconId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::DestroyBeacon(Z_Param_beaconId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execChangeNumOpenSlots)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPartyBeaconID,Z_Param_beaconId);
		P_GET_PROPERTY(FIntProperty,Z_Param_openSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeNumOpenSlots(FOnChangeNumOpenSlots(Z_Param_Out_callback),Z_Param_beaconId,Z_Param_openSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execCancelReservation)
	{
		P_GET_STRUCT(FPartyBeaconID,Z_Param_beaconId);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamParties::CancelReservation(Z_Param_beaconId,Z_Param_steamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execOnReservationCompleted)
	{
		P_GET_STRUCT(FPartyBeaconID,Z_Param_beaconId);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamParties::OnReservationCompleted(Z_Param_beaconId,Z_Param_steamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execCreateBeacon)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_openSlots);
		P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_beaconLocation);
		P_GET_PROPERTY(FStrProperty,Z_Param_connectString);
		P_GET_PROPERTY(FStrProperty,Z_Param_metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateBeacon(FOnCreateBeacon(Z_Param_Out_callback),Z_Param_openSlots,Z_Param_beaconLocation,Z_Param_connectString,Z_Param_metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetAvailableBeaconLocations)
	{
		P_GET_TARRAY_REF(FSteamPartyBeaconLocation,Z_Param_Out_locationList);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxNumLocations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::GetAvailableBeaconLocations(Z_Param_Out_locationList,Z_Param_maxNumLocations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetNumAvailableBeaconLocations)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numLocations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::GetNumAvailableBeaconLocations(Z_Param_Out_numLocations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execJoinParty)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPartyBeaconID,Z_Param_beaconId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinParty(FOnJoinParty(Z_Param_Out_callback),Z_Param_beaconId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetBeaconDetails)
	{
		P_GET_STRUCT(FPartyBeaconID,Z_Param_beaconId);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_steamIDBeaconOwner);
		P_GET_STRUCT_REF(FSteamPartyBeaconLocation,Z_Param_Out_location);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::GetBeaconDetails(Z_Param_beaconId,Z_Param_Out_steamIDBeaconOwner,Z_Param_Out_location,Z_Param_Out_outMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetBeaconByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPartyBeaconID*)Z_Param__Result=USteamParties::GetBeaconByIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetNumActiveBeacons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamParties::GetNumActiveBeacons();
		P_NATIVE_END;
	}
	void USteamParties::StaticRegisterNativesUSteamParties()
	{
		UClass* Class = USteamParties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelReservation", &USteamParties::execCancelReservation },
			{ "ChangeNumOpenSlots", &USteamParties::execChangeNumOpenSlots },
			{ "CreateBeacon", &USteamParties::execCreateBeacon },
			{ "DestroyBeacon", &USteamParties::execDestroyBeacon },
			{ "GetAvailableBeaconLocations", &USteamParties::execGetAvailableBeaconLocations },
			{ "GetBeaconByIndex", &USteamParties::execGetBeaconByIndex },
			{ "GetBeaconDetails", &USteamParties::execGetBeaconDetails },
			{ "GetBeaconLocationData", &USteamParties::execGetBeaconLocationData },
			{ "GetNumActiveBeacons", &USteamParties::execGetNumActiveBeacons },
			{ "GetNumAvailableBeaconLocations", &USteamParties::execGetNumAvailableBeaconLocations },
			{ "JoinParty", &USteamParties::execJoinParty },
			{ "OnReservationCompleted", &USteamParties::execOnReservationCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamParties_CancelReservation_Statics
	{
		struct SteamParties_eventCancelReservation_Parms
		{
			FPartyBeaconID beaconId;
			FSteamID steamIDUser;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_beaconId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_CancelReservation_Statics::NewProp_beaconId = { "beaconId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCancelReservation_Parms, beaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_CancelReservation_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCancelReservation_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_CancelReservation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CancelReservation_Statics::NewProp_beaconId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CancelReservation_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_CancelReservation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* To cancel a reservation (due to timeout or user input), call this.\n\x09* Steam will open a new reservation slot.\n\x09* Note: The user may already be in-flight to your game, so it's possible they will still connect and try to join your party.\n\x09*\n\x09* @param\x09""beaconId\n\x09* @param\x09steamIDUser\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "To cancel a reservation (due to timeout or user input), call this.\nSteam will open a new reservation slot.\nNote: The user may already be in-flight to your game, so it's possible they will still connect and try to join your party.\n\n@param        beaconId\n@param        steamIDUser" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_CancelReservation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "CancelReservation", nullptr, nullptr, sizeof(SteamParties_eventCancelReservation_Parms), Z_Construct_UFunction_USteamParties_CancelReservation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CancelReservation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_CancelReservation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CancelReservation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_CancelReservation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_CancelReservation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics
	{
		struct SteamParties_eventChangeNumOpenSlots_Parms
		{
			FScriptDelegate callback;
			FPartyBeaconID beaconId;
			int32 openSlots;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_beaconId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_openSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventChangeNumOpenSlots_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_beaconId = { "beaconId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventChangeNumOpenSlots_Parms, beaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_openSlots = { "openSlots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventChangeNumOpenSlots_Parms, openSlots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_beaconId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_openSlots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* If a user joins your party through other matchmaking (perhaps a direct Steam friend, or your own matchmaking system), your game should reduce the number of open slots that Steam is managing through the party beacon.\n\x09* For example, if you created a beacon with five slots, and Steam sent you two ReservationNotificationCallback_t callbacks, and then a third user joined directly, you would want to call ChangeNumOpenSlots with a value of 2 for unOpenSlots.\n\x09* That value represents the total number of new users that you would like Steam to send to your party.\n\x09*\n\x09* @param\x09""beaconId\x09\x09\x09\x09""Beacon ID for the beacon created by your process.\n\x09* @param\x09openSlots\x09\x09\x09The new number of open slots in your party.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "If a user joins your party through other matchmaking (perhaps a direct Steam friend, or your own matchmaking system), your game should reduce the number of open slots that Steam is managing through the party beacon.\nFor example, if you created a beacon with five slots, and Steam sent you two ReservationNotificationCallback_t callbacks, and then a third user joined directly, you would want to call ChangeNumOpenSlots with a value of 2 for unOpenSlots.\nThat value represents the total number of new users that you would like Steam to send to your party.\n\n@param        beaconId                                Beacon ID for the beacon created by your process.\n@param        openSlots                       The new number of open slots in your party." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "ChangeNumOpenSlots", nullptr, nullptr, sizeof(SteamParties_eventChangeNumOpenSlots_Parms), Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_CreateBeacon_Statics
	{
		struct SteamParties_eventCreateBeacon_Parms
		{
			FScriptDelegate callback;
			int32 openSlots;
			FSteamPartyBeaconLocation beaconLocation;
			FString connectString;
			FString metadata;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_openSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_beaconLocation;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_connectString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_metadata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_openSlots = { "openSlots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, openSlots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_beaconLocation = { "beaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, beaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_connectString = { "connectString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, connectString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, metadata), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_openSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_beaconLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_connectString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_metadata,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Create a beacon. You can only create one beacon at a time. \n\x09* Steam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\x09*\n\x09* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\x09*\n\x09* @param\x09openSlots\x09\x09\x09\x09Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n\x09* @param\x09""beaconLocation\x09\x09\x09Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n\x09* @param\x09""connectString\x09\x09\x09""Connect string that will be given to the game on launch for a user that follows the beacon.\n\x09* @param\x09metadata\x09\x09\x09\x09""Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "Create a beacon. You can only create one beacon at a time.\nSteam will display the beacon in the specified location, and let up to openSlots users \"follow\" the beacon to your party.\n\nIf users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.\n\n@param        openSlots                               Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).\n@param        beaconLocation                  Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.\n@param        connectString                   Connect string that will be given to the game on launch for a user that follows the beacon.\n@param        metadata                                Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "CreateBeacon", nullptr, nullptr, sizeof(SteamParties_eventCreateBeacon_Parms), Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_CreateBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics
	{
		struct SteamParties_eventDestroyBeacon_Parms
		{
			FPartyBeaconID beaconId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_beaconId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_beaconId = { "beaconId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventDestroyBeacon_Parms, beaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventDestroyBeacon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventDestroyBeacon_Parms), &Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_beaconId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Call this method to destroy the Steam party beacon.\n\x09*\n\x09* This will immediately cause Steam to stop showing the beacon in the target location.\n\x09* Note that any users currently in-flight may still arrive at your party expecting to join.\n\x09* Your game should call this method when either the party has been filled and the game is beginning, or the user has decided to abandon creating a party.\n\x09* The beacon will be destroyed automatically when your game exits, but the preferred behavior is for the game to call DestroyBeacon at the right time.\n\x09*\n\x09* @param\x09""beaconId\x09\x09""Beacon ID to be destroyed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "Call this method to destroy the Steam party beacon.\n\nThis will immediately cause Steam to stop showing the beacon in the target location.\nNote that any users currently in-flight may still arrive at your party expecting to join.\nYour game should call this method when either the party has been filled and the game is beginning, or the user has decided to abandon creating a party.\nThe beacon will be destroyed automatically when your game exits, but the preferred behavior is for the game to call DestroyBeacon at the right time.\n\n@param        beaconId                Beacon ID to be destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "DestroyBeacon", nullptr, nullptr, sizeof(SteamParties_eventDestroyBeacon_Parms), Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_DestroyBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics
	{
		struct SteamParties_eventGetAvailableBeaconLocations_Parms
		{
			TArray<FSteamPartyBeaconLocation> locationList;
			int32 maxNumLocations;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_locationList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_locationList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxNumLocations;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_locationList_Inner = { "locationList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_locationList = { "locationList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetAvailableBeaconLocations_Parms, locationList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_maxNumLocations = { "maxNumLocations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetAvailableBeaconLocations_Parms, maxNumLocations), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventGetAvailableBeaconLocations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventGetAvailableBeaconLocations_Parms), &Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_locationList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_locationList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_maxNumLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Get the list of locations in which you can post a party beacon.\n\x09* \n\x09* @param\x09locationList\x09\x09Output list of available beacon locations.\n\x09* @param\x09maxNumLocations\x09The maximum number of entries to put into the above list. Should be >= the result from GetNumAvailableBeaconLocations.\n\x09*/" },
		{ "CPP_Default_maxNumLocations", "10" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "Get the list of locations in which you can post a party beacon.\n\n@param        locationList            Output list of available beacon locations.\n@param        maxNumLocations The maximum number of entries to put into the above list. Should be >= the result from GetNumAvailableBeaconLocations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetAvailableBeaconLocations", nullptr, nullptr, sizeof(SteamParties_eventGetAvailableBeaconLocations_Parms), Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics
	{
		struct SteamParties_eventGetBeaconByIndex_Parms
		{
			int32 index;
			FPartyBeaconID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Client" },
		{ "Comment", "/**\n\x09* Use with GetNumActiveBeacons to iterate the active beacons visible to the current user. \n\x09*\n\x09* unIndex is a zero-based index, so iterate over the range [0, GetNumActiveBeacons() - 1]. \n\x09* The return is a PartyBeaconID_t that can be used with ISteamParties::GetBeaconDetails to get information about the beacons suitable for display to the user.\n\x09* \n\x09* @param\x09index\x09Index of Beacon.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "Use with GetNumActiveBeacons to iterate the active beacons visible to the current user.\n\nunIndex is a zero-based index, so iterate over the range [0, GetNumActiveBeacons() - 1].\nThe return is a PartyBeaconID_t that can be used with ISteamParties::GetBeaconDetails to get information about the beacons suitable for display to the user.\n\n@param        index   Index of Beacon." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetBeaconByIndex", nullptr, nullptr, sizeof(SteamParties_eventGetBeaconByIndex_Parms), Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetBeaconByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics
	{
		struct SteamParties_eventGetBeaconDetails_Parms
		{
			FPartyBeaconID beaconId;
			FSteamID steamIDBeaconOwner;
			FSteamPartyBeaconLocation location;
			FString outMetadata;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_beaconId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDBeaconOwner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_beaconId = { "beaconId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconDetails_Parms, beaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_steamIDBeaconOwner = { "steamIDBeaconOwner", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconDetails_Parms, steamIDBeaconOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconDetails_Parms, location), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_outMetadata = { "outMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconDetails_Parms, outMetadata), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventGetBeaconDetails_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventGetBeaconDetails_Parms), &Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_beaconId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_steamIDBeaconOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_outMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Client" },
		{ "Comment", "/**\n\x09* Get details about the specified beacon. \n\x09*\n\x09* You can use the ISteamFriends API to get further details about pSteamIDBeaconOwner, GetBeaconLocationData to get further details about pLocation. \n\x09* The pchMetadata contents are specific to your game, and will be whatever was set (if anything) by the game process that created the beacon.\n\x09* \n\x09* @param\x09""beaconId\x09\x09\x09\x09""Beacon ID to query.\n\x09* @param\x09steamIDBeaconOwner\x09\x09""Creator of the beacon.\n\x09* @param\x09location\x09\x09\x09\x09Location the beacon has been posted.\n\x09* @param\x09outMetadata\x09\x09\x09\x09""Buffer to receive any additional metadata the game has set on this beacon (e.g. game mode).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "Get details about the specified beacon.\n\nYou can use the ISteamFriends API to get further details about pSteamIDBeaconOwner, GetBeaconLocationData to get further details about pLocation.\nThe pchMetadata contents are specific to your game, and will be whatever was set (if anything) by the game process that created the beacon.\n\n@param        beaconId                                Beacon ID to query.\n@param        steamIDBeaconOwner              Creator of the beacon.\n@param        location                                Location the beacon has been posted.\n@param        outMetadata                             Buffer to receive any additional metadata the game has set on this beacon (e.g. game mode)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetBeaconDetails", nullptr, nullptr, sizeof(SteamParties_eventGetBeaconDetails_Parms), Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetBeaconDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics
	{
		struct SteamParties_eventGetBeaconLocationData_Parms
		{
			FSteamPartyBeaconLocation beaconLocation;
			ESteamPartiesBeaconLocationData eData;
			FString pchDataStringOut;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_beaconLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eData_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pchDataStringOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_beaconLocation = { "beaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconLocationData_Parms, beaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_eData_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_eData = { "eData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconLocationData_Parms, eData), Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_pchDataStringOut = { "pchDataStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconLocationData_Parms, pchDataStringOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventGetBeaconLocationData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventGetBeaconLocationData_Parms), &Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_beaconLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_eData_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_eData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_pchDataStringOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Query general metadata for the given beacon location.\n\x09*\n\x09* For instance the Name, or the URL for an icon if the location type supports icons (for example, the icon for a Steam Chat Room Group).\n\x09*\n\x09* @param\x09""beaconLocation\x09\x09\x09Location to query.\n\x09* @param\x09""eData\x09\x09\x09\x09\x09Type of location data you wish to get.\n\x09* @param\x09pchDataStringOut\x09\x09Output buffer for location data string.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "Query general metadata for the given beacon location.\n\nFor instance the Name, or the URL for an icon if the location type supports icons (for example, the icon for a Steam Chat Room Group).\n\n@param        beaconLocation                  Location to query.\n@param        eData                                   Type of location data you wish to get.\n@param        pchDataStringOut                Output buffer for location data string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetBeaconLocationData", nullptr, nullptr, sizeof(SteamParties_eventGetBeaconLocationData_Parms), Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetBeaconLocationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics
	{
		struct SteamParties_eventGetNumActiveBeacons_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetNumActiveBeacons_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Client" },
		{ "Comment", "/**\n\x09* This method has no parameters.\n\x09*\n\x09* Get the number of active party beacons created by other users for your game, that are visible to the current user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "This method has no parameters.\n\nGet the number of active party beacons created by other users for your game, that are visible to the current user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetNumActiveBeacons", nullptr, nullptr, sizeof(SteamParties_eventGetNumActiveBeacons_Parms), Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetNumActiveBeacons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics
	{
		struct SteamParties_eventGetNumAvailableBeaconLocations_Parms
		{
			int32 numLocations;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numLocations;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_numLocations = { "numLocations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetNumAvailableBeaconLocations_Parms, numLocations), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventGetNumAvailableBeaconLocations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventGetNumAvailableBeaconLocations_Parms), &Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_numLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* Get the number of locations in which you are able to post a party beacon.\n\x09*\n\x09* Use this to size your result list for a call to ISteamParties::GetAvailableBeaconLocations.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "Get the number of locations in which you are able to post a party beacon.\n\nUse this to size your result list for a call to ISteamParties::GetAvailableBeaconLocations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetNumAvailableBeaconLocations", nullptr, nullptr, sizeof(SteamParties_eventGetNumAvailableBeaconLocations_Parms), Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_JoinParty_Statics
	{
		struct SteamParties_eventJoinParty_Parms
		{
			FScriptDelegate callback;
			FPartyBeaconID beaconId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_beaconId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventJoinParty_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_beaconId = { "beaconId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventJoinParty_Parms, beaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_JoinParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_beaconId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_JoinParty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Client" },
		{ "Comment", "/**\n\x09* When the user indicates they wish to join the party advertised by a given beacon, call this method. \n\x09* On success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\x09*\n\x09* @param\x09""beaconID\x09\x09\x09\x09""Beacon ID for the party you wish to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "When the user indicates they wish to join the party advertised by a given beacon, call this method.\nOn success, Steam will reserve a slot for this user in the party and return the necessary \"join game\" string to use to complete the connection.\n\n@param        beaconID                                Beacon ID for the party you wish to join." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_JoinParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "JoinParty", nullptr, nullptr, sizeof(SteamParties_eventJoinParty_Parms), Z_Construct_UFunction_USteamParties_JoinParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_JoinParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_JoinParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_JoinParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_JoinParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_JoinParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics
	{
		struct SteamParties_eventOnReservationCompleted_Parms
		{
			FPartyBeaconID beaconId;
			FSteamID steamIDUser;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_beaconId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::NewProp_beaconId = { "beaconId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventOnReservationCompleted_Parms, beaconId), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventOnReservationCompleted_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::NewProp_beaconId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|SteamParties|Host" },
		{ "Comment", "/**\n\x09* When a user follows your beacon, Steam will reserve one of the open party slots for them, and send your game a ReservationNotificationCallback_t callback. \n\x09* When that user joins your party, call OnReservationCompleted to notify Steam that the user has joined successfully.\n\x09*\n\x09* @param\x09""beaconId\x09\x09""Beacon ID for the beacon created by your process.\n\x09* @param\x09steamIDUser\x09\x09SteamID of the user joining your party.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "When a user follows your beacon, Steam will reserve one of the open party slots for them, and send your game a ReservationNotificationCallback_t callback.\nWhen that user joins your party, call OnReservationCompleted to notify Steam that the user has joined successfully.\n\n@param        beaconId                Beacon ID for the beacon created by your process.\n@param        steamIDUser             SteamID of the user joining your party." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "OnReservationCompleted", nullptr, nullptr, sizeof(SteamParties_eventOnReservationCompleted_Parms), Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_OnReservationCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamParties_NoRegister()
	{
		return USteamParties::StaticClass();
	}
	struct Z_Construct_UClass_USteamParties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinPartyDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinPartyDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateBeaconDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateBeaconDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservationNotificationDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReservationNotificationDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeNumOpenSlotsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeNumOpenSlotsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableBeaconLocationsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvailableBeaconLocationsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveBeaconsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActiveBeaconsDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamParties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamParties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamParties_CancelReservation, "CancelReservation" }, // 4214243567
		{ &Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots, "ChangeNumOpenSlots" }, // 753290615
		{ &Z_Construct_UFunction_USteamParties_CreateBeacon, "CreateBeacon" }, // 3010068240
		{ &Z_Construct_UFunction_USteamParties_DestroyBeacon, "DestroyBeacon" }, // 3483788002
		{ &Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations, "GetAvailableBeaconLocations" }, // 911771099
		{ &Z_Construct_UFunction_USteamParties_GetBeaconByIndex, "GetBeaconByIndex" }, // 2054684352
		{ &Z_Construct_UFunction_USteamParties_GetBeaconDetails, "GetBeaconDetails" }, // 169976492
		{ &Z_Construct_UFunction_USteamParties_GetBeaconLocationData, "GetBeaconLocationData" }, // 2229265275
		{ &Z_Construct_UFunction_USteamParties_GetNumActiveBeacons, "GetNumActiveBeacons" }, // 1967567633
		{ &Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations, "GetNumAvailableBeaconLocations" }, // 3908144660
		{ &Z_Construct_UFunction_USteamParties_JoinParty, "JoinParty" }, // 1961913073
		{ &Z_Construct_UFunction_USteamParties_OnReservationCompleted, "OnReservationCompleted" }, // 3853677537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* This API can be used to selectively advertise your multiplayer game session in a Steam chat room group. Tell Steam the number of player spots that are available for your party, and a join-game string, and it will show a beacon in the selected group and allow that many users to \xef\xbf\xbd""follow\xef\xbf\xbd the beacon to your party. Adjust the number of open slots if other players join through alternate matchmaking methods.\n* \n* For example, you can use ISteamParties in conjunction with a private lobby. Create a private lobby, and then use ISteamParties::CreateBeacon to create a party \"beacon\" for the number of players desired. The game connect string should indicate the ID of the private lobby.\n* The beacon will appear in Steam in the specified location (e.g. a Chat Room Group), and also via the in-game ISteamParties API as described below. Steam creates \"reservation\" slots for the number of desired players. Whenever a user follows the beacon, Steam will hold a reservation slot for them and launch the game using the given connect string.\n* The game session that created the beacon will be notified of this reservation, so the game can display the appropriate \"User <username> is joining your party\" or some other indicator. Once the user joins successfully, the game session should call ISteamParties::OnReservationCompleted to tell Steam that the user successfully joined (otherwise, Steam will eventually timeout their reservation and re-open the slot).\n* When all of the beacon slots are occupied - either by reservations for users still launching the game, or completed slots for users in the party - Steam will hide and disable the beacon.\n* To cancel the beacon - for instance when the party is full and the game begins - call ISteamParties::DestroyBeacon.\n* The client side of this operation - seeing and following beacons - can also be managed by your game. Using ISteamParties::GetNumActiveBeacons and ISteamParties::GetBeaconDetails, your game can get a list of beacons from other users that are currently active in locations relevant to the current user. If the user desires, call ISteamParties::JoinParty to \"follow\" one of those beacons.\n*/" },
		{ "IncludePath", "SteamParties/SteamParties.h" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
		{ "ToolTip", "* This API can be used to selectively advertise your multiplayer game session in a Steam chat room group. Tell Steam the number of player spots that are available for your party, and a join-game string, and it will show a beacon in the selected group and allow that many users to \xef\xbf\xbd""follow\xef\xbf\xbd the beacon to your party. Adjust the number of open slots if other players join through alternate matchmaking methods.\n*\n* For example, you can use ISteamParties in conjunction with a private lobby. Create a private lobby, and then use ISteamParties::CreateBeacon to create a party \"beacon\" for the number of players desired. The game connect string should indicate the ID of the private lobby.\n* The beacon will appear in Steam in the specified location (e.g. a Chat Room Group), and also via the in-game ISteamParties API as described below. Steam creates \"reservation\" slots for the number of desired players. Whenever a user follows the beacon, Steam will hold a reservation slot for them and launch the game using the given connect string.\n* The game session that created the beacon will be notified of this reservation, so the game can display the appropriate \"User <username> is joining your party\" or some other indicator. Once the user joins successfully, the game session should call ISteamParties::OnReservationCompleted to tell Steam that the user successfully joined (otherwise, Steam will eventually timeout their reservation and re-open the slot).\n* When all of the beacon slots are occupied - either by reservations for users still launching the game, or completed slots for users in the party - Steam will hide and disable the beacon.\n* To cancel the beacon - for instance when the party is full and the game begins - call ISteamParties::DestroyBeacon.\n* The client side of this operation - seeing and following beacons - can also be managed by your game. Using ISteamParties::GetNumActiveBeacons and ISteamParties::GetBeaconDetails, your game can get a list of beacons from other users that are currently active in locations relevant to the current user. If the user desires, call ISteamParties::JoinParty to \"follow\" one of those beacons." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate = { "JoinPartyDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, JoinPartyDelegate), Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate = { "CreateBeaconDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, CreateBeaconDelegate), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate = { "ReservationNotificationDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, ReservationNotificationDelegate), Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate = { "ChangeNumOpenSlotsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, ChangeNumOpenSlotsDelegate), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate = { "AvailableBeaconLocationsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, AvailableBeaconLocationsDelegate), Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate_MetaData[] = {
		{ "Category", "SteamCore|SteamParties|Delegates" },
		{ "ModuleRelativePath", "Public/SteamParties/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate = { "ActiveBeaconsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, ActiveBeaconsDelegate), Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamParties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamParties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamParties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamParties_Statics::ClassParams = {
		&USteamParties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamParties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamParties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamParties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamParties, 2596672862);
	template<> STEAMCORE_API UClass* StaticClass<USteamParties>()
	{
		return USteamParties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamParties(Z_Construct_UClass_USteamParties, &USteamParties::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamParties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamParties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

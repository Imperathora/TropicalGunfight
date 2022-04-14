// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FReservationNotificationData;
#ifdef STEAMCORE_SteamPartiesTypes_generated_h
#error "SteamPartiesTypes.generated.h already included, missing '#pragma once' in SteamPartiesTypes.h"
#endif
#define STEAMCORE_SteamPartiesTypes_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FChangeNumOpenSlotsData>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FReservationNotificationData>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FCreateBeaconData>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoinPartyData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FJoinPartyData>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamPartyBeaconLocation>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_142_DELEGATE \
struct _Script_SteamCore_eventOnChangeNumOpenSlots_Parms \
{ \
	FChangeNumOpenSlotsData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnChangeNumOpenSlots_DelegateWrapper(const FScriptDelegate& OnChangeNumOpenSlots, FChangeNumOpenSlotsData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnChangeNumOpenSlots_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnChangeNumOpenSlots.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_141_DELEGATE \
struct _Script_SteamCore_eventOnCreateBeacon_Parms \
{ \
	FCreateBeaconData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateBeacon_DelegateWrapper(const FScriptDelegate& OnCreateBeacon, FCreateBeaconData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateBeacon_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateBeacon.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_140_DELEGATE \
struct _Script_SteamCore_eventOnJoinParty_Parms \
{ \
	FJoinPartyData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnJoinParty_DelegateWrapper(const FScriptDelegate& OnJoinParty, FJoinPartyData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnJoinParty_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnJoinParty.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_138_DELEGATE \
static inline void FOnActiveBeaconsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActiveBeaconsDelegate) \
{ \
	OnActiveBeaconsDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_137_DELEGATE \
static inline void FOnAvailableBeaconLocationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAvailableBeaconLocationsDelegate) \
{ \
	OnAvailableBeaconLocationsDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_136_DELEGATE \
struct _Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms \
{ \
	FChangeNumOpenSlotsData data; \
}; \
static inline void FOnChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsDelegate, FChangeNumOpenSlotsData const& data) \
{ \
	_Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms Parms; \
	Parms.data=data; \
	OnChangeNumOpenSlotsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_135_DELEGATE \
struct _Script_SteamCore_eventOnReservationNotificationDelegate_Parms \
{ \
	FReservationNotificationData data; \
}; \
static inline void FOnReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReservationNotificationDelegate, FReservationNotificationData const& data) \
{ \
	_Script_SteamCore_eventOnReservationNotificationDelegate_Parms Parms; \
	Parms.data=data; \
	OnReservationNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_134_DELEGATE \
struct _Script_SteamCore_eventOnCreateBeaconDelegate_Parms \
{ \
	FCreateBeaconData data; \
}; \
static inline void FOnCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconDelegate, FCreateBeaconData const& data) \
{ \
	_Script_SteamCore_eventOnCreateBeaconDelegate_Parms Parms; \
	Parms.data=data; \
	OnCreateBeaconDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_133_DELEGATE \
struct _Script_SteamCore_eventOnJoinPartyDelegate_Parms \
{ \
	FJoinPartyData data; \
}; \
static inline void FOnJoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyDelegate, FJoinPartyData const& data) \
{ \
	_Script_SteamCore_eventOnJoinPartyDelegate_Parms Parms; \
	Parms.data=data; \
	OnJoinPartyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h


#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONDATA(op) \
	op(ESteamPartiesBeaconLocationData::Invalid) \
	op(ESteamPartiesBeaconLocationData::Name) \
	op(ESteamPartiesBeaconLocationData::IconURLSmall) \
	op(ESteamPartiesBeaconLocationData::IconURLMedium) \
	op(ESteamPartiesBeaconLocationData::IconURLLarge) 

enum class ESteamPartiesBeaconLocationData : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPartiesBeaconLocationData>();

#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONTYPE(op) \
	op(ESteamPartiesBeaconLocationType::Invalid) \
	op(ESteamPartiesBeaconLocationType::ChatGroup) \
	op(ESteamPartiesBeaconLocationType::Max) 

enum class ESteamPartiesBeaconLocationType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPartiesBeaconLocationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

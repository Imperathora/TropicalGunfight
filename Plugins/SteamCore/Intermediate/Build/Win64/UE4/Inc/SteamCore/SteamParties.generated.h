// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamPartyBeaconLocation;
enum class ESteamPartiesBeaconLocationData : uint8;
struct FPartyBeaconID;
struct FSteamID;
#ifdef STEAMCORE_SteamParties_generated_h
#error "SteamParties.generated.h already included, missing '#pragma once' in SteamParties.h"
#endif
#define STEAMCORE_SteamParties_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBeaconLocationData); \
	DECLARE_FUNCTION(execDestroyBeacon); \
	DECLARE_FUNCTION(execChangeNumOpenSlots); \
	DECLARE_FUNCTION(execCancelReservation); \
	DECLARE_FUNCTION(execOnReservationCompleted); \
	DECLARE_FUNCTION(execCreateBeacon); \
	DECLARE_FUNCTION(execGetAvailableBeaconLocations); \
	DECLARE_FUNCTION(execGetNumAvailableBeaconLocations); \
	DECLARE_FUNCTION(execJoinParty); \
	DECLARE_FUNCTION(execGetBeaconDetails); \
	DECLARE_FUNCTION(execGetBeaconByIndex); \
	DECLARE_FUNCTION(execGetNumActiveBeacons);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBeaconLocationData); \
	DECLARE_FUNCTION(execDestroyBeacon); \
	DECLARE_FUNCTION(execChangeNumOpenSlots); \
	DECLARE_FUNCTION(execCancelReservation); \
	DECLARE_FUNCTION(execOnReservationCompleted); \
	DECLARE_FUNCTION(execCreateBeacon); \
	DECLARE_FUNCTION(execGetAvailableBeaconLocations); \
	DECLARE_FUNCTION(execGetNumAvailableBeaconLocations); \
	DECLARE_FUNCTION(execJoinParty); \
	DECLARE_FUNCTION(execGetBeaconDetails); \
	DECLARE_FUNCTION(execGetBeaconByIndex); \
	DECLARE_FUNCTION(execGetNumActiveBeacons);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamParties(); \
	friend struct Z_Construct_UClass_USteamParties_Statics; \
public: \
	DECLARE_CLASS(USteamParties, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamParties)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSteamParties(); \
	friend struct Z_Construct_UClass_USteamParties_Statics; \
public: \
	DECLARE_CLASS(USteamParties, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamParties)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamParties(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamParties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamParties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamParties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamParties(USteamParties&&); \
	NO_API USteamParties(const USteamParties&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamParties(USteamParties&&); \
	NO_API USteamParties(const USteamParties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamParties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamParties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamParties)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_24_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamParties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamParties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

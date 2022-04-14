// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamNetworkPingLocation;
#ifdef STEAMCORE_SteamNetworkingUtils_generated_h
#error "SteamNetworkingUtils.generated.h already included, missing '#pragma once' in SteamNetworkingUtils.h"
#endif
#define STEAMCORE_SteamNetworkingUtils_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckPingDataUpToDate); \
	DECLARE_FUNCTION(execParsePingLocationString); \
	DECLARE_FUNCTION(execConvertPingLocationToString); \
	DECLARE_FUNCTION(execEstimatePingTimeFromLocalHost); \
	DECLARE_FUNCTION(execEstimatePingTimeBetweenTwoLocations); \
	DECLARE_FUNCTION(execGetLocalPingLocation); \
	DECLARE_FUNCTION(execInitRelayNetworkAccess);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckPingDataUpToDate); \
	DECLARE_FUNCTION(execParsePingLocationString); \
	DECLARE_FUNCTION(execConvertPingLocationToString); \
	DECLARE_FUNCTION(execEstimatePingTimeFromLocalHost); \
	DECLARE_FUNCTION(execEstimatePingTimeBetweenTwoLocations); \
	DECLARE_FUNCTION(execGetLocalPingLocation); \
	DECLARE_FUNCTION(execInitRelayNetworkAccess);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkingUtils(); \
	friend struct Z_Construct_UClass_UNetworkingUtils_Statics; \
public: \
	DECLARE_CLASS(UNetworkingUtils, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UNetworkingUtils)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkingUtils(); \
	friend struct Z_Construct_UClass_UNetworkingUtils_Statics; \
public: \
	DECLARE_CLASS(UNetworkingUtils, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UNetworkingUtils)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkingUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkingUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkingUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkingUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkingUtils(UNetworkingUtils&&); \
	NO_API UNetworkingUtils(const UNetworkingUtils&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkingUtils(UNetworkingUtils&&); \
	NO_API UNetworkingUtils(const UNetworkingUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkingUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkingUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkingUtils)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_14_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UNetworkingUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
enum class ESteamUserHasLicenseForAppResult : uint8;
struct FSteamTicketHandle;
enum class ESteamBeginAuthSessionResult : uint8;
#ifdef STEAMCORE_SteamGameServer_generated_h
#error "SteamGameServer.generated.h already included, missing '#pragma once' in SteamGameServer.h"
#endif
#define STEAMCORE_SteamGameServer_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWasRestartRequested); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetHeartbeatInterval); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execGetServerSteamID_PureCompact); \
	DECLARE_FUNCTION(execGetServerSteamID_Pure); \
	DECLARE_FUNCTION(execGetServerSteamID); \
	DECLARE_FUNCTION(execGetServerPublicIP_PureCompact); \
	DECLARE_FUNCTION(execGetServerPublicIP_Pure); \
	DECLARE_FUNCTION(execGetServerPublicIP); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execForceHeartbeat); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execEnableHeartbeats); \
	DECLARE_FUNCTION(execCreateUnauthenticatedUserConnection); \
	DECLARE_FUNCTION(execComputeNewPlayerCompatibility); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBUpdateUserData); \
	DECLARE_FUNCTION(execBSecure); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAssociateWithClan);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWasRestartRequested); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetHeartbeatInterval); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execGetServerSteamID_PureCompact); \
	DECLARE_FUNCTION(execGetServerSteamID_Pure); \
	DECLARE_FUNCTION(execGetServerSteamID); \
	DECLARE_FUNCTION(execGetServerPublicIP_PureCompact); \
	DECLARE_FUNCTION(execGetServerPublicIP_Pure); \
	DECLARE_FUNCTION(execGetServerPublicIP); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execForceHeartbeat); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execEnableHeartbeats); \
	DECLARE_FUNCTION(execCreateUnauthenticatedUserConnection); \
	DECLARE_FUNCTION(execComputeNewPlayerCompatibility); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBUpdateUserData); \
	DECLARE_FUNCTION(execBSecure); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAssociateWithClan);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameServer(); \
	friend struct Z_Construct_UClass_UGameServer_Statics; \
public: \
	DECLARE_CLASS(UGameServer, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UGameServer)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGameServer(); \
	friend struct Z_Construct_UClass_UGameServer_Statics; \
public: \
	DECLARE_CLASS(UGameServer, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UGameServer)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameServer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameServer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameServer(UGameServer&&); \
	NO_API UGameServer(const UGameServer&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameServer(UGameServer&&); \
	NO_API UGameServer(const UGameServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameServer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameServer)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_14_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UGameServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

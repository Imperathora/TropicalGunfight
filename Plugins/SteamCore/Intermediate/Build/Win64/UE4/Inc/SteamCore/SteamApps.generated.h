// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
#ifdef STEAMCORE_SteamApps_generated_h
#error "SteamApps.generated.h already included, missing '#pragma once' in SteamApps.h"
#endif
#define STEAMCORE_SteamApps_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUApps(); \
	friend struct Z_Construct_UClass_UApps_Statics; \
public: \
	DECLARE_CLASS(UApps, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UApps)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUApps(); \
	friend struct Z_Construct_UClass_UApps_Statics; \
public: \
	DECLARE_CLASS(UApps, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UApps)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApps(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApps) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApps); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApps); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApps(UApps&&); \
	NO_API UApps(const UApps&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApps(UApps&&); \
	NO_API UApps(const UApps&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApps); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApps); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UApps)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_14_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UApps>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

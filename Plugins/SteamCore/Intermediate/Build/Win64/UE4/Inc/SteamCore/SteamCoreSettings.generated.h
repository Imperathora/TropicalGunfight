// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamCoreSettings_generated_h
#error "SteamCoreSettings.generated.h already included, missing '#pragma once' in SteamCoreSettings.h"
#endif
#define STEAMCORE_SteamCoreSettings_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_RPC_WRAPPERS
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSettings(); \
	friend struct Z_Construct_UClass_USteamCoreSettings_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreSettings(); \
	friend struct Z_Construct_UClass_USteamCoreSettings_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSettings(USteamCoreSettings&&); \
	NO_API USteamCoreSettings(const USteamCoreSettings&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSettings(USteamCoreSettings&&); \
	NO_API USteamCoreSettings(const USteamCoreSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreSettings)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_44_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h


#define FOREACH_ENUM_ESTEAMSUBSYSTEM(op) \
	op(ESteamSubsystem::SteamCore) \
	op(ESteamSubsystem::AppList) \
	op(ESteamSubsystem::Apps) \
	op(ESteamSubsystem::Friends) \
	op(ESteamSubsystem::GameServer) \
	op(ESteamSubsystem::GameServerStats) \
	op(ESteamSubsystem::Inventory) \
	op(ESteamSubsystem::Input) \
	op(ESteamSubsystem::Matchmaking) \
	op(ESteamSubsystem::MatchmakingServers) \
	op(ESteamSubsystem::Music) \
	op(ESteamSubsystem::Networking) \
	op(ESteamSubsystem::NetworkingUtils) \
	op(ESteamSubsystem::ParentalSettings) \
	op(ESteamSubsystem::RemoteStorage) \
	op(ESteamSubsystem::RemotePlay) \
	op(ESteamSubsystem::Screenshots) \
	op(ESteamSubsystem::UGC) \
	op(ESteamSubsystem::User) \
	op(ESteamSubsystem::UserStats) \
	op(ESteamSubsystem::Utils) \
	op(ESteamSubsystem::Video) \
	op(ESteamSubsystem::SteamParties) \
	op(ESteamSubsystem::GameSearch) 

enum class ESteamSubsystem : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamSubsystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

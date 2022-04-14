// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamGameSearchErrorCode : uint8;
struct FSteamID;
enum class ESteamPlayerResult : uint8;
#ifdef STEAMCORE_SteamGameSearch_generated_h
#error "SteamGameSearch.generated.h already included, missing '#pragma once' in SteamGameSearch.h"
#endif
#define STEAMCORE_SteamGameSearch_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execSubmitPlayerResult); \
	DECLARE_FUNCTION(execCancelRequestPlayersForGame); \
	DECLARE_FUNCTION(execHostConfirmGameStart); \
	DECLARE_FUNCTION(execRequestPlayersForGame); \
	DECLARE_FUNCTION(execSetConnectionDetails); \
	DECLARE_FUNCTION(execSetGameHostParams); \
	DECLARE_FUNCTION(execEndGameSearch); \
	DECLARE_FUNCTION(execRetrieveConnectionDetails); \
	DECLARE_FUNCTION(execDeclineGame); \
	DECLARE_FUNCTION(execAcceptGame); \
	DECLARE_FUNCTION(execSearchForGameSolo); \
	DECLARE_FUNCTION(execSearchForGameWithLobby); \
	DECLARE_FUNCTION(execAddGameSearchParams);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execSubmitPlayerResult); \
	DECLARE_FUNCTION(execCancelRequestPlayersForGame); \
	DECLARE_FUNCTION(execHostConfirmGameStart); \
	DECLARE_FUNCTION(execRequestPlayersForGame); \
	DECLARE_FUNCTION(execSetConnectionDetails); \
	DECLARE_FUNCTION(execSetGameHostParams); \
	DECLARE_FUNCTION(execEndGameSearch); \
	DECLARE_FUNCTION(execRetrieveConnectionDetails); \
	DECLARE_FUNCTION(execDeclineGame); \
	DECLARE_FUNCTION(execAcceptGame); \
	DECLARE_FUNCTION(execSearchForGameSolo); \
	DECLARE_FUNCTION(execSearchForGameWithLobby); \
	DECLARE_FUNCTION(execAddGameSearchParams);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSearch(); \
	friend struct Z_Construct_UClass_UGameSearch_Statics; \
public: \
	DECLARE_CLASS(UGameSearch, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UGameSearch)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGameSearch(); \
	friend struct Z_Construct_UClass_UGameSearch_Statics; \
public: \
	DECLARE_CLASS(UGameSearch, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UGameSearch)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSearch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSearch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSearch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSearch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSearch(UGameSearch&&); \
	NO_API UGameSearch(const UGameSearch&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSearch(UGameSearch&&); \
	NO_API UGameSearch(const UGameSearch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSearch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSearch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameSearch)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_16_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UGameSearch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

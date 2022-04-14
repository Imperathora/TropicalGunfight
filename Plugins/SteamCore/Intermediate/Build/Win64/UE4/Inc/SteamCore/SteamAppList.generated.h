// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamAppList_generated_h
#error "SteamAppList.generated.h already included, missing '#pragma once' in SteamAppList.h"
#endif
#define STEAMCORE_SteamAppList_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppName); \
	DECLARE_FUNCTION(execGetInstalledApps); \
	DECLARE_FUNCTION(execGetNumInstalledApps);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppName); \
	DECLARE_FUNCTION(execGetInstalledApps); \
	DECLARE_FUNCTION(execGetNumInstalledApps);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppList(); \
	friend struct Z_Construct_UClass_UAppList_Statics; \
public: \
	DECLARE_CLASS(UAppList, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UAppList)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAppList(); \
	friend struct Z_Construct_UClass_UAppList_Statics; \
public: \
	DECLARE_CLASS(UAppList, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UAppList)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppList(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppList(UAppList&&); \
	NO_API UAppList(const UAppList&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppList(UAppList&&); \
	NO_API UAppList(const UAppList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppList); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAppList)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_14_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UAppList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

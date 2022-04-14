// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamRemoteStoragePlatform : uint8;
struct FSteamUGCHandle;
enum class ESteamUGCReadAction : uint8;
struct FSteamID;
struct FUGCFileWriteStreamHandle;
struct FRemoteStorageFileReadAsyncComplete;
#ifdef STEAMCORE_SteamRemoteStorage_generated_h
#error "SteamRemoteStorage.generated.h already included, missing '#pragma once' in SteamRemoteStorage.h"
#endif
#define STEAMCORE_SteamRemoteStorage_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCRead); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execGetUGCDetails); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWriteAsync); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileReadAsyncComplete); \
	DECLARE_FUNCTION(execFileReadAsync); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileDelete);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCRead); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execGetUGCDetails); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWriteAsync); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileReadAsyncComplete); \
	DECLARE_FUNCTION(execFileReadAsync); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileDelete);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteStorage(); \
	friend struct Z_Construct_UClass_URemoteStorage_Statics; \
public: \
	DECLARE_CLASS(URemoteStorage, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(URemoteStorage)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURemoteStorage(); \
	friend struct Z_Construct_UClass_URemoteStorage_Statics; \
public: \
	DECLARE_CLASS(URemoteStorage, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(URemoteStorage)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteStorage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteStorage(URemoteStorage&&); \
	NO_API URemoteStorage(const URemoteStorage&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteStorage(URemoteStorage&&); \
	NO_API URemoteStorage(const URemoteStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteStorage)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_14_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class URemoteStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
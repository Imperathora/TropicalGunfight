// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreAuthURLResponse;
struct FEncryptedAppTicketResponse;
class UObject;
class USteamCoreUserAsyncActionRequestEncryptedAppTicket;
class USteamCoreUserAsyncActionRequestStoreAuthURL;
#ifdef STEAMCORE_SteamUserAsyncActions_generated_h
#error "SteamUserAsyncActions.generated.h already included, missing '#pragma once' in SteamUserAsyncActions.h"
#endif
#define STEAMCORE_SteamUserAsyncActions_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_17_DELEGATE \
struct _Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms \
{ \
	FStoreAuthURLResponse data; \
	bool bWasSuccessful; \
}; \
static inline void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	RequestStoreAuthURLDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_16_DELEGATE \
struct _Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms \
{ \
	FEncryptedAppTicketResponse data; \
	bool bWasSuccessful; \
}; \
static inline void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	RequestEncryptedAppTicketDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestEncryptedAppTicket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(USteamCoreUserAsyncActionRequestEncryptedAppTicket&&); \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const USteamCoreUserAsyncActionRequestEncryptedAppTicket&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(USteamCoreUserAsyncActionRequestEncryptedAppTicket&&); \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const USteamCoreUserAsyncActionRequestEncryptedAppTicket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_22_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUserAsyncActionRequestEncryptedAppTicket>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestStoreAuthURL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestStoreAuthURL); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestStoreAuthURL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(USteamCoreUserAsyncActionRequestStoreAuthURL&&); \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const USteamCoreUserAsyncActionRequestStoreAuthURL&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(USteamCoreUserAsyncActionRequestStoreAuthURL&&); \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const USteamCoreUserAsyncActionRequestStoreAuthURL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestStoreAuthURL); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestStoreAuthURL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_47_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUserAsyncActionRequestStoreAuthURL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

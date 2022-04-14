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
class UObject;
struct FPartyBeaconID;
class USteamCoreSteamPartiesAsyncActionJoinParty;
struct FSteamPartyBeaconLocation;
class USteamCoreSteamPartiesAsyncActionCreateBeacon;
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots;
#ifdef STEAMCORE_SteamPartiesAsyncActions_generated_h
#error "SteamPartiesAsyncActions.generated.h already included, missing '#pragma once' in SteamPartiesAsyncActions.h"
#endif
#define STEAMCORE_SteamPartiesAsyncActions_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_21_DELEGATE \
struct _Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms \
{ \
	FChangeNumOpenSlotsData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnChangeNumOpenSlotsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_20_DELEGATE \
struct _Script_SteamCore_eventOnCreateBeaconCallback_Parms \
{ \
	FCreateBeaconData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateBeaconCallback_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateBeaconCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_19_DELEGATE \
struct _Script_SteamCore_eventOnJoinPartyCallback_Parms \
{ \
	FJoinPartyData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnJoinPartyCallback_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyCallback, FJoinPartyData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnJoinPartyCallback_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnJoinPartyCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinPartyAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinPartyAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionJoinParty(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionJoinParty, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionJoinParty)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionJoinParty(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionJoinParty, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionJoinParty)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionJoinParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionJoinParty); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionJoinParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(USteamCoreSteamPartiesAsyncActionJoinParty&&); \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const USteamCoreSteamPartiesAsyncActionJoinParty&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(USteamCoreSteamPartiesAsyncActionJoinParty&&); \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const USteamCoreSteamPartiesAsyncActionJoinParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionJoinParty); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionJoinParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionJoinParty)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreSteamPartiesAsyncActionJoinParty>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateBeaconAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateBeaconAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionCreateBeacon, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionCreateBeacon)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionCreateBeacon, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionCreateBeacon)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionCreateBeacon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionCreateBeacon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionCreateBeacon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(USteamCoreSteamPartiesAsyncActionCreateBeacon&&); \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const USteamCoreSteamPartiesAsyncActionCreateBeacon&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(USteamCoreSteamPartiesAsyncActionCreateBeacon&&); \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const USteamCoreSteamPartiesAsyncActionCreateBeacon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionCreateBeacon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionCreateBeacon)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_52_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreSteamPartiesAsyncActionCreateBeacon>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execChangeNumOpenSlotsAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execChangeNumOpenSlotsAsync);


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(); \
	friend struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&&); \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&&); \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_82_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

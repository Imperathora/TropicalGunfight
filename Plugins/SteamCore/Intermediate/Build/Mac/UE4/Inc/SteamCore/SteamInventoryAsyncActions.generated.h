// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryStartPurchaseResult;
struct FSteamInventoryRequestPricesResult;
struct FSteamInventoryEligiblePromoItemDefIDs;
class UObject;
struct FSteamID;
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;
class USteamCoreInventoryAsyncActionRequestPricesResult;
struct FSteamItemDef;
class USteamCoreInventoryAsyncActionStartPurchaseResult;
#ifdef STEAMCORE_SteamInventoryAsyncActions_generated_h
#error "SteamInventoryAsyncActions.generated.h already included, missing '#pragma once' in SteamInventoryAsyncActions.h"
#endif
#define STEAMCORE_SteamInventoryAsyncActions_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_19_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms \
{ \
	FSteamInventoryStartPurchaseResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamInventoryStartPurchaseResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultAsyncDelegate, FSteamInventoryStartPurchaseResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamInventoryStartPurchaseResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_18_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms \
{ \
	FSteamInventoryRequestPricesResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamInventoryRequestPricesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultAsyncDelegate, FSteamInventoryRequestPricesResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamInventoryRequestPricesResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_17_DELEGATE \
struct _Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms \
{ \
	FSteamInventoryEligiblePromoItemDefIDs data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, FSteamInventoryEligiblePromoItemDefIDs const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&&); \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&&); \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_24_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestPricesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestPricesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestPricesResult(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionRequestPricesResult, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestPricesResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestPricesResult(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionRequestPricesResult, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestPricesResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestPricesResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestPricesResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestPricesResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(USteamCoreInventoryAsyncActionRequestPricesResult&&); \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const USteamCoreInventoryAsyncActionRequestPricesResult&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(USteamCoreInventoryAsyncActionRequestPricesResult&&); \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const USteamCoreInventoryAsyncActionRequestPricesResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestPricesResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestPricesResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestPricesResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_49_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreInventoryAsyncActionRequestPricesResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStartPurchaseAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStartPurchaseAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionStartPurchaseResult(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionStartPurchaseResult, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionStartPurchaseResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionStartPurchaseResult(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionStartPurchaseResult_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionStartPurchaseResult, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionStartPurchaseResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionStartPurchaseResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionStartPurchaseResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionStartPurchaseResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionStartPurchaseResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionStartPurchaseResult(USteamCoreInventoryAsyncActionStartPurchaseResult&&); \
	NO_API USteamCoreInventoryAsyncActionStartPurchaseResult(const USteamCoreInventoryAsyncActionStartPurchaseResult&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionStartPurchaseResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionStartPurchaseResult(USteamCoreInventoryAsyncActionStartPurchaseResult&&); \
	NO_API USteamCoreInventoryAsyncActionStartPurchaseResult(const USteamCoreInventoryAsyncActionStartPurchaseResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionStartPurchaseResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionStartPurchaseResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionStartPurchaseResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_72_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreInventoryAsyncActionStartPurchaseResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

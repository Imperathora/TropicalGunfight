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
struct FSteamInventoryFullUpdate;
struct FSteamInventoryResultReady;
#ifdef STEAMCORE_SteamInventoryTypes_generated_h
#error "SteamInventoryTypes.generated.h already included, missing '#pragma once' in SteamInventoryTypes.h"
#endif
#define STEAMCORE_SteamInventoryTypes_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamInventoryStartPurchaseResult>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamInventoryRequestPricesResult>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryFullUpdate_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamInventoryFullUpdate>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryResultReady_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamInventoryResultReady>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryEligiblePromoItemDefIDs_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamInventoryEligiblePromoItemDefIDs>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Value() { return STRUCT_OFFSET(FSteamInventoryResult, Value); }


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamInventoryResult>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemDetails_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamItemDetails>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemDef_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Value() { return STRUCT_OFFSET(FSteamItemDef, Value); }


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamItemDef>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamItemInstanceID_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamItemInstanceID>();

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_206_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResult_Parms \
{ \
	FSteamInventoryStartPurchaseResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamInventoryStartPurchaseResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryStartPurchaseResult, FSteamInventoryStartPurchaseResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSteamInventoryStartPurchaseResult_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamInventoryStartPurchaseResult.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_205_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResult_Parms \
{ \
	FSteamInventoryRequestPricesResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamInventoryRequestPricesResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryRequestPricesResult, FSteamInventoryRequestPricesResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSteamInventoryRequestPricesResult_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamInventoryRequestPricesResult.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_204_DELEGATE \
struct _Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms \
{ \
	FSteamInventoryEligiblePromoItemDefIDs data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestEligiblePromoItemDefinitionsIDs_DelegateWrapper(const FScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDs, FSteamInventoryEligiblePromoItemDefIDs const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestEligiblePromoItemDefinitionsIDs.ProcessDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_202_DELEGATE \
static inline void FOnSteamInventoryDefinitionUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryDefinitionUpdate) \
{ \
	OnSteamInventoryDefinitionUpdate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_201_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms \
{ \
	FSteamInventoryEligiblePromoItemDefIDs data; \
}; \
static inline void FOnSteamInventoryEligiblePromoItemDefIDs_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryEligiblePromoItemDefIDs, FSteamInventoryEligiblePromoItemDefIDs const& data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms Parms; \
	Parms.data=data; \
	OnSteamInventoryEligiblePromoItemDefIDs.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_200_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResultDelegate_Parms \
{ \
	FSteamInventoryRequestPricesResult data; \
}; \
static inline void FOnSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultDelegate, FSteamInventoryRequestPricesResult const& data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryRequestPricesResultDelegate_Parms Parms; \
	Parms.data=data; \
	OnSteamInventoryRequestPricesResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_199_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResultDelegate_Parms \
{ \
	FSteamInventoryStartPurchaseResult data; \
}; \
static inline void FOnSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultDelegate, FSteamInventoryStartPurchaseResult const& data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultDelegate_Parms Parms; \
	Parms.data=data; \
	OnSteamInventoryStartPurchaseResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_198_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryFullUpdate_Parms \
{ \
	FSteamInventoryFullUpdate data; \
}; \
static inline void FOnSteamInventoryFullUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryFullUpdate, FSteamInventoryFullUpdate const& data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryFullUpdate_Parms Parms; \
	Parms.data=data; \
	OnSteamInventoryFullUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h_197_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryResultReady_Parms \
{ \
	FSteamInventoryResultReady data; \
}; \
static inline void FOnSteamInventoryResultReady_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryResultReady, FSteamInventoryResultReady const& data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryResultReady_Parms Parms; \
	Parms.data=data; \
	OnSteamInventoryResultReady.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamInventory_SteamInventoryTypes_h


#define FOREACH_ENUM_ESTEAMCOREITEMFLAGS(op) \
	op(NoTrade) \
	op(Removed) \
	op(Consumed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamCoreAsync_generated_h
#error "SteamCoreAsync.generated.h already included, missing '#pragma once' in SteamCoreAsync.h"
#endif
#define STEAMCORE_SteamCoreAsync_generated_h

#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_16_DELEGATE \
static inline void FOnFailure_DelegateWrapper(const FMulticastScriptDelegate& OnFailure) \
{ \
	OnFailure.ProcessMulticastDelegate<UObject>(NULL); \
}


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_SPARSE_DATA
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_RPC_WRAPPERS
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_RPC_WRAPPERS_NO_PURE_DECLS
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreAsyncAction(); \
	friend struct Z_Construct_UClass_USteamCoreAsyncAction_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAsyncAction)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreAsyncAction(); \
	friend struct Z_Construct_UClass_USteamCoreAsyncAction_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAsyncAction)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAsyncAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreAsyncAction(USteamCoreAsyncAction&&); \
	NO_API USteamCoreAsyncAction(const USteamCoreAsyncAction&); \
public:


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreAsyncAction(USteamCoreAsyncAction&&); \
	NO_API USteamCoreAsyncAction(const USteamCoreAsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAsyncAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAsyncAction)


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_PRIVATE_PROPERTY_OFFSET
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_58_PROLOG
#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_RPC_WRAPPERS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_INCLASS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_PRIVATE_PROPERTY_OFFSET \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_SPARSE_DATA \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_INCLASS_NO_PURE_DECLS \
	development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreAsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID development_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

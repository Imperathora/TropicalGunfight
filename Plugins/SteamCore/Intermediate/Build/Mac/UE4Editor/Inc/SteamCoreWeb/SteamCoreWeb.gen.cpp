// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWeb/SteamCoreWeb.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWeb() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWeb_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	void USteamCoreWeb::StaticRegisterNativesUSteamCoreWeb()
	{
	}
	UClass* Z_Construct_UClass_USteamCoreWeb_NoRegister()
	{
		return USteamCoreWeb::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWeb_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWeb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWeb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreWeb/SteamCoreWeb.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWeb.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWeb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWeb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWeb_Statics::ClassParams = {
		&USteamCoreWeb::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWeb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWeb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWeb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWeb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWeb, 2999535696);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWeb>()
	{
		return USteamCoreWeb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWeb(Z_Construct_UClass_USteamCoreWeb, &USteamCoreWeb::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWeb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWeb);
	void USteamCoreWebSubsystem::StaticRegisterNativesUSteamCoreWebSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USteamCoreWebSubsystem_NoRegister()
	{
		return USteamCoreWebSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreWeb/SteamCoreWeb.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWeb.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebSubsystem_Statics::ClassParams = {
		&USteamCoreWebSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebSubsystem, 1744132589);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebSubsystem>()
	{
		return USteamCoreWebSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebSubsystem(Z_Construct_UClass_USteamCoreWebSubsystem, &USteamCoreWebSubsystem::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

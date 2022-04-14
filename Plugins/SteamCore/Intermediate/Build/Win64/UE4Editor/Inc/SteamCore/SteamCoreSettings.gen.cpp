// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamCoreSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSettings() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static UEnum* ESteamSubsystem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamSubsystem, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamSubsystem"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamSubsystem>()
	{
		return ESteamSubsystem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamSubsystem(ESteamSubsystem_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamSubsystem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamSubsystem_Hash() { return 4047873103U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamSubsystem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamSubsystem"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamSubsystem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamSubsystem::SteamCore", (int64)ESteamSubsystem::SteamCore },
				{ "ESteamSubsystem::AppList", (int64)ESteamSubsystem::AppList },
				{ "ESteamSubsystem::Apps", (int64)ESteamSubsystem::Apps },
				{ "ESteamSubsystem::Friends", (int64)ESteamSubsystem::Friends },
				{ "ESteamSubsystem::GameServer", (int64)ESteamSubsystem::GameServer },
				{ "ESteamSubsystem::GameServerStats", (int64)ESteamSubsystem::GameServerStats },
				{ "ESteamSubsystem::Inventory", (int64)ESteamSubsystem::Inventory },
				{ "ESteamSubsystem::Input", (int64)ESteamSubsystem::Input },
				{ "ESteamSubsystem::Matchmaking", (int64)ESteamSubsystem::Matchmaking },
				{ "ESteamSubsystem::MatchmakingServers", (int64)ESteamSubsystem::MatchmakingServers },
				{ "ESteamSubsystem::Music", (int64)ESteamSubsystem::Music },
				{ "ESteamSubsystem::Networking", (int64)ESteamSubsystem::Networking },
				{ "ESteamSubsystem::NetworkingUtils", (int64)ESteamSubsystem::NetworkingUtils },
				{ "ESteamSubsystem::ParentalSettings", (int64)ESteamSubsystem::ParentalSettings },
				{ "ESteamSubsystem::RemoteStorage", (int64)ESteamSubsystem::RemoteStorage },
				{ "ESteamSubsystem::RemotePlay", (int64)ESteamSubsystem::RemotePlay },
				{ "ESteamSubsystem::Screenshots", (int64)ESteamSubsystem::Screenshots },
				{ "ESteamSubsystem::UGC", (int64)ESteamSubsystem::UGC },
				{ "ESteamSubsystem::User", (int64)ESteamSubsystem::User },
				{ "ESteamSubsystem::UserStats", (int64)ESteamSubsystem::UserStats },
				{ "ESteamSubsystem::Utils", (int64)ESteamSubsystem::Utils },
				{ "ESteamSubsystem::Video", (int64)ESteamSubsystem::Video },
				{ "ESteamSubsystem::SteamParties", (int64)ESteamSubsystem::SteamParties },
				{ "ESteamSubsystem::GameSearch", (int64)ESteamSubsystem::GameSearch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AppList.Name", "ESteamSubsystem::AppList" },
				{ "Apps.Name", "ESteamSubsystem::Apps" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Friends.Name", "ESteamSubsystem::Friends" },
				{ "GameSearch.Name", "ESteamSubsystem::GameSearch" },
				{ "GameServer.Name", "ESteamSubsystem::GameServer" },
				{ "GameServerStats.Name", "ESteamSubsystem::GameServerStats" },
				{ "Input.Name", "ESteamSubsystem::Input" },
				{ "Inventory.Name", "ESteamSubsystem::Inventory" },
				{ "Matchmaking.Name", "ESteamSubsystem::Matchmaking" },
				{ "MatchmakingServers.Name", "ESteamSubsystem::MatchmakingServers" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
				{ "Music.Name", "ESteamSubsystem::Music" },
				{ "Networking.Name", "ESteamSubsystem::Networking" },
				{ "NetworkingUtils.Name", "ESteamSubsystem::NetworkingUtils" },
				{ "ParentalSettings.Name", "ESteamSubsystem::ParentalSettings" },
				{ "RemotePlay.Name", "ESteamSubsystem::RemotePlay" },
				{ "RemoteStorage.Name", "ESteamSubsystem::RemoteStorage" },
				{ "Screenshots.Name", "ESteamSubsystem::Screenshots" },
				{ "SteamCore.Name", "ESteamSubsystem::SteamCore" },
				{ "SteamParties.Name", "ESteamSubsystem::SteamParties" },
				{ "UGC.Name", "ESteamSubsystem::UGC" },
				{ "User.Name", "ESteamSubsystem::User" },
				{ "UserStats.Name", "ESteamSubsystem::UserStats" },
				{ "Utils.Name", "ESteamSubsystem::Utils" },
				{ "Video.Name", "ESteamSubsystem::Video" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamSubsystem",
				"ESteamSubsystem",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USteamCoreSettings::StaticRegisterNativesUSteamCoreSettings()
	{
	}
	UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister()
	{
		return USteamCoreSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledSubsystems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisabledSubsystems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugging_MetaData[];
#endif
		static void NewProp_bDebugging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncTaskTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncTaskTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelaunchInSteam_MetaData[];
#endif
		static void NewProp_bRelaunchInSteam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelaunchInSteam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVACEnabled_MetaData[];
#endif
		static void NewProp_bVACEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVACEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowP2PPacketRelay_MetaData[];
#endif
		static void NewProp_bAllowP2PPacketRelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowP2PPacketRelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2PConnectionTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_P2PConnectionTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamDevAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamDevAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerQueryPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GameServerQueryPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SteamCore Plugin" },
		{ "IncludePath", "SteamCore/SteamCoreSettings.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ESteamSubsystem" },
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* Disabled subsystems wont be created, SteamCore subsystem cannot be disabled\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "* Disabled subsystems wont be created, SteamCore subsystem cannot be disabled" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems = { "DisabledSubsystems", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, DisabledSubsystems), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09* Enable / Disable debugging for the plugin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Enable / Disable debugging for the plugin" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bDebugging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging = { "bDebugging", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* If an async task takes longer than this (in seconds) it will be cancelled\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "* If an async task takes longer than this (in seconds) it will be cancelled" },
		{ "UIMax", "60.0" },
		{ "UIMin", "5.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout = { "AsyncTaskTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, AsyncTaskTimeout), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Enable steam\n\x09* \n\x09* Make sure you add this to your DefaultEngine.ini:\n\x09* [OnlineSubsystem]\n\x09* DefaultPlatformService=Steam\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Enable steam\n\nMake sure you add this to your DefaultEngine.ini:\n[OnlineSubsystem]\nDefaultPlatformService=Steam" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Should the game force a relaunch in Steam if the client isn't already loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Should the game force a relaunch in Steam if the client isn't already loaded" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bRelaunchInSteam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam = { "bRelaunchInSteam", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Enable Steam VAC\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Enable Steam VAC" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bVACEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled = { "bVACEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bAllowP2PPacketRelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay = { "bAllowP2PPacketRelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Timeout (in seconds) period for any P2P session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Timeout (in seconds) period for any P2P session" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout = { "P2PConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, P2PConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* AppID of your application\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "AppID of your application" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID = { "SteamAppID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, SteamAppID), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* SteamDevAppID of your application\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "SteamDevAppID of your application" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID = { "SteamDevAppID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, SteamDevAppID), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Steam Server Port\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Steam Server Port" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, Port), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Steam Server Query Port\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Steam Server Query Port" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort = { "GameServerQueryPort", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, GameServerQueryPort), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Current game version\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Current game version" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreSettings, GameVersion), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_DisabledSubsystems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bDebugging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_AsyncTaskTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSettings_Statics::ClassParams = {
		&USteamCoreSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreSettings, 2668307737);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSettings>()
	{
		return USteamCoreSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreSettings(Z_Construct_UClass_USteamCoreSettings, &USteamCoreSettings::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

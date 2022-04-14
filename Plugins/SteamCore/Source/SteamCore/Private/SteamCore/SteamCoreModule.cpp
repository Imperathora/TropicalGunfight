/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamCorePluginPrivatePCH.h"
#include <Interfaces/IPluginManager.h>

#define LOCTEXT_NAMESPACE "FSteamCoreModule"

DEFINE_LOG_CATEGORY(LogSteamCore);
#define STEAM_SDK_ROOT_PATH TEXT("Binaries/ThirdParty/Steamworks")

static void __cdecl SteamworksWarningMessageHook(int Severity, const char *Message)
{
	ESteamMessageType MessageType = ESteamMessageType::ENotification;

	switch (Severity)
	{
		case 0:
			MessageType = ESteamMessageType::EMessage;
			UE_LOG(LogSteamCore, Log, TEXT("Steamworks SDK: %s"), UTF8_TO_TCHAR(Message));
			break;
		case 1:
			MessageType = ESteamMessageType::EWarning;
			UE_LOG(LogSteamCore, Warning, TEXT("Steamworks SDK: %s"), UTF8_TO_TCHAR(Message));
			break;
	}

	USteamUtilities::InvokeSteamMessage(MessageType, UTF8_TO_TCHAR(Message));
}

void FSteamCoreModule::StartupModule()
{
	OnlineAsyncTaskThreadRunnable = new FOnlineAsyncTaskManagerSteamCore();
	check(OnlineAsyncTaskThreadRunnable);

	OnlineAsyncTaskThread = FRunnableThread::Create(OnlineAsyncTaskThreadRunnable, TEXT("SteamCore"), 128 * 1024, TPri_Normal);
	check(OnlineAsyncTaskThread);

	TSharedPtr<IPlugin> PluginPtr = IPluginManager::Get().FindPlugin("SteamCore");

	FString PluginVersion;

	if (PluginPtr)
	{
		PluginVersion = PluginPtr->GetDescriptor().VersionName;
	}

	UE_LOG(LogTemp, Log, TEXT("--------------------------------------------------------------------------------"));
	UE_LOG(LogTemp, Log, TEXT("Using SteamCore Version: %s"), *PluginVersion);
	UE_LOG(LogTemp, Log, TEXT("--------------------------------------------------------------------------------"));
}

void FSteamCoreModule::ShutdownModule()
{
	if (OnlineAsyncTaskThread)
	{
		delete OnlineAsyncTaskThread;
		OnlineAsyncTaskThread = nullptr;
	}

	if (OnlineAsyncTaskThreadRunnable)
	{
		delete OnlineAsyncTaskThreadRunnable;
		OnlineAsyncTaskThreadRunnable = nullptr;
	}
}

static bool bSteamHook = false;
bool FSteamCoreModule::Tick(float DeltaTime)
{
	if (OnlineAsyncTaskThreadRunnable)
	{
		OnlineAsyncTaskThreadRunnable->GameTick();
	}

	if (!bSteamHook) 
	{
		if (GetUtils())
		{
			GetUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);

			bSteamHook = true;
		}
	}

	return true;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSteamCoreModule, SteamCore)

void USteamCoreSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	FSteamCoreModule* CoreModule = FModuleManager::Get().GetModulePtr<FSteamCoreModule>("SteamCore");

	if (CoreModule)
	{
		OnlineAsyncTaskThreadRunnable = CoreModule->OnlineAsyncTaskThreadRunnable;
		OnlineAsyncTaskThread = CoreModule->OnlineAsyncTaskThread;
	}

	if (GetUtils())
	{
		GetUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);
	}
}

void USteamCoreSubsystem::Deinitialize()
{
	OnlineAsyncTaskThreadRunnable = nullptr;
	OnlineAsyncTaskThread = nullptr;
}

bool USteamCoreSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (SubsystemType == ESteamSubsystem::SteamCore) return true;

	bool Result = true; 

	if (const USteamCoreSettings* Settings = GetDefault<USteamCoreSettings>())
	{
		Result = (Settings->DisabledSubsystems & (1 << (int32)SubsystemType)) == 0;
	}

#if WITH_EDITOR
	if (Result && STEAM_VERSION < 146) 
	{
		if (SubsystemType == ESteamSubsystem::Input || SubsystemType == ESteamSubsystem::NetworkingUtils || SubsystemType == ESteamSubsystem::RemotePlay)
		{
			if (SteamCoreDebugging())
			{
				UE_LOG(LogSteamCore, Error, TEXT("Subsystem %s is enabled but UNSUPPORTED in this version of Unreal Engine 4! Consider disabling it in the SteamCore Plugin Settings!"), *GetSteamCoreEnumAsString("ESubsystem", SubsystemType));
			}
		}
	}
#endif

	return Result;
}

void USteamCoreSubsystem::QueueAsyncTask(class FOnlineAsyncTask* asyncTask)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToInQueue(asyncTask);
}

void USteamCoreSubsystem::QueueAsyncOutgoingItem(class FOnlineAsyncItem* asyncItem)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToOutQueue(asyncItem);
}
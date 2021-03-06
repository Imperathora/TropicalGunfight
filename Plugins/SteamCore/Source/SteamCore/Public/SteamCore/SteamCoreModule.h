/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "SteamCore/SteamUtilities.h"
#include "SteamCore/SteamCoreSettings.h"
#include "Containers/Ticker.h"
#include "SteamCoreModule.generated.h"

#define LOADING_STEAM_CLIENT_LIBRARY_DYNAMICALLY				(PLATFORM_WINDOWS || PLATFORM_MAC || (PLATFORM_LINUX && !IS_MONOLITHIC))
#define LOADING_STEAM_SERVER_LIBRARY_DYNAMICALLY				((PLATFORM_WINDOWS && PLATFORM_32BITS) || (PLATFORM_LINUX && !IS_MONOLITHIC) || PLATFORM_MAC)
#define LOADING_STEAM_LIBRARIES_DYNAMICALLY						(LOADING_STEAM_CLIENT_LIBRARY_DYNAMICALLY || LOADING_STEAM_SERVER_LIBRARY_DYNAMICALLY)

class FOnlineAsyncTaskManagerSteamCore;
class FRunnableThread;

class STEAMCORE_API FSteamCoreModule : public IModuleInterface, public FTickerObjectBase
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool Tick(float DeltaTime);
public:
	FOnlineAsyncTaskManagerSteamCore* OnlineAsyncTaskThreadRunnable;
	FRunnableThread* OnlineAsyncTaskThread;
};

UCLASS(abstract)
class STEAMCORE_API USteamCore : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class STEAMCORE_API USteamCoreSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	FOnlineAsyncTaskManagerSteamCore* OnlineAsyncTaskThreadRunnable;
	FRunnableThread* OnlineAsyncTaskThread;
	ESteamSubsystem SubsystemType;
public:
	USteamCoreSubsystem()
		: SubsystemType(ESteamSubsystem::SteamCore) {}
public:
	void QueueAsyncTask(class FOnlineAsyncTask* asyncTask);
	void QueueAsyncOutgoingItem(class FOnlineAsyncItem* asyncItem);
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
};
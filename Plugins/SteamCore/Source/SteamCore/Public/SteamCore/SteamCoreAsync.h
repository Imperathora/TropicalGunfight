/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineAsyncTaskManager.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SteamCore/Steam.h"
#include "SteamCoreAsync.generated.h"

class USteamCoreAsyncAction;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailure);

class STEAMCORE_API FOnlineAsyncTaskSteamCore : public FOnlineAsyncTaskBasic<class USteamCoreSubsystem>
{
public:
	FOnlineAsyncTaskSteamCore(class USteamCoreSubsystem* subsystem, SteamAPICall_t handle, USteamCoreAsyncAction* asyncObject = nullptr)
		: FOnlineAsyncTaskBasic(subsystem)
		, bInit(false)
		, bTimedOut(false)
		, m_CallbackHandle(handle)
		, m_AsyncObject(asyncObject)
	{}

	virtual ~FOnlineAsyncTaskSteamCore() {}
private:
	FOnlineAsyncTaskSteamCore();
public:
	bool bInit;
	bool bTimedOut;
	SteamAPICall_t m_CallbackHandle;
	class USteamCoreAsyncAction* m_AsyncObject;
protected:
	virtual void Tick() override;
	virtual FString ToString() const override { return "SteamCoreAyncTask"; }
protected:
	float m_AsyncTimeout = 10.f;
};

class STEAMCORE_API FOnlineAsyncTaskManagerSteamCore : public FOnlineAsyncTaskManager
{
public:
	FOnlineAsyncTaskManagerSteamCore() { }
	FOnlineAsyncTaskManagerSteamCore(class USteamCoreSubsystem* subsystem) 
		: SteamCoreSubsystem(subsystem) {}
public:
	virtual ~FOnlineAsyncTaskManagerSteamCore(){}
private:
	class USteamCoreSubsystem* SteamCoreSubsystem;
protected:
	virtual void OnlineTick() override;
};

UCLASS()
class STEAMCORE_API USteamCoreAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	virtual void Activate() override;
	virtual void SetReadyToDestroy() override;
};
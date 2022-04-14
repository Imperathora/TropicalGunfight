/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamCoreAsync.h"
#include "SteamCorePluginPrivatePCH.h"
#include "SteamCoreSettings.h"
#include "SteamCore/SteamTypes.h"

void FOnlineAsyncTaskManagerSteamCore::OnlineTick()
{

}

void USteamCoreAsyncAction::Activate()
{
	Super::Activate();
}

void USteamCoreAsyncAction::SetReadyToDestroy()
{
	Super::SetReadyToDestroy();
}

FOnlineAsyncTaskSteamCore::FOnlineAsyncTaskSteamCore()
: FOnlineAsyncTaskBasic(NULL)
    , bInit(false)
    , bTimedOut(false)
    , m_CallbackHandle(k_uAPICallInvalid)
	, m_AsyncTimeout(10.f)
{
	//AsyncTimeout = GetDefault<USteamCoreSettings>()->AsyncTaskTimeout;
}

void FOnlineAsyncTaskSteamCore::Tick()
{
	if (SteamCoreDebugging())
	{
		UE_LOG(LogSteamCore, Log, TEXT("[Tick] %s"), *ToString());
	}

	if (!bIsComplete)
	{
		bTimedOut = GetElapsedTime() > m_AsyncTimeout;

		if (bTimedOut)
		{
			bIsComplete = true;
			bWasSuccessful = false;

			if (SteamCoreDebugging())
			{
				UE_LOG(LogSteamCore, Error, TEXT("[Task] [%s] Timed out"), *ToString());
			}
		}
	}
}

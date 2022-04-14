/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#pragma once

#include "SteamAppsTypes.h"
#include "SteamCore/SteamCoreAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreAppsGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreAppsGetFileDetails : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileDetailsResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreAppsGetFileDetails(USteamCoreSubsystem* subsystem, FOnFileDetailsResult callback, FString fileName)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_FileName(fileName)
	{}
	FOnlineAsyncTaskSteamCoreAppsGetFileDetails(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString fileName)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_FileName(fileName)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreAppsGetFileDetails() = delete;
protected:
	FileDetailsResult_t m_CallbackResults;
	FString m_FileName;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreAppsGetFileDetails")); }
};
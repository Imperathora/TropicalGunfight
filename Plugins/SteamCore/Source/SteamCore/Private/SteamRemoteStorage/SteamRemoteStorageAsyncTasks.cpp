/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#include "SteamRemoteStorage/SteamRemoteStorageAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			m_CallbackHandle = SteamRemoteStorage()->FileWriteAsync(TCHAR_TO_UTF8(*m_File), m_Data.GetData(), m_Data.Num());
			bInit = true;
		}

		if (m_CallbackHandle != k_uAPICallInvalid)
		{
			bool bFailedCall = false;

			bIsComplete = SteamUtilsPtr->IsAPICallCompleted(m_CallbackHandle, &bFailedCall) ? true : false;

			if (bIsComplete)
			{
				bool bFailedResult;
				bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(m_CallbackHandle, &m_CallbackResults, sizeof(m_CallbackResults), m_CallbackResults.k_iCallback, &bFailedResult);
				bWasSuccessful = (bSuccessCallResult ? true : false) &&
					(!bFailedCall ? true : false) &&
					(!bFailedResult ? true : false) &&
					((m_CallbackResults.m_eResult == k_EResultOK) ? true : false);
			}
		}
		else
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}
	}
	else
	{
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			m_CallbackHandle = SteamRemoteStorage()->FileReadAsync(TCHAR_TO_UTF8(*m_File), m_Offset, m_BytesToRead);
			bInit = true;
		}

		if (m_CallbackHandle != k_uAPICallInvalid)
		{
			bool bFailedCall = false;

			bIsComplete = SteamUtilsPtr->IsAPICallCompleted(m_CallbackHandle, &bFailedCall) ? true : false;

			if (bIsComplete)
			{
				bool bFailedResult;
				bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(m_CallbackHandle, &m_CallbackResults, sizeof(m_CallbackResults), m_CallbackResults.k_iCallback, &bFailedResult);
				bWasSuccessful = (bSuccessCallResult ? true : false) &&
					(!bFailedCall ? true : false) &&
					(!bFailedResult ? true : false) &&
					((m_CallbackResults.m_eResult == k_EResultOK) ? true : false);
			}
		}
		else
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}
	}
	else
	{
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreRemoteStorageFileShare::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			m_CallbackHandle = SteamRemoteStorage()->FileShare(TCHAR_TO_UTF8(*m_File));
			bInit = true;
		}

		if (m_CallbackHandle != k_uAPICallInvalid)
		{
			bool bFailedCall = false;

			bIsComplete = SteamUtilsPtr->IsAPICallCompleted(m_CallbackHandle, &bFailedCall) ? true : false;

			if (bIsComplete)
			{
				bool bFailedResult;
				bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(m_CallbackHandle, &m_CallbackResults, sizeof(m_CallbackResults), m_CallbackResults.k_iCallback, &bFailedResult);
				bWasSuccessful = (bSuccessCallResult ? true : false) &&
					(!bFailedCall ? true : false) &&
					(!bFailedResult ? true : false) &&
					((m_CallbackResults.m_eResult == k_EResultOK) ? true : false);
			}
		}
		else
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}
	}
	else
	{
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreRemoteStorageFileShare::TriggerDelegates()
{
	LogVeryVerbose("");

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			m_CallbackHandle = SteamRemoteStorage()->UGCDownload(Content, Priority);
			bInit = true;
		}

		if (m_CallbackHandle != k_uAPICallInvalid)
		{
			bool bFailedCall = false;

			bIsComplete = SteamUtilsPtr->IsAPICallCompleted(m_CallbackHandle, &bFailedCall) ? true : false;

			if (bIsComplete)
			{
				bool bFailedResult;
				bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(m_CallbackHandle, &m_CallbackResults, sizeof(m_CallbackResults), m_CallbackResults.k_iCallback, &bFailedResult);
				bWasSuccessful = (bSuccessCallResult ? true : false) &&
					(!bFailedCall ? true : false) &&
					(!bFailedResult ? true : false) &&
					((m_CallbackResults.m_eResult == k_EResultOK) ? true : false);
			}
		}
		else
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}
	}
	else
	{
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownload::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			m_CallbackHandle = SteamRemoteStorage()->UGCDownloadToLocation(Content, TCHAR_TO_UTF8(*Location), Priority);
			bInit = true;
		}

		if (m_CallbackHandle != k_uAPICallInvalid)
		{
			bool bFailedCall = false;

			bIsComplete = SteamUtilsPtr->IsAPICallCompleted(m_CallbackHandle, &bFailedCall) ? true : false;

			if (bIsComplete)
			{
				bool bFailedResult;
				bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(m_CallbackHandle, &m_CallbackResults, sizeof(m_CallbackResults), m_CallbackResults.k_iCallback, &bFailedResult);
				bWasSuccessful = (bSuccessCallResult ? true : false) &&
					(!bFailedCall ? true : false) &&
					(!bFailedResult ? true : false) &&
					((m_CallbackResults.m_eResult == k_EResultOK) ? true : false);
			}
		}
		else
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}
	}
	else
	{
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreRemoteStorageUGCDownloadToLocation::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}
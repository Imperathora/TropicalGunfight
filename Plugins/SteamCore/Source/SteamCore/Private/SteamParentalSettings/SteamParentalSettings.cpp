/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamParentalSettings
*/

#include "SteamParentalSettings/SteamParentalSettings.h"
#include "SteamCorePluginPrivatePCH.h"

void UParentalSettings::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UParentalSettings::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UParentalSettings::BIsParentalLockEnabled()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsParentalLockEnabled();
	}

	return bResult;
}

bool UParentalSettings::BIsParentalLockLocked()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsParentalLockLocked();
	}

	return bResult;
}

bool UParentalSettings::BIsAppBlocked(int32 appID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsAppBlocked(appID);
	}

	return bResult;
}

bool UParentalSettings::BIsAppInBlockList(int32 appID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsAppInBlockList(appID);
	}

	return bResult;
}

bool UParentalSettings::BIsFeatureBlocked(ESteamParentalFeature feature)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsFeatureBlocked(static_cast<EParentalFeature>(feature));
	}

	return bResult;
}

bool UParentalSettings::BIsFeatureInBlockList(ESteamParentalFeature feature)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsFeatureInBlockList(static_cast<EParentalFeature>(feature));
	}

	return bResult;
}
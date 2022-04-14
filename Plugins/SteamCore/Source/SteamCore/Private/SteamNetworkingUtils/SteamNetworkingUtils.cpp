/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworkingUtils
*/

#include "SteamNetworkingUtils/SteamNetworkingUtils.h"
#include "SteamCorePluginPrivatePCH.h"

void UNetworkingUtils::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UNetworkingUtils::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
void UNetworkingUtils::InitRelayNetworkAccess()
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamNetworkingUtils())
	{
		SteamNetworkingUtils()->InitRelayNetworkAccess();
	}
#endif
}

float UNetworkingUtils::GetLocalPingLocation(FSteamNetworkPingLocation& result)
{
	LogVeryVerbose("");

	float Result = 0.0f;

#if STEAM_VERSION > 142
	if (SteamNetworkingUtils())
	{
		SteamNetworkPingLocation_t m_Result;
		Result = SteamNetworkingUtils()->GetLocalPingLocation(m_Result);
		result = m_Result;
	}
#endif

	return Result;
}

int32 UNetworkingUtils::EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& location1, const FSteamNetworkPingLocation& location2)
{
	LogVerbose("");

	int32 Result = 0;

#if STEAM_VERSION > 142
	if (SteamNetworkingUtils())
	{
		Result = SteamNetworkingUtils()->EstimatePingTimeBetweenTwoLocations(location1, location2);
	}
#endif
	return Result;
}

int32 UNetworkingUtils::EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& remoteLocation)
{
	LogVerbose("");

	int32 Result = 0;

#if STEAM_VERSION > 142
	if (SteamNetworkingUtils())
	{
		Result = SteamNetworkingUtils()->EstimatePingTimeFromLocalHost(remoteLocation);
	}
#endif
	return Result;
}

void UNetworkingUtils::ConvertPingLocationToString(const FSteamNetworkPingLocation& location, FString& outString)
{
	LogVerbose("");

	outString.Empty();

#if STEAM_VERSION > 142
	TArray<char> DataArray;
	DataArray.SetNum(k_cchMaxSteamNetworkingPingLocationString);

	SteamNetworkingUtils()->ConvertPingLocationToString(location, DataArray.GetData(), DataArray.Num());
	outString = UTF8_TO_TCHAR(DataArray.GetData());
#endif
}

bool UNetworkingUtils::ParsePingLocationString(FString string, FSteamNetworkPingLocation& outResult)
{
	LogVerbose("");

	bool bResult = false;

#if STEAM_VERSION > 142
	SteamNetworkPingLocation_t Data;
	bResult = SteamNetworkingUtils()->ParsePingLocationString(TCHAR_TO_UTF8(*string), Data);
	outResult = Data;
#endif

	return bResult;
}

bool UNetworkingUtils::CheckPingDataUpToDate(float maxAgeSeconds)
{
	LogVerbose("");

	bool bResult = false;
#if STEAM_VERSION > 142
	bResult = SteamNetworkingUtils()->CheckPingDataUpToDate(maxAgeSeconds);
#endif
	return bResult;
}
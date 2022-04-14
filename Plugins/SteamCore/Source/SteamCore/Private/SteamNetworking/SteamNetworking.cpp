/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworking
*/

#include "SteamNetworking/SteamNetworking.h"
#include "SteamCorePluginPrivatePCH.h"

void UNetworking::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnP2PSessionRequestCallback.Register(this, &UNetworking::OnP2PSessionRequest);
	OnP2PSessionConnectFailCallback.Register(this, &UNetworking::OnP2PSessionConnectFail);

	if (IsRunningDedicatedServer())
	{
		OnP2PSessionRequestCallback.SetGameserverFlag();
		OnP2PSessionConnectFailCallback.SetGameserverFlag();
	}
}

void UNetworking::Deinitialize()
{
	OnP2PSessionRequestCallback.Unregister();
	OnP2PSessionConnectFailCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
bool UNetworking::AcceptP2PSessionWithUser(FSteamID steamIDRemote)
{
	LogVerbose("");

	bool bResult = false;

	if (GetNetworking())
	{
		bResult = GetNetworking()->AcceptP2PSessionWithUser(steamIDRemote);
	}

	return bResult;
}

bool UNetworking::AllowP2PPacketRelay(bool bAllow)
{
	LogVerbose("");

	bool bResult = false;

	if (GetNetworking())
	{
		bResult = GetNetworking()->AllowP2PPacketRelay(bAllow);
	}

	return bResult;
}

bool UNetworking::CloseP2PchannelWithUser(FSteamID steamIDRemote, int32 channel)
{
	LogVerbose("");

	bool bResult = false;

	if (GetNetworking())
	{
		bResult = GetNetworking()->CloseP2PChannelWithUser(steamIDRemote, channel);
	}

	return bResult;
}

bool UNetworking::CloseP2PSessionWithUser(FSteamID steamIDRemote)
{
	LogVerbose("");

	bool bResult = false;

	if (GetNetworking())
	{
		bResult = GetNetworking()->CloseP2PSessionWithUser(steamIDRemote);
	}

	return bResult;
}

bool UNetworking::GetP2PSessionState(FSteamID steamIDRemote, FSteamP2PSessionState& connectionState)
{
	LogVeryVerbose("");

	bool bResult = false;
	connectionState = FSteamP2PSessionState();

	if (GetNetworking())
	{
		P2PSessionState_t SessionState;

		bResult = GetNetworking()->GetP2PSessionState(steamIDRemote, &SessionState);

		if (bResult)
		{
			connectionState = SessionState;
		}
	}

	return bResult;
}

bool UNetworking::IsP2PPacketAvailable(int32& outMessageSize, int32 channel)
{
	LogVerbose("");

	bool bResult = false;
	uint32 MessageSize = 0;

	if (GetNetworking())
	{
		bResult = GetNetworking()->IsP2PPacketAvailable(&MessageSize, channel);
	}

	outMessageSize = MessageSize;

	return bResult;
}

bool UNetworking::ReadP2PPacket(TArray<uint8>& data, FSteamID& outSteamIDRemote, int32 channel)
{
	LogVerbose("");

	bool bResult = false;
	data.Empty();
	outSteamIDRemote = FSteamID();

	if (GetNetworking())
	{
		uint32 DataSize = 0;

		if (GetNetworking()->IsP2PPacketAvailable(&DataSize))
		{
			data.SetNum(DataSize);
			CSteamID SteamIdRemote;

			bResult = GetNetworking()->ReadP2PPacket(data.GetData(), data.Num(), &DataSize, &SteamIdRemote, channel);
			
			if (bResult)
			{
				outSteamIDRemote = SteamIdRemote;
			}
			else
			{
				data.Empty();
			}
		}
	}

	return bResult;
}

bool UNetworking::SendP2PPacket(FSteamID steamIDRemote, TArray<uint8> data, ESteamP2PSend p2pSendType, int32 channel)
{
	LogVerbose("");

	bool bResult = false;

	if (GetNetworking())
	{
		bResult = GetNetworking()->SendP2PPacket(steamIDRemote, data.GetData(), data.Num(), static_cast<EP2PSend>(p2pSendType), channel);
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UNetworking::OnP2PSessionRequest(P2PSessionRequest_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			OnP2PSessionRequestDelegate.Broadcast(Data);
		});
}

void UNetworking::OnP2PSessionConnectFail(P2PSessionConnectFail_t *pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			OnP2PSessionConnectFailDelegate.Broadcast(Data);
		});
}
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUser
*/

#include "SteamUser/SteamUser.h"
#include "SteamUser/SteamUserAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UUser::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnClientGameServerDenyCallbackCallback.Register(this, &UUser::OnClientGameServerDeny);
	OnGameWebCallbackCallback.Register(this, &UUser::OnGameWebCallback);
	OnGetAuthSessionTicketResponseCallback.Register(this, &UUser::OnGetAuthSessionTicketResponse);
	OnIPCFailureCallback.Register(this, &UUser::OnIPCFailure);
	OnLicensesUpdatedCallback.Register(this, &UUser::OnLicensesUpdated);
	OnMicroTxnAuthorizationResponseCallback.Register(this, &UUser::OnMicroTxnAuthorizationResponse);
	OnSteamServersConnectedCallback.Register(this, &UUser::OnSteamServersConnected);
	OnSteamServerConnectFailureCallback.Register(this, &UUser::OnSteamServerConnectFailure);
	OnSteamServersDisconnectedCallback.Register(this, &UUser::OnSteamServersDisconnected);
	OnValidateAuthTicketResponseCallback.Register(this, &UUser::OnValidateAuthTicketResponse);
	OnEncryptedAppTicketResponseCallback.Register(this, &UUser::OnEncryptedAppTicketResponse);

	if (IsRunningDedicatedServer())
	{
		OnClientGameServerDenyCallbackCallback.SetGameserverFlag();
		OnGameWebCallbackCallback.SetGameserverFlag();
		OnGetAuthSessionTicketResponseCallback.SetGameserverFlag();
		OnIPCFailureCallback.SetGameserverFlag();
		OnLicensesUpdatedCallback.SetGameserverFlag();
		OnMicroTxnAuthorizationResponseCallback.SetGameserverFlag();
		OnSteamServersConnectedCallback.SetGameserverFlag();
		OnSteamServerConnectFailureCallback.SetGameserverFlag();
		OnSteamServersDisconnectedCallback.SetGameserverFlag();
		OnValidateAuthTicketResponseCallback.SetGameserverFlag();
		OnEncryptedAppTicketResponseCallback.SetGameserverFlag();
	}
}

void UUser::Deinitialize()
{
	OnClientGameServerDenyCallbackCallback.Unregister();
	OnGameWebCallbackCallback.Unregister();
	OnGetAuthSessionTicketResponseCallback.Unregister();
	OnIPCFailureCallback.Unregister();
	OnLicensesUpdatedCallback.Unregister();
	OnMicroTxnAuthorizationResponseCallback.Unregister();
	OnSteamServersConnectedCallback.Unregister();
	OnSteamServerConnectFailureCallback.Unregister();
	OnSteamServersDisconnectedCallback.Unregister();
	OnValidateAuthTicketResponseCallback.Unregister();
	OnEncryptedAppTicketResponseCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUser::AdvertiseGame(FSteamID steamIDGameServer, FString serverIP, int32 serverPort)
{
	LogVerbose("");

	if (SteamUser())
	{
		FIPv4Address m_IP;
		FIPv4Address::Parse(serverIP, m_IP);

		SteamUser()->AdvertiseGame(steamIDGameServer, m_IP.Value, serverPort);
	}
}

ESteamBeginAuthSessionResult UUser::BeginAuthSession(TArray<uint8> ticket, FSteamID steamID)
{
	LogVerbose("");

	ESteamBeginAuthSessionResult Result = ESteamBeginAuthSessionResult::InvalidTicket;

	if (SteamUser())
	{
		Result = static_cast<ESteamBeginAuthSessionResult>(SteamUser()->BeginAuthSession(ticket.GetData(), ticket.Num(), steamID));
	}

	return Result;
}

bool UUser::BIsBehindNAT()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamUser())
	{
		bResult = SteamUser()->BIsBehindNAT();
	}

	return bResult;
}

bool UUser::BIsPhoneIdentifying()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamUser())
	{
		bResult = SteamUser()->BIsPhoneIdentifying();
	}

	return bResult;
}

bool UUser::BIsPhoneRequiringVerification()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamUser())
	{
		bResult = SteamUser()->BIsPhoneRequiringVerification();
	}

	return bResult;
}

bool UUser::BIsPhoneVerified()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamUser())
	{
		bResult = SteamUser()->BIsPhoneVerified();
	}

	return bResult;
}

bool UUser::BIsTwoFactorEnabled()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamUser())
	{
		bResult = SteamUser()->BIsTwoFactorEnabled();
	}

	return bResult;
}

bool UUser::BLoggedOn()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamUser())
	{
		bResult = SteamUser()->BLoggedOn();
	}

	return bResult;
}

void UUser::CancelAuthTicket(FSteamTicketHandle TicketHandle)
{
	LogVerbose("");

	if (SteamUser())
	{
		SteamUser()->CancelAuthTicket(TicketHandle);
	}
}

ESteamVoiceResult UUser::DecompressVoice(const TArray<uint8>& compressedBuffer, int32 desiredSampleRate, TArray<uint8>& destBuffer)
{
	LogVeryVerbose("");

	ESteamVoiceResult Result = ESteamVoiceResult::NotInitialized;
	destBuffer.Empty();

	if (SteamUser())
	{
		uint32 BytesWritten = 0;
		destBuffer.SetNum(1024*20);

		Result = static_cast<ESteamVoiceResult>(SteamUser()->DecompressVoice(compressedBuffer.GetData(), compressedBuffer.Num(), destBuffer.GetData(), destBuffer.Num(), &BytesWritten, desiredSampleRate));

		if (Result == ESteamVoiceResult::BufferTooSmall)
		{
			destBuffer.Empty();
			destBuffer.SetNum(BytesWritten);
			
			Result = static_cast<ESteamVoiceResult>(SteamUser()->DecompressVoice(compressedBuffer.GetData(), compressedBuffer.Num(), destBuffer.GetData(), destBuffer.Num(), &BytesWritten, desiredSampleRate));
		}

		destBuffer.SetNum(BytesWritten);
		
		//LogVerbose("Bytes Written: %d, destBuffer: %d", BytesWritten, destBuffer.Num());
	}

	return Result;
}

void UUser::EndAuthSession(FSteamID steamID)
{
	LogVerbose("");

	if (SteamUser())
	{
		SteamUser()->EndAuthSession(steamID);
	}
}

FSteamTicketHandle UUser::GetAuthSessionTicket(TArray<uint8>& outTicket)
{
	LogVeryVerbose("");

	FSteamTicketHandle Result;
	outTicket.Empty();

	if (SteamUser())
	{
		uint32 TicketSize = 0;
		outTicket.SetNum(8192);
		Result = SteamUser()->GetAuthSessionTicket(outTicket.GetData(), 8192, &TicketSize);

		outTicket.SetNum(TicketSize);
	}

	return Result;
}

ESteamVoiceResult UUser::GetAvailableVoice(int32& outCompressedBytes, int32& outUncompressedBytes, int32 uncompressedVoiceDesiredSampleRate)
{
	LogVeryVerbose("");

	ESteamVoiceResult Result = ESteamVoiceResult::NotInitialized;
	uint32 CompressedBytes = 0;
	uint32 UncompressedBytes = 0;

	if (SteamUser())
	{
		Result = static_cast<ESteamVoiceResult>(SteamUser()->GetAvailableVoice(&CompressedBytes, &UncompressedBytes, uncompressedVoiceDesiredSampleRate));
	}

	outCompressedBytes = CompressedBytes;
	outUncompressedBytes = UncompressedBytes;

	return Result;
}

bool UUser::GetEncryptedAppTicket(TArray<uint8>& outTicket)
{
	LogVeryVerbose("");

	bool bResult = false;
	outTicket.Empty();

	if (SteamUser())
	{
		uint32 TicketSize = 0;
		outTicket.SetNum(8192);
		bResult = SteamUser()->GetEncryptedAppTicket(outTicket.GetData(), outTicket.Num(), &TicketSize);
		outTicket.SetNum(TicketSize);
	}

	return bResult;
}

int32 UUser::GetGameBadgeLevel(int32 series, bool bFoil)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamUser())
	{
		Result = SteamUser()->GetGameBadgeLevel(series, bFoil);
	}

	return Result;
}

int32 UUser::GetPlayerSteamLevel()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamUser())
	{
		Result = SteamUser()->GetPlayerSteamLevel();
	}

	return Result;
}

FSteamID UUser::GetSteamID()
{
	LogVeryVerbose("");

	FSteamID Result ;

	if (SteamUser())
	{
		Result = FSteamID(SteamUser()->GetSteamID());
	}

	return Result;
}

ESteamVoiceResult UUser::GetVoice(TArray<uint8>& outDestBuffer, int32& outBytesWritten)
{
	LogVeryVerbose("");

	ESteamVoiceResult Result = ESteamVoiceResult::NotInitialized;
	outDestBuffer.Empty();
	uint32 BytesWritten = 0;

	if (SteamUser())
	{
		// get the required buffer size
		uint32 AvailableVoiceBufferSize = 0;
		SteamUser()->GetAvailableVoice(&AvailableVoiceBufferSize);

		outDestBuffer.SetNum(AvailableVoiceBufferSize);

		Result = static_cast<ESteamVoiceResult>(SteamUser()->GetVoice(true, outDestBuffer.GetData(), AvailableVoiceBufferSize, &BytesWritten));
		outDestBuffer.SetNum(BytesWritten);
	}

	outBytesWritten = BytesWritten;

	return Result;
}

int32 UUser::GetVoiceOptimalSampleRate()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamUser())
	{
		Result = SteamUser()->GetVoiceOptimalSampleRate();
	}

	return Result;
}

void UUser::RequestEncryptedAppTicket(const FOnRequestEncryptedAppTicket& callback, TArray<uint8> dataToInclude)
{
	LogVerbose("");

	if (SteamUser())
	{
		FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket* Task = new FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(this, callback, dataToInclude);
		QueueAsyncTask(Task);
	}
}

void UUser::RequestStoreAuthURL(const FOnStoreAuthURLResponse& callback, FString redirectURL)
{
	LogVerbose("");

	if (SteamUser())
	{
		FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL* Task = new FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(this, callback, redirectURL);
		QueueAsyncTask(Task);
	}
}

void UUser::StartVoiceRecording()
{
	LogVerbose("");

	if (SteamUser())
	{
		SteamUser()->StartVoiceRecording();
	}
}

void UUser::StopVoiceRecording()
{
	LogVerbose("");

	if (SteamUser())
	{
		SteamUser()->StopVoiceRecording();
	}
}

ESteamUserHasLicenseForAppResult UUser::UserHasLicenseForApp(FSteamID steamID, int32 appID)
{
	LogVerbose("");

	ESteamUserHasLicenseForAppResult Result = ESteamUserHasLicenseForAppResult::NoAuth;

	if (SteamUser())
	{
		Result = static_cast<ESteamUserHasLicenseForAppResult>(SteamUser()->UserHasLicenseForApp(steamID, appID));
	}

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUser::OnClientGameServerDeny(ClientGameServerDeny_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ClientGameServerDeny.Broadcast(Data);
		});
}

void UUser::OnGameWebCallback(GameWebCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GameWebCallback.Broadcast(Data);
		});
}

void UUser::OnGetAuthSessionTicketResponse(GetAuthSessionTicketResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GetAuthSessionTicketResponse.Broadcast(Data);
		});
}

void UUser::OnIPCFailure(IPCFailure_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			IPCFailure.Broadcast(Data);
		});
}

void UUser::OnLicensesUpdated(LicensesUpdated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			LicensesUpdated.Broadcast(Data);
		});
}

void UUser::OnMicroTxnAuthorizationResponse(MicroTxnAuthorizationResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			MicroTxnAuthorizationResponse.Broadcast(Data);
		});
}

void UUser::OnSteamServersConnected(SteamServersConnected_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamServersConnected.Broadcast(Data);
		});
}

void UUser::OnSteamServerConnectFailure(SteamServerConnectFailure_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamServerConnectFailure.Broadcast(Data);
		});
}

void UUser::OnSteamServersDisconnected(SteamServersDisconnected_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamServersDisconnected.Broadcast(Data);
		});
}

void UUser::OnValidateAuthTicketResponse(ValidateAuthTicketResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ValidateAuthTicketResponse.Broadcast(Data);
		});
}

void UUser::OnEncryptedAppTicketResponse(EncryptedAppTicketResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			EncryptedAppTicketResponse.Broadcast(Data);
		});
}
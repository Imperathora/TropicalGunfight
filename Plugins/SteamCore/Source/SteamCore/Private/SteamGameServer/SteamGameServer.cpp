/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#include "SteamGameServer/SteamGameServer.h"
#include "SteamGameServer/SteamGameServerAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UGameServer::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnGSPolicyResponseCallback.Register(this, &UGameServer::OnGSPolicyResponse);
	OnGSClientGroupStatusCallback.Register(this, &UGameServer::OnGSClientGroupStatus);
	OnGSValidateAuthTicketResponseCallback.Register(this, &UGameServer::OnGSValidateAuthTicketResponse);
	OnGSClientApproveCallback.Register(this, &UGameServer::OnGSClientApprove);
	OnGSClientDenyCallback.Register(this, &UGameServer::OnGSClientDeny);

	if (IsRunningDedicatedServer())
	{
		OnGSPolicyResponseCallback.SetGameserverFlag();
		OnGSClientGroupStatusCallback.SetGameserverFlag();
		OnGSValidateAuthTicketResponseCallback.SetGameserverFlag();
		OnGSClientApproveCallback.SetGameserverFlag();
		OnGSClientDenyCallback.SetGameserverFlag();
	}
}

void UGameServer::Deinitialize()
{
	OnGSPolicyResponseCallback.Unregister();
	OnGSClientGroupStatusCallback.Unregister();
	OnGSValidateAuthTicketResponseCallback.Unregister();
	OnGSClientApproveCallback.Unregister();
	OnGSClientDenyCallback.Unregister();

	Super::Deinitialize();
}

bool UGameServer::ShouldCreateSubsystem(UObject* Outer) const
{
	if (IsRunningDedicatedServer())
	{
		return Super::ShouldCreateSubsystem(Outer);
	}

	return false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UGameServer::AssociateWithClan(const FOnAssociateWithClan& callback, FSteamID steamIDClan)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan* Task = new FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan(this, callback, steamIDClan);
		QueueAsyncTask(Task);
	}
}

ESteamBeginAuthSessionResult UGameServer::BeginAuthSession(TArray<uint8> ticket, FSteamID steamID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	ESteamBeginAuthSessionResult Result = ESteamBeginAuthSessionResult::InvalidTicket;

	if (SteamGameServer())
	{
		Result = static_cast<ESteamBeginAuthSessionResult>(SteamGameServer()->BeginAuthSession(ticket.GetData(), ticket.Num(), steamID));
	}

	return Result;
}

bool UGameServer::BLoggedOn()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");
	
	bool bResult = false;

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BLoggedOn();
	}

	return bResult;
}

bool UGameServer::BSecure()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BSecure();
	}

	return bResult;
}

bool UGameServer::BUpdateUserData(FSteamID steamIDUser, FString playerName, int32 score)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BUpdateUserData(steamIDUser, TCHAR_TO_UTF8(*playerName), score);
	}

	return bResult;
}

void UGameServer::CancelAuthTicket(FSteamTicketHandle ticketHandle)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->CancelAuthTicket(ticketHandle);
	}
}

void UGameServer::ClearAllKeyValues()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->ClearAllKeyValues();
	}
}

void UGameServer::ComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility& callback, FSteamID steamIDNewPlayer)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility* Task = new FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility(this, callback, steamIDNewPlayer);
		QueueAsyncTask(Task);
	}
}

FSteamID UGameServer::CreateUnauthenticatedUserConnection()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	FSteamID Result;

	if (SteamGameServer())
	{
		Result = SteamGameServer()->CreateUnauthenticatedUserConnection();
	}

	return Result;
}

void UGameServer::EnableHeartbeats(bool bActive)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->EnableHeartbeats(bActive);
	}
}

void UGameServer::EndAuthSession(FSteamID steamID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->EndAuthSession(steamID);
	}
}

void UGameServer::ForceHeartbeat()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->ForceHeartbeat();
	}
}

FSteamTicketHandle UGameServer::GetAuthSessionTicket(TArray<uint8>& ticket)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");

	FSteamTicketHandle TicketHandle;
	ticket.Empty();

	if (SteamGameServer())
	{
		uint32 TicketSize = 0;
		TicketHandle = SteamGameServer()->GetAuthSessionTicket(ticket.GetData(), 8192, &TicketSize);
		ticket.SetNum(TicketSize);
	}

	return TicketHandle;
}

FString UGameServer::GetServerPublicIP()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");

	FString Result = FString("INVALID");

	if (SteamGameServer())
	{
#if STEAM_VERSION > 146
		Result = FIPv4Address(SteamGameServer()->GetPublicIP().m_unIPv4).ToString();
#else
		Result = FIPv4Address(SteamGameServer()->GetPublicIP()).ToString();
#endif
	}

	return Result;
}

FSteamID UGameServer::GetServerSteamID()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVeryVerbose("");

	FSteamID Result;

	if (SteamGameServer())
	{
		Result = FSteamID(SteamGameServer()->GetSteamID().ConvertToUint64());
	}

	return Result;
}

void UGameServer::LogOff()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->LogOff();
	}
}

void UGameServer::LogOn(FString token)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->LogOn(TCHAR_TO_UTF8(*token));
	}
}

void UGameServer::LogOnAnonymous()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->LogOnAnonymous();
	}
}

bool UGameServer::RequestUserGroupStatus(FSteamID steamIDUser, FSteamID steamIDGroup)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	bool bResult = false;

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->RequestUserGroupStatus(steamIDUser, steamIDGroup);
	}

	return bResult;
}

void UGameServer::SetBotPlayerCount(int32 botplayers)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetBotPlayerCount(botplayers);
	}
}

void UGameServer::SetDedicatedServer(bool bDedicated)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetDedicatedServer(bDedicated);
	}
}

void UGameServer::SetGameData(FString gameData)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetGameData(TCHAR_TO_UTF8(*gameData));
	}
}

void UGameServer::SetGameDescription(FString gameDescription)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetGameDescription(TCHAR_TO_UTF8(*gameDescription));
	}
}

void UGameServer::SetGameTags(FString gameTags)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetGameTags(TCHAR_TO_UTF8(*gameTags));
	}
}

void UGameServer::SetHeartbeatInterval(int32 heartbeatInterval)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetHeartbeatInterval(heartbeatInterval);
	}
}

void UGameServer::SetKeyValue(FString key, FString value)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");
	
	if (key.Len() == 0 || value.Len() == 0)
    {
        return;
    }

	if (SteamGameServer())
	{
		char Key[256];
		FCStringAnsi::Strncpy(Key, TCHAR_TO_UTF8(*key), key.GetAllocatedSize());
		char Value[1024];
		FCStringAnsi::Strncpy(Value, TCHAR_TO_UTF8(*value), value.GetAllocatedSize());
	
		SteamGameServer()->SetKeyValue(Key, Value);
	}
}

void UGameServer::SetMapName(FString mapName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetMapName(TCHAR_TO_UTF8(*mapName));
	}
}

void UGameServer::SetMaxPlayerCount(int32 playersMax)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetMaxPlayerCount(playersMax);
	}
}

void UGameServer::SetModDir(FString modDir)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetModDir(TCHAR_TO_UTF8(*modDir));
	}
}

void UGameServer::SetPasswordProtected(bool bPasswordProtected)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetPasswordProtected(bPasswordProtected);
	}
}

void UGameServer::SetProduct(FString product)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetProduct(TCHAR_TO_UTF8(*product));
	}
}

void UGameServer::SetRegion(FString region)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetRegion(TCHAR_TO_UTF8(*region));
	}
}

void UGameServer::SetServerName(FString serverName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetServerName(TCHAR_TO_UTF8(*serverName));
	}
}

void UGameServer::SetSpectatorPort(int32 spectatorPort)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetSpectatorPort(spectatorPort);
	}
}

void UGameServer::SetSpectatorServerName(FString spectatorServerName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetSpectatorServerName(TCHAR_TO_UTF8(*spectatorServerName));
	}
}

ESteamUserHasLicenseForAppResult UGameServer::UserHasLicenseForApp(FSteamID steamID, int32 appID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	ESteamUserHasLicenseForAppResult Result = ESteamUserHasLicenseForAppResult::DoesNotHaveLicense;

	if (SteamGameServer())
	{
		Result = static_cast<ESteamUserHasLicenseForAppResult>(SteamGameServer()->UserHasLicenseForApp(steamID, appID));
	}

	return Result;
}

bool UGameServer::WasRestartRequested()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	bool bResult = false;

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->WasRestartRequested();
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UGameServer::OnGSPolicyResponse(GSPolicyResponse_t *pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GSPolicyResponse.Broadcast(Data);
		});
}

void UGameServer::OnGSClientGroupStatus(GSClientGroupStatus_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GSClientGroupStatus.Broadcast(Data);
		});
}

void UGameServer::OnGSValidateAuthTicketResponse(ValidateAuthTicketResponse_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GSValidateAuthTicketResponse.Broadcast(Data);
		});
}

void UGameServer::OnGSClientApprove(GSClientApprove_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GSClientApprove.Broadcast(Data);
		});
}

void UGameServer::OnGSClientDeny(GSClientDeny_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}
	
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GSClientDeny.Broadcast(Data);
		});
}

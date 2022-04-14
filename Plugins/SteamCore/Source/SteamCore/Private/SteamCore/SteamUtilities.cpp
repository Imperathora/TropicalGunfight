/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamUtilities.h"
#include "SteamCorePluginPrivatePCH.h"
#include "OnlineSubsystemSteamModule.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
#if STEAM_VERSION > 142
#include "OnlinePingInterfaceSteam.h"
#endif
#include "SteamMatchmakingServers/SteamMatchmakingServersAsyncTasks.h"

TArray<FOnSteamMessage> USteamUtilities::s_SteamMessageListeners;

USteamCoreVoice::USteamCoreVoice(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Duration = INDEFINITELY_LOOPING_DURATION;
	NumChannels = 1;
	bLooping = false;
	bCanProcessAsync = true;
}

void USteamCoreVoice::AddAudioBuffer(const TArray<uint8>& buffer)
{
	QueueAudio(buffer.GetData(), buffer.Num());
}

void USteamCoreVoice::DestroySteamCoreVoice(USteamCoreVoice* obj)
{
	LogVerbose("");
	
	if (obj)
	{
		obj->RemoveFromRoot();
	}
}

USteamCoreVoice* USteamCoreVoice::ConstructSteamCoreVoice(int32 audioSampleRate)
{
	LogVerbose("");
	
	check (audioSampleRate > 0);
	
	USteamCoreVoice* Obj = NewObject<USteamCoreVoice>();
	Obj->AddToRoot();
	Obj->SetSampleRate(audioSampleRate);

	return Obj;
}

FSteamID USteamUtilities::MakeSteamID(FString value)
{
	uint64 TempId = 0;
	LexFromString(TempId, *value);
	return FSteamID(TempId);
}

FSteamGameID USteamUtilities::MakeSteamGameID(FString value)
{
	uint64 TempId = 0;
	LexFromString(TempId, *value);
	return FSteamGameID(TempId);
}

FString USteamUtilities::BreakSteamID(FSteamID steamID)
{
	return LexToString(static_cast<uint64>(steamID));
}

FString USteamUtilities::BreakSteamGameID(FSteamGameID steamID)
{
	return LexToString(static_cast<uint64>(steamID));
}

FPublishedFileID USteamUtilities::MakePublishedFileID(FString value)
{
	uint64 TempId = 0;
	LexFromString(TempId, *value);
	return FPublishedFileID(TempId);
}

FSteamUGCHandle USteamUtilities::MakeUGCHandle(FString value)
{
	uint64 TempId = 0;
	LexFromString(TempId, *value);
	return FSteamUGCHandle(TempId);
}

FSteamInventoryUpdateHandle USteamUtilities::MakeInventoryUpdateHandle(FString value)
{
	uint64 TempId = 0;
	LexFromString(TempId, *value);
	return FSteamInventoryUpdateHandle(TempId);
}

FSteamTicketHandle USteamUtilities::MakeTicketHandle(FString value)
{
	uint64 TempId = 0;
	LexFromString(TempId, *value);
	return FSteamTicketHandle(TempId);
}

FString USteamUtilities::BreakPublishedFileID(FPublishedFileID fileID)
{
	return LexToString(static_cast<uint64>(fileID));
}

FString USteamUtilities::BreakUGCHandle(FSteamUGCHandle handle)
{
	return LexToString(static_cast<uint64>(handle));
}

FString USteamUtilities::BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle handle)
{
	return LexToString(static_cast<uint64>(handle));
}

FString USteamUtilities::BreakTicketHandle(FSteamTicketHandle handle)
{
	return LexToString(static_cast<uint64>(handle));
}

bool USteamUtilities::IsValid(FSteamID steamID)
{
	return CSteamID(steamID.GetValue()).IsValid();
}

bool USteamUtilities::IsPublishedFileIDValid(FPublishedFileID publishedFileId)
{
	return publishedFileId.IsValid();
}

bool USteamUtilities::Equal(FSteamID a, FSteamID b)
{
	return a == b;
}

bool USteamUtilities::NotEqual(FSteamID a, FSteamID b)
{
	return a != b;
}

bool USteamUtilities::PublishedFileID_Equals(FPublishedFileID a, FPublishedFileID b)
{
	return a == b;
}

bool USteamUtilities::PublishedFileID_NotEquals(FPublishedFileID a, FPublishedFileID b)
{
	return a != b;
}

bool USteamUtilities::SteamItemInstanceID_Equals(FSteamItemInstanceID a, FSteamItemInstanceID b)
{
	return static_cast<uint64>(a) == static_cast<uint64>(b);
}

void USteamUtilities::SteamItemInstanceID_Equals_Exec(FSteamItemInstanceID a, FSteamItemInstanceID b, ESteamCoreIdentical& result)
{
	result = static_cast<uint64>(a) == static_cast<uint64>(b) ? ESteamCoreIdentical::Identical : ESteamCoreIdentical::NotIdentical;
}

ESteamAccountType USteamUtilities::GetAccountType(FSteamID steamID)
{
	return static_cast<ESteamAccountType>((CSteamID(steamID.GetValue())).GetEAccountType());
}

bool USteamUtilities::IsLobby(FSteamID steamID)
{
	return CSteamID(steamID.GetValue()).IsLobby();
}

bool USteamUtilities::IsSteamAvailable()
{
	return SteamAPI_Init();
}

UServerFilter* USteamUtilities::ConstructServerFilter(UObject* WorldContextObject)
{
	UServerFilter* Object = nullptr;

	if (WorldContextObject)
	{
		Object = NewObject<UServerFilter>(WorldContextObject);
		
		if (Object)
			Object->AddToRoot();
	}
	else
	{
		UE_LOG(LogSteamCore, Error, TEXT("No world context object when creating UServerFilter object!"));
	}

	return Object;
}

FString USteamUtilities::EncryptString(FString string)
{
	FString Result;

	if (string.Len() > 0)
	{
		Result = FMD5::HashAnsiString(*string);
	}

	return Result;
}

void USteamUtilities::GetPublicIp(const FOnHTTPResponse& callback)
{
	LogVeryVerbose("");

	FHttpModule* HttpModule = &FHttpModule::Get();

	if (HttpModule && HttpModule->IsHttpEnabled())
	{
		auto Request = HttpModule->CreateRequest();
		Request->SetVerb("GET");
		Request->SetURL(FString("http://api.ipify.org"));
		Request->SetHeader("User-Agent", "X-SteamCore/1.0");
		Request->SetHeader("Content-Type", "text/html");

		Request->OnProcessRequestComplete().BindLambda([callback](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
			{
				if (Response)
				{
					callback.ExecuteIfBound(Response->GetContentAsString());
				}
			});
		
		if (!Request->ProcessRequest())
		{
			LogWarning("Unable to send HTTP request");
		}
	}
}

void USteamUtilities::ReleaseRequest()
{
	if (FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::m_CallbackResults != nullptr)
	{
		SteamMatchmakingServers()->ReleaseRequest(FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::m_CallbackResults);
		FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::m_CallbackResults = nullptr;
	}
}

void USteamUtilities::CancelQuery()
{
	if (FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::m_CallbackResults != nullptr)
	{
		SteamMatchmakingServers()->CancelQuery(FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::m_CallbackResults);
	}
}

FSteamID USteamUtilities::GetSteamIdFromPlayerState(APlayerState* PlayerState)
{
	FSteamID SteamId;
	
	if (PlayerState)
	{
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION > 24
		SteamId = FSteamID(FCString::Atoi64(*PlayerState->GetUniqueId().ToString()));
#else
		SteamId = FSteamID(FCString::Atoi64(*PlayerState->UniqueId.ToString()));
#endif
	}

	return SteamId;
}

bool USteamUtilities::IsUsingP2PRelays()
{
	FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));
	
#if STEAM_VERSION > 142
	if (SteamSubsystem && SteamSubsystem->GetPingInterface())
	{
		return SteamSubsystem->GetPingInterface()->IsUsingP2PRelays();
	}
#endif

	return false;
}

FHostPingData USteamUtilities::GetHostPingData()
{
	FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));
	
#if STEAM_VERSION > 142
	if (SteamSubsystem && SteamSubsystem->GetPingInterface())
	{
		return FHostPingData(SteamSubsystem->GetPingInterface()->GetHostPingData());
	}
#endif

	return FHostPingData();
}

int32 USteamUtilities::GetPingFromHostData(const FHostPingData& data)
{
	FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));

#if STEAM_VERSION > 142
	if (SteamSubsystem && SteamSubsystem->GetPingInterface())
	{
		return SteamSubsystem->GetPingInterface()->GetPingFromHostData(data);
	}
#endif

	return 0;
}

bool USteamUtilities::IsRecalculatingPing()
{
	FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));

#if STEAM_VERSION > 142
	if (SteamSubsystem && SteamSubsystem->GetPingInterface())
	{
		return SteamSubsystem->GetPingInterface()->IsRecalculatingPing();
	}
#endif

	return false;
}

void USteamUtilities::ListenForSteamMessages(const FOnSteamMessage& callback)
{
	s_SteamMessageListeners.Add(callback);
}

void USteamUtilities::InvokeSteamMessage(ESteamMessageType type, const FString& message)
{
	for (auto& Element : s_SteamMessageListeners) 
	{
		Element.ExecuteIfBound(type, message);
	}
}
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#include "SteamGameSearch/SteamGameSearch.h"
#include "SteamCorePluginPrivatePCH.h"

void UGameSearch::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (SteamGameSearch()) {

		OnSearchForGameProgressCallback.Register(this, &UGameSearch::OnSearchForGameProgressUpdated);
		OnSearchForGameResultCallback.Register(this, &UGameSearch::OnSearchForGameResultUpdated);
		OnRequestPlayersForGameProgressCallback.Register(this, &UGameSearch::OnRequestPlayersForGameProgressUpdated);
		OnRequestPlayersForGameResultCallback.Register(this, &UGameSearch::OnRequestPlayersForGameResultUpdated);
		OnRequestPlayersForGameFinalResultCallback.Register(this, &UGameSearch::OnRequestPlayersForGameFinalResultUpdated);
		OnSubmitPlayerResultResultCallback.Register(this, &UGameSearch::OnSubmitPlayerResultResultUpdated);
		OnEndGameResultCallback.Register(this, &UGameSearch::OnEndGameResultUpdated);

		if (IsRunningDedicatedServer())
		{
			OnSearchForGameProgressCallback.SetGameserverFlag();
			OnSearchForGameResultCallback.SetGameserverFlag();
			OnRequestPlayersForGameProgressCallback.SetGameserverFlag();
			OnRequestPlayersForGameResultCallback.SetGameserverFlag();
			OnRequestPlayersForGameFinalResultCallback.SetGameserverFlag();
			OnSubmitPlayerResultResultCallback.SetGameserverFlag();
			OnEndGameResultCallback.SetGameserverFlag();
		}
	}
}

void UGameSearch::Deinitialize()
{
	if (SteamGameSearch())
	{
		OnSearchForGameProgressCallback.Unregister();
		OnSearchForGameResultCallback.Unregister();
		OnRequestPlayersForGameProgressCallback.Unregister();
		OnRequestPlayersForGameResultCallback.Unregister();
		OnRequestPlayersForGameFinalResultCallback.Unregister();
		OnSubmitPlayerResultResultCallback.Unregister();
		OnEndGameResultCallback.Unregister();
	}

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		GameSearch API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

ESteamGameSearchErrorCode UGameSearch::AddGameSearchParams(FString keyToFind, TArray<FString> valuesToFind)
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		TArray<char> Values;
		Values.SetNum(valuesToFind.Num());

		for (int32 i = 0; i < valuesToFind.Num(); i++)
		{
			if (i > 0)
				Values[i] = *TCHAR_TO_UTF8(*FString::Printf(TEXT(",%s"), *valuesToFind[i]));
			else
				Values[i] = *TCHAR_TO_UTF8(*FString::Printf(TEXT("%s"), *valuesToFind[i]));
		}

		Result = SteamGameSearch()->AddGameSearchParams(TCHAR_TO_UTF8(*keyToFind), Values.GetData());
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::SearchForGameWithLobby(FSteamID steamIDLobby, int32 playerMin, int32 playerMax)
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->SearchForGameWithLobby(steamIDLobby, playerMin, playerMax);
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::SearchForGameSolo(int32 playerMin, int32 playerMax)
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->SearchForGameSolo(playerMin, playerMax);
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::AcceptGame()
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->AcceptGame();
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::DeclineGame()
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->DeclineGame();
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::RetrieveConnectionDetails(FSteamID steamIDHost, FString& connectionDetails, int32 numConnectionDetails)
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		char* ConnectionDetails = NULL;
		int NumConnectionDetails = 0;
		Result = SteamGameSearch()->RetrieveConnectionDetails(steamIDHost, ConnectionDetails, NumConnectionDetails);

		if (Result == k_EGameSearchErrorCode_OK)
		{
			connectionDetails = FString(ConnectionDetails);
		}
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::EndGameSearch()
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->EndGameSearch();
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::SetGameHostParams(FString key, TArray<FString> values)
{
	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		TArray<char> Values;
		Values.SetNum(values.Num());

		for (int32 i = 0; i < values.Num(); i++)
		{
			if (i > 0)
				Values[i] = *TCHAR_TO_UTF8(*FString::Printf(TEXT(",%s"), *values[i]));
			else
				Values[i] = *TCHAR_TO_UTF8(*FString::Printf(TEXT("%s"), *values[i]));
		}

		Result = SteamGameSearch()->SetGameHostParams(TCHAR_TO_UTF8(*key), Values.GetData());
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::SetConnectionDetails(FString connectionDetails)
{
	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->SetConnectionDetails(TCHAR_TO_UTF8(*connectionDetails), 1);
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::RequestPlayersForGame(int32 playerMin, int32 playerMax, int32 maxTeamSize)
{
	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->RequestPlayersForGame(playerMin, playerMax, maxTeamSize);
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::HostConfirmGameStart(FString uniqueGameID)
{
	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->HostConfirmGameStart(FCString::Atoi64(*uniqueGameID));
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::CancelRequestPlayersForGame()
{
	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->CancelRequestPlayersForGame();
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::SubmitPlayerResult(FString uniqueGameID, FSteamID steamIDPlayer, ESteamPlayerResult playerResult)
{
	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->SubmitPlayerResult(FCString::Atoi64(*uniqueGameID), steamIDPlayer, static_cast<EPlayerResult_t>(playerResult));
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode UGameSearch::EndGame(FString uniqueGameID)
{
	EGameSearchErrorCode_t Result = EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->EndGame(FCString::Atoi64(*uniqueGameID));
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UGameSearch::OnEndGameResultUpdated(EndGameResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			EndGameResultDelegate.Broadcast(Data);
		});
}

void UGameSearch::OnSubmitPlayerResultResultUpdated(SubmitPlayerResultResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SubmitPlayerResultResultDelegate.Broadcast(Data);
		});
}

void UGameSearch::OnRequestPlayersForGameFinalResultUpdated(RequestPlayersForGameFinalResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			RequestPlayersForGameFinalResultDelegate.Broadcast(Data);
		});
}

void UGameSearch::OnRequestPlayersForGameResultUpdated(RequestPlayersForGameResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			RequestPlayersForGameResultDelegate.Broadcast(Data);
		});
}

void UGameSearch::OnRequestPlayersForGameProgressUpdated(RequestPlayersForGameProgressCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			RequestPlayersForGameProgressDelegate.Broadcast(Data);
		});
}

void UGameSearch::OnSearchForGameResultUpdated(SearchForGameResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SearchForGameResultDelegate.Broadcast(Data);
		});
}

void UGameSearch::OnSearchForGameProgressUpdated(SearchForGameProgressCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SearchForGameProgressDelegate.Broadcast(Data);
		});
}
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamGameSearchTypes.h"
#include "SteamGameSearch.generated.h"

/*
* Purpose: Functions for match making services for clients to get to favorites
* and to operate on game lobbies.
*/
UCLASS()
class STEAMCORE_API UGameSearch : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UGameSearch() {SubsystemType = ESteamSubsystem::GameSearch;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameSearch|Delegates")
		FSearchForGameProgressDelegate SearchForGameProgressDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameSearch|Delegates")
		FSearchForGameResultDelegate SearchForGameResultDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameSearch|Delegates")
		FRequestPlayersForGameProgressDelegate RequestPlayersForGameProgressDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameSearch|Delegates")
		FRequestPlayersForGameResultDelegate RequestPlayersForGameResultDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameSearch|Delegates")
		FRequestPlayersForGameFinalResultDelegate RequestPlayersForGameFinalResultDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameSearch|Delegates")
		FSubmitPlayerResultResultDelegate SubmitPlayerResultResultDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameSearch|Delegates")
		FEndGameResultDelegate EndGameResultDelegate;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/*
	* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify
	* fails if a search is currently in progress
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Client")
		ESteamGameSearchErrorCode AddGameSearchParams(FString keyToFind, TArray<FString> valuesToFind);

	/*
	* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress
	* if not the owner of the lobby or search already in progress this call fails
	* periodic callbacks will be sent as queue time estimates change
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Client")
		ESteamGameSearchErrorCode SearchForGameWithLobby(FSteamID steamIDLobby, int32 playerMin, int32 playerMax);

	/*
	* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress
	* periodic callbacks will be sent as queue time estimates change
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Client")
		ESteamGameSearchErrorCode SearchForGameSolo(int32 playerMin, int32 playerMax);

	/*
	* after receiving SearchForGameResultCallback_t, accept or decline the game
	* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Client")
		ESteamGameSearchErrorCode AcceptGame();

	/*
	* after receiving SearchForGameResultCallback_t, accept or decline the game
	* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Client")
		ESteamGameSearchErrorCode DeclineGame();

	/*
	* after receiving GameStartedByHostCallback_t get connection details to server
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Client")
		ESteamGameSearchErrorCode RetrieveConnectionDetails(FSteamID steamIDHost, FString& connectionDetails, int32 numConnectionDetails);

	/*
	* leaves queue if still waiting
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Client")
		ESteamGameSearchErrorCode EndGameSearch();

	/*
	* a keyname and a list of comma separated values: all the values you allow
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Host")
		ESteamGameSearchErrorCode SetGameHostParams(FString key, TArray<FString> values);

	/*
	* set connection details for players once game is found so they can connect to this server
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Host")
		ESteamGameSearchErrorCode SetConnectionDetails(FString connectionDetails);

	/*
	* mark server as available for more players with nPlayerMin,nPlayerMax desired
	* accept no lobbies with playercount greater than nMaxTeamSize
	* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize
	* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started
	* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Host")
		ESteamGameSearchErrorCode RequestPlayersForGame(int32 playerMin, int32 playerMax, int32 maxTeamSize);

	/*
	* accept the player list and release connection details to players
	* players will only be given connection details and host steamid when this is called
	* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Host")
		ESteamGameSearchErrorCode HostConfirmGameStart(FString uniqueGameID);

	/*
	* cancel request and leave the pool of game hosts looking for players
	* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Host")
		ESteamGameSearchErrorCode CancelRequestPlayersForGame();

	/*
	* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Host")
		ESteamGameSearchErrorCode SubmitPlayerResult(FString uniqueGameID, FSteamID steamIDPlayer, ESteamPlayerResult playerResult);

	/*
	* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted
	* any future requests will provide a new ullUniqueGameID
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameSearch|Host")
		ESteamGameSearchErrorCode EndGame(FString uniqueGameID);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	STEAM_CALLBACK_MANUAL(UGameSearch, OnSearchForGameProgressUpdated, SearchForGameProgressCallback_t, OnSearchForGameProgressCallback);
	STEAM_CALLBACK_MANUAL(UGameSearch, OnSearchForGameResultUpdated, SearchForGameResultCallback_t, OnSearchForGameResultCallback);
	STEAM_CALLBACK_MANUAL(UGameSearch, OnRequestPlayersForGameProgressUpdated, RequestPlayersForGameProgressCallback_t, OnRequestPlayersForGameProgressCallback);
	STEAM_CALLBACK_MANUAL(UGameSearch, OnRequestPlayersForGameResultUpdated, RequestPlayersForGameResultCallback_t, OnRequestPlayersForGameResultCallback);
	STEAM_CALLBACK_MANUAL(UGameSearch, OnRequestPlayersForGameFinalResultUpdated, RequestPlayersForGameFinalResultCallback_t, OnRequestPlayersForGameFinalResultCallback);
	STEAM_CALLBACK_MANUAL(UGameSearch, OnSubmitPlayerResultResultUpdated, SubmitPlayerResultResultCallback_t, OnSubmitPlayerResultResultCallback);
	STEAM_CALLBACK_MANUAL(UGameSearch, OnEndGameResultUpdated, EndGameResultCallback_t, OnEndGameResultCallback);
};

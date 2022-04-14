/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamUserStatsTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFindLeaderboard m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(class USteamCoreSubsystem* subsystem, FOnFindLeaderboard callback, FString leaderboardName)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_LeaderboardName(leaderboardName) {}
	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString leaderboardName)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_LeaderboardName(leaderboardName) 
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard() = delete;
protected:
	LeaderboardFindResult_t m_CallbackResults;
	FString m_LeaderboardName;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadLeaderboardEntries m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(USteamCoreSubsystem* subsystem, FOnDownloadLeaderboardEntries callback, FSteamLeaderboard leaderboard, ESteamLeaderboardDataRequest dataRequest, int32 rangeStart, int32 rangeEnd)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_Leaderboard(leaderboard)
		, m_DataRequest(dataRequest)
		, m_RangeStart(rangeStart)
		, m_RangeEnd(rangeEnd)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamLeaderboard leaderboard, ESteamLeaderboardDataRequest dataRequest, int32 rangeStart, int32 rangeEnd)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_Leaderboard(leaderboard)
		, m_DataRequest(dataRequest)
		, m_RangeStart(rangeStart)
		, m_RangeEnd(rangeEnd)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries() = delete;
protected:
	LeaderboardScoresDownloaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	ESteamLeaderboardDataRequest m_DataRequest;
	int32 m_RangeStart;
	int32 m_RangeEnd;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestGlobalStats m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(class USteamCoreSubsystem* subsystem, FOnRequestGlobalStats callback, int32 historyDays)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_HistoryDays(historyDays)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 historyDays)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_HistoryDays(historyDays)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats() = delete;
protected:
	GlobalStatsReceived_t m_CallbackResults;
	int32 m_HistoryDays;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestGlobalAchievementPercentages m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(class USteamCoreSubsystem* subsystem, FOnRequestGlobalAchievementPercentages callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
	{}

	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages() = delete;
protected:
	GlobalAchievementPercentagesReady_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetNumberOfCurrentPlayers m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(class USteamCoreSubsystem* subsystem, FOnGetNumberOfCurrentPlayers callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers() = delete;
protected:
	NumberOfCurrentPlayers_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUploadLeaderboardScore m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(class USteamCoreSubsystem* subsystem, FOnUploadLeaderboardScore callback, FSteamLeaderboard leaderboard, ESteamLeaderboardUploadScoreMethod uploadMethod, int32 score, TArray<int32> scoreDetails)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_Leaderboard(leaderboard)
		, m_UploadScoreMethod(uploadMethod)
		, m_Score(score)
		, m_ScoreDetails(scoreDetails)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamLeaderboard leaderboard, ESteamLeaderboardUploadScoreMethod uploadMethod, int32 score, TArray<int32> scoreDetails)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_Leaderboard(leaderboard)
		, m_UploadScoreMethod(uploadMethod)
		, m_Score(score)
		, m_ScoreDetails(scoreDetails)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore() = delete;
protected:
	LeaderboardScoreUploaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	ESteamLeaderboardUploadScoreMethod m_UploadScoreMethod;
	int32 m_Score;
	TArray<int32> m_ScoreDetails;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFindOrCreateLeaderboard m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(USteamCoreSubsystem* subsystem, FOnFindOrCreateLeaderboard callback, FString leaderboardName, ESteamLeaderboardSortMethod sortMethod, ESteamLeaderboardDisplayType displayType)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_LeaderboardName(leaderboardName)
		, m_SortMethod(sortMethod)
		, m_DisplayType(displayType)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString leaderboardName, ESteamLeaderboardSortMethod sortMethod, ESteamLeaderboardDisplayType displayType)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_LeaderboardName(leaderboardName)
		, m_SortMethod(sortMethod)
		, m_DisplayType(displayType)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard() = delete;
protected:
	LeaderboardFindResult_t m_CallbackResults;
	FString m_LeaderboardName;
	ESteamLeaderboardSortMethod m_SortMethod = ESteamLeaderboardSortMethod::None;
	ESteamLeaderboardDisplayType m_DisplayType = ESteamLeaderboardDisplayType::None;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestUserStats m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(USteamCoreSubsystem* subsystem, FOnRequestUserStats callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_SteamID(steamID)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats() = delete;
protected:
	UserStatsReceived_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadLeaderboardEntriesForUsers m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(class USteamCoreSubsystem* subsystem, FOnDownloadLeaderboardEntriesForUsers callback, FSteamLeaderboard leaderboard, TArray<FSteamID> users)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_Leaderboard(leaderboard)
		, m_Users(users)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamLeaderboard leaderboard, TArray<FSteamID> users)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_Leaderboard(leaderboard)
		, m_Users(users)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers() = delete;
protected:
	LeaderboardScoresDownloaded_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	TArray<FSteamID> m_Users;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAttachLeaderboardUGC m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(USteamCoreSubsystem* subsystem, FOnAttachLeaderboardUGC callback, FSteamLeaderboard leaderboard, FSteamUGCHandle handle)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, m_OnSteamCallback(callback)
		, m_Leaderboard(leaderboard)
		, m_UGCHandle(handle)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamLeaderboard leaderboard, FSteamUGCHandle handle)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, m_Leaderboard(leaderboard)
		, m_UGCHandle(handle)
	{
		m_OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC() = delete;
protected:
	LeaderboardUGCSet_t m_CallbackResults;
	FSteamLeaderboard m_Leaderboard;
	FSteamUGCHandle m_UGCHandle;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC")); }
};
/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#include "SteamUserStats/SteamUserStats.h"
#include "SteamUserStats/SteamUserStatsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UUserStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnUserAchievementIconFetchedCallback.Register(this, &UUserStats::OnUserAchievementIconFetched);
	OnUserStatsReceivedCallback.Register(this, &UUserStats::OnUserStatsReceived);
	OnUserStatsStoredCallback.Register(this, &UUserStats::OnUserStatsStored);
	OnUserAchievementStoredCallback.Register(this, &UUserStats::OnUserAchievementStored);
	OnUserStatsUnloadedCallback.Register(this, &UUserStats::OnUserStatsUnloaded);
	OnUserAchievementIconFetchedCallback.Register(this, &UUserStats::OnUserAchievementIconFetched);

	if (IsRunningDedicatedServer())
	{
		OnUserAchievementIconFetchedCallback.SetGameserverFlag();
		OnUserStatsReceivedCallback.SetGameserverFlag();
		OnUserStatsStoredCallback.SetGameserverFlag();
		OnUserAchievementStoredCallback.SetGameserverFlag();
		OnUserStatsUnloadedCallback.SetGameserverFlag();
		OnUserAchievementIconFetchedCallback.SetGameserverFlag();
	}
}

void UUserStats::Deinitialize()
{
	OnUserAchievementIconFetchedCallback.Unregister();
	OnUserStatsReceivedCallback.Unregister();
	OnUserStatsStoredCallback.Unregister();
	OnUserAchievementStoredCallback.Unregister();
	OnUserStatsUnloadedCallback.Unregister();
	OnUserAchievementIconFetchedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUserStats::AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& callback, FSteamLeaderboard steamLeaderboard, FSteamUGCHandle handle)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC* Task = new FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(this, callback, steamLeaderboard, handle);
		QueueAsyncTask(Task);
	}
}

bool UUserStats::ClearAchievement(FString name)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->ClearAchievement(TCHAR_TO_UTF8(*name));
	}

	return bResult;
}

void UUserStats::DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& callback, FSteamLeaderboard steamLeaderboard, ESteamLeaderboardDataRequest dataRequest, int32 rangeStart, int32 rangeEnd)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries* Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(this, callback, steamLeaderboard, dataRequest, rangeStart, rangeEnd);
		QueueAsyncTask(Task);
	}
}

void UUserStats::DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& callback, FSteamLeaderboard steamLeaderboard, TArray<FSteamID> users)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers* Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(this, callback, steamLeaderboard, users);
		QueueAsyncTask(Task);
	}
}

void UUserStats::FindLeaderboard(const FOnFindLeaderboard& callback, FString leaderboardName)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard* Task = new FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(this, callback, leaderboardName);
		QueueAsyncTask(Task);
	}
}

void UUserStats::FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& callback, FString leaderboardName, ESteamLeaderboardSortMethod sortMethod, ESteamLeaderboardDisplayType displayType)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard* Task = new FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(this, callback, leaderboardName, sortMethod, displayType);
		QueueAsyncTask(Task);
	}
}

bool UUserStats::GetAchievement(FString name, bool& bAchieved)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievement(TCHAR_TO_UTF8(*name), &bAchieved);
	}

	return bResult;
}

bool UUserStats::GetAchievementAchievedPercent(FString name, float& outPercent)
{
	LogVeryVerbose("");

	bool bResult = false;
	outPercent = 0.0f;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievementAchievedPercent(TCHAR_TO_UTF8(*name), &outPercent);
	}

	return bResult;
}

bool UUserStats::GetAchievementAndUnlockTime(FString name, bool& bAchieved, int32& outUnlockTime)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;
	outUnlockTime = 0;

	if (SteamUserStats())
	{
		uint32 UnlockTime = 0;

		bResult = SteamUserStats()->GetAchievementAndUnlockTime(TCHAR_TO_UTF8(*name), &bAchieved, &UnlockTime);

		outUnlockTime = UnlockTime;
	}
	return bResult;
}

FString UUserStats::GetAchievementDisplayAttribute(FString name, FString key)
{
	LogVeryVerbose("Name (%s), Key (%s)", *name, *key); 

	FString Result;
	
	if (name.Len() == 0 || key.Len() == 0)
    {
        return Result;
    }

	if (SteamUserStats())
	{
		char NameAnsi[512];
		FCStringAnsi::Strncpy(NameAnsi, TCHAR_TO_UTF8(*name), name.GetAllocatedSize());
		char KeyAnsi[512];
		FCStringAnsi::Strncpy(KeyAnsi, TCHAR_TO_UTF8(*key), key.GetAllocatedSize());
		
		Result = UTF8_TO_TCHAR(SteamUserStats()->GetAchievementDisplayAttribute(NameAnsi, KeyAnsi));
	}

	return Result;
}

UTexture2D* UUserStats::GetAchievementIcon(FString name)
{
	LogVeryVerbose("");

	UTexture2D* Texture = nullptr;

	if (SteamUserStats())
	{
		const int ImageData = SteamUserStats()->GetAchievementIcon(TCHAR_TO_UTF8(*name));
		Texture = GetSteamTexture(ImageData);
	}

	return Texture;
}

bool UUserStats::GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries leaderboardEntries, int32 index, FSteamLeaderboardEntry& outLeaderboardEntry, TArray<int32> details, TArray<int32>& outDetails)
{
	LogVeryVerbose("");

	bool bResult = false;
	outLeaderboardEntry = FSteamLeaderboardEntry();
	outDetails.Empty();

	if (SteamUserStats())
	{
		outDetails.SetNum(details.Num());

		LeaderboardEntry_t LeaderboardEntry;

		bResult = SteamUserStats()->GetDownloadedLeaderboardEntry(leaderboardEntries, index, &LeaderboardEntry, outDetails.GetData(), outDetails.Num());

		if (bResult)
		{
			outLeaderboardEntry = LeaderboardEntry;
		}
	}

	return bResult;
}

FString UUserStats::GetAchievementName(int32 achievement)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamUserStats())
	{
		Result = UTF8_TO_TCHAR(SteamUserStats()->GetAchievementName(achievement));
	}

	return Result;
}

bool UUserStats::GetGlobalStatInt(FString statName, int32& outData)
{
	LogVeryVerbose("");

	bool bResult = false;
	outData = 0;

	if (SteamUserStats())
	{
		int64 pData;
		bResult = SteamUserStats()->GetGlobalStat(TCHAR_TO_UTF8(*statName), &pData);
		outData = pData;
	}

	return bResult;
}

bool UUserStats::GetGlobalStatFloat(FString statName, float& outData)
{
	LogVeryVerbose("");

	bool bResult = false;
	outData = 0.0f;

	if (SteamUserStats())
	{
		double pData;
		bResult = SteamUserStats()->GetGlobalStat(TCHAR_TO_UTF8(*statName), &pData);
		outData = pData;
	}

	return bResult;
}

int32 UUserStats::GetGlobalStatHistoryInt(FString statName, int32 historyDays, TArray<int32>& outData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outData.Empty();

	if (SteamUserStats())
	{
		TArray<int64> pData;
		pData.SetNum(historyDays);

		Result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*statName), pData.GetData(), historyDays);

		for (auto& m_Element : pData)
		{
			outData.Add(m_Element);
		}
	}

	return Result;
}

int32 UUserStats::GetGlobalStatHistoryFloat(FString statName, int32 historyDays, TArray<float>& outData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outData.Empty();

	if (SteamUserStats() && historyDays > 0)
	{
		TArray<double> DataArray;
		DataArray.SetNum(historyDays);

		Result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*statName), DataArray.GetData(), DataArray.Num());

		for (auto& m_Element : DataArray)
		{
			outData.Add(m_Element);
		}
	}

	return Result;
}

ESteamLeaderboardDisplayType UUserStats::GetLeaderboardDisplayType(FSteamLeaderboard steamLeaderboard)
{
	LogVeryVerbose("");

	ESteamLeaderboardDisplayType Result = ESteamLeaderboardDisplayType::None;

	if (SteamUserStats())
	{
		Result = static_cast<ESteamLeaderboardDisplayType>(SteamUserStats()->GetLeaderboardDisplayType(steamLeaderboard));
	}

	return Result;
}

int32 UUserStats::GetLeaderboardEntryCount(FSteamLeaderboard steamLeaderboard)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamUserStats())
	{
		Result = SteamUserStats()->GetLeaderboardEntryCount(steamLeaderboard);
	}

	return Result;
}

FString UUserStats::GetLeaderboardName(FSteamLeaderboard steamLeaderboard)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamUserStats())
	{
		Result = UTF8_TO_TCHAR(SteamUserStats()->GetLeaderboardName(steamLeaderboard));
	}

	return Result;
}

ESteamLeaderboardSortMethod UUserStats::GetLeaderboardSortMethod(FSteamLeaderboard steamLeaderboard)
{
	LogVeryVerbose("");

	ESteamLeaderboardSortMethod Result = ESteamLeaderboardSortMethod::None;

	if (SteamUserStats())
	{
		Result = static_cast<ESteamLeaderboardSortMethod>(SteamUserStats()->GetLeaderboardSortMethod(steamLeaderboard));
	}

	return Result;
}

int32 UUserStats::GetMostAchievedAchievementInfo(FString& name, float& outPercent, bool& bAchieved)
{
	LogVeryVerbose("");

	int Result = 0;

	name.Empty();
	outPercent = 0.0f;
	bAchieved = false;

	if (SteamUserStats())
	{
		TArray<char> DataArray;
		DataArray.SetNum(128);

		Result = SteamUserStats()->GetMostAchievedAchievementInfo(DataArray.GetData(), 128, &outPercent, &bAchieved);

		name = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UUserStats::GetNextMostAchievedAchievementInfo(int32 iteratorPrevious, FString& name, float& outPercent, bool& bAchieved)
{
	LogVeryVerbose("");

	int Result = 0;

	name.Empty();
	outPercent = 0.0f;
	bAchieved = false;

	if (SteamUserStats())
	{
		TArray<char> DataArray;
		DataArray.SetNum(128);

		Result = SteamUserStats()->GetNextMostAchievedAchievementInfo(iteratorPrevious, DataArray.GetData(), 128, &outPercent, &bAchieved);

		name = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UUserStats::GetNumAchievements()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamUserStats())
	{
		Result = SteamUserStats()->GetNumAchievements();
	}

	return Result;
}

void UUserStats::GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& callback)
{
	LogVeryVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers* Task = new FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(this, callback);
		QueueAsyncTask(Task);
	}
}

bool UUserStats::GetUserStatInteger(FSteamID steamIDUser, FString name, int32& outData)
{
	LogVeryVerbose("");

	bool bResult = false;

	outData = 0;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), &outData);
	}

	return bResult;
}

bool UUserStats::GetUserStatFloat(FSteamID steamIDUser, FString name, float& outData)
{
	LogVeryVerbose("");

	bool bResult = false;
	outData = 0.0f;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), &outData);
	}

	return bResult;
}

bool UUserStats::GetUserAchievement(FSteamID steamIDUser, FString name, bool& bAchieved)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserAchievement(steamIDUser, TCHAR_TO_UTF8(*name), &bAchieved);
	}

	return bResult;
}

bool UUserStats::GetUserAchievementAndUnlockTime(FSteamID steamIDUser, FString name, bool& bAchieved, int32& outUnlockTime)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;
	outUnlockTime = 0;
	uint32 UnlockTime = 0;

	if (SteamUserStats())
	{
		SteamUserStats()->GetUserAchievementAndUnlockTime(steamIDUser, TCHAR_TO_UTF8(*name), &bAchieved, &UnlockTime);
	}

	outUnlockTime = UnlockTime;

	return bResult;
}

bool UUserStats::GetStatInt(FString name, int32& outData)
{
	LogVeryVerbose("");

	bool bResult = false;
	outData = 0;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetStat(TCHAR_TO_UTF8(*name), &outData);
	}

	return bResult;
}

bool UUserStats::GetStatFloat(FString name, float& outData)
{
	LogVeryVerbose("");

	bool bResult = false;
	outData = 0.0f;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetStat(TCHAR_TO_UTF8(*name), &outData);
	}

	return bResult;
}

bool UUserStats::IndicateAchievementProgress(FString name, int32 currentProgress, int32 maxProgress)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->IndicateAchievementProgress(TCHAR_TO_UTF8(*name), currentProgress, maxProgress);
	}

	return bResult;
}

bool UUserStats::RequestCurrentStats()
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->RequestCurrentStats();
	}

	return bResult;
}

void UUserStats::RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& callback)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages* Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(this, callback);
		QueueAsyncTask(Task);
	}
}

void UUserStats::RequestGlobalStats(const FOnRequestGlobalStats& callback, int32 historyDays)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats* Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(this, callback, historyDays);
		QueueAsyncTask(Task);
	}
}

void UUserStats::RequestUserStats(const FOnRequestUserStats& callback, FSteamID steamID)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats* Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(this, callback, steamID);
		QueueAsyncTask(Task);
	}
}

bool UUserStats::ResetAllStats(bool bAchievementsToo)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->ResetAllStats(bAchievementsToo);
	}

	return bResult;
}

bool UUserStats::SetAchievement(FString name)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetAchievement(TCHAR_TO_UTF8(*name));
	}

	return bResult;
}

bool UUserStats::SetStatInt(FString name, int32 data)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetStat(TCHAR_TO_UTF8(*name), data);
	}

	return bResult;
}

bool UUserStats::SetStatFloat(FString name, float data)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetStat(TCHAR_TO_UTF8(*name), data);
	}

	return bResult;
}

bool UUserStats::StoreStats()
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->StoreStats();
	}

	return bResult;
}

bool UUserStats::UpdateAvgRateStat(FString name, float countThisSession, float sessionLength)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamUserStats())
	{
		bResult = SteamUserStats()->UpdateAvgRateStat(TCHAR_TO_UTF8(*name), countThisSession, sessionLength);
	}

	return bResult;
}

void UUserStats::UploadLeaderboardScore(const FOnUploadLeaderboardScore& callback, FSteamLeaderboard steamLeaderboard, ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int32 score, TArray<int32> scoreDetails)
{
	LogVerbose("");

	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore* Task = new FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(this, callback, steamLeaderboard, uploadScoreMethod, score, scoreDetails);
		QueueAsyncTask(Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUserStats::OnUserStatsReceived(UserStatsReceived_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			UserStatsReceived.Broadcast(Data);
		});
}

void UUserStats::OnUserStatsStored(UserStatsStored_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			UserStatsStored.Broadcast(Data);
		});
}

void UUserStats::OnUserAchievementStored(UserAchievementStored_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			UserAchievementStored.Broadcast(Data);
		});
}

void UUserStats::OnUserStatsUnloaded(UserStatsUnloaded_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			UserStatsUnloaded.Broadcast(Data);
		});
}

void UUserStats::OnUserAchievementIconFetched(UserAchievementIconFetched_t* pParam)
{
	LogVerbose("");

	FUserAchievementIconFetched Data = *pParam;
	Data.Icon = GetSteamTexture(Data.m_nIconHandle);
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			UserAchievementIconFetched.Broadcast(Data);
		});
}
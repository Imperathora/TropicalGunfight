/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamScreenshots
*/

#include "SteamScreenshots/SteamScreenshots.h"
#include "SteamCorePluginPrivatePCH.h"

void UScreenshots::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnScreenshotReadyCallback.Register(this, &UScreenshots::OnScreenshotReady);
	OnScreenshotRequestedCallback.Register(this, &UScreenshots::OnScreenshotRequested);

	if (IsRunningDedicatedServer())
	{
		OnScreenshotReadyCallback.SetGameserverFlag();
		OnScreenshotRequestedCallback.SetGameserverFlag();
	}
}

void UScreenshots::Deinitialize()
{
	OnScreenshotReadyCallback.Unregister();
	OnScreenshotRequestedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

FScreenshotHandle UScreenshots::AddScreenshotToLibrary(FString fileName, FString thumbnailFilename, int32 width, int32 height)
{
	LogVerbose("");

	FScreenshotHandle Handle;

	if (SteamScreenshots())
	{
		char FileNameAnsi[256];
		FCStringAnsi::Strncpy(FileNameAnsi, TCHAR_TO_UTF8(*fileName), fileName.GetAllocatedSize());
		char ThumbnailAnsi[256];
		FCStringAnsi::Strncpy(ThumbnailAnsi, TCHAR_TO_UTF8(*thumbnailFilename), thumbnailFilename.GetAllocatedSize());
	
		Handle = SteamScreenshots()->AddScreenshotToLibrary(FileNameAnsi, ThumbnailAnsi, width, height);
	}

	return Handle;
}

FScreenshotHandle UScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType eType, FString fileName, FString vrFileName)
{
	LogVerbose("");

	FScreenshotHandle Handle;

	if (SteamScreenshots())
	{
		char FileNameAnsi[256];
		FCStringAnsi::Strncpy(FileNameAnsi, TCHAR_TO_UTF8(*fileName), fileName.GetAllocatedSize());
		char VrFileNameAnsi[256];
		FCStringAnsi::Strncpy(VrFileNameAnsi, TCHAR_TO_UTF8(*vrFileName), vrFileName.GetAllocatedSize());
		
		Handle = SteamScreenshots()->AddVRScreenshotToLibrary(static_cast<EVRScreenshotType>(eType), FileNameAnsi, VrFileNameAnsi);
	}

	return Handle;
}

void UScreenshots::HookScreenshots(bool bHook)
{
	LogVerbose("");

	if (SteamScreenshots())
	{
		SteamScreenshots()->HookScreenshots(bHook);
	}
}

bool UScreenshots::IsScreenshotsHooked()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamScreenshots())
	{
		bResult = SteamScreenshots()->IsScreenshotsHooked();
	}

	return bResult;
}

bool UScreenshots::SetLocation(FScreenshotHandle handle, FString location)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamScreenshots())
	{
		bResult = SteamScreenshots()->SetLocation(handle, TCHAR_TO_UTF8(*location));
	}

	return bResult;
}

bool UScreenshots::TagPublishedFile(FScreenshotHandle handle, FPublishedFileID publishedFileID)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamScreenshots())
	{
		bResult = SteamScreenshots()->TagPublishedFile(handle, publishedFileID);
	}

	return bResult;
}

bool UScreenshots::TagUser(FScreenshotHandle handle, FSteamID steamID)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamScreenshots())
	{
		bResult = SteamScreenshots()->TagUser(handle, steamID);
	}

	return bResult;
}

void UScreenshots::TriggerScreenshot()
{
	LogVerbose("");

	if (SteamScreenshots())
	{
		SteamScreenshots()->TriggerScreenshot();
	}
}

FScreenshotHandle UScreenshots::WriteScreenshot(TArray<uint8> pubRGB, int32 width, int32 height)
{
	LogVerbose("");

	FScreenshotHandle Handle;

	if (SteamScreenshots())
	{
		Handle = SteamScreenshots()->WriteScreenshot(pubRGB.GetData(), pubRGB.Num(), width, height);
	}

	return Handle;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UScreenshots::OnScreenshotReady(ScreenshotReady_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ScreenshotReady.Broadcast(Data);
		});
}

void UScreenshots::OnScreenshotRequested(ScreenshotRequested_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			ScreenshotRequested.Broadcast(Data);
		});
}
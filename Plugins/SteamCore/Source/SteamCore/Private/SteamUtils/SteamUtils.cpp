/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUtils
*/

#include "SteamUtils/SteamUtils.h"
#include "SteamCorePluginPrivatePCH.h"

void UUtils::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnCheckFileSignatureCallback.Register(this, &UUtils::OnCheckFileSignature);
	OnGamepadTextInputDismissedCallback.Register(this, &UUtils::OnGamepadTextInputDismissed);
	OnLowBatteryPowerCallback.Register(this, &UUtils::OnLowBatteryPower);
	OnIPCountryCallback.Register(this, &UUtils::OnIPCountry);
	OnSteamShutdownCallback.Register(this, &UUtils::OnSteamShutdown);

	if (IsRunningDedicatedServer())
	{
		OnCheckFileSignatureCallback.SetGameserverFlag();
		OnGamepadTextInputDismissedCallback.SetGameserverFlag();
		OnLowBatteryPowerCallback.SetGameserverFlag();
		OnIPCountryCallback.SetGameserverFlag();
		OnSteamShutdownCallback.SetGameserverFlag();
	}
}

void UUtils::Deinitialize()
{
	OnCheckFileSignatureCallback.Unregister();
	OnGamepadTextInputDismissedCallback.Unregister();
	OnLowBatteryPowerCallback.Unregister();
	OnIPCountryCallback.Unregister();
	OnSteamShutdownCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
int32 UUtils::GetSecondsSinceAppActive()
{
	LogVeryVerbose("");

	return GetUtils() ? GetUtils()->GetSecondsSinceAppActive() : 0;
}

int32 UUtils::GetSecondsSinceComputerActive()
{
	LogVeryVerbose("");

	return GetUtils() ? GetUtils()->GetSecondsSinceComputerActive() : 0;
}

ESteamUniverse UUtils::GetConnectedUniverse()
{
	LogVeryVerbose("");

	return GetUtils() ? static_cast<ESteamUniverse>(GetUtils()->GetConnectedUniverse()) : ESteamUniverse::Invalid;
}

bool UUtils::GetCSERIPPort(FString& outIpAddress, int32& outPort)
{
	LogVeryVerbose("");

	bool bResult = false;
	outIpAddress.Empty();
	outPort = 0;
	uint32 IP;
	uint16 Port = 0;

	if (GetUtils())
	{
		bResult = GetUtils()->GetCSERIPPort(&IP, &Port);

		if (bResult)
		{
			outIpAddress = FIPv4Address(IP).ToString();
			outPort = Port;
		}
	}

	return bResult;
}

int32 UUtils::GetServerRealTime()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUtils())
	{
		Result = GetUtils()->GetServerRealTime();
	}

	return Result;
}

FString UUtils::GetIPCountry()
{
	LogVeryVerbose("");

	FString Result;

	if (GetUtils())
	{
		Result = UTF8_TO_TCHAR(GetUtils()->GetIPCountry());
	}

	return Result;
}

int32 UUtils::GetCurrentBatteryPower()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUtils())
	{
		Result = GetUtils()->GetCurrentBatteryPower();
	}

	return Result;
}

int32 UUtils::GetAppID()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUtils())
	{
		Result = GetUtils()->GetAppID();
	}

	return Result;
}

void UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition)
{
	LogVerbose("");

	if (GetUtils())
	{
		GetUtils()->SetOverlayNotificationPosition((ENotificationPosition)NotificationPosition);
	}
}

void UUtils::SetVRHeadsetStreamingEnabled(bool bEnabled)
{
	LogVerbose("");

	if (GetUtils())
	{
		GetUtils()->SetVRHeadsetStreamingEnabled(bEnabled);
	}
}

int32 UUtils::GetIPCCallCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUtils())
	{
		Result = GetUtils()->GetIPCCallCount();
	}

	return Result;
}

bool UUtils::IsOverlayEnabled()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetUtils())
	{
		bResult = GetUtils()->IsOverlayEnabled();
	}

	return bResult;
}

bool UUtils::IsSteamChinaLauncher()
{
	LogVeryVerbose("");

	bool bResult = false;

#if STEAM_VERSION > 142
	if (GetUtils())
	{
		bResult = GetUtils()->IsSteamChinaLauncher();
	}
#endif

	return bResult;
}

bool UUtils::InitFilterText()
{
	LogVerbose("");

	bool bResult = false;

#if STEAM_VERSION > 146
	if (GetUtils())
	{
		bResult = GetUtils()->InitFilterText();
	}
#endif

	return bResult;
}

int UUtils::FilterText(FString& outFilteredText, FString inputMessage, bool bLegalOnly)
{
	LogVerbose("");

	int Result = 0;
	outFilteredText.Empty();

#if STEAM_VERSION > 146
	if (GetUtils())
	{
		TArray<char> FilteredText;
		FilteredText.SetNum(inputMessage.Len());

		TArray<char> InputMessage;
		InputMessage.Append(inputMessage.GetCharArray());

		Result = GetUtils()->FilterText(FilteredText.GetData(), FilteredText.Num(), InputMessage.GetData(), bLegalOnly);

		outFilteredText = UTF8_TO_TCHAR(FilteredText.GetData());
	}
#endif

	return Result;
}

bool UUtils::BOverlayNeedsPresent()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetUtils())
	{
		bResult = GetUtils()->BOverlayNeedsPresent();
	}

	return bResult;
}

bool UUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode inputMode, ESteamGamepadTextInputLineMode lineInputMode, FString description, int32 charMax, FString existingText)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUtils())
	{
		bResult = GetUtils()->ShowGamepadTextInput(static_cast<EGamepadTextInputMode>(inputMode), static_cast<EGamepadTextInputLineMode>(lineInputMode), TCHAR_TO_UTF8(*description), charMax, TCHAR_TO_UTF8(*existingText));
	}

	return bResult;
}

int32 UUtils::GetEnteredGamepadTextLength()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUtils())
	{
		Result = GetUtils()->GetEnteredGamepadTextLength();
	}

	return Result;
}

bool UUtils::GetImageRGBA(int iImage, TArray<uint8>& outBuffer)
{
	LogVeryVerbose("");

	bool bResult = false;
	outBuffer.Empty();

	if (GetUtils())
	{
		uint32 AvatarWidth = 0;
		uint32 AvatarHeight = 0;

		if (GetUtils()->GetImageSize(iImage, &AvatarWidth, &AvatarHeight))
		{
			const int ImageSizeInBytes = AvatarWidth * AvatarHeight * 4;
			outBuffer.SetNum(ImageSizeInBytes);

			bResult = GetUtils()->GetImageRGBA(iImage, outBuffer.GetData(), ImageSizeInBytes);
		}
	}

	return bResult;
}

bool UUtils::GetImageSize(int iImage, int32& outWidth, int32& outHeight)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint32 Width = 0;
	uint32 Height = 0;

	if (GetUtils())
	{
		bResult = GetUtils()->GetImageSize(iImage, &Width, &Height);
	}

	outWidth = Width;
	outHeight = Height;

	return bResult;
}

bool UUtils::GetEnteredGamepadTextInput(FString& outText)
{
	LogVeryVerbose("");

	bool bResult = false;
	outText.Empty();

	if (GetUtils())
	{
		TArray<char> DataArray;
		uint32 Length = GetUtils()->GetEnteredGamepadTextLength();

		bResult = GetUtils()->GetEnteredGamepadTextInput(DataArray.GetData(), Length);

		if (bResult)
		{
			outText = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	return bResult;
}

FString UUtils::GetSteamUILanguage()
{
	LogVeryVerbose("");

	FString Result;

	if (GetUtils())
	{
		Result = UTF8_TO_TCHAR(GetUtils()->GetSteamUILanguage());
	}

	return Result;
}

bool UUtils::IsSteamRunningInVR()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetUtils())
	{
		bResult = GetUtils()->IsSteamRunningInVR();
	}

	return bResult;
}

bool UUtils::IsVRHeadsetStreamingEnabled()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetUtils())
	{
		bResult = GetUtils()->IsVRHeadsetStreamingEnabled();
	}

	return bResult;
}

void UUtils::SetOverlayNotificationInset(int32 horizontalInset, int32 verticalInset)
{
	LogVerbose("");

	if (GetUtils())
	{
		GetUtils()->SetOverlayNotificationInset(horizontalInset, verticalInset);
	}
}

bool UUtils::IsSteamInBigPictureMode()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetUtils())
	{
		bResult = GetUtils()->IsSteamInBigPictureMode();
	}

	return bResult;
}

void UUtils::StartVRDashboard()
{
	LogVerbose("");

	if (GetUtils())
	{
		GetUtils()->StartVRDashboard();
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUtils::OnCheckFileSignature(CheckFileSignature_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			CheckFileSignature.Broadcast(Data);
		});
}

void UUtils::OnGamepadTextInputDismissed(GamepadTextInputDismissed_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			GamepadTextInputDismissed.Broadcast(Data);
		});
}

void UUtils::OnLowBatteryPower(LowBatteryPower_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			LowBatteryPower.Broadcast(Data);
		});
}

void UUtils::OnIPCountry(IPCountry_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			IPCountry.Broadcast(Data);
		});
}

void UUtils::OnSteamShutdown(SteamShutdown_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			SteamShutdown.Broadcast(Data);
		});
}

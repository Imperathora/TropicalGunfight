/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#include "SteamInput/SteamInput.h"
#include "SteamCorePluginPrivatePCH.h"

void UInput::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UInput::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

FInputActionSetHandle UInput::GetActionSetHandle(FString actionSetName)
{
	LogVeryVerbose("");

	FInputActionSetHandle Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Handle = SteamInput()->GetActionSetHandle(TCHAR_TO_UTF8(*actionSetName));
	}
#endif

	return Handle;
}

void UInput::ActivateActionSet(FInputHandle handle, FInputActionSetHandle actionSetHandle)
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->ActivateActionSet(handle, actionSetHandle);
	}
#endif
}

FInputActionSetHandle UInput::GetCurrentActionSet(FInputHandle handle)
{
	LogVeryVerbose("");

	FInputActionSetHandle Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Handle = SteamInput()->GetCurrentActionSet(handle);
	}
#endif

	return Handle;
}

void UInput::ActivateActionSetLayer(FInputHandle handle, FInputActionSetHandle actionSetLayerHandle)
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->ActivateActionSetLayer(handle, actionSetLayerHandle);
	}
#endif
}

void UInput::DeactivateActionSetLayer(FInputHandle handle, FInputActionSetHandle actionSetLayerHandle)
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->DeactivateActionSetLayer(handle, actionSetLayerHandle);
	}
#endif
}

void UInput::DeactivateAllActionSetLayers(FInputHandle handle)
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->DeactivateAllActionSetLayers(handle);
	}
#endif
}

int32 UInput::GetActiveActionSetLayers(FInputHandle handle, TArray<FInputActionSetHandle>& outData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outData.Empty();

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		TArray<InputActionSetHandle_t> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ACTIVE_LAYERS);

		Result = SteamInput()->GetActiveActionSetLayers(handle, DataArray.GetData());

		for (int32 i = 0; i < DataArray.Num(); i++)
		{
			outData.Add(DataArray[i]);
		}
	}
#endif

	return Result;
}

FInputDigitalActionHandle UInput::GetDigitalActionHandle(FString pszActionName)
{
	LogVeryVerbose("");

	FInputDigitalActionHandle Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Handle = SteamInput()->GetDigitalActionHandle(TCHAR_TO_UTF8(*pszActionName));
	}
#endif

	return Handle;
}

FInputDigitalActionData UInput::GetDigitalActionData(FInputHandle handle, FInputDigitalActionHandle digitalActionHandle)
{
	LogVeryVerbose("");

	FInputDigitalActionData Handle = {};

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Handle = SteamInput()->GetDigitalActionData(handle, digitalActionHandle);
	}
#endif

	return Handle;
}

int32 UInput::GetDigitalActionOrigins(FInputHandle handle, FInputActionSetHandle actionSetHandle, FInputDigitalActionHandle digitalActionHandle, TArray<ESteamCoreInputActionOrigin>& outOrigins)
{
	LogVeryVerbose("");
	
	int32 Result = 0;
	outOrigins.Empty();

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		TArray<EInputActionOrigin> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ORIGINS);

		Result = SteamInput()->GetDigitalActionOrigins(handle, actionSetHandle, digitalActionHandle, DataArray.GetData());

		for (int32 i = 0; i < DataArray.Num(); i++)
		{
			outOrigins.Add(static_cast<ESteamCoreInputActionOrigin>(DataArray[i]));
		}
	}
#endif

	return Result;
}

FInputAnalogActionHandle UInput::GetAnalogActionHandle(FString pszActionName)
{
	LogVeryVerbose("");

	FInputAnalogActionHandle Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Handle = SteamInput()->GetAnalogActionHandle(TCHAR_TO_UTF8(*pszActionName));
	}
#endif

	return Handle;
}

FInputAnalogActionData UInput::GetAnalogActionData(FInputHandle handle, FInputAnalogActionHandle analogActionHandle)
{
	LogVeryVerbose("");

	FInputAnalogActionData Handle = {};

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Handle = SteamInput()->GetAnalogActionData(handle, analogActionHandle);
	}
#endif
	return Handle;
}

int32 UInput::GetAnalogActionOrigins(FInputHandle handle, FInputActionSetHandle actionSetHandle, FInputAnalogActionHandle analogActionHandle, TArray<ESteamCoreInputActionOrigin>& outOrigins)
{
	LogVeryVerbose("");

	int32 Result = 0;
	outOrigins.Empty();

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		TArray<EInputActionOrigin> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ORIGINS);

		Result = SteamInput()->GetAnalogActionOrigins(handle, actionSetHandle, analogActionHandle, DataArray.GetData());

		for (int32 i = 0; i < STEAM_INPUT_MAX_ORIGINS; i++)
		{
			outOrigins.Add(static_cast<ESteamCoreInputActionOrigin>(DataArray[i]));
		}
	}
#endif
	return Result;
}

FString UInput::GetGlyphForActionOrigin(ESteamCoreInputActionOrigin origin)
{
	LogVeryVerbose("");

	FString Result;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Result = TCHAR_TO_UTF8(SteamInput()->GetGlyphForActionOrigin(static_cast<EInputActionOrigin>(origin)));
	}
#endif

	return Result;
}

FString UInput::GetStringForActionOrigin(ESteamCoreInputActionOrigin origin)
{
	LogVeryVerbose("");

#if STEAM_VERSION > 142
	return SteamInput() ? TCHAR_TO_UTF8(SteamInput()->GetStringForActionOrigin(static_cast<EInputActionOrigin>(origin))) : "";
#else
	return "";
#endif
}

void UInput::StopAnalogActionMomentum(FInputHandle handle, FInputAnalogActionHandle eAction)
{
	LogVeryVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->StopAnalogActionMomentum(handle, eAction);
	}
#endif
}

FInputMotionData UInput::GetMotionData(FInputHandle handle)
{
	LogVeryVerbose("");

	FInputMotionData Handle = {};

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Handle = SteamInput()->GetMotionData(handle);
	}
#endif

	return Handle;
}

void UInput::TriggerVibration(FInputHandle handle, uint8 leftSpeed, uint8 rightSpeed)
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->TriggerVibration(handle, leftSpeed, rightSpeed);
	}
#endif
}

void UInput::SetLEDColor(FInputHandle handle, uint8 colorR, uint8 colorG, uint8 colorB, ESteamCoreInputLEDFlag flags)
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->SetLEDColor(handle, colorR, colorG, colorB, static_cast<int32>(flags));
	}
#endif
}

void UInput::TriggerHapticPulse(FInputHandle handle, ESteamCoreControllerPad targetPad, uint8 durationMicroSec)
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->TriggerHapticPulse(handle, static_cast<ESteamControllerPad>(targetPad), durationMicroSec);
}
#endif
}

void UInput::TriggerRepeatedHapticPulse(FInputHandle handle, ESteamCoreControllerPad targetPad, uint8 durationMicroSec, uint8 offMicroSec, uint8 repeat, uint8 flags)
{
	LogVerbose("");

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->TriggerRepeatedHapticPulse(handle, static_cast<ESteamControllerPad>(targetPad), durationMicroSec, offMicroSec, repeat, flags);
	}
#endif
}

bool UInput::ShowBindingPanel(FInputHandle handle)
{
	LogVerbose("");

	bool bResult = false;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		bResult = SteamInput()->ShowBindingPanel(handle);
	}
#endif

	return bResult;
}

ESteamCoreInputType UInput::GetInputTypeForHandle(FInputHandle handle)
{
	LogVeryVerbose("");

	ESteamCoreInputType Result = ESteamCoreInputType::Unknown;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreInputType>(SteamInput()->GetInputTypeForHandle(handle));
}
#endif
	return Result;
}

FInputHandle UInput::GetControllerForGamepadIndex(int32 index)
{
	LogVeryVerbose("");

	FInputHandle Handle;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Handle = SteamInput()->GetControllerForGamepadIndex(index);
	}
#endif
	return Handle;
}

int32 UInput::GetGamepadIndexForController(FInputHandle handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Result = SteamInput()->GetGamepadIndexForController(handle);
	}
#endif

	return Result;
}

FString UInput::GetStringForXboxOrigin(ESteamCoreXboxOrigin origin)
{
	LogVeryVerbose("");

#if STEAM_VERSION > 142
	return SteamInput() ? TCHAR_TO_UTF8(SteamInput()->GetStringForXboxOrigin(static_cast<EXboxOrigin>(origin))) : "";
#else
	return "";
#endif
}

FString UInput::GetGlyphForXboxOrigin(ESteamCoreXboxOrigin origin)
{
	LogVeryVerbose("");

	FString Result;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Result = TCHAR_TO_UTF8(SteamInput()->GetGlyphForXboxOrigin(static_cast<EXboxOrigin>(origin)));
	}
#endif

	return Result;
}

ESteamCoreInputActionOrigin UInput::GetActionOriginFromXboxOrigin(FInputHandle handle, ESteamCoreXboxOrigin origin)
{
	LogVeryVerbose("");

	ESteamCoreInputActionOrigin Result = ESteamCoreInputActionOrigin::None;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreInputActionOrigin>(SteamInput()->GetActionOriginFromXboxOrigin(handle, static_cast<EXboxOrigin>(origin)));
	}
#endif
	return Result;
}

ESteamCoreInputActionOrigin UInput::TranslateActionOrigin(ESteamCoreInputType destinationInputType, ESteamCoreInputActionOrigin sourceOrigin)
{
	LogVerbose("");

	ESteamCoreInputActionOrigin Result = ESteamCoreInputActionOrigin::None;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreInputActionOrigin>(SteamInput()->TranslateActionOrigin(static_cast<ESteamInputType>(destinationInputType), static_cast<EInputActionOrigin>(sourceOrigin)));
	}
#endif
	return Result;
}

bool UInput::GetDeviceBindingRevision(FInputHandle handle, int32& outMajor, int32& outMinor)
{
	LogVeryVerbose("");

	bool bResult = false;
	outMajor = 0;
	outMinor = 0;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		bResult = SteamInput()->GetDeviceBindingRevision(handle, &outMajor, &outMinor);
	}
#endif

	return bResult;
}

int32 UInput::GetRemotePlaySessionID(FInputHandle handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		Result = SteamInput()->GetRemotePlaySessionID(handle);
	}
#endif

	return Result;
}
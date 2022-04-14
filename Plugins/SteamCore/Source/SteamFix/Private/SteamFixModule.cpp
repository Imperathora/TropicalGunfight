/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

#include "SteamFixModule.h"
#include "Runtime/Launch/Resources/Version.h"

#define LOCTEXT_NAMESPACE "FSteamFixModule"

IMPLEMENT_MODULE(FSteamFixModule, SteamFix)

void FSteamFixModule::StartupModule()
{
#if WITH_EDITOR
#if ENGINE_MINOR_VERSION == 25 || ENGINE_MINOR_VERSION == 26 || ENGINE_MAJOR_VERSION == 5
	FString m_CommandLine = FCommandLine::Get();

	if (m_CommandLine.Contains("MultiprocessOSS"))
	{
		m_CommandLine.ReplaceInline(TEXT("-MultiprocessOSS"), TEXT(" "));

		FCommandLine::Set(*m_CommandLine);
	}
#endif
#endif
}

void FSteamFixModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
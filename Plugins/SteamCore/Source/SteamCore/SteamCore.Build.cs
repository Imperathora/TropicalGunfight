// Copyright (C) 2017-2021 | eelDev (Dry Eel Development)

using UnrealBuildTool;

public class SteamCore : ModuleRules
{
    public SteamCore(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivateIncludePaths.Add("SteamCore");
        PrivateIncludePaths.Add("SteamCore/Public/SteamCore"); 
        PrivateIncludePaths.Add("SteamCore/Private/SteamCore"); 
        PrivatePCHHeaderFile = "Private/SteamCore/SteamCorePluginPrivatePCH.h";

        PublicDependencyModuleNames.AddRange
        (
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "OnlineSubsystem",
                "OnlineSubsystemUtils",
                "OnlineSubsystemSteam",
                "Steamworks",
                "Networking",
                "Sockets",
                "Projects"
            }
        );

        PrivateDependencyModuleNames.AddRange
        (
            new string[]
            {
                "HTTP"
            }
        );

        if (Target.Version.MinorVersion == 24)
        {
            PublicDefinitions.Add("STEAM_VERSION=146");
        } 
        else if (Target.Version.MinorVersion == 25)
        {
            PublicDefinitions.Add("STEAM_VERSION=147");
        }
        else if (Target.Version.MinorVersion == 26)
        {
            PublicDefinitions.Add("STEAM_VERSION=147");
            PublicDependencyModuleNames.Add("DeveloperSettings");
        }
        else
        {
            PublicDefinitions.Add("STEAM_VERSION=147");
            PublicDependencyModuleNames.Add("DeveloperSettings");
        }

        AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
    }
}

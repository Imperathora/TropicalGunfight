/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

using System.IO;
using UnrealBuildTool;

public class SteamFix : ModuleRules
{
    public SteamFix(ReadOnlyTargetRules rules) : base(rules)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateDependencyModuleNames.AddRange(
            new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "Slate",
                    "SlateCore",
                    "RenderCore",
                    "Projects"
                }
            );
    }
}
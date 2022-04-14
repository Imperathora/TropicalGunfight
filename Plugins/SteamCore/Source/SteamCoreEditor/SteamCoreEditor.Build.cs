/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

using System;
using System.IO;
using UnrealBuildTool;

public class SteamCoreEditor : ModuleRules
{
    public SteamCoreEditor(ReadOnlyTargetRules rules) : base(rules)
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
                    "Projects",
                    "HTTP",
                    "EditorStyle",
                    "WebBrowser"
                }
            );
    }
}
// Copyright 2020-2021 CesiumGS, Inc. and Contributors

using UnrealBuildTool;

public class new_Ici3Dn52 : ModuleRules
{
    public new_Ici3Dn52(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true

        if (Target.bBuildEditor)
        {
            PublicDefinitions.Add("WITH_EDITOR=1");
        }
    }
}

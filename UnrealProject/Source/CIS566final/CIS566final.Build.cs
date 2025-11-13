// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CIS566final : ModuleRules
{
	public CIS566final(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CIS566final",
			"CIS566final/Variant_Platforming",
			"CIS566final/Variant_Platforming/Animation",
			"CIS566final/Variant_Combat",
			"CIS566final/Variant_Combat/AI",
			"CIS566final/Variant_Combat/Animation",
			"CIS566final/Variant_Combat/Gameplay",
			"CIS566final/Variant_Combat/Interfaces",
			"CIS566final/Variant_Combat/UI",
			"CIS566final/Variant_SideScrolling",
			"CIS566final/Variant_SideScrolling/AI",
			"CIS566final/Variant_SideScrolling/Gameplay",
			"CIS566final/Variant_SideScrolling/Interfaces",
			"CIS566final/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

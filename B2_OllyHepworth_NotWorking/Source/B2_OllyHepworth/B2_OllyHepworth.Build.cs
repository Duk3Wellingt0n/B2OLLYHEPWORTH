// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class B2_OllyHepworth : ModuleRules
{
	public B2_OllyHepworth(ReadOnlyTargetRules Target) : base(Target)
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
			"B2_OllyHepworth",
			"B2_OllyHepworth/Variant_Platforming",
			"B2_OllyHepworth/Variant_Platforming/Animation",
			"B2_OllyHepworth/Variant_Combat",
			"B2_OllyHepworth/Variant_Combat/AI",
			"B2_OllyHepworth/Variant_Combat/Animation",
			"B2_OllyHepworth/Variant_Combat/Gameplay",
			"B2_OllyHepworth/Variant_Combat/Interfaces",
			"B2_OllyHepworth/Variant_Combat/UI",
			"B2_OllyHepworth/Variant_SideScrolling",
			"B2_OllyHepworth/Variant_SideScrolling/AI",
			"B2_OllyHepworth/Variant_SideScrolling/Gameplay",
			"B2_OllyHepworth/Variant_SideScrolling/Interfaces",
			"B2_OllyHepworth/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

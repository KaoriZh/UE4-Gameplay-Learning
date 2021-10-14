// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TencentGameplay : ModuleRules
{
	public TencentGameplay(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

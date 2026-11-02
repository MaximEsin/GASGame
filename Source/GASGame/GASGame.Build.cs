// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASGame : ModuleRules
{
    public GASGame(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // Allow includes relative to module root, e.g. #include "Characters/GAS_BaseCharacter.h"
        PublicIncludePaths.Add(ModuleDirectory);

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "GameplayAbilities", "GameplayTasks", "GameplayTags" });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}

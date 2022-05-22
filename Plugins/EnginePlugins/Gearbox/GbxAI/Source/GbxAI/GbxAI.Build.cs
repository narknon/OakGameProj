using UnrealBuildTool;

public class GbxAI : ModuleRules {
    public GbxAI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "GbxAnimRuntimeBase",
            "GbxAudio",
            "GbxFluidSimulation",
            "GbxGameSystemCore",
            "GbxLevelSequence",
            "GbxNav",
            "GbxRuntime",
            "GbxSpawn",
            "ImmediatePhysics",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "NavigationSystem",
            "OnlineSubsystemUtils",
            "SignificanceManager",
            "WwiseAudio",
        });
    }
}

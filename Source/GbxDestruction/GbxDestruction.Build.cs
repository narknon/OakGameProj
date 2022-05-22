using UnrealBuildTool;

public class GbxDestruction : ModuleRules {
    public GbxDestruction(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "ApexDestruction",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "GbxAnimRuntimeBase",
            "GbxAudio",
            "GbxFluidSimulation",
            "GbxGameSystemCore",
            "GbxRuntime",
            "ImmediatePhysics",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "OnlineSubsystemUtils",
            "SignificanceManager",
            "WwiseAudio",
        });
    }
}

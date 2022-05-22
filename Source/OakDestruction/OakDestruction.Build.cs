using UnrealBuildTool;

public class OakDestruction : ModuleRules {
    public OakDestruction(ReadOnlyTargetRules Target) : base(Target) {
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
            "GbxDestruction",
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

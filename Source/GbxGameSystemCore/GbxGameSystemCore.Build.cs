using UnrealBuildTool;

public class GbxGameSystemCore : ModuleRules {
    public GbxGameSystemCore(ReadOnlyTargetRules Target) : base(Target) {
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

using UnrealBuildTool;

public class GbxAbilities : ModuleRules {
    public GbxAbilities(ReadOnlyTargetRules Target) : base(Target) {
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

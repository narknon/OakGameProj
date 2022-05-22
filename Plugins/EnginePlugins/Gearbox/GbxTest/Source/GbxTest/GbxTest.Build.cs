using UnrealBuildTool;

public class GbxTest : ModuleRules {
    public GbxTest(ReadOnlyTargetRules Target) : base(Target) {
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
            "GbxDialog",
            "GbxFluidSimulation",
            "GbxGameSystemCore",
            "GbxProbes",
            "GbxProbesCore",
            "GbxRuntime",
            "GbxUI",
            "ImmediatePhysics",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "OnlineSubsystemUtils",
            "ScaleformUI",
            "SignificanceManager",
            "SlateCore",
            "UMG",
            "WwiseAudio",
        });
    }
}

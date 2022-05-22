using UnrealBuildTool;

public class GbxInventory : ModuleRules {
    public GbxInventory(ReadOnlyTargetRules Target) : base(Target) {
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

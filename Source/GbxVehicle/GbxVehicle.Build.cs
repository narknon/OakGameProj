using UnrealBuildTool;

public class GbxVehicle : ModuleRules {
    public GbxVehicle(ReadOnlyTargetRules Target) : base(Target) {
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
            "GbxInventory",
            "GbxRuntime",
            "GbxUI",
            "ImmediatePhysics",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "OnlineSubsystemUtils",
            "PhysXVehicles",
            "ScaleformUI",
            "SignificanceManager",
            "SlateCore",
            "UMG",
            "WwiseAudio",
        });
    }
}

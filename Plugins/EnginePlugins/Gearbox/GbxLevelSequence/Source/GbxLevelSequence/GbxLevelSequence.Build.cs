using UnrealBuildTool;

public class GbxLevelSequence : ModuleRules {
    public GbxLevelSequence(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTasks",
            "LevelSequence",
            "MovieScene",
        });
    }
}

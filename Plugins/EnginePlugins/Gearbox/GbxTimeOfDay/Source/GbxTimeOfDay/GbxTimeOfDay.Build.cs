using UnrealBuildTool;

public class GbxTimeOfDay : ModuleRules {
    public GbxTimeOfDay(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
            "MovieScene",
            "WwiseAudio",
        });
    }
}

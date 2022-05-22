using UnrealBuildTool;

public class WwiseAudio : ModuleRules {
    public WwiseAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
            "MovieScene",
        });
    }
}

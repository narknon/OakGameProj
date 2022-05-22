using UnrealBuildTool;

public class FaceFX : ModuleRules {
    public FaceFX(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
            "MovieScene",
            "WwiseAudio",
        });
    }
}

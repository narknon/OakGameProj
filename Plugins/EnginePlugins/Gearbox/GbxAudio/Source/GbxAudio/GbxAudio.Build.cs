using UnrealBuildTool;

public class GbxAudio : ModuleRules {
    public GbxAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GbxFluidSimulation",
            "GbxRuntime",
            "MediaAssets",
            "MovieScene",
            "WwiseAudio",
        });
    }
}

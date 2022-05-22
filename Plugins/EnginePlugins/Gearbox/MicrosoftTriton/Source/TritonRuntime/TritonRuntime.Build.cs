using UnrealBuildTool;

public class TritonRuntime : ModuleRules {
    public TritonRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GbxAudio",
            "GbxFluidSimulation",
            "GbxRuntime",
            "MediaAssets",
            "MovieScene",
            "WwiseAudio",
        });
    }
}

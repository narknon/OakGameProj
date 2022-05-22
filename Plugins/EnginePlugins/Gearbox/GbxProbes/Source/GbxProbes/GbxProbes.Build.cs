using UnrealBuildTool;

public class GbxProbes : ModuleRules {
    public GbxProbes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "GbxProbesCore",
        });
    }
}

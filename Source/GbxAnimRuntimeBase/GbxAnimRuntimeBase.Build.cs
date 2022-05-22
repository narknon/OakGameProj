using UnrealBuildTool;

public class GbxAnimRuntimeBase : ModuleRules {
    public GbxAnimRuntimeBase(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "GbxRuntime",
        });
    }
}

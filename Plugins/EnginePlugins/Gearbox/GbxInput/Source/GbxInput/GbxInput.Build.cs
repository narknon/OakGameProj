using UnrealBuildTool;

public class GbxInput : ModuleRules {
    public GbxInput(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GbxRuntime",
            "InputCore",
        });
    }
}

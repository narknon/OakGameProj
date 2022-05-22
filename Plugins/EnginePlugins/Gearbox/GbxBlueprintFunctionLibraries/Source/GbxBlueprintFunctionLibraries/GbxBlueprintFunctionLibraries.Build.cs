using UnrealBuildTool;

public class GbxBlueprintFunctionLibraries : ModuleRules {
    public GbxBlueprintFunctionLibraries(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}

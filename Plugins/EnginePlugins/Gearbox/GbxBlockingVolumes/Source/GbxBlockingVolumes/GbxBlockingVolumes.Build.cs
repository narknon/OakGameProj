using UnrealBuildTool;

public class GbxBlockingVolumes : ModuleRules {
    public GbxBlockingVolumes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}

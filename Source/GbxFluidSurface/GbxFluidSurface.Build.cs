using UnrealBuildTool;

public class GbxFluidSurface : ModuleRules {
    public GbxFluidSurface(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "ProceduralMeshComponent",
        });
    }
}

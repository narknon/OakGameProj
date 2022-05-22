using UnrealBuildTool;

public class GbxLevelEditorPreview : ModuleRules {
    public GbxLevelEditorPreview(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}

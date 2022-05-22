using UnrealBuildTool;

public class SocketSubsystemSpark : ModuleRules {
    public SocketSubsystemSpark(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystemUtils",
        });
    }
}

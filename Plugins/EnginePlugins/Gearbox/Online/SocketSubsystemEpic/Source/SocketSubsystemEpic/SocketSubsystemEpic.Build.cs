using UnrealBuildTool;

public class SocketSubsystemEpic : ModuleRules {
    public SocketSubsystemEpic(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystemUtils",
        });
    }
}

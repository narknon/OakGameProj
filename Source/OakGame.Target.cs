using UnrealBuildTool;

public class OakGameTarget : TargetRules {
	public OakGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"Bifrost",
			"ClothingSystemRuntime",
			"CoherentRenderingPlugin",
			"CohtmlPlugin",
			"GbxAbilities",
			"GbxAnimRuntime",
			"GbxAnimRuntimeBase",
			"GbxCameraModes",
			"GbxDestruction",
			"GbxDynamicRoom",
			"GbxFeedback",
			"GbxFluidSimulation",
			"GbxFluidSurface",
			"GbxGameSystemCore",
			"GbxInventory",
			"GbxMission",
			"GbxNav",
			"GbxPerfAnalytics",
			"GbxProbesCore",
			"GbxRuntime",
			"GbxShiftOverlay",
			"GbxSpark",
			"GbxStatusEffects",
			"GbxStreamingInteraction",
			"GbxTravelStation",
			"GbxUI",
			"GbxVehicle",
			"GbxWeapon",
			"OakCS",
			"OakDestruction",
			"OakGame",
			"ReplicationGraph",
			"ScaleformUI",
			"SocketSubsystemSpark",
			"VivoxCore",
		});
	}
}

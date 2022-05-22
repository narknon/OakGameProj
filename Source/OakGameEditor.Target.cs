using UnrealBuildTool;

public class OakGameEditorTarget : TargetRules {
	public OakGameEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
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

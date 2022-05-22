#include "CameraBehavior_FocusDOF.h"

class UCameraState;

void UCameraBehavior_FocusDOF::ApplyPostProcess_Implementation(UCameraState* State, float DeltaTime, float BlendWeight, const FPostProcessSettings& PPSettings) {
}

UCameraBehavior_FocusDOF::UCameraBehavior_FocusDOF() {
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->bWorldFocus = false;
    this->bDynamicFocus = false;
    this->TraceDistance = 50000.00f;
    this->FocusSpeed = 50.00f;
    this->DistanceBasedNearTransitionRegionScale = 1.00f;
    this->DistanceBasedFarTransitionRegionScale = 0.00f;
    this->bForegroundFocus = true;
    this->ForegroundFocusDistance = 30.00f;
    this->ForegroundFocusNearRegionPct = 1.00f;
    this->ZoomedForegroundNearRegion = 100.00f;
    this->BlurVignetteSharpness = 5.00f;
    this->StartBlurVignetteSize = 200.00f;
    this->ColorVignetteSharpness = 5.00f;
    this->StartColorVignetteSize = 0.00f;
    this->LongitudinalMotionScale = 0.01f;
    this->LateralMotionScale = 0.05f;
    this->bEnableZoomTransition = true;
    this->ZoomMaterialInst = NULL;
}


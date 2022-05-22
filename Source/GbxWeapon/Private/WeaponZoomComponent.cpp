#include "WeaponZoomComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponZoomComponent::OnSwitchedWeaponMode() {
}

void UWeaponZoomComponent::OnRep_ReplicatedZoomState() {
}

void UWeaponZoomComponent::OnDetached() {
}

void UWeaponZoomComponent::OnAttached() {
}

float UWeaponZoomComponent::GetMaxZoomFOVScaleWithMode(uint8 ModeIndex) const {
    return 0.0f;
}

float UWeaponZoomComponent::GetMaxZoomFOVScale() const {
    return 0.0f;
}

void UWeaponZoomComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponZoomComponent, FOVScale);
    DOREPLIFETIME(UWeaponZoomComponent, DurationScale);
    DOREPLIFETIME(UWeaponZoomComponent, ReplicatedZoomState);
}

UWeaponZoomComponent::UWeaponZoomComponent() {
    this->ZoomLevels.AddDefaulted(1);
    this->InstigatorAccuracyScale = 0.00f;
    this->ViewModelShotOffsetScale = 0.10f;
    this->ViewModelLeadingScale = 1.00f;
    this->MovementAnimationAlpha = 1.00f;
    this->FlinchAnimationMagnitudeScale = 0.20f;
    this->bForceUnzoomWhenSwitchingModes = true;
    this->ModeFOVScale = 1.00f;
    this->ModeTransitionDuration = 0.20f;
    this->EyeSocket = TEXT("EyeSocket");
    this->bUseScopeSocket = false;
    this->FrontScopeSocket = TEXT("FrontScope");
    this->FrontSightSocket = TEXT("FrontSight");
    this->RearSightSocket = TEXT("RearSight");
    this->FOVScale = 1.00f;
    this->DurationScale = 1.00f;
    this->bShowCrosshairWhenZoomed = false;
    this->bApplyAttributesWhenFullyZoomed = false;
    this->bEnableBlurVignetteSize = false;
    this->bOverrideStartBlurVignetteSize = false;
    this->bOverrideBlurVignetteSharpness = false;
    this->bEnableColorVignetteSize = false;
    this->bOverrideStartColorVignetteSize = false;
    this->bOverrideColorVignetteSharpness = false;
    this->bOverrideLongitudinalMotionScale = false;
    this->bOverrideLateralMotionScale = false;
    this->BlurVignetteSize = 50.00f;
    this->StartBlurVignetteSize = 200.00f;
    this->BlurVignetteSharpness = 5.00f;
    this->ColorVignetteSize = 0.40f;
    this->StartColorVignetteSize = 0.00f;
    this->ColorVignetteSharpness = 5.00f;
    this->LongitudinalMotionScale = 0.01f;
    this->LateralMotionScale = 0.05f;
    this->UseFeedback = NULL;
    this->UseFeedbackScale = 1.00f;
    this->bApplyWeaponModeZoom = false;
    this->DesiredZoomLevel = 0;
    this->ZoomStartTime = 0.00f;
    this->ZoomTransitionStartTime = 0.00f;
    this->CachedWeaponModeIndex = 0;
    this->WeaponPrivate = NULL;
}


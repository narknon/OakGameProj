#include "CameraState.h"

void UCameraState::SetViewModelFOV(float NewFOV, bool bDefault) {
}

void UCameraState::SetBaseRotation(const FRotator& NewRotation) {
}

void UCameraState::SetBaseLocation(const FVector& NewLocation) {
}

void UCameraState::SetBaseFOV(float NewFOV, bool bDefault) {
}

FRotator UCameraState::GetBaseRotation() const {
    return FRotator{};
}

FVector UCameraState::GetBaseLocation() const {
    return FVector{};
}

float UCameraState::GetBaseFOV() const {
    return 0.0f;
}

bool UCameraState::CameraTrace(const FVector Start, const FVector End, float Radius, TEnumAsByte<ECollisionChannel> TraceChannel, uint8 IgnoreMask, FHitResult& OutHit) {
    return false;
}

void UCameraState::AddPostProcessBlend(const FPostProcessSettings& Settings, float BlendWeight) {
}

UCameraState::UCameraState() {
    this->Inputs = NULL;
    this->DefaultFOV = 0.00f;
    this->BaseFOVOffset = 0.00f;
    this->ViewModelFOV = 0.00f;
    this->DefaultViewModelFOV = 0.00f;
    this->AspectRatio = 0.00f;
    this->bConstrainAspectRatio = false;
    this->bIsTransitioning = false;
    this->bIsColliding = false;
    this->bShowViewModel = false;
    this->bDisableSeparateTranslucency = false;
    this->bUpdatingInitialPitchRotation = false;
    this->bUpdatingInitialYawRotation = false;
    this->FocusDistance = 0.00f;
}


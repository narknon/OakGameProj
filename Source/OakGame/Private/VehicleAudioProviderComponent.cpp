#include "VehicleAudioProviderComponent.h"

class UPhysicalMaterial;

void UVehicleAudioProviderComponent::OnVehicleLanded(float TimeSpentInAir, float LandAngle, int32 NumWheelsOnGround, bool bAllWheelsLanded) {
}

void UVehicleAudioProviderComponent::OnVehicleGearShift(int32 Gear, bool bIsShiftingUp) {
}

void UVehicleAudioProviderComponent::OnVehicleBecameAirborne() {
}

void UVehicleAudioProviderComponent::OnSeatAttachStateChanged() {
}

void UVehicleAudioProviderComponent::OnOverspinStarted(UPhysicalMaterial* PhysicalMat) {
}

void UVehicleAudioProviderComponent::OnOverspinEnded() {
}

void UVehicleAudioProviderComponent::OnHoverEnabled() {
}

void UVehicleAudioProviderComponent::OnHoverDisabled() {
}

void UVehicleAudioProviderComponent::OnEngineStop() {
}

void UVehicleAudioProviderComponent::OnEngineStart() {
}

UVehicleAudioProviderComponent::UVehicleAudioProviderComponent() {
    this->ForwardSpeedRTPCRefValue = 4000.00f;
    this->SkidAmountRTPCRefValue = 2000.00f;
    this->WheelAudioType = EWheelAudioType::Standard;
    this->WheelAudioReverbBoost = 0.00f;
    this->HoveringInPlaceEngineStrength = 3.00f;
    this->LandingAudioEvent = NULL;
    this->SteeringAudioEvent = NULL;
    this->SuspensionCompressionEvent = NULL;
    this->SuspensionExtensionEvent = NULL;
    this->SuspensionCompressionEventThreshold = 0.60f;
    this->SuspensionExtensionEventThreshold = -0.20f;
    this->OverspinDebrisEvent = NULL;
    this->DelayBeforeOverspinDebrisEvent = 0.25f;
    this->OverspinStartEvent = NULL;
    this->OverspinEndEvent = NULL;
    this->WheelBrakeEvent = NULL;
    this->bWheelBrakeEventIsPlayerOnly = true;
    this->OwningVehicle = NULL;
    this->CachedAudioGlobals = NULL;
    this->EngineAudioComponent = NULL;
}


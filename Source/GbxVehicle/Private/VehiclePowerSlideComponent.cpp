#include "VehiclePowerSlideComponent.h"
#include "Net/UnrealNetwork.h"

void UVehiclePowerSlideComponent::SetPowerSlideEnabled(bool bEnable) {
}

void UVehiclePowerSlideComponent::ResumePowerSlide(FName Reason) {
}

void UVehiclePowerSlideComponent::PausePowerSlide(FName Reason) {
}

void UVehiclePowerSlideComponent::OnRep_IsPowerSliding(bool bWasPowerSliding) {
}

bool UVehiclePowerSlideComponent::IsPowerSlidePaused() {
    return false;
}

bool UVehiclePowerSlideComponent::IsInPowerSlideBoost() const {
    return false;
}

bool UVehiclePowerSlideComponent::GetPowerSlideEnabled() {
    return false;
}

float UVehiclePowerSlideComponent::GetCurrentBoostRatio() const {
    return 0.0f;
}

void UVehiclePowerSlideComponent::CancelPowerSlide() {
}

void UVehiclePowerSlideComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVehiclePowerSlideComponent, bIsPowerSliding);
}

UVehiclePowerSlideComponent::UVehiclePowerSlideComponent() {
    this->bApplyHandbrake = true;
    this->InAirBehavior = EInAirBehavior::Continue;
    this->MaxNumWheelsInAir = 0;
    this->bIsPowerSliding = false;
    this->AngleToConsiderDrift = 15.00f;
    this->MinDriftVelThreshold = 10.00f;
    this->TimeInDriftDecayRate = 3.00f;
    this->MinDriftDurationForBoost = 0.10f;
    this->MaxDriftDurationForBoost = 0.60f;
    this->MaxBoostForce = 150.00f;
    this->PostDriftBoostDurationMin = 0.70f;
    this->PostDriftBoostDurationMax = 0.70f;
    this->MinVelForPostDriftBoost = 10.00f;
}


#include "VehicleDigiThrustComponent.h"
#include "Net/UnrealNetwork.h"

void UVehicleDigiThrustComponent::SetTeleportDirection_Implementation(const FVector& WantedDirection) {
}
bool UVehicleDigiThrustComponent::SetTeleportDirection_Validate(const FVector& WantedDirection) {
    return true;
}

void UVehicleDigiThrustComponent::RequestTeleport() {
}

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustStarted_Implementation() {
}

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustEndFinished_Implementation() {
}

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustEnd_Implementation() {
}

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustCollision_Implementation() {
}

bool UVehicleDigiThrustComponent::IsTeleporting() const {
    return false;
}

float UVehicleDigiThrustComponent::GetMaxBoostPoolValue() const {
    return 0.0f;
}

float UVehicleDigiThrustComponent::GetCurrentBoostPoolValue() const {
    return 0.0f;
}

void UVehicleDigiThrustComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVehicleDigiThrustComponent, BoostPool);
    DOREPLIFETIME(UVehicleDigiThrustComponent, bTeleportRequested);
}

UVehicleDigiThrustComponent::UVehicleDigiThrustComponent() {
    this->TeleportMaxDist = 3000.00f;
    this->TeleportDuration = 0.15f;
    this->bUseTeleportDirection = false;
    this->bReorientOnTeleport = false;
    this->ReorientationRatio = 1.00f;
    this->TeleportCondition = NULL;
    this->BoostPoolData = NULL;
    this->NumChargesOnFullResource = 1;
    this->TraceStepLength = 500.00f;
    this->GroundDetectionTraceLength = 300.00f;
    this->GroundTraceRadius = 20.00f;
    this->PathPtGroundHeight = 200.00f;
    this->ValidFloorAngle = 60.00f;
    this->FloorMaxAngleDiffBetweenGroundTraces = 35.00f;
    this->FloorMaxHeightDiffBetweenGroundTraces = 100.00f;
    this->RefUpBlendWeight = 0.50f;
    this->bKeepLastValidGroundUpWhenInAir = true;
    this->Vehicle = NULL;
    this->bTeleportRequested = false;
    this->DigithrustInAction = NULL;
    this->DigithrustOutAction = NULL;
    this->DigithrustOutActionDuration = 0.50f;
}


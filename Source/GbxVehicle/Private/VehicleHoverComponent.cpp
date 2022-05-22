#include "VehicleHoverComponent.h"
#include "Net/UnrealNetwork.h"

void UVehicleHoverComponent::ServerUpdateState_Implementation(bool InbIsEnabled, float InStrafeInput, float InForwardInput, FRotator InTargetRotation) {
}
bool UVehicleHoverComponent::ServerUpdateState_Validate(bool InbIsEnabled, float InStrafeInput, float InForwardInput, FRotator InTargetRotation) {
    return true;
}

bool UVehicleHoverComponent::IsHoverEnabled() const {
    return false;
}

void UVehicleHoverComponent::EnableHover(bool bEnable) {
}

void UVehicleHoverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVehicleHoverComponent, ReplicatedState);
}

UVehicleHoverComponent::UVehicleHoverComponent() {
    this->RawStrafeInput = 0.00f;
    this->RawForwardInput = 0.00f;
    this->ForceRefVel = 1.00f;
    this->DampingForce = 0.00f;
    this->BrakingDampingForce = 0.00f;
    this->TireConfigWhenStrafing = NULL;
    this->CustomGravityModifier = 1.00f;
    this->bFaceControlRotation = false;
    this->TimeToFaceControlRotation = 0.50f;
    this->Vehicle = NULL;
    this->MovementComponentNW = NULL;
}


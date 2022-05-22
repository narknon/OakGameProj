#include "AIVehicleFlightComponent.h"
#include "Net/UnrealNetwork.h"

void UAIVehicleFlightComponent::OnRep_FlightState() {
}

void UAIVehicleFlightComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIVehicleFlightComponent, FlightState);
}

UAIVehicleFlightComponent::UAIVehicleFlightComponent() {
    this->GbxNavComponent = NULL;
    this->VelocityScaleDuringDescent = 0.10f;
    this->RotationScaleDuringDescent = 0.25f;
    this->LateralDistanceToStartDescent = 4000.00f;
    this->VelocityScaleDuringAscent = 0.50f;
    this->RotationScaleDuringAscent = 0.50f;
    this->MaxPitchInDegrees = 30.00f;
    this->MaxRollInDegrees = 30.00f;
}


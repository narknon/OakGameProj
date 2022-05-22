#include "OakVehicleInputComponent.h"

void UOakVehicleInputComponent::OnVehicleAirborne() {
}

UOakVehicleInputComponent::UOakVehicleInputComponent() {
    this->SteerActionData = NULL;
    this->ThrottleActionData = NULL;
    this->LookActionData = NULL;
    this->AirControlActionData = NULL;
    this->OwningVehicle = NULL;
    this->bAirControlNeedsNeutralStick = true;
    this->bUseCameraRelativeSteeringMode = false;
    this->CameraRelativeDrivingMode = EVehicleCameraRelativeDrivingMode::Standard;
    this->bUseAutoEBrake = false;
    this->AutoEBrakeSpeedThresholdKPH = 20.00f;
    this->AutoEBrakeSteeringThreshold = 0.90f;
    this->AutoEBrakeWantedDirAngleThreshold = 80.00f;
    this->bUseStickLengthAsThrottle = false;
    this->ForwardInputAngleThreshold = 115.00f;
}


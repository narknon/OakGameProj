#include "CameraBehavior_VehicleLook.h"

UCameraBehavior_VehicleLook::UCameraBehavior_VehicleLook() {
    this->bFollowGroundNormal = true;
    this->BankingTolerance = 20.00f;
    this->LookAtOffsetInTheAirDamping = 0.40f;
    this->LookAtOffsetInTheGroundDamping = 0.40f;
    this->bUseCameraFollowVehicleBody = true;
    this->CameraBodyFollowDelay = 0.30f;
    this->BaseForwardOffset = -1200.00f;
    this->BaseFOV = 75.00f;
    this->DefaultPitch = 10.00f;
    this->PitchMin = -40.00f;
    this->PitchMax = 20.00f;
    this->CameraOffsetDamping = 0.40f;
    this->FreeAimMinTime = 3.00f;
    this->bKeepCameraOffsetsInFreeLook = false;
    this->ClampToRotateOnly = -25.00f;
    this->bEnableAutoLookInDrivingCamera = true;
    this->AutoLookPitchDamping = 0.20f;
    this->AutoResetDamping = 0.10f;
    this->LatteralOffsetDampingFactor = 0.50f;
    this->ForwardOffsetDampingFactor = 0.50f;
    this->bAllowAutoLookInReverse = false;
    this->KeepLookAtRatio = 0.00f;
    this->KeepLookAtSpeedTreshold = 200.00f;
    this->BodySocketToFollow = TEXT("Body");
    this->ForwardMaxSpeed = 5000.00f;
    this->ReverseMaxSpeed = -2000.00f;
    this->bApplyTurnSettingsInReverse = false;
    this->TurnMaxSpeed = 135.00f;
    this->DodgeRadius = 100.00f;
    this->MinimalRadius = 20.00f;
    this->MovementDampingSpeed = 0.30f;
}


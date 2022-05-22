#include "TechnicalVehicleAnimInstance.h"

UTechnicalVehicleAnimInstance::UTechnicalVehicleAnimInstance() {
    this->bIsBigWheel = false;
    this->SlotToPlayBounceOn = TEXT("VehicleAccel");
    this->BrakeBounceBack = NULL;
    this->BrakeBounceFront = NULL;
    this->BlendAccelAlpha = 0.00f;
}


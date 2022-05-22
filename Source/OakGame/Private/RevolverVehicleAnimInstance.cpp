#include "RevolverVehicleAnimInstance.h"

URevolverVehicleAnimInstance::URevolverVehicleAnimInstance() {
    this->BackRaycastDistance = 40.00f;
    this->UnderRaycastDistance = 50.00f;
    this->ProfileName = TEXT("Vehicle");
    this->HitSequence = NULL;
    this->HitBlendInTime = 0.00f;
    this->HitBlendOutTime = 0.00f;
    this->HitPlayRate = 1.00f;
    this->HitLoopCount = 1;
    this->HitSlotName = TEXT("VehicleBody");
    this->BodyMesh = NULL;
}


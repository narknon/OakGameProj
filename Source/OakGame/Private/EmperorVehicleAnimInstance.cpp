#include "EmperorVehicleAnimInstance.h"

UEmperorVehicleAnimInstance::UEmperorVehicleAnimInstance() {
    this->bHasHeavyWheels = false;
    this->bHasThreads = false;
    this->F_L_Threads_MID = NULL;
    this->F_R_Threads_MID = NULL;
    this->R_L_Threads_MID = NULL;
    this->R_R_Threads_MID = NULL;
    this->ThreadMaterialAnimDivider = -180.00f;
    this->ThreadUVOffsetParam = TEXT("UV Offset");
    this->bHasGunnerSeatOccupant = false;
    this->bHasDriverSeatOccupant = false;
    this->bHasLeftTurretOccupant = false;
    this->bHasRightTurretOccupant = false;
    this->bHasTurretUser = false;
    this->bIsDroneDoorOpen = false;
    this->bIsDroneOutside = false;
}


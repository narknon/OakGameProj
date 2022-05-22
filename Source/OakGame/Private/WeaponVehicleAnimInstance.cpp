#include "WeaponVehicleAnimInstance.h"

UWeaponVehicleAnimInstance::UWeaponVehicleAnimInstance() {
    this->bIsDriverWeapon = true;
    this->bIsSeatedWeapon = false;
    this->bHasTurretOwner = false;
    this->DualWeaponDownOffset = -45.00f;
    this->DualWeaponDownElbowOffset = 30.00f;
    this->DualWeaponDownArmEndOffset = 30.00f;
    this->DualWeaponTopOffset = 60.00f;
    this->DualWeaponTopElbowOffset = 10.00f;
    this->DualWeaponTopArmEndOffset = 2.00f;
    this->DualWeaponSideOffset = 70.00f;
    this->MaxIKStretchRatio = 1.82f;
    this->StartIKStretchingRatio = 0.60f;
    this->CircleZone = 180.00f;
    this->CircleDeadZone = 0.15f;
    this->StretchWheelBase = 0.00f;
    this->Vehicle = NULL;
    this->Weapon_Vehicle = NULL;
    this->LeftWeaponMesh = NULL;
    this->RightWeaponMesh = NULL;
}


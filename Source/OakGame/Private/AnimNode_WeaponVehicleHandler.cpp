#include "AnimNode_WeaponVehicleHandler.h"

FAnimNode_WeaponVehicleHandler::FAnimNode_WeaponVehicleHandler() {
    this->bUseYawBone = false;
    this->bUsePitchBone = false;
    this->PitchMinAngleClamp = 0.00f;
    this->PitchMaxAngleClamp = 0.00f;
    this->bUseProjectileBone = false;
    this->bIsDualWeapon = false;
    this->bUseBoneReTargeting = false;
}


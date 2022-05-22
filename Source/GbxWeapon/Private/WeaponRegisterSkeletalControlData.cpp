#include "WeaponRegisterSkeletalControlData.h"

FWeaponRegisterSkeletalControlData::FWeaponRegisterSkeletalControlData() {
    this->Type = EWET_Default;
    this->Visibility = EWAVT_Both;
    this->bPlayerOnly = false;
    this->Control = NULL;
}


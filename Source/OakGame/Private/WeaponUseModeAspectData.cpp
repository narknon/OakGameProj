#include "WeaponUseModeAspectData.h"

UWeaponUseModeAspectData::UWeaponUseModeAspectData() {
    this->UseMode = EWeaponUseMode::EWeaponUseMode_MAX;
    this->UseModeBitmask = 1;
    this->InputChannelBitmask = 1;
    this->WeaponUseComponent = NULL;
}


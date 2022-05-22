#include "WeaponDamageTypeAspectData.h"

UWeaponDamageTypeAspectData::UWeaponDamageTypeAspectData() {
    this->UseModeBitmask = 1;
    this->DamageType = NULL;
    this->ImpactData = NULL;
    this->bUseForBeamsOnly = false;
}


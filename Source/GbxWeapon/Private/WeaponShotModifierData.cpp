#include "WeaponShotModifierData.h"

FWeaponShotModifierData::FWeaponShotModifierData() {
    this->ModifierType = EWeaponShotModifierType::None;
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->ImpactData = NULL;
    this->ProjectilesPerShot = 0;
    this->ModifierValue = 0.00f;
}


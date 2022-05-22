#include "WeaponSettings.h"

UWeaponSettings::UWeaponSettings() {
    this->WeaponEffectTypes.AddDefaulted(9);
    this->WeaponActionTypes.AddDefaulted(5);
    this->WeaponShotModifierTypes.AddDefaulted(5);
}


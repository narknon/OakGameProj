#include "OakCharacter_IronCub.h"

class AWeapon;

void AOakCharacter_IronCub::UpdateOutlineOnWeaponChange(AWeapon* Weapon, AWeapon* LastWeapon) {
}

AOakCharacter_IronCub::AOakCharacter_IronCub() {
    this->bEnableOutline = false;
    this->OutlineThickness = 5;
}


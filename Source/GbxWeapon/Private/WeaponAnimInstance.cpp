#include "WeaponAnimInstance.h"


UWeaponAnimInstance::UWeaponAnimInstance() {
    this->Weapon = NULL;
    this->Slot = NULL;
    this->ZoomDuration = 0.00f;
    this->ZoomEffect = 0.00f;
    this->bIsZoomedIn = false;
}


#include "WeaponAmmoComponent.h"

void UWeaponAmmoComponent::ClientRefillAmmo_Implementation(int32 Amount) {
}

UWeaponAmmoComponent::UWeaponAmmoComponent() {
    this->AmmoTypeData = NULL;
    this->bDisplayAmmoInHUD = true;
    this->WeaponPrivate = NULL;
}


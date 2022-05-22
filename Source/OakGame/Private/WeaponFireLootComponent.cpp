#include "WeaponFireLootComponent.h"

UWeaponFireLootComponent::UWeaponFireLootComponent() {
    this->bSpawnLootAtInstigatorLevel = true;
    this->BaseProjectileSpeed = 1500.00f;
    this->ItemPool = NULL;
}


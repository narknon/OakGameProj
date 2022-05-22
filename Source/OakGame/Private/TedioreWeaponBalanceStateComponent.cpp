#include "TedioreWeaponBalanceStateComponent.h"
#include "Templates/SubclassOf.h"

class ATedioreProjectile;

TSubclassOf<ATedioreProjectile> UTedioreWeaponBalanceStateComponent::GetTedioreProjectileClass() const {
    return NULL;
}

UTedioreWeaponBalanceStateComponent::UTedioreWeaponBalanceStateComponent() {
    this->TedioreProjectileClass = NULL;
}


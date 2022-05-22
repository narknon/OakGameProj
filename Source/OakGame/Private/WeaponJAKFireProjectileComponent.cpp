#include "WeaponJAKFireProjectileComponent.h"

void UWeaponJAKFireProjectileComponent::ResetStack() {
}

UWeaponJAKFireProjectileComponent::UWeaponJAKFireProjectileComponent() {
    this->bStackCrits = false;
    this->bNonSuccessiveCritBreaksStack = false;
    this->StackStatusEffectData = NULL;
    this->StackStatusEffectDuration = 8.00f;
    this->RefundAmmoCount = 0;
    this->RicochetCount = 0;
    this->RicochetDamageScale = 1.00f;
}


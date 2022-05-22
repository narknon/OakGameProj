#include "WeaponShotModifier.h"

UWeaponShotModifier::UWeaponShotModifier() {
    this->bTriggerEveryXShots = false;
    this->ModifierType = EWeaponShotModifierType::None;
    this->bModifyDamage = false;
    this->DamageModifierType = EWeaponShotDamageModifierType::Scale;
    this->bDistributeBetweenProjectiles = false;
    this->DamageType = NULL;
    this->ImpactData = NULL;
    this->CriticalHitModifier = ECriticalHitDamageOverride::None;
    this->bUseDefaultCriticalHitMultiplier = false;
    this->ConditionalDamageModifier = NULL;
    this->bPassConditionalDamageModifierToChildProjectiles = true;
    this->bRefundShotCostWhenTriggered = false;
    this->bSuppressRefundThatWouldPreventReload = false;
}


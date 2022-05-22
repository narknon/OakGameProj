#include "ShieldAugment_DamageModifier.h"

UShieldAugment_DamageModifier::UShieldAugment_DamageModifier() {
    this->DamageModifier = NULL;
    this->ApplicationTarget = EShieldDamageModifierApplicationTarget::InstigatorCausedDamage;
    this->bUseModifierDuration = false;
}


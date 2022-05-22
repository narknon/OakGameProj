#include "ConditionalDamageTypeModifier.h"

UConditionalDamageTypeModifier::UConditionalDamageTypeModifier() {
    this->OverrideDamageType = NULL;
    this->OptionalOverrideDamageSource = NULL;
    this->BonusMode = EConditionalDamageTypeBonusMode::AddBonusDamage;
    this->Priority = 0;
}


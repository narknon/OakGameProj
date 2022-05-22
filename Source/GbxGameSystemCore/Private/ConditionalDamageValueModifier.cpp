#include "ConditionalDamageValueModifier.h"

UConditionalDamageValueModifier::UConditionalDamageValueModifier() {
    this->ModifierType = EConditionalDamageModifierType::Scale;
    this->bModifyValueBasedOnDistance = false;
    this->bDisallowFatalDamage = false;
}


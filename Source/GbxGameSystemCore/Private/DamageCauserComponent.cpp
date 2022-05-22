#include "DamageCauserComponent.h"

class UConditionalDamageModifier;

void UDamageCauserComponent::UnregisterConditionalDamageModifier(UConditionalDamageModifier* Modifier) {
}

void UDamageCauserComponent::RegisterConditionalDamageModifier(UConditionalDamageModifier* Modifier) {
}

UDamageCauserComponent::UDamageCauserComponent() {
    this->DefaultModificationContextStrategy = EDamageCausedModificationStrategy::UseSelfModifier;
    this->bCanHurtSelf = false;
    this->bApplyInstigatorSkillDamageModifier = false;
    this->EnemyReflectionChance = 0.00f;
}


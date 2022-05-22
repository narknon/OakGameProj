#include "OakActionAbilityAugmentData_PhaseTrance_Attack.h"

UOakActionAbilityAugmentData_PhaseTrance_Attack::UOakActionAbilityAugmentData_PhaseTrance_Attack() {
    this->AttackFamilyType = EPhaseTranceAttackFamilyType::None;
    this->AttackActionClass = NULL;
    this->SingularityEffectActorClass = NULL;
    this->DamageEffects = 62;
    this->bUsesGhostArmsOnActivation = true;
}


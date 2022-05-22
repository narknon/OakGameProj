#include "OakActionAbilityAugmentData_PhaseTrance_Effect.h"

UOakActionAbilityAugmentData_PhaseTrance_Effect::UOakActionAbilityAugmentData_PhaseTrance_Effect() {
    this->Type = EPhaseTranceEffectType::None;
    this->TargetType = EPhaseTranceEffectTargetType::Actor;
    this->bRejectActorsInAttachSlots = false;
    this->bOnlyOncePerActorPerActivation = false;
    this->RejectionCondition = NULL;
}


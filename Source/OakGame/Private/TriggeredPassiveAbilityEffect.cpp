#include "TriggeredPassiveAbilityEffect.h"

FTriggeredPassiveAbilityEffect::FTriggeredPassiveAbilityEffect() {
    this->StatusEffectData = NULL;
    this->bApplyToPlayer = false;
    this->AdditionalEffectTargets = EAdditionalTriggeredEffectTargets::None;
    this->bUsePlayerForAdditionalEffectTargetContext = false;
    this->bWantsEffectEndedEvent = false;
    this->bCanTriggerMultipleTimesPerFrame = false;
}


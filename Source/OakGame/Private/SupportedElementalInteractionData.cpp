#include "SupportedElementalInteractionData.h"

FSupportedElementalInteractionData::FSupportedElementalInteractionData() {
    this->State = NULL;
    this->TransitionTimeScale = 0.00f;
    this->DamageTriggeredTransitionTimeScale = 0.00f;
    this->OverrideDamageTriggeredSourceDuration = 0.00f;
    this->bOverrideDamageAmount = false;
    this->bOverrideBaseStatusEffectChance = false;
    this->bOverrideBaseStatusEffectDamage = false;
    this->bOverrideBaseStatusEffectDuration = false;
}


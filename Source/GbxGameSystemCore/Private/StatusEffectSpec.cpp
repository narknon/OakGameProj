#include "StatusEffectSpec.h"

FStatusEffectSpec::FStatusEffectSpec() {
    this->StatusEffectData = NULL;
    this->DurationType = EStatusEffectDurationType::Timed;
    this->Duration = 0.00f;
    this->EffectInstigator = NULL;
    this->DamageCauser = NULL;
    this->DamagePerSecond = 0.00f;
}


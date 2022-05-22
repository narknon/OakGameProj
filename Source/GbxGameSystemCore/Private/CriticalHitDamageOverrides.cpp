#include "CriticalHitDamageOverrides.h"

FCriticalHitDamageOverrides::FCriticalHitDamageOverrides() {
    this->Type = ECriticalHitDamageOverride::None;
    this->bUseDefaultCriticalHitMultiplier = false;
    this->AdditionalCriticalMultiplier = 0.00f;
}


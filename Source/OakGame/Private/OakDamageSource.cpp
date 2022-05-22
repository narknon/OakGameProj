#include "OakDamageSource.h"

UOakDamageSource::UOakDamageSource() {
    this->bEligibleForShieldAbsorption = false;
    this->bPlayHitNotifySounds = false;
    this->bCanCauseLargeLiquidBodyExplosionSplash = false;
    this->KillStat = NULL;
}


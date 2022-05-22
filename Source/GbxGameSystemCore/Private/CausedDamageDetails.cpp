#include "CausedDamageDetails.h"

FCausedDamageDetails::FCausedDamageDetails() {
    this->bWasCrit = false;
    this->DamageCauser = NULL;
    this->HitComponent = NULL;
    this->HitRegion = NULL;
    this->DamageRadius = 0.00f;
    this->bIsDamageOverTime = false;
}


#include "HitRegionHealthParams.h"

FHitRegionHealthParams::FHitRegionHealthParams() {
    this->OwnerHealthPercent = 0.00f;
    this->ResourcePool = NULL;
    this->DamageRule = EHitRegionDamageRule::IndependentHealth;
}


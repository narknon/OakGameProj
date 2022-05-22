#include "OakLightProjectile.h"

void UOakLightProjectile::InitOakChildData(FOakLightProjectileInitializationData& InitData) const {
}

UOakLightProjectile::UOakLightProjectile() {
    this->BaseStatusEffectChance = -1.00f;
    this->BaseStatusEffectDamage = -1.00f;
    this->BaseStatusEffectDuration = -1.00f;
    this->StatusEffectChanceScalar = 1.00f;
    this->StatusEffectDamageScalar = 1.00f;
    this->StatusEffectDurationScalar = 1.00f;
    this->OakData = NULL;
}


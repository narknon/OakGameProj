#include "GbxDamageType.h"

bool UGbxDamageType::IsElementalType() const {
    return false;
}

UGbxDamageType::UGbxDamageType() {
    this->bIsHealingType = false;
    this->bIsDoT = false;
    this->InnerDamageRadiusPercent = 0.20f;
    this->OuterDamageRadiusPercent = 0.80f;
    this->MinRadiusDamageScalar = 0.20f;
    this->StatusEffectData = NULL;
}


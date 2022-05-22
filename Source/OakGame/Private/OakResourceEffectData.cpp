#include "OakResourceEffectData.h"

FOakResourceEffectData::FOakResourceEffectData() {
    this->ResourceEffectType = EOakStatusEffectResourceEffectType::Cryo;
    this->ResourcePool = NULL;
    this->PostDepleteImmuneTime = NULL;
    this->DamageTypeClass = NULL;
    this->DamageModifier = NULL;
    this->DamagedActorModifier = NULL;
    this->DefaultPercentBaseDamage = 0.00f;
    this->FXData = NULL;
}


#include "OakDamageType.h"

UOakDamageType::UOakDamageType() {
    this->bAffectedByRadiationMultiplier = true;
    this->ElementalType = EOakElementalType::None;
    this->DialogSystemEnumValue = NULL;
    this->KillStat = NULL;
    this->bForceDamageToHealthType = false;
}


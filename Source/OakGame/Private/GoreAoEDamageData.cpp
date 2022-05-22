#include "GoreAoEDamageData.h"

UGoreAoEDamageData::UGoreAoEDamageData() {
    this->MaxBones = 2;
    this->Chance = 1.00f;
    this->CumulativeChanceModifier = 0.00f;
    this->RadiusChanceCurve = NULL;
    this->DamageFilter = NULL;
}


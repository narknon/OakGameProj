#include "DamageFilter.h"

UDamageFilter::UDamageFilter() {
    this->bExactDamageSourceClass = false;
    this->DamageSource = NULL;
    this->bExactDamageTypeClass = false;
    this->DamageType = NULL;
    this->ConditionSelf = NULL;
    this->ConditionAttacker = NULL;
    this->bOnlyAoEDamage = false;
    this->bMustNotBeSelfDamage = false;
    this->bUseRandomChance = false;
}


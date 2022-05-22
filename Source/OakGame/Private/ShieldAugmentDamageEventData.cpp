#include "ShieldAugmentDamageEventData.h"

FShieldAugmentDamageEventData::FShieldAugmentDamageEventData() {
    this->bShieldMustNotBeDepleted = false;
    this->bInstanceBoolMustBeTrue = false;
    this->bInstanceBoolMustBeTrueForBarrier = false;
    this->bMustBeTriggerable = false;
    this->bSetNotTriggerableAfterTriggering = false;
    this->DamageEventFilter = NULL;
}


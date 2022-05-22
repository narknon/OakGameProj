#include "DamageReactionEventSummary.h"

FDamageReactionEventSummary::FDamageReactionEventSummary() {
    this->DamageCauser = NULL;
    this->DamageSource = NULL;
    this->DamageType = NULL;
    this->HitComponent = NULL;
    this->Radius = 0.00f;
    this->EventIndex = 0;
}


#include "CausedDeathDetails.h"

FCausedDeathDetails::FCausedDeathDetails() {
    this->DamageSource = NULL;
    this->DamageType = NULL;
    this->DamageInstigator = NULL;
    this->DamageCauser = NULL;
    this->Damage = 0.00f;
    this->OverkillDamage = 0.00f;
    this->bWasCrit = false;
    this->bWasAwareOfKiller = false;
    this->bWasFullyHealthy = false;
    this->DamageRadius = 0.00f;
}


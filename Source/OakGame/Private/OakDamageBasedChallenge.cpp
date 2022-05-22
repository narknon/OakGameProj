#include "OakDamageBasedChallenge.h"

UOakDamageBasedChallenge::UOakDamageBasedChallenge() {
    this->RequiredWeaponType = NULL;
    this->RequiredManufacturer = NULL;
    this->bRequireCrit = false;
    this->bRequireHostile = false;
    this->bIncrementBasedOnDamageDealt = false;
    this->bTreatMultipleHitsAsSingleHit = false;
}


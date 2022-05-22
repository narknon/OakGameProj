#include "HitReactionParams.h"

FHitReactionParams::FHitReactionParams() {
    this->Receiver = NULL;
    this->Causer = NULL;
    this->DamageAmount = 0.00f;
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->Force = 0.00f;
    this->HitRegion = NULL;
    this->HitBoneIndex = 0;
    this->bIgnoreCooldowns = false;
    this->bForceInterruptSelf = false;
}


#include "OakAttachedDroneAttacker.h"


AOakAttachedDroneAttacker::AOakAttachedDroneAttacker() {
    this->LightProjectileData = NULL;
    this->AttackDelay = 0.30f;
    this->BurstCount = 3;
    this->ProjectileSpeed = 3000.00f;
    this->MaxPrediction = 75.00f;
    this->DamageType = NULL;
}


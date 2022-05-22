#include "ReceivedDamageDetails.h"

FReceivedDamageDetails::FReceivedDamageDetails() {
    this->bWasCrit = false;
    this->HitComponent = NULL;
    this->HitRegion = NULL;
    this->DamageRadius = 0.00f;
    this->bWasBulletReflected = false;
}


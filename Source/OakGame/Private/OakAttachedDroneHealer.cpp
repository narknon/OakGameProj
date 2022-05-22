#include "OakAttachedDroneHealer.h"



AOakAttachedDroneHealer::AOakAttachedDroneHealer() {
    this->LightBeamData = NULL;
    this->HealDelay = 1.00f;
    this->HealDuration = 3.00f;
    this->DamageType = NULL;
    this->HealingValueInitializer = NULL;
    this->HealingValueFactor = 0.10f;
}


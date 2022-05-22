#include "GrenadeBehavior_PayloadNuke.h"

UGrenadeBehavior_PayloadNuke::UGrenadeBehavior_PayloadNuke() {
    this->DamageScaleIncreasePerGrenade = 0.50f;
    this->RadiusScaleIncreasePerGrenade = 0.25f;
    this->GrenadeAmmoAttribute = NULL;
    this->NukeExplosionData = NULL;
}


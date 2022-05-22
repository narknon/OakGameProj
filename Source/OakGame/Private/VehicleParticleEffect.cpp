#include "VehicleParticleEffect.h"

UVehicleParticleEffect::UVehicleParticleEffect() {
    this->ParticleEffect = NULL;
    this->bAutoActivate = false;
    this->bAttachToParent = true;
    this->bAlwaysSpawnNewInstance = false;
    this->bSpawnOnStop = false;
    this->bDisableBeforeFreeze = false;
}


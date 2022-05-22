#include "TestInfoParticleEmitter.h"

FTestInfoParticleEmitter::FTestInfoParticleEmitter() {
    this->EmitterIndex = 0;
    this->SuperMaxDrawCount = 0;
    this->MinUnitScalar = 0.00f;
    this->bHasLowestLOD = false;
    this->bHasAnimTrailData = false;
    this->bHasGpuSpriteData = false;
    this->bHasMeshData = false;
    this->bHasRibbonOrBeamData = false;
    this->bHasRequiredModule = false;
    this->bHasSpawnPerUnitModule = false;
    this->bHasLifetimeModule = false;
    this->bHasLightModule = false;
    this->bUseMaxDrawCountDisabled = false;
    this->bHasInfiniteMaxDrawCount = false;
    this->bHasInfiniteLifetime = false;
    this->bKillOnCompletedNotSet = false;
    this->bUseInverseSquaredFalloffSet = false;
}


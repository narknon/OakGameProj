#include "LightProjectileRingSettings.h"

FLightProjectileRingSettings::FLightProjectileRingSettings() {
    this->InitialRadius = 0.00f;
    this->Angle = 0.00f;
    this->InitialProjectileCount = 0;
    this->bMakeSolidRing = false;
    this->bUseBodyMeshBoundsForCollision = false;
    this->bSubdivide = false;
    this->bUseRingAxis = false;
}


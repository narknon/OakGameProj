#include "OakFreezeData.h"

UOakFreezeData::UOakFreezeData() {
    this->DestructibleComponent = NULL;
    this->FreezeCE = NULL;
    this->ThawCE = NULL;
    this->FreezeTime = 0.50f;
    this->ThawTime = 1.00f;
    this->ThawScaleDelay = 0.50f;
    this->ImpactPhysicalMaterial = NULL;
    this->DestructibleSupportMesh = NULL;
    this->StaticSupportMesh = NULL;
    this->GroundSupportMaxOffset = 50.00f;
    this->GroundDecalMaterial = NULL;
    this->GroundDecalDuration = 12.50f;
    this->GroundDecalFadeDuration = 2.00f;
    this->FreezeFallingDamageType = NULL;
    this->FreezeFallingDamageSource = NULL;
    this->FreezeFallingImpactData = NULL;
    this->bBlockVehicle = false;
}


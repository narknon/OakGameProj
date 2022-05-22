#include "StanceData.h"

UStanceData::UStanceData() {
    this->bUseMaxAllowedAimOffset = false;
    this->bUseAimRotationRate = false;
    this->bUseMaxIdleRotation = false;
    this->StanceDataToShowAnimSystem = NULL;
    this->bOverrideSlowdownSpeed = false;
    this->bOverrideMaxAcceleration = false;
    this->MaxAcceleration = 2048.00f;
    this->bLockDodging = false;
    this->bLockTurns = false;
    this->bLockFootIK = false;
    this->bLockHandIK = false;
    this->bThisStanceAllowsFidgetAnims = false;
    this->WaitTimeBeforeFirstFidgetAnim = 0.00f;
    this->PhysicalAnimation = NULL;
    this->HitReactionLayer = NULL;
    this->HitReactionData = NULL;
}


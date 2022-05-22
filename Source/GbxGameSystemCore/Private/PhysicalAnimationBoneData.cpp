#include "PhysicalAnimationBoneData.h"

FPhysicalAnimationBoneData::FPhysicalAnimationBoneData() {
    this->bIncludeChildren = false;
    this->bIsLocalSimulation = false;
    this->OrientationStrength = 0.00f;
    this->AngularVelocityStrength = 0.00f;
    this->PositionStrength = 0.00f;
    this->VelocityStrength = 0.00f;
}


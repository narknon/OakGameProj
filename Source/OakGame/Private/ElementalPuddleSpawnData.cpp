#include "ElementalPuddleSpawnData.h"

UElementalPuddleSpawnData::UElementalPuddleSpawnData() {
    this->SpawnTransitionTime = 1.00f;
    this->InitialOpacity = 0.00f;
    this->InitialScale = 0.00f;
    this->FullSizeOpacity = 1.00f;
    this->FullSizeScale = 1.00f;
    this->LifeTime = 5.00f;
    this->CleanUpTransitionTime = 2.00f;
    this->CleanUpOpacity = 0.00f;
    this->CleanUpScale = 0.00f;
    this->GroundingDecalCleanUpDelay = -1.00f;
}


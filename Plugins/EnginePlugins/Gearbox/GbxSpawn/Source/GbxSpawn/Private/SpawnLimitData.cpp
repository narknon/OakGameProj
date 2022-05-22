#include "SpawnLimitData.h"

FSpawnLimitData::FSpawnLimitData() {
    this->TagFilterType = ESpawnPointFilter::Any;
    this->bLimitTotal = false;
    this->bLimitAlive = false;
    this->TagMatchType = EGameplayContainerMatchType::Any;
}


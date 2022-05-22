#include "GameResourcePool.h"

FGameResourcePool::FGameResourcePool() {
    this->ResourcePoolData = NULL;
    this->CurrentValue = 0.00f;
    this->LastTotalRegenerationRateValue = 0.00f;
    this->LastTotalPercentRegenerationRateValue = 0.00f;
    this->LastEffectiveMaxValue = 0.00f;
}


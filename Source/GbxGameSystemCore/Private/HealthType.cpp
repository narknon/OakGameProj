#include "HealthType.h"

FHealthType::FHealthType() {
    this->HealthTypeData = NULL;
    this->HealthPoolData = NULL;
    this->bResetIdleTimerIfNoDamage = false;
    this->bUseChanceToExist = false;
}


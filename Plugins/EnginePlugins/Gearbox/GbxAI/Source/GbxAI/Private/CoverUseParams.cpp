#include "CoverUseParams.h"

FCoverUseParams::FCoverUseParams() {
    this->bMustHaveViewToTarget = false;
    this->bMustBeHiddenFromThreats = false;
    this->InCoverExposurePercent = 0.00f;
    this->bOverrideIdleTime = false;
    this->bOverrideFireTime = false;
}


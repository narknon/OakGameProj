#include "HoldToUseSettings.h"

FHoldToUseSettings::FHoldToUseSettings() {
    this->Mode = EHoldToUseMode::Disabled;
    this->HoldToUseStartTime = 0.00f;
    this->HoldToUseTime = 0.00f;
    this->bUseInteractionBreakDistance = false;
    this->InteractionBreakDistance = 0.00f;
}


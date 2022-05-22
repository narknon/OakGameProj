#include "GFxDuelingTimerObject.h"

UGFxDuelingTimerObject::UGFxDuelingTimerObject() {
    this->TimerState = EGFxDuelingTimerState::TimerOnly;
    this->NumChallengers = 0;
    this->bHasBeenInited = false;
    this->CachedDistanceAwayFromItem = 0.00f;
    this->bIsHudWidget = false;
    this->IsSplitscreenBottom = false;
}


#include "Cover.h"

void ACover::SetEnabled(bool bEnabled) {
}

bool ACover::IsEnabled() const {
    return false;
}

ACover::ACover() {
    this->SlotType = NULL;
    this->SlotInterval = 128.00f;
    this->TotalWidth = 64.00f;
    this->bSlotsAlwaysVisible = false;
    this->bDrawLineOfSight = false;
    this->bDrawAreas = false;
    this->bDrawInvalidViews = false;
    this->bDrawLocationTests = false;
    this->bOverrideAutoAdjust = false;
    this->TargetTestActor = NULL;
    this->HostileTestActor = NULL;
    this->bAutoAdjust = false;
}


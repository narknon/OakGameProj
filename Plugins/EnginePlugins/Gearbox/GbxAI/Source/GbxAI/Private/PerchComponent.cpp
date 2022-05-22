#include "PerchComponent.h"

UPerchComponent::UPerchComponent() {
    this->PerchTag = NULL;
    this->bEnabled = true;
    this->SearchRadius = 1000.00f;
    this->SearchHeight = 1000.00f;
    this->UseRadius = 0.00f;
    this->bUsageTimeOverride = false;
    this->bCooldownTimeOverride = false;
    this->bUserCooldownTimeOverride = false;
    this->CooldownTime = 0.00f;
}


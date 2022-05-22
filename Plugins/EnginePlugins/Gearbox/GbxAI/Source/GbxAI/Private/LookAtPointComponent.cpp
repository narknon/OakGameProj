#include "LookAtPointComponent.h"

ULookAtPointComponent::ULookAtPointComponent() {
    this->LookAtPointTag = NULL;
    this->bEnabled = true;
    this->bSearchDataOverride = false;
    this->SearchHeightOverride = 0.00f;
    this->SearchRadiusOverride = 0.00f;
    this->bUsageTimeOverride = false;
    this->bUserCooldownTimeOverride = false;
}


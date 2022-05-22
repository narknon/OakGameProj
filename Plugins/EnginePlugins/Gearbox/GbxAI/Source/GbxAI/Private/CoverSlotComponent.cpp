#include "CoverSlotComponent.h"

void UCoverSlotComponent::SetEnabled(bool bNewEnabled) {
}

bool UCoverSlotComponent::IsEnabled() const {
    return false;
}

UCoverSlotComponent::UCoverSlotComponent() {
    this->SlotType = NULL;
    this->bEnabled = true;
    this->bAutoDetect = true;
    this->bValid = false;
    this->SlotHeight = ECoverSlotHeight::Low;
    this->SlotOwnerUsing = NULL;
    this->SlotOwnerClaimed = NULL;
}


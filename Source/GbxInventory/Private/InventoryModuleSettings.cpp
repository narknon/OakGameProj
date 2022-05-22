#include "InventoryModuleSettings.h"

UInventoryModuleSettings::UInventoryModuleSettings() {
    this->VeryShortLivedDropLifeSpan = 300.00f;
    this->ShortLivedDropLifeSpan = 900.00f;
    this->LongLivedDropLifeSpan = 1200.00f;
    this->PickupShrinkDuration = 2.00f;
    this->ResetBumpOnPickupFailDelay = 1.00f;
    this->PickupFlyToTargets.AddDefaulted(9);
}


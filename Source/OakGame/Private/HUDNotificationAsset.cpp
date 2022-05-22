#include "HUDNotificationAsset.h"

UHUDNotificationAsset::UHUDNotificationAsset() {
    this->GFxWidgetToDisplay = NULL;
    this->DefaultPriority = 0;
    this->bShouldInterrupt = false;
    this->bInterruptible = true;
    this->MinimumDisplayTime = 3.00f;
    this->DesiredDisplayTime = 3.00f;
    this->TimeoutTime = 10.00f;
    this->bStackable = false;
}


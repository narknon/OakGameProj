#include "GbxMenuInputActionInfo.h"

FGbxMenuInputActionInfo::FGbxMenuInputActionInfo() {
    this->bIsHeld = false;
    this->bIsPressToHold = false;
    this->PressToHoldDuration = 0.00f;
    this->PressToHoldProgress = 0.00f;
}


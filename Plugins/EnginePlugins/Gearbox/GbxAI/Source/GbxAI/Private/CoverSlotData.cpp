#include "CoverSlotData.h"

UCoverSlotData::UCoverSlotData() {
    this->SlotWidth = 64.00f;
    this->SlotHeightLow = 112.00f;
    this->SlotHeightHigh = 256.00f;
    this->bOffGroundCover = false;
    this->bCheckExposure = true;
    this->NavSearchRadius = 100.00f;
}


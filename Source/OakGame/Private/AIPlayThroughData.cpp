#include "AIPlayThroughData.h"

FAIPlayThroughData::FAIPlayThroughData() {
    this->bOverrideUIDisplayName = false;
    this->bOverrideDisplayName = false;
    this->bOverrideDropOnDeathItemPools = false;
    this->bOverrideEquippedItems = false;
    this->bOverrideHealthInformation = false;
    this->DisplayUIName = NULL;
    this->bEquipSingleItemFromCollection = false;
}


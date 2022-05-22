#include "InventoryUISaveGameData.h"

FInventoryUISaveGameData::FInventoryUISaveGameData() {
    this->PickupOrderIndex = 0;
    this->bHasBeenSeenInInventoryMenu = false;
    this->bMarkedAsFavorite = false;
    this->bMarkedAsJunk = false;
    this->InventoryListIndex = 0;
}


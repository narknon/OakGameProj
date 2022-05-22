#include "LootableEventResultItem.h"

FLootableEventResultItem::FLootableEventResultItem() {
    this->OrderIndex = 0;
    this->bDisplayNameIsInventoryDataName = false;
    this->MonetaryValue = 0;
    this->InventoryScoreValue = 0;
    this->bHasAFoilPart = false;
    this->BalanceStateComp = NULL;
}


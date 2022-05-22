#include "InventoryListEntry.h"

FInventoryListEntry::FInventoryListEntry() {
    this->BaseCategoryDefinition = NULL;
    this->Quantity = 0;
    this->StoredActor = NULL;
    this->PlayerDroppability = EPlayerDroppability::EPD_CanDropAndSell;
}


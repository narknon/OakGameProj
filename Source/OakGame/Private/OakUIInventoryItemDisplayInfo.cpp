#include "OakUIInventoryItemDisplayInfo.h"

FOakUIInventoryItemDisplayInfo::FOakUIInventoryItemDisplayInfo() {
    this->ItemLevel = 0;
    this->ItemScore = 0;
    this->bNew = false;
    this->bFavorite = false;
    this->bTrash = false;
    this->bCanEquip = false;
    this->bIsEquipped = false;
    this->bCellLocked = false;
    this->bCellUnavailable = false;
    this->PickupOrderIndex = 0;
    this->UseType = EOakUIInventoryItemUseType::Unknown;
    this->bUseCosmeticLabel = false;
}


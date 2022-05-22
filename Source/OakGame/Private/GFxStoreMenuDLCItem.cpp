#include "GFxStoreMenuDLCItem.h"

FGFxStoreMenuDLCItem::FGFxStoreMenuDLCItem() {
    this->Type = EGFxStoreMenuTabType::Empty;
    this->bPurchased = false;
    this->bDownloaded = false;
    this->DiscountPercent = 0;
}


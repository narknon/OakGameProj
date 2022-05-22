#include "GFxQuickChangeMenuStore.h"

class UInventoryCategoryData;

void UGFxQuickChangeMenuStore::OnInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const {
}

void UGFxQuickChangeMenuStore::extPlayAnimationFinished() const {
}

UGFxQuickChangeMenuStore::UGFxQuickChangeMenuStore() {
    this->EridiumResourceData = NULL;
    this->PlayerEridiumCounter = NULL;
    this->InsufficientFundsTextClip = NULL;
    this->InsufficientFundsTextShadowClip = NULL;
    this->InsufficientFundsObj = NULL;
    this->CachedClickedItem = NULL;
    this->CustomizationUnlockedWidget = NULL;
    this->SoldOutWidget = NULL;
    this->ShopMgr = NULL;
    this->InventoryList = NULL;
    this->CachedOakCharacter = NULL;
}


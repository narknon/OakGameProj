#include "GFxSDUVendorMenu.h"

class UOakSDUData;
class UInventoryCategoryData;

void UGFxSDUVendorMenu::OnSelectedSDUChanged(int32 CurrentSDULevel, UOakSDUData* SDUData) const {
}

void UGFxSDUVendorMenu::OnSDUPurchased(UOakSDUData* OakSDUData, bool bIsSoldOut) const {
}

void UGFxSDUVendorMenu::OnItemCardReady() const {
}

void UGFxSDUVendorMenu::OnInsufficientFunds(UOakSDUData* OakSDUData) const {
}

void UGFxSDUVendorMenu::OnCurrencyQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const {
}

UGFxSDUVendorMenu::UGFxSDUVendorMenu() {
    this->ItemCardMovie = NULL;
    this->CurrencySpinnerOverrideHeight = 400.00f;
    this->CurrencySpinnerSpinTime = 3.00f;
    this->CurrencyWidgetPauseOnNewValueTime = 0.00f;
    this->SDUUnlockedText = FText::FromString(TEXT("SDU Unlocked"));
    this->LoadedItemCard = NULL;
    this->PlayerInfoContainerClip = NULL;
    this->PurchasedItemText = NULL;
    this->WarningText = NULL;
    this->bMenuContentReady = false;
    this->bGameDataReady = false;
    this->bItemCardReady = false;
}


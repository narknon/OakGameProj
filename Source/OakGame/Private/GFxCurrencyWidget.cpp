#include "GFxCurrencyWidget.h"

class UGbxInventoryCategoryData;
class UInventoryCategoryData;

void UGFxCurrencyWidget::OnPauseStateChanged(bool bPaused) const {
}

void UGFxCurrencyWidget::OnOwnerResurrected(int32 CashLost) const {
}

void UGFxCurrencyWidget::OnDisplayCurrencyWidgetOnHUD(UGbxInventoryCategoryData* CurrencyType) const {
}

void UGFxCurrencyWidget::OnCurrencyQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const {
}

void UGFxCurrencyWidget::OnCurrencyDisplayCompleted() const {
}

UGFxCurrencyWidget::UGFxCurrencyWidget() {
    this->TotalSpinnerHeightOverride = 335.00f;
    this->PauseOnNewValueTime = 4.00f;
    this->CostSpinTime = 3.00f;
    this->DelayAfterResurrect = 1.50f;
    this->CostSpinTimeOnResurrect = 0.50f;
    this->PauseOnNewValueTimeOnResurect = 10.00f;
    this->CurrencyCounter = NULL;
    this->AnimationContainerID = TEXT("animationContainer");
    this->InventoryComponent = NULL;
    this->OakCharacter = NULL;
}


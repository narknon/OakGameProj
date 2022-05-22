#include "GFxCurrencyCounterClip.h"

class UInventoryCategoryData;

void UGFxCurrencyCounterClip::OnPostChangeDisplayHoldComplete() {
}

void UGFxCurrencyCounterClip::OnDisplayValueAnimationComplete() {
}

void UGFxCurrencyCounterClip::OnCurrencyQuantityChanged(const UInventoryCategoryData* ItemCategory, int32 Quantity) {
}

UGFxCurrencyCounterClip::UGFxCurrencyCounterClip() {
    this->CurrentDisplayedValue = 0;
    this->CurrencyCounterState = EGFxCurrencyCounterState::Off;
    this->AnimationContainer = NULL;
    this->TotalSpinnerHeightOverride = 350.80f;
    this->CostSpinTime = 3.00f;
    this->PauseOnNewValueTime = 4.00f;
    this->bGamePaused = false;
    this->TotalSliders = 8;
}


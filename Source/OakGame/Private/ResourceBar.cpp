#include "ResourceBar.h"

void UResourceBar::SetTextMaxValue(FText NewText) {
}

void UResourceBar::SetTextCurrentValue(FText NewText) {
}

void UResourceBar::SetPercent(float NewValue) {
}

UResourceBar::UResourceBar() {
    this->ValueBar = NULL;
    this->CurrentValueText = NULL;
    this->MaxValueText = NULL;
}


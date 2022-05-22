#include "GFxVendingMachinePlayerWidget.h"

UGFxVendingMachinePlayerWidget::UGFxVendingMachinePlayerWidget() {
    this->PurchasedText = FText::FromString(TEXT("Purchased!"));
    this->SoldText = FText::FromString(TEXT("Sold!"));
    this->HealthFullText = FText::FromString(TEXT("Health Full!"));
    this->AmmoFullText = FText::FromString(TEXT("Ammo Full!"));
    this->BagFullText = FText::FromString(TEXT("Backpack Full!"));
    this->InsufficientFundsText = FText::FromString(TEXT("Insufficient Funds!"));
    this->VendingPlayerWidgetTopClip = NULL;
    this->VendingPlayerWidgetClip = NULL;
    this->VendingShieldClip = NULL;
    this->VendingHealthClip = NULL;
    this->CurrencyWidgetClip = NULL;
}


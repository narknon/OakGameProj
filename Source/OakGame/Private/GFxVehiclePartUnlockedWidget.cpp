#include "GFxVehiclePartUnlockedWidget.h"

class UInventoryData;
class UInventoryPartData;

void UGFxVehiclePartUnlockedWidget::OnPartUnlocked(TSoftObjectPtr<UInventoryData> Vehicle, TSoftObjectPtr<UInventoryPartData> Part) const {
}

void UGFxVehiclePartUnlockedWidget::extOnPlayComplete() const {
}

UGFxVehiclePartUnlockedWidget::UGFxVehiclePartUnlockedWidget() {
    this->NumPartIcons = 9;
    this->ContentClip = NULL;
    this->HeaderTextClip = NULL;
    this->HeaderTextShadowClip = NULL;
    this->UnlockedTextClip = NULL;
    this->PartIconsClip = NULL;
    this->CurrentIconCount = 0;
    this->RevealState = UGFxVehiclePartUnlockedWidgetState::Off;
}


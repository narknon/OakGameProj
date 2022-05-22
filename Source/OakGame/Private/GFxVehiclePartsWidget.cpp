#include "GFxVehiclePartsWidget.h"

class UInventoryData;
class UInventoryPartData;

void UGFxVehiclePartsWidget::RefreshWidget() const {
}

void UGFxVehiclePartsWidget::PlayTurnInAnimation(TSoftObjectPtr<UInventoryData> Vehicle, TSoftObjectPtr<UInventoryPartData> Part) const {
}

void UGFxVehiclePartsWidget::extBeginCondensed() const {
}

UGFxVehiclePartsWidget::UGFxVehiclePartsWidget() {
    this->InnerClip = NULL;
    this->NotificationText = NULL;
    this->NewPartCountText = NULL;
    this->CondensedPartIcon = NULL;
    this->MaxNumPartIcons = 9;
}


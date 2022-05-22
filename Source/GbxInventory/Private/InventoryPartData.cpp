#include "InventoryPartData.h"

FAttributeInitializationData UInventoryPartData::GetMonetaryValueModifier() const {
    return FAttributeInitializationData{};
}

UInventoryPartData::UInventoryPartData() {
    this->bAvailableForPartInspection = true;
    this->PartInspectionDescription = NULL;
    this->bHideStatsForPartInspection = false;
    this->bShouldIgnorePartBoundsForPickupAttachment = false;
}


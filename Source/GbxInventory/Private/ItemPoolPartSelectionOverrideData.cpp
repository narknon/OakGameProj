#include "ItemPoolPartSelectionOverrideData.h"

class UActorPartData;

void UItemPoolPartSelectionOverrideData::EnumerateInventoryParts(uint8 PartType, TArray<UActorPartData*>& OutPartList) {
}

UItemPoolPartSelectionOverrideData::UItemPoolPartSelectionOverrideData() {
    this->PartSetClass = NULL;
    this->PartTypeEnum = NULL;
}


#include "InventoryGenericPartExpansionData.h"

class UActorPartData;

void UInventoryGenericPartExpansionData::EnumeratePartListForPartType(uint8 PartType, TArray<UActorPartData*>& OutPartList) const {
}

UInventoryGenericPartExpansionData::UInventoryGenericPartExpansionData() {
    this->ExpansionCondition = NULL;
    this->InventoryBalanceCollection = NULL;
}


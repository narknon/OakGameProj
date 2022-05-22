#include "OakInventoryNamingStrategyData.h"

class UInventoryPartData;

void UOakInventoryNamingStrategyData::ForceExtractCombinationNamingData() {
}

void UOakInventoryNamingStrategyData::EnumerateInventoryParts(TArray<UInventoryPartData*>& OutInventoryParts) const {
}

UOakInventoryNamingStrategyData::UOakInventoryNamingStrategyData() {
    this->NamingStrategyToExpand = NULL;
    this->MaxContributingParts = 4;
}


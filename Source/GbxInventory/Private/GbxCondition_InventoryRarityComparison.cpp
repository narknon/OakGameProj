#include "GbxCondition_InventoryRarityComparison.h"

UGbxCondition_InventoryRarityComparison::UGbxCondition_InventoryRarityComparison() {
    this->Operator = EConditionComparisonOperatorType::EqualTo;
    this->ReferenceRarity = NULL;
}


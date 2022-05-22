#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "EConditionComparisonOperatorType.h"
#include "GbxCondition_InventoryRarityComparison.generated.h"

class UInventoryRarityData;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_InventoryRarityComparison : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EConditionComparisonOperatorType Operator;
    
    UPROPERTY(EditAnywhere)
    UInventoryRarityData* ReferenceRarity;
    
public:
    UGbxCondition_InventoryRarityComparison();
};


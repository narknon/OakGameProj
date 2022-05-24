#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_CheckRarity.generated.h"

class UInventoryRarityData;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_CheckRarity : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<UInventoryRarityData*> Rarities;
    
public:
    UGbxCondition_CheckRarity();
};


#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_SpawnCostAvailable.generated.h"

class USpawnOptionData;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API UGbxCondition_SpawnCostAvailable : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USpawnOptionData* SpawnOptions;
    
public:
    UGbxCondition_SpawnCostAvailable();
};


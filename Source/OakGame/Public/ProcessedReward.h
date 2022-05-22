#pragma once
#include "CoreMinimal.h"
#include "ProcessedReward.generated.h"

class UInventoryCategoryData;
class AActor;

USTRUCT(BlueprintType)
struct FProcessedReward {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Currency;
    
    UPROPERTY()
    int32 Experience;
    
    UPROPERTY()
    UInventoryCategoryData* CurrencyType;
    
    UPROPERTY()
    TArray<AActor*> SpawnedInventoryItems;
    
    OAKGAME_API FProcessedReward();
};


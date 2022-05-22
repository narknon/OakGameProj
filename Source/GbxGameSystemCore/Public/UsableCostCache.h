#pragma once
#include "CoreMinimal.h"
#include "UsableCostCache.generated.h"

USTRUCT(BlueprintType)
struct FUsableCostCache {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PrimaryCost;
    
    UPROPERTY()
    int32 SecondaryCost;
    
    UPROPERTY()
    int32 PrimaryHoldUseCost;
    
    UPROPERTY()
    int32 SecondaryHoldUseCost;
    
    GBXGAMESYSTEMCORE_API FUsableCostCache();
};


#pragma once
#include "CoreMinimal.h"
#include "GFxCurrencyCounterQueueInfo.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct FGFxCurrencyCounterQueueInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UInventoryCategoryData* ItemCategory;
    
    UPROPERTY(Transient)
    int32 DeltaValue;
    
    UPROPERTY(Transient)
    int32 StartTotal;
    
    UPROPERTY(Transient)
    int32 FinalTotal;
    
    UPROPERTY(Transient)
    FName StartAudioEvent;
    
    UPROPERTY(Transient)
    FName StopAudioEvent;
    
    OAKGAME_API FGFxCurrencyCounterQueueInfo();
};


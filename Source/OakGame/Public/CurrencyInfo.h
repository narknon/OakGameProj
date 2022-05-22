#pragma once
#include "CoreMinimal.h"
#include "CurrencyInfo.generated.h"

class UInventoryCategoryData;

USTRUCT(BlueprintType)
struct FCurrencyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ItemCategory;
    
    UPROPERTY(EditAnywhere)
    FName IncStartAudioEvent;
    
    UPROPERTY(EditAnywhere)
    FName IncStopAudioEvent;
    
    UPROPERTY(EditAnywhere)
    FName DecStartAudioEvent;
    
    UPROPERTY(EditAnywhere)
    FName DecStopAudioEvent;
    
    UPROPERTY(EditAnywhere)
    FName CurrencyFrameName;
    
    OAKGAME_API FCurrencyInfo();
};


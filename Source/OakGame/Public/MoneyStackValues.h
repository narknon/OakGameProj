#pragma once
#include "CoreMinimal.h"
#include "MoneyStackValues.generated.h"

class UWwiseEvent;
class UItemPoolListInterface;

USTRUCT(BlueprintType)
struct FMoneyStackValues {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* AudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolListInterface* ItemPool;
    
    OAKGAME_API FMoneyStackValues();
};


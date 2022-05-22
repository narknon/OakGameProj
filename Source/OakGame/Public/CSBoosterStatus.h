#pragma once
#include "CoreMinimal.h"
#include "CSBoosterStatus.generated.h"

class UOakStatusEffectManagerComponent;

USTRUCT(BlueprintType)
struct FCSBoosterStatus {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, NotReplicated)
    UOakStatusEffectManagerComponent* Owner;
    
    UPROPERTY()
    int8 BoosterStatusIndex;
    
    UPROPERTY()
    float TimeDuration;
    
    UPROPERTY()
    float TimeRemaining;
    
public:
    OAKGAME_API FCSBoosterStatus();
};


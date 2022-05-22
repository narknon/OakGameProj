#pragma once
#include "CoreMinimal.h"
#include "StreamerBoosterStatus.generated.h"

class UOakStatusEffectManagerComponent;

USTRUCT(BlueprintType)
struct FStreamerBoosterStatus {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, NotReplicated)
    UOakStatusEffectManagerComponent* Owner;
    
    UPROPERTY()
    int8 PrimaryBoosterStatusIndex;
    
    UPROPERTY()
    int8 SecondaryBoosterStatusIndex;
    
    UPROPERTY()
    float TimeDuration;
    
    UPROPERTY()
    float TimeRemaining;
    
public:
    OAKGAME_API FStreamerBoosterStatus();
};


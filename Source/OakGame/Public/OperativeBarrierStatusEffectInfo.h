#pragma once
#include "CoreMinimal.h"
#include "OperativeBarrierStatusEffectInfo.generated.h"

class UStatusEffectData;

USTRUCT(BlueprintType)
struct FOperativeBarrierStatusEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStatusEffectData* OwnerStatusEffect;
    
    UPROPERTY()
    UStatusEffectData* DefaultStatusEffect;
    
    UPROPERTY()
    float Duration;
    
    OAKGAME_API FOperativeBarrierStatusEffectInfo();
};


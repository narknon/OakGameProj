#pragma once
#include "CoreMinimal.h"
#include "MatchmakingModifierData.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingModifierData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName TargetResolverName;
    
    UPROPERTY()
    FName EffectName;
    
    UPROPERTY()
    float Value;
    
    OAKGAME_API FMatchmakingModifierData();
};


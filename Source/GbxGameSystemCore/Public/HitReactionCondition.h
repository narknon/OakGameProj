#pragma once
#include "CoreMinimal.h"
#include "EHitReactionConditionContext.h"
#include "HitReactionCondition.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FHitReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    EHitReactionConditionContext Context;
    
    UPROPERTY(EditAnywhere)
    EHitReactionConditionContext OptionalContext;
    
    GBXGAMESYSTEMCORE_API FHitReactionCondition();
};


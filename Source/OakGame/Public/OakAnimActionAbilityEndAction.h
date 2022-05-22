#pragma once
#include "CoreMinimal.h"
#include "EOakAnimActionAbilityEndAction.h"
#include "OakAnimActionAbilityEndAction.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FOakAnimActionAbilityEndAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EOakAnimActionAbilityEndAction EndAction;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGbxCondition* Condition;
    
    OAKGAME_API FOakAnimActionAbilityEndAction();
};


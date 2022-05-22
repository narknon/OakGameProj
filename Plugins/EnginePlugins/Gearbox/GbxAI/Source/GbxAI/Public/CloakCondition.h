#pragma once
#include "CoreMinimal.h"
#include "CloakCondition.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FCloakCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    bool bCloaked;
    
    GBXAI_API FCloakCondition();
};


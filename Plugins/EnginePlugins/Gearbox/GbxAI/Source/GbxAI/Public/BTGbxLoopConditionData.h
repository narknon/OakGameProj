#pragma once
#include "CoreMinimal.h"
#include "BTGbxLoopConditionData.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FBTGbxLoopConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    bool bInvert;
    
    GBXAI_API FBTGbxLoopConditionData();
};


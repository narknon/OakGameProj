#pragma once
#include "CoreMinimal.h"
#include "TextElementCondition.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FTextElementCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    FText TextToAdd;
    
    OAKGAME_API FTextElementCondition();
};


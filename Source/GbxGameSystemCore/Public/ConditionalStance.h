#pragma once
#include "CoreMinimal.h"
#include "ConditionalStance.generated.h"

class UGbxCondition;
class UStanceDataProvider;

USTRUCT(BlueprintType)
struct FConditionalStance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* StanceProvider;
    
    GBXGAMESYSTEMCORE_API FConditionalStance();
};


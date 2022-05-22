#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConditionActionPair.generated.h"

class UGbxCondition;
class UGbxAction;

USTRUCT(BlueprintType)
struct FConditionActionPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ActionClass;
    
    GBXGAMESYSTEMCORE_API FConditionActionPair();
};


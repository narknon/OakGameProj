#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGbxActionNetMode.h"
#include "ConditionalActionInfo.generated.h"

class UGbxCondition;
class UGbxAction;

USTRUCT(BlueprintType)
struct FConditionalActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Action;
    
    UPROPERTY(EditAnywhere)
    EGbxActionNetMode ActionNetMode;
    
    GBXWEAPON_API FConditionalActionInfo();
};


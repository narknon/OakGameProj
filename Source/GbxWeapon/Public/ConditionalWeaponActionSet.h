#pragma once
#include "CoreMinimal.h"
#include "ConditionalActionInfo.h"
#include "ConditionalWeaponActionSet.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FConditionalWeaponActionSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionalActionInfo> ConditionalActions;
    
    GBXWEAPON_API FConditionalWeaponActionSet();
};


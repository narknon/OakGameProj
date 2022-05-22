#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "ConditionalDamageDamageConditionalValue.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FConditionalDamageDamageConditionalValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageValue;
    
    GBXGAMESYSTEMCORE_API FConditionalDamageDamageConditionalValue();
};


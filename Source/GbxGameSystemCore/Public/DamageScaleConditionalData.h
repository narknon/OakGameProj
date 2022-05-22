#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "DamageScaleConditionalData.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FDamageScaleConditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEvaluateUsingAttacker;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    bool bAddValueToDamage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageScale;
    
    GBXGAMESYSTEMCORE_API FDamageScaleConditionalData();
};


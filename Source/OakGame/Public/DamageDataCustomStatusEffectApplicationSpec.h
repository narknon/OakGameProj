#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "DamageDataCustomStatusEffectApplicationSpec.generated.h"

class UStatusEffectData;
class UGbxCondition;

USTRUCT(BlueprintType)
struct FDamageDataCustomStatusEffectApplicationSpec {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStatusEffectData* StatusEffect;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    bool bApplyToEnemiesOnly;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData EffectDuration;
    
    OAKGAME_API FDamageDataCustomStatusEffectApplicationSpec();
};


#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityEffect.generated.h"

class UGbxAbilityEffectTargetResolutionData;
class UStatusEffectData;
class UGbxCondition;

USTRUCT(BlueprintType)
struct FGbxAbilityEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxAbilityEffectTargetResolutionData*> TargetResolutionStrategies;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    GBXABILITIES_API FGbxAbilityEffect();
};


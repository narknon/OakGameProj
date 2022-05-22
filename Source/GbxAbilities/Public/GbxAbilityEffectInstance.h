#pragma once
#include "CoreMinimal.h"
#include "StatusEffectSpec.h"
#include "GbxAbilityEffectInstanceTarget.h"
#include "GbxAbilityEffectInstance.generated.h"

class UGbxAbility;
class UGbxCondition;
class UGbxAbilityEffectTargetResolutionData;

USTRUCT(BlueprintType)
struct FGbxAbilityEffectInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxAbility* Owner;
    
    UPROPERTY()
    FStatusEffectSpec StatusEffectSpec;
    
    UPROPERTY()
    TArray<FGbxAbilityEffectInstanceTarget> Targets;
    
    UPROPERTY()
    UGbxCondition* Condition;
    
    UPROPERTY()
    TArray<UGbxAbilityEffectTargetResolutionData*> TargetResolutionStrategies;
    
    GBXABILITIES_API FGbxAbilityEffectInstance();
};


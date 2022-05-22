#pragma once
#include "CoreMinimal.h"
#include "PhaseTranceActivationComboData.generated.h"

class UOakActionAbilityAugmentData_PhaseTrance_Attack;
class UOakActionAbilityAugmentData_PhaseTrance_Effect;
class UOakActionAbilityAugmentData_PhaseTrance_Element;

USTRUCT(BlueprintType)
struct FPhaseTranceActivationComboData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UOakActionAbilityAugmentData_PhaseTrance_Attack* AttackData;
    
    UPROPERTY(BlueprintReadWrite)
    UOakActionAbilityAugmentData_PhaseTrance_Effect* EffectData;
    
    UPROPERTY(BlueprintReadWrite)
    UOakActionAbilityAugmentData_PhaseTrance_Element* ElementData;
    
    OAKGAME_API FPhaseTranceActivationComboData();
};


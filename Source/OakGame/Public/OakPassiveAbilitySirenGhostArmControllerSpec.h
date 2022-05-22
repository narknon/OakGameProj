#pragma once
#include "CoreMinimal.h"
#include "EOakPassiveAbilitySirenArmDurationType.h"
#include "OakPassiveAbilitySirenGhostArmControllerSpec.generated.h"

class UOakAbilityTimerData;
class UStatusEffectData;

USTRUCT(BlueprintType)
struct FOakPassiveAbilitySirenGhostArmControllerSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOakPassiveAbilitySirenArmDurationType DurationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UOakAbilityTimerData* TimerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
    OAKGAME_API FOakPassiveAbilitySirenGhostArmControllerSpec();
};


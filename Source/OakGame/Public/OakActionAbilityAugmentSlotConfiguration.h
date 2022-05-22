#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbilityAugmentConfiguration.h"
#include "OakActionAbilityAugmentSlotConfiguration.generated.h"

class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;

USTRUCT(BlueprintType)
struct FOakActionAbilityAugmentSlotConfiguration {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UOakActionAbility> ActionAbilityClass;
    
    UPROPERTY()
    UOakActionAbilityAugmentSlotData* SlotData;
    
    UPROPERTY()
    TArray<FOakActionAbilityAugmentConfiguration> AugmentConfigurations;
    
public:
    OAKGAME_API FOakActionAbilityAugmentSlotConfiguration();
};


#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentConfigurationSetting.generated.h"

class UOakActionAbilityAugmentData;
class UOakActionAbilityAugmentSlotData;

USTRUCT(BlueprintType)
struct FOakActionAbilityAugmentConfigurationSetting {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UOakActionAbilityAugmentSlotData* ModSlotData;
    
    UPROPERTY()
    UOakActionAbilityAugmentData* ModData;
    
public:
    OAKGAME_API FOakActionAbilityAugmentConfigurationSetting();
};


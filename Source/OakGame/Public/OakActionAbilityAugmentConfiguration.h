#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentConfigurationSetting.h"
#include "OakActionAbilityAugmentConfiguration.generated.h"

class UOakActionAbilityAugmentData;

USTRUCT(BlueprintType)
struct FOakActionAbilityAugmentConfiguration {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UOakActionAbilityAugmentData* AugmentData;
    
    UPROPERTY()
    TArray<FOakActionAbilityAugmentConfigurationSetting> Settings;
    
public:
    OAKGAME_API FOakActionAbilityAugmentConfiguration();
};


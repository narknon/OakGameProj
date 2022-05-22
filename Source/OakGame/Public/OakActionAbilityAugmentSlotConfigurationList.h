#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentSlotConfiguration.h"
#include "OakActionAbilityAugmentSlotConfigurationList.generated.h"

class UOakPlayerAbilityManagerComponent;

USTRUCT(BlueprintType)
struct FOakActionAbilityAugmentSlotConfigurationList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UOakPlayerAbilityManagerComponent* Owner;
    
    UPROPERTY()
    TArray<FOakActionAbilityAugmentSlotConfiguration> SlotConfigurations;
    
public:
    OAKGAME_API FOakActionAbilityAugmentSlotConfigurationList();
};


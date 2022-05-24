#pragma once
#include "CoreMinimal.h"
#include "EOakPassiveAbilityHUDIconActivationType.h"
#include "OakPassiveAbilityHUDIconData.generated.h"

class UOakPlayerAbilityHUDItemData;
class UOakAbilityTimerData;
class UStatusEffectData;

USTRUCT(BlueprintType)
struct FOakPassiveAbilityHUDIconData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EOakPassiveAbilityHUDIconActivationType ActivationType;
    
    UPROPERTY(EditDefaultsOnly)
    UStatusEffectData* CustomStatusEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UOakAbilityTimerData* AbilityTimerData;
    
    UPROPERTY(EditDefaultsOnly)
    UOakPlayerAbilityHUDItemData* HUDItemData;
    
    OAKGAME_API FOakPassiveAbilityHUDIconData();
};


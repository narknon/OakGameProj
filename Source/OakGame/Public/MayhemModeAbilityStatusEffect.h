#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectData.h"
#include "MayhemModeAbilityStatusEffect.generated.h"

class UGbxAbility;

UCLASS(Transient)
class OAKGAME_API UMayhemModeAbilityStatusEffect : public UStatusEffectData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UGbxAbility> AbilityClass;
    
    UPROPERTY()
    bool bAllowedToRunOnVehicles;
    
    UMayhemModeAbilityStatusEffect();
};


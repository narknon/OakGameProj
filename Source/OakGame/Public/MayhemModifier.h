#pragma once
#include "CoreMinimal.h"
#include "MayhemModifier.generated.h"

class UGbxAbility;
class UGbxAbilityEffectTargetResolutionData;

USTRUCT(BlueprintType)
struct OAKGAME_API FMayhemModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAbility> ModifierAbility;
    
    UPROPERTY(EditAnywhere)
    UGbxAbilityEffectTargetResolutionData* ModifierTarget;
    
    FMayhemModifier();
};


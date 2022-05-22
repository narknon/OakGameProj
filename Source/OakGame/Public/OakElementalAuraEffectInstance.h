#pragma once
#include "CoreMinimal.h"
#include "OakElementalAuraEffectData.h"
#include "OakElementalAuraEffectInstance.generated.h"

USTRUCT(BlueprintType)
struct FOakElementalAuraEffectInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOakElementalAuraEffectData Data;
    
    OAKGAME_API FOakElementalAuraEffectInstance();
};


#pragma once
#include "CoreMinimal.h"
#include "LightBeamInitializationData.h"
#include "OakLightBeamInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FOakLightBeamInitializationData : public FLightBeamInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float BaseStatusEffectChance;
    
    UPROPERTY(BlueprintReadWrite)
    float BaseStatusEffectDamage;
    
    UPROPERTY(BlueprintReadWrite)
    float BaseStatusEffectDuration;
    
    OAKGAME_API FOakLightBeamInitializationData();
};


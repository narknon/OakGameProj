#pragma once
#include "CoreMinimal.h"
#include "StandInLightingComponentConfig.h"
#include "StandInLightingConfig.generated.h"

USTRUCT(BlueprintType)
struct FStandInLightingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FStandInLightingComponentConfig> LightComponents;
    
    UPROPERTY(EditAnywhere)
    float AmbientCubemapIntensity;
    
    OAKGAME_API FStandInLightingConfig();
};


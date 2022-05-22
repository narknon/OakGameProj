#pragma once
#include "CoreMinimal.h"
#include "ControlledLight.generated.h"

class ALight;

USTRUCT(BlueprintType)
struct FControlledLight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float IntensityMultiplier;
    
    UPROPERTY(EditAnywhere)
    ALight* LightActor;
    
    GBXTIMEOFDAY_API FControlledLight();
};


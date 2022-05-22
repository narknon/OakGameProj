#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_Land.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_Land {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float GroundSearchDistance;
    
    UPROPERTY(EditAnywhere)
    float FlySearchDistance;
    
    UPROPERTY(EditAnywhere)
    float UpdatePeriod;
    
    GBXAI_API FAIAspectSettings_Land();
};


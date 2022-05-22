#pragma once
#include "CoreMinimal.h"
#include "WindLocalAxisSensitivity.generated.h"

USTRUCT(BlueprintType)
struct GBXAUDIO_API FWindLocalAxisSensitivity {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float PositiveDirectionSensitivity;
    
    UPROPERTY(EditDefaultsOnly)
    float NegativeDirectionSensitivity;
    
    FWindLocalAxisSensitivity();
};


#pragma once
#include "CoreMinimal.h"
#include "WindLocalAxisSensitivity.h"
#include "WindDirectionalSensitivity.generated.h"

USTRUCT(BlueprintType)
struct GBXAUDIO_API FWindDirectionalSensitivity {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FWindLocalAxisSensitivity LocalX;
    
    UPROPERTY(EditDefaultsOnly)
    FWindLocalAxisSensitivity LocalY;
    
    UPROPERTY(EditDefaultsOnly)
    FWindLocalAxisSensitivity LocalZ;
    
    FWindDirectionalSensitivity();
};


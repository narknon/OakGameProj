#pragma once
#include "CoreMinimal.h"
#include "VehicleEffect.generated.h"

class UBaseVehicleEffectData;

USTRUCT(BlueprintType)
struct FVehicleEffect {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBaseVehicleEffectData* EffectData;
    
    OAKGAME_API FVehicleEffect();
};


#pragma once
#include "CoreMinimal.h"
#include "EVehicleEffectEvent.h"
#include "VehicleEffectQueryData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleEffectQueryData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVehicleEffectEvent EffectEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ComponentTag;
    
    OAKGAME_API FVehicleEffectQueryData();
};


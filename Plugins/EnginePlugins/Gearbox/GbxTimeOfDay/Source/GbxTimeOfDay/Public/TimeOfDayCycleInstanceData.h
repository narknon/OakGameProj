#pragma once
#include "CoreMinimal.h"
#include "LayerCurveData.h"
#include "TimeOfDayCycleInstanceData.generated.h"

class UTimeOfDayCycle;

USTRUCT(BlueprintType)
struct GBXTIMEOFDAY_API FTimeOfDayCycleInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTimeOfDayCycle* ParentCycle;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCycleLength;
    
    UPROPERTY(EditAnywhere)
    float OverrideCycleLength;
    
private:
    UPROPERTY()
    TArray<FLayerCurveData> LayerCurveData;
    
public:
    FTimeOfDayCycleInstanceData();
};


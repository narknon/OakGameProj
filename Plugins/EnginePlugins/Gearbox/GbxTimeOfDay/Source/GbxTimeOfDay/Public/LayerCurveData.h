#pragma once
#include "CoreMinimal.h"
#include "LayerParameterCurves.h"
#include "LayerPropertyCurves.h"
#include "TimeOfDayEvent.h"
#include "LayerCurveData.generated.h"

USTRUCT(BlueprintType)
struct FLayerCurveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName LayerName;
    
    UPROPERTY()
    FLayerParameterCurves ParameterLayerCurves;
    
    UPROPERTY()
    FLayerPropertyCurves PropertyLayerCurves;
    
    UPROPERTY()
    TArray<FTimeOfDayEvent> LayerEvents;
    
    GBXTIMEOFDAY_API FLayerCurveData();
};


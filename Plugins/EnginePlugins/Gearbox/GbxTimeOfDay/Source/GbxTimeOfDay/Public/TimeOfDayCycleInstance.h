#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LayerParameterCurves.h"
#include "LayerPropertyCurves.h"
#include "TimeOfDayCycleInstance.generated.h"

class UTimeOfDayCycle;

UCLASS(Deprecated, NotPlaceable)
class GBXTIMEOFDAY_API UDEPRECATED_TimeOfDayCycleInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTimeOfDayCycle* ParentCycle;
    
    UPROPERTY()
    bool bOverrideCycleLength;
    
    UPROPERTY()
    float OverrideCycleLength;
    
    UPROPERTY()
    TArray<FLayerParameterCurves> ParameterLayerCurves;
    
    UPROPERTY()
    TArray<FLayerPropertyCurves> PropertyLayerCurves;
    
    UDEPRECATED_TimeOfDayCycleInstance();
};


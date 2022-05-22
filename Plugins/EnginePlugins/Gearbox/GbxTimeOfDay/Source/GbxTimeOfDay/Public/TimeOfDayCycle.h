#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TimeOfDayCycle.generated.h"

class UMaterialParameterCollection;
class UWwiseRtpc;

UCLASS()
class GBXTIMEOFDAY_API UTimeOfDayCycle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* ParameterCollection;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* TimeOfDayAudioParameter;
    
    UPROPERTY(EditAnywhere)
    float CycleLength;
    
    UTimeOfDayCycle();
};


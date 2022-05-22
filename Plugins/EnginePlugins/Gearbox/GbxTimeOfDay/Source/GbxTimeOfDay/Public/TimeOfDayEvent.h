#pragma once
#include "CoreMinimal.h"
#include "ETimeOfDayState.h"
#include "TimeOfDayEvent.generated.h"

USTRUCT(BlueprintType)
struct FTimeOfDayEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    float EventTime;
    
    UPROPERTY()
    FName EventName;
    
    UPROPERTY()
    ETimeOfDayState State;
    
    GBXTIMEOFDAY_API FTimeOfDayEvent();
};


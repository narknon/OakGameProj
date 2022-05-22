#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayKeyBase.h"
#include "ETimeOfDayState.h"
#include "TimeOfDayEventKey.generated.h"

UCLASS()
class GBXTIMEOFDAY_API UTimeOfDayEventKey : public UTimeOfDayKeyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY(EditAnywhere)
    ETimeOfDayState State;
    
    UTimeOfDayEventKey();
};


#pragma once
#include "CoreMinimal.h"
#include "MissionObserverEventFiredDelegate.h"
#include "MissionObserverEvent.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FMissionObserverEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY(Transient)
    bool bLastConditionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGbxCondition* EnabledCondition;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FMissionObserverEventFired OnConditionTrue;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FMissionObserverEventFired OnConditionFalse;
    
    GBXMISSION_API FMissionObserverEvent();
};


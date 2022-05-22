#pragma once
#include "CoreMinimal.h"
#include "MissionEnableConditionEventFiredDelegate.h"
#include "MissionEnableConditionEvent.generated.h"

class UMissionEnableCondition;

USTRUCT(BlueprintType)
struct FMissionEnableConditionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UMissionEnableCondition* EnableCondition;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FMissionEnableConditionEventFired OnLoad;
    
    GBXMISSION_API FMissionEnableConditionEvent();
};


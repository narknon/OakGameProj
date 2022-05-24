#pragma once
#include "CoreMinimal.h"
#include "EGFxMissionTrackerAnimationType.h"
#include "MissionObjectiveReference.h"
#include "GFxMissionTrackerAnimationData.generated.h"

class UGFxMissionTrackerSlot;

USTRUCT()
struct FGFxMissionTrackerAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText Description;
    
    UPROPERTY(Transient)
    EGFxMissionTrackerAnimationType AnimationType;
    
    UPROPERTY(Transient)
    FMissionObjectiveReference MissionObjectiveLink;
    
    UPROPERTY(Transient)
    UGFxMissionTrackerSlot* OptionalSlotToClearOut;
    
    OAKGAME_API FGFxMissionTrackerAnimationData();
};


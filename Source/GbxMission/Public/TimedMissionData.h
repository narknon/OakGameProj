#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TimedMissionData.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct FTimedMissionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY()
    float SecondsLeft;
    
    UPROPERTY()
    float StartingSeconds;
    
    UPROPERTY()
    bool bTimerRunning;
    
    UPROPERTY()
    bool bFailOnTimerExpiration;
    
    UPROPERTY()
    bool bTimerExpired;
    
    GBXMISSION_API FTimedMissionData();
};


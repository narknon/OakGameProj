#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMissionStatus.h"
#include "MissionStatusPlayerData.generated.h"

class UMissionObjectiveSet;
class UMission;

USTRUCT(BlueprintType)
struct FMissionStatusPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY()
    TEnumAsByte<EMissionStatus> Status;
    
    UPROPERTY()
    TArray<uint32> ObjectivesProgress;
    
    UPROPERTY()
    UMissionObjectiveSet* ActiveObjectiveSet;
    
    UPROPERTY()
    bool bHasBeenViewedInLog;
    
    UPROPERTY()
    bool bKickoffPlayed;
    
    UPROPERTY()
    uint8 LeagueInstance;
    
    GBXMISSION_API FMissionStatusPlayerData();
};


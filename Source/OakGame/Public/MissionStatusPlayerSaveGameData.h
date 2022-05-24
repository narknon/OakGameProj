#pragma once
#include "CoreMinimal.h"
#include "EMissionStatus.h"
#include "MissionStatusPlayerSaveGameData.generated.h"

class UMission;
class UMissionObjectiveSet;

USTRUCT(BlueprintType)
struct FMissionStatusPlayerSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<EMissionStatus> Status;
    
    UPROPERTY(VisibleAnywhere)
    bool bHasBeenViewedInLog;
    
    UPROPERTY(VisibleAnywhere)
    bool bKickoffPlayed;
    
    UPROPERTY(VisibleAnywhere)
    TArray<uint32> ObjectivesProgress;
    
    UPROPERTY(VisibleAnywhere)
    uint8 LeagueInstance;
    
private:
    UPROPERTY(VisibleAnywhere)
    TSoftClassPtr<UMission> MissionClassPath;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UMissionObjectiveSet> ActiveObjectiveSetPath;
    
    UPROPERTY(VisibleAnywhere)
    uint32 DlcPackageId;
    
public:
    OAKGAME_API FMissionStatusPlayerSaveGameData();
};


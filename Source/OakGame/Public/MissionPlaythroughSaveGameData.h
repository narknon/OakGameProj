#pragma once
#include "CoreMinimal.h"
#include "MissionStatusPlayerSaveGameData.h"
#include "MissionPlaythroughSaveGameData.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct FMissionPlaythroughSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FMissionStatusPlayerSaveGameData> MissionList;
    
private:
    UPROPERTY(VisibleAnywhere)
    TSoftClassPtr<UMission> TrackedMissionClassPath;
    
public:
    OAKGAME_API FMissionPlaythroughSaveGameData();
};


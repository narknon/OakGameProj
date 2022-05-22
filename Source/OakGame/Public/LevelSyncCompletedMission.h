#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LevelSyncCompletedMission.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct FLevelSyncCompletedMission {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY()
    int32 Level;
    
    OAKGAME_API FLevelSyncCompletedMission();
};


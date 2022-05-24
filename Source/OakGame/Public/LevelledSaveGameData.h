#pragma once
#include "CoreMinimal.h"
#include "LevelledSaveGameData.generated.h"

class UTravelStationData;
class UItemPoolData;
class UMission;
class UMissionObjectiveSet;

USTRUCT(BlueprintType)
struct FLevelledSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTravelStationData> InitialTravelStation;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UMission> ActiveMissionClass;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMissionObjectiveSet> ActiveMissionObjectiveSet;
    
    UPROPERTY(EditAnywhere)
    uint32 CreditsAmount;
    
    UPROPERTY(EditAnywhere)
    uint32 EridiumAmount;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UItemPoolData>> DefaultInventory;
    
    UPROPERTY(EditAnywhere)
    uint32 RandomRolls;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UItemPoolData>> RandomInventory;
    
    OAKGAME_API FLevelledSaveGameData();
};


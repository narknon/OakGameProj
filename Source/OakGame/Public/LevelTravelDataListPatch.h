#pragma once
#include "CoreMinimal.h"
#include "LevelTravelDataListPatch.generated.h"

class UGbxCondition;
class ULevelTravelStationData;

USTRUCT(BlueprintType)
struct FLevelTravelDataListPatch {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ULevelTravelStationData* LevelTravelData;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* LevelTravelDataCondition;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* MissionIconCondition;
    
    UPROPERTY(EditAnywhere)
    int32 MovieToPlayDuringTravelMap;
    
    OAKGAME_API FLevelTravelDataListPatch();
};


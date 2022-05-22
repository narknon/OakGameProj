#pragma once
#include "CoreMinimal.h"
#include "TravelDataConditional.generated.h"

class UGbxCondition;
class ULevelTravelStationData;

USTRUCT(BlueprintType)
struct FTravelDataConditional {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString TravelDataSelection;
    
    UPROPERTY(VisibleAnywhere)
    ULevelTravelStationData* LevelTravelData;
    
    UPROPERTY(EditAnywhere)
    int32 MovieToPlayDuringTravelMap;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* ConditionToPlayMovie;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    GBXTRAVELSTATION_API FTravelDataConditional();
};


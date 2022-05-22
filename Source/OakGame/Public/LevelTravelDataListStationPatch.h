#pragma once
#include "CoreMinimal.h"
#include "LevelTravelDataListPatch.h"
#include "LevelTravelDataListStationPatch.generated.h"

USTRUCT(BlueprintType)
struct FLevelTravelDataListStationPatch {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString AssociatedTravelStationName;
    
    UPROPERTY(EditAnywhere)
    TArray<FLevelTravelDataListPatch> PatchedTravelData;
    
    OAKGAME_API FLevelTravelDataListStationPatch();
};


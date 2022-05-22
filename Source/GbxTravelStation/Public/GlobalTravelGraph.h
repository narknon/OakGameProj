#pragma once
#include "CoreMinimal.h"
#include "TravelGraph.h"
#include "GlobalTravelGraph.generated.h"

class UObject;
class ULevelData;

UCLASS(BlueprintType)
class GBXTRAVELSTATION_API UGlobalTravelGraph : public UTravelGraph {
    GENERATED_BODY()
public:
    UGlobalTravelGraph();
    UFUNCTION(BlueprintCallable)
    static void DebugFindClosestLevel(UObject* WorldContextObject, ULevelData* StartingLevel, ULevelData* DestinationLevel);
    
};


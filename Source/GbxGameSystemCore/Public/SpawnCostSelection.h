#pragma once
#include "CoreMinimal.h"
#include "ESpawnCostSelection.h"
#include "SpawnCostSelection.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSpawnCostSelection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpawnCostSelection Selection;
    
    UPROPERTY(EditAnywhere)
    FName Preset;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnCost;
    
    FSpawnCostSelection();
};


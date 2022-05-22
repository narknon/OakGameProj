#pragma once
#include "CoreMinimal.h"
#include "MapIDData.h"
#include "GameStateSaveData.generated.h"

USTRUCT(BlueprintType)
struct FGameStateSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMapIDData LastTraveledMapID;
    
    UPROPERTY(EditAnywhere)
    int32 MayhemLevel;
    
    UPROPERTY(EditAnywhere)
    int32 MayhemRandomSeed;
    
    OAKGAME_API FGameStateSaveData();
};


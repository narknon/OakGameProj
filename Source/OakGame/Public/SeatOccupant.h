#pragma once
#include "CoreMinimal.h"
#include "SeatOccupant.generated.h"

class USpawnOptionData;

USTRUCT(BlueprintType)
struct FSeatOccupant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SeatSlot;
    
    UPROPERTY(EditAnywhere)
    USpawnOptionData* SpawnOptions;
    
    OAKGAME_API FSeatOccupant();
};


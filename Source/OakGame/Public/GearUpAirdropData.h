#pragma once
#include "CoreMinimal.h"
#include "GearUpAirdropData.generated.h"

class AOakMissionSpawner;

USTRUCT(BlueprintType)
struct FGearUpAirdropData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AOakMissionSpawner* Spawner;
    
    OAKGAME_API FGearUpAirdropData();
};


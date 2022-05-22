#pragma once
#include "CoreMinimal.h"
#include "MissionSpawnerFailsafeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMissionSpawnerFailsafeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY()
    int32 FailsafeSeconds;
    
    OAKGAME_API FMissionSpawnerFailsafeData();
};


#pragma once
#include "CoreMinimal.h"
#include "EncounterAdvanceData.h"
#include "SpawnLimitData.h"
#include "EncounterWave.generated.h"

class USpawnerStyle;

USTRUCT(BlueprintType)
struct FEncounterWave {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USpawnerStyle* SpawnerStyle;
    
    UPROPERTY(EditAnywhere)
    FEncounterAdvanceData Advancement;
    
    UPROPERTY(EditAnywhere)
    float WarmupTimer;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnLimitData> Limits;
    
    UPROPERTY(EditAnywhere)
    FName SpawnPointGroupName;
    
    GBXSPAWN_API FEncounterWave();
};


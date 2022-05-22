#pragma once
#include "CoreMinimal.h"
#include "SpawnerActorData.generated.h"

class AActor;
class USpawnFactory;

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnerActorData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY()
    USpawnFactory* Factory;
    
    UPROPERTY()
    AActor* Owner;
    
    FSpawnerActorData();
};


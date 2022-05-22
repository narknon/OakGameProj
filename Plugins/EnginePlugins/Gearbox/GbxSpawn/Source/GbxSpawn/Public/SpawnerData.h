#pragma once
#include "CoreMinimal.h"
#include "SpawnerActorData.h"
#include "SpawnerData.generated.h"

class USpawnerComponent;
class USpawnManager;
class AActor;
class ASpawner;
class USpawnDLCScript;
class USpawnerStyle;

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnerData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USpawnManager* Manager;
    
    UPROPERTY()
    AActor* Owner;
    
    UPROPERTY()
    ASpawner* Spawner;
    
    UPROPERTY(Export)
    USpawnerComponent* SpawnerComp;
    
    UPROPERTY()
    USpawnerStyle* SpawnerStyle;
    
    UPROPERTY(Transient)
    TArray<FSpawnerActorData> Actors;
    
    UPROPERTY()
    TArray<AActor*> DeadActors;
    
    UPROPERTY(Transient)
    TArray<USpawnDLCScript*> DLCScripts;
    
public:
    FSpawnerData();
};


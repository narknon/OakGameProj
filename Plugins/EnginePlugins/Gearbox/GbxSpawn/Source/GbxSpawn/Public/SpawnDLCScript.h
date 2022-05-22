#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpawnDLCScript.generated.h"

class USpawnerComponent;
class AActor;

UCLASS(Abstract, Blueprintable, Const)
class GBXSPAWN_API USpawnDLCScript : public UObject {
    GENERATED_BODY()
public:
    USpawnDLCScript();
    UFUNCTION(BlueprintImplementableEvent)
    void OnAllSpawned(USpawnerComponent* SpawnerComponent) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAllDied(USpawnerComponent* SpawnerComponent) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActorSpawned(USpawnerComponent* SpawnerComponent, AActor* Actor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActorDied(USpawnerComponent* SpawnerComponent, AActor* Actor) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPointProvider.h"
#include "GameplayTagContainer.h"
#include "SpawnPointEventDelegate.h"
#include "SpawnPoint.generated.h"

class USpawnerComponent;
class USceneComponent;
class USpawnPointComponent;

UCLASS(Abstract)
class GBXSPAWN_API ASpawnPoint : public AActor, public ISpawnPointProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnPointEvent OnActorSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnPointEvent OnActorDied;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* SpawnRootComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USpawnPointComponent* SpawnPointComponent;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<USpawnerComponent*> ConnectedSpawners;
    
    UPROPERTY(Export)
    USceneComponent* TempRootFix;
    
public:
    ASpawnPoint();
    UFUNCTION(BlueprintCallable)
    void SetSpawnStyleTag(FGameplayTag NewTag);
    
    UFUNCTION(BlueprintCallable)
    void ResetStretchPoint();
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetSpawnStyleTag() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSpawnPoint();
    
    UFUNCTION(BlueprintCallable)
    void DisableSpawnPoint();
    
    
    // Fix for true pure virtual functions not being implemented
};


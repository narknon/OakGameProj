#pragma once
#include "CoreMinimal.h"
#include "GbxSpawner.h"
#include "LevelActorPersistenceInterface.h"
#include "OakSpawner.generated.h"

class URegionBalanceStateComponent;
class AActor;
class UTerritoryComponent;

UCLASS()
class AOakSpawner : public AGbxSpawner, public ILevelActorPersistenceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    URegionBalanceStateComponent* RegionComponent;
    
    UPROPERTY(EditInstanceOnly)
    AActor* TerritoryOverrideActor;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTerritoryComponent* TerritoryComponent;
    
    UPROPERTY(Export, Transient)
    UTerritoryComponent* CurrentTerritory;
    
public:
    AOakSpawner();
    UFUNCTION(BlueprintCallable)
    void SetTerritoryActor(AActor* TerritoryActor);
    
    UFUNCTION(BlueprintCallable)
    void SetTerritory(UTerritoryComponent* Territory);
    
    UFUNCTION(BlueprintCallable)
    void ResetTerritoryToDefault();
    
    UFUNCTION(BlueprintPure)
    UTerritoryComponent* GetTerritory() const;
    
    
    // Fix for true pure virtual functions not being implemented
};


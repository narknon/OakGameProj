#pragma once
#include "CoreMinimal.h"
#include "GameplayTaskOwnerInterface.h"
#include "Spawner.h"
#include "GenericTeamAgentInterface.h"
#include "GbxThreatSystemInterface.h"
#include "SpawnerThreatenedEventDelegate.h"
#include "GbxSpawner.generated.h"

class UBalanceStateComponent;
class UGbxSpawnerComponent;
class UAIGroupState;
class UGameplayTasksComponent;
class USpawnNodeComponent;
class UAINodeComponent;

UCLASS()
class GBXAI_API AGbxSpawner : public ASpawner, public IGenericTeamAgentInterface, public IGameplayTaskOwnerInterface, public IGbxThreatSystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnerThreatenedEvent OnThreatened;
    
private:
    UPROPERTY(Export, Transient)
    UGbxSpawnerComponent* GbxSpawnerComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    USpawnNodeComponent* SpawnNodeComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBalanceStateComponent* BalanceStateComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGameplayTasksComponent* GameplayTasksComponent;
    
public:
    AGbxSpawner();
    UFUNCTION(BlueprintPure)
    UGameplayTasksComponent* GetGameplayTasksComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAINodeComponent* GetAINodeComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAIGroupState* GetAIGroupState() const;
    
    UFUNCTION(BlueprintPure)
    bool DEPRECATED_IsThreatened() const;
    
    
    // Fix for true pure virtual functions not being implemented
};


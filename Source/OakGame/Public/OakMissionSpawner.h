#pragma once
#include "CoreMinimal.h"
#include "OakSpawner.h"
#include "MissionEventReference.h"
#include "MissionObserverInterface.h"
#include "MissionSpawnerFailsafeData.h"
#include "MissionObjectiveReference.h"
#include "SpawnerActorData.h"
#include "OakMissionSpawner.generated.h"

class UObject;
class UGbxCondition;
class UOakSpawnerIconComponent;
class UOakSpawnPointComponent;
class ASpawner;
class AActor;

UCLASS()
class OAKGAME_API AOakMissionSpawner : public AOakSpawner, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* EnabledCondition;
    
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReference ObjectiveActiveEnabledCondition;
    
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReference ObjectiveToUpdateOnDeath;
    
    UPROPERTY()
    FMissionObjectiveReference ResetObjective;
    
    UPROPERTY(EditAnywhere)
    bool bTriggerDeathWhenRemovedFromSpawnSystem;
    
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReference DefendMissionObjective;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyAssignObjectiveBitForSelf;
    
    UPROPERTY(EditAnywhere)
    FMissionEventReference MissionCustomEvent;
    
    UPROPERTY(EditAnywhere)
    UObject* MissionEventOptionalContext;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakSpawnerIconComponent* SpawnerIconComponent;
    
    UPROPERTY(EditAnywhere)
    bool bSpawnerFailsafe;
    
    UPROPERTY(EditAnywhere)
    bool bPickupFailsafe;
    
    UPROPERTY(EditAnywhere)
    bool bFailsafeRequiresCompletedObjectives;
    
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReference NoLongerCriticalCondition;
    
private:
    UPROPERTY(Transient)
    bool bPickupFailsafeChecked;
    
    UPROPERTY(Transient)
    TArray<FMissionSpawnerFailsafeData> SpawnerFailsafeData;
    
public:
    UPROPERTY(Export, Transient)
    UOakSpawnPointComponent* TheOneEnabledSpawnPoint;
    
    AOakMissionSpawner();
private:
    UFUNCTION()
    void SendOnAllDiedMissionEvent(ASpawner* Spawner);
    
    UFUNCTION()
    void OnMissionFailsafeActorDeath(ASpawner* Spawner, AActor* Actor);
    
    UFUNCTION()
    void OnMissionActorSuspendData(ASpawner* Spawner, const FSpawnerActorData& ActorData);
    
    UFUNCTION()
    void OnMissionActorSpawnedOrUnsuspend(ASpawner* Spawner, AActor* Actor);
    
    UFUNCTION()
    void OnMissionActorFakeDeath(ASpawner* Spawner, AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};


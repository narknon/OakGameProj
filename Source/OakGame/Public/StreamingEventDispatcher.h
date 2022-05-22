#pragma once
#include "CoreMinimal.h"
#include "OakInteractiveSessionStats.h"
#include "GameFramework/Actor.h"
#include "SpawnEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "CausedDeathDetails.h"
#include "CausedDamageDetails.h"
#include "StreamingEventDispatcher.generated.h"

class AOakPlayerController;
class AGbxCharacter;
class USpawnerComponent;
class UOakMissionIconComponent;
class UGbxUIName;
class UOakStreamingInteractionEvent_EnemySpawn;
class UPawnAttachSlotComponent;
class UDamageComponent;
class UGbxDamageType;
class UDamageSource;
class UObject;

UCLASS()
class OAKGAME_API AStreamingEventDispatcher : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AGbxCharacter* EventEnemy;
    
    UPROPERTY(Export, Transient)
    UOakMissionIconComponent* EnemyWaypoint;
    
    UPROPERTY(Transient)
    UGbxUIName* EnemyUIName;
    
    UPROPERTY(Transient)
    AOakPlayerController* PlayerOwner;
    
    UPROPERTY(Transient)
    UOakStreamingInteractionEvent_EnemySpawn* EnemySpawnEventRef;
    
    UPROPERTY(ReplicatedUsing=OnRep_ValidEnemyActorSpawned)
    AActor* SpawnedEnemy;
    
    UPROPERTY()
    FSpawnEvent OnActorSpawned;
    
    UPROPERTY()
    FSpawnEvent OnActorDied;
    
    UPROPERTY()
    FSpawnEvent OnActorSuspend;
    
    AStreamingEventDispatcher();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(NetMulticast, Reliable)
    void ValidEnemySuspend(USpawnerComponent* SpawnerComponent, AActor* Actor) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void ValidEnemyDied(USpawnerComponent* SpawnerComponent, AActor* Actor) const;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SetEventEnemyName(const FString& NewEnemyName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SetEventEnemy(AGbxCharacter* Enemy);
    
    UFUNCTION(NetMulticast, Reliable)
    void SendUpdatedSessionStats(const FOakInteractiveSessionStats Updated) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void PlayerDied() const;
    
    UFUNCTION()
    void OnVehicleExited(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnVehicleEntered(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnRep_ValidEnemyActorSpawned();
    
    UFUNCTION()
    void OnPlayerInjured();
    
    UFUNCTION()
    void OnPlayerDead();
    
    UFUNCTION()
    void OnPlayerCausedDeath(const UDamageComponent* Damaged, const FCausedDeathDetails& Details);
    
    UFUNCTION()
    void OnPlayerCausedDamage(AActor* DamageInstigator, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AActor* DamagedActor, FCausedDamageDetails Details);
    
    UFUNCTION()
    void OnLegendarySpawned(bool bNewVal);
    
    UFUNCTION()
    void OnEnemySuspend(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
    UFUNCTION()
    void OnEnemySpawned(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
    UFUNCTION()
    void OnEnemyDied(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void HookToEnemySpawnEvent(UOakStreamingInteractionEvent_EnemySpawn* EnemySpawnEvent, const TArray<USpawnerComponent*>& AllValidSpawners);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void GetUpdatedSessionStats();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ExecutePollAction(FSoftObjectPath PollActionClassPath, UObject* Context, float Value);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void CleanEventEnemy();
    
};


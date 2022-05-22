#pragma once
#include "CoreMinimal.h"
#include "SpawnerWaveEventDelegate.h"
#include "GameFramework/Actor.h"
#include "SpawnPointProvider.h"
#include "SpawnerEventDelegate.h"
#include "SpawnerDoneEventDelegate.h"
#include "SpawnerDataEventDelegate.h"
#include "Spawner.generated.h"

class USpawnerTeamComponent;
class USpawnerComponent;
class USpawnerLinkComponent;
class USpawnPointComponent;
class UTeam;
class USpawnerStyle;
class ASpawner;

UCLASS(Abstract, Config=Editor)
class GBXSPAWN_API ASpawner : public AActor, public ISpawnPointProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnerEvent OnActorSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerEvent OnActorDied;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerEvent OnActorFellOutOfWorld;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerEvent OnActorSuspend;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerEvent OnActorUnsuspend;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerDoneEvent OnAllSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerDoneEvent OnAllDied;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerWaveEvent OnWaveWarmup;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerWaveEvent OnWaveStart;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerWaveEvent OnWaveComplete;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerDoneEvent OnReset;
    
    UPROPERTY()
    FSpawnerDataEvent OnActorSpawnedData;
    
    UPROPERTY()
    FSpawnerDataEvent OnExternalActorSpawnedData;
    
    UPROPERTY()
    FSpawnerDataEvent OnActorDiedData;
    
    UPROPERTY()
    FSpawnerDataEvent OnExternalActorDiedData;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerDoneEvent OnScriptedWarmup;
    
    UPROPERTY()
    FSpawnerDataEvent OnActorSuspendData;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpawnerLinkComponent* SpawnerLinkComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpawnPointComponent* SpawnPointComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpawnerTeamComponent* SpawnerTeamComponent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoGroundSpawnPointComponents;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ExcludeAutoGroundPointComponents;
    
public:
    ASpawner();
    UFUNCTION(BlueprintCallable)
    void SuspendAllActors();
    
    UFUNCTION(BlueprintCallable)
    void SetTeamOverride(UTeam* OverrideTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(UTeam* NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysActive(bool bInAlwaysActive);
    
    UFUNCTION(BlueprintCallable)
    void ResetSpawning();
    
    UFUNCTION(BlueprintCallable)
    void OverrideSpawnerStyle(USpawnerStyle* NewSpawnerStyle);
    
private:
    UFUNCTION()
    void OnSpawningComplete(ASpawner* Spawner);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSpawnerEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinishedSpawning() const;
    
    UFUNCTION(BlueprintPure)
    USpawnPointComponent* GetSpawnPointComponent() const;
    
    UFUNCTION(BlueprintPure)
    USpawnerTeamComponent* GetSpawnerTeamComponent() const;
    
    UFUNCTION(BlueprintPure)
    USpawnerLinkComponent* GetSpawnerLinkComponent() const;
    
    UFUNCTION(BlueprintPure)
    USpawnerComponent* GetSpawnerComponent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumAliveActors(bool bIncludeExternal) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSpawner();
    
    UFUNCTION(BlueprintCallable)
    void DisableSpawner();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllActors();
    
    UFUNCTION(BlueprintCallable)
    void CompleteScriptedWarmup();
    
    UFUNCTION(BlueprintPure)
    bool AreAllDead(bool bIncludeExternal) const;
    
    
    // Fix for true pure virtual functions not being implemented
};


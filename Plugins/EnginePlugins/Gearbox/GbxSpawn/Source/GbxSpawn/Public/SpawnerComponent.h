#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SpawnEventDelegate.h"
#include "AttributeInitializationData.h"
#include "SpawnDoneEventDelegate.h"
#include "SpawnWaveEventDelegate.h"
#include "SpawnDataEventDelegate.h"
#include "EScriptedWarmup.h"
#include "SpawnDetails.h"
#include "SpawnLimitData.h"
#include "SpawnPointGroup.h"
#include "ESpawnPointUseType.h"
#include "ESpawnerDrawStyle.h"
#include "SpawnerComponent.generated.h"

class USpawnOptionData;
class AVolume;
class USpawnerStyle;
class USpawnFactory;
class ASpawnPoint;
class USpawnPointComponent;
class ASpawner;
class UTeam;
class USpawnerComponent;
class AActor;

UCLASS(ClassGroup=Custom, Config=Editor, meta=(BlueprintSpawnableComponent))
class GBXSPAWN_API USpawnerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnEvent OnActorSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnEvent OnActorDied;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnEvent OnActorSuspend;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnEvent OnActorUnsuspend;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnDoneEvent OnAllSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnDoneEvent OnAllDied;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnWaveEvent OnWaveWarmup;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnWaveEvent OnWaveStart;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnWaveEvent OnWaveComplete;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnDoneEvent OnScriptedWarmup;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnDoneEvent OnReset;
    
    UPROPERTY()
    FSpawnDataEvent OnActorSpawnedData;
    
    UPROPERTY()
    FSpawnDataEvent OnActorDiedData;
    
    UPROPERTY()
    FSpawnDataEvent OnActorSuspendData;
    
private:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ChanceToEnableOnInit;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysActive;
    
    UPROPERTY(EditAnywhere)
    bool bResetOnEnabled;
    
    UPROPERTY(EditAnywhere)
    EScriptedWarmup ScriptedWarmup;
    
    UPROPERTY(EditAnywhere)
    float ActivationRadius;
    
    UPROPERTY(EditAnywhere)
    bool bActivationUsesRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<AVolume*> ActivationVolumes;
    
    UPROPERTY(EditAnywhere)
    bool bActivationUsesVolumes;
    
    UPROPERTY(EditAnywhere)
    FSpawnDetails SpawnDetails;
    
    UPROPERTY(EditAnywhere)
    float MinimumActivationTime;
    
    UPROPERTY(EditAnywhere, Instanced)
    USpawnerStyle* SpawnerStyle;
    
    UPROPERTY(Transient)
    USpawnerStyle* SpawnerStyleOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnLimitData> Limits;
    
    UPROPERTY(EditAnywhere)
    bool bApplyLimitsToGroup;
    
    UPROPERTY(Transient)
    TArray<USpawnFactory*> WaitingFactories;
    
    UPROPERTY(EditAnywhere)
    TArray<ASpawnPoint*> SpawnPoints;
    
    UPROPERTY(EditAnywhere)
    bool bRandomizeSpawnPoints;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnPointGroup> SpawnPointGroups;
    
    UPROPERTY(EditAnywhere)
    ESpawnPointUseType SpawnPointUseType;
    
    UPROPERTY(EditAnywhere)
    float SpawnPointClusterRadius;
    
    UPROPERTY(Export, Transient)
    TArray<USpawnPointComponent*> SpawnPointComponents;
    
    UPROPERTY(Transient)
    ASpawner* Spawner;
    
    UPROPERTY(Transient)
    bool bIncludeExternalActorsForAllDiedEvent;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    ESpawnerDrawStyle DrawStyle;
    
    UPROPERTY()
    bool bUseScriptedWarmup;
    
public:
    USpawnerComponent();
    UFUNCTION(BlueprintCallable)
    void SuspendAllActors();
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(UTeam* NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnOptions(USpawnOptionData* NewSpawnOptions);
    
    UFUNCTION(BlueprintCallable)
    void ResetSpawning();
    
    UFUNCTION(BlueprintCallable)
    void OverrideSpawnerStyle(USpawnerStyle* NewSpawnerStyle);
    
private:
    UFUNCTION()
    bool IsSpawnerStyleClassAllowed(const UClass* SpawnerStyleClass) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFinishedSpawning() const;
    
    UFUNCTION(BlueprintCallable)
    void IncludeExternalActorsForAllDiedEvent();
    
    UFUNCTION(BlueprintPure)
    USpawnOptionData* GetSpawnOptions() const;
    
    UFUNCTION(BlueprintPure)
    USpawnerComponent* GetParentSpawner() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSuspendedActors() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSpawnedActors(bool bIncludeExternal, bool bInGroup) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumDeadActors(bool bIncludeExternal, bool bInGroup) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumAliveActors(bool bIncludeExternal, bool bInGroup) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetAliveActors();
    
    UFUNCTION(BlueprintCallable)
    void EnableSpawner();
    
    UFUNCTION(BlueprintCallable)
    void DisableSpawner();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllActors();
    
    UFUNCTION(BlueprintCallable)
    void CompleteScriptedWarmup();
    
    UFUNCTION(BlueprintPure)
    bool AreAllDead(bool bIncludeExternal, bool bInGroup) const;
    
};


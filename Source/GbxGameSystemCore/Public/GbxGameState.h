#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ImpactResponseParams.h"
#include "ReplicatedImpactHitResult.h"
#include "GbxGameState.generated.h"

class AChallengeManager;
class UParticleSystem;
class AGbxCustomizationManager;
class AGameStatsManager;
class AImpactDecalManager;
class APlayerState;
class USceneComponent;
class UObject;
class AActor;
class UImpactData;
class UHitRegionData;

UCLASS()
class GBXGAMESYSTEMCORE_API AGbxGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AChallengeManager* ChallengeManager;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StatsManager)
    AGameStatsManager* StatsManager;
    
    UPROPERTY(Transient)
    AGbxCustomizationManager* CustomizationManager;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HostPlayerState)
    APlayerState* HostPlayerState;
    
    UPROPERTY(Transient)
    AImpactDecalManager* ImpactDecalManager;
    
private:
    UPROPERTY(Replicated, Transient)
    FGuid GameInstanceId;
    
    UPROPERTY(Replicated, Transient)
    float GameInstanceTime;
    
    UPROPERTY(EditDefaultsOnly)
    float GameInstanceTimeUpdateRate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AGbxCustomizationManager> CustomizationManagerClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bPlayersOnly)
    bool bRepPlayersOnly;
    
public:
    AGbxGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintPure=false)
    void SpawnEmitterAtLocationMulticastImpl(UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, UObject* ParameterEvaluationContext) const;
    
    UFUNCTION(BlueprintCallable)
    static void SpawnEmitterAtLocationMulticast(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, UObject* ParameterEvaluationContext);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnEmitterAtComponentSocketMulticast(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, USceneComponent* Component, FName Socket, bool bAutoDestroy, UObject* ParameterEvaluationContext);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnEmitterAtActorSocketMulticast(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, AActor* Actor, FName Socket, bool bAutoDestroy, UObject* ParameterEvaluationContext);
    
    UFUNCTION(NetMulticast, Unreliable)
    void PlayImpactMulticast(const UImpactData* ImpactData, AActor* ImpactInstigator, const FReplicatedImpactHitResult& HitResult, const FImpactResponseParams& ResponseParams);
    
    UFUNCTION(NetMulticast, Unreliable)
    void PlayHitRegionImpactMulticast(const UHitRegionData* HitRegion, AActor* ImpactInstigator, const FReplicatedImpactHitResult& HitResult);
    
    UFUNCTION()
    void OnRep_StatsManager();
    
    UFUNCTION()
    void OnRep_HostPlayerState();
    
private:
    UFUNCTION()
    void OnRep_GameInstanceTime();
    
    UFUNCTION()
    void OnRep_GameInstanceId();
    
    UFUNCTION()
    void OnRep_bPlayersOnly();
    
};


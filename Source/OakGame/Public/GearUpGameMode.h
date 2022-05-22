#pragma once
#include "CoreMinimal.h"
#include "RaidGameMode.h"
#include "GearUpGameMode.generated.h"

class UDamageSource;
class AGearUpGameState;
class UGearUpData;
class AActor;
class UOakMissionIconComponent;
class UStaticMeshComponent;
class ACharacter;
class AOakPlayerController;

UCLASS(NonTransient)
class OAKGAME_API AGearUpGameMode : public ARaidGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGearUpGameState* GearUpGameState;
    
    UPROPERTY(Transient)
    UGearUpData* GearUpData;
    
    UPROPERTY(Transient)
    AActor* DeathCircle;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* DeathCircleMesh;
    
    UPROPERTY(Export, Transient)
    UOakMissionIconComponent* TransitionIcon;
    
    UPROPERTY(Export, Transient)
    UOakMissionIconComponent* DeathCircleIcon;
    
    UPROPERTY(Transient)
    float DeathCircleHeight;
    
    UPROPERTY(Transient)
    float ScreenParticleMaxDistance;
    
    UPROPERTY(Transient)
    float FogParticleMaxDistance;
    
    UPROPERTY(Transient)
    float TransitionTime;
    
    UPROPERTY(Transient)
    float ActiveCircleRadius;
    
    UPROPERTY(Transient)
    float TargetCircleRadius;
    
    UPROPERTY(Transient)
    UDamageSource* StormDamageSource;
    
    UPROPERTY(Transient)
    bool bRespawnDeadPlayers;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<ACharacter*> PlayersInStorm;
    
private:
    UPROPERTY(Transient)
    TArray<AOakPlayerController*> PlayersInScreenParticleRange;
    
    UPROPERTY(Transient)
    TArray<AOakPlayerController*> PlayersInFogParticleRange;
    
    UPROPERTY(Transient)
    float TimeUntilNextParticleCheck;
    
    UPROPERTY(Transient)
    TArray<ACharacter*> ImmunePlayers;
    
    UPROPERTY(Transient)
    bool bGearUpRunActive;
    
public:
    AGearUpGameMode();
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable)
    void RespawnAllDeadPlayers();
    
    UFUNCTION(BlueprintCallable)
    void ResetGearUpGameMode();
    
    UFUNCTION(BlueprintCallable)
    void RandomlySelectActorsWithinDeathCircle(int32 NumberToSelect, UPARAM(Ref) TArray<AActor*>& InActors, UPARAM(Ref) TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayerExitedStorm(ACharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayerEnteredStorm(ACharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void InitializeGearUpGameMode(UGearUpData* Data);
    
    UFUNCTION(BlueprintCallable)
    void GearUpRunComplete();
    
    UFUNCTION(BlueprintCallable)
    void FlagImmunePlayer(ACharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinalDeathCircleStageStarted();
    
    UFUNCTION(BlueprintCallable)
    void DisableStorm();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeathCircleTransitionStateStarted(const int32 ActiveStage, const float StateDuration, const bool IsFinalStage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeathCircleStableStateStarted(const int32 ActiveStage, const float StateDuration, const bool IsFinalStage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DeathCircleComplete();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastGearUpSupplyDrop();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastGearUpRespawn();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastGearUpNewCircle();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastGearUpCircleClosing();
    
};


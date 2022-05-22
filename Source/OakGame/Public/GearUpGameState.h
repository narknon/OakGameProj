#pragma once
#include "CoreMinimal.h"
#include "RaidGameState.h"
#include "UObject/NoExportTypes.h"
#include "EDeathCircleStatus.h"
#include "GearUpAirdropData.h"
#include "EOakGameStateUIGroupMode.h"
#include "GearUpGameState.generated.h"

class AGearUpRespawnStation;
class AOakUIGearUpExtractionAIO;
class ADeathCirclePoint;
class UGearUpData;
class AActor;
class AOakMissionSpawner;
class ACharacter;

UCLASS()
class OAKGAME_API AGearUpGameState : public ARaidGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGearUpSupplyDrop);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGearUpRespawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGearUpCircle);
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_GearUpDataPrivate)
    UGearUpData* GearUpDataPrivate;
    
    UPROPERTY(Replicated)
    TEnumAsByte<EDeathCircleStatus> DeathCircleStatus;
    
    UPROPERTY(Replicated)
    float StableEndTime;
    
    UPROPERTY(Replicated)
    float TransitionEndTime;
    
    UPROPERTY(Replicated)
    AActor* DeathCirclePrivate;
    
    UPROPERTY(Replicated)
    int8 ActiveStage;
    
    UPROPERTY(Replicated)
    ADeathCirclePoint* ActivePoint;
    
    UPROPERTY(Replicated)
    ADeathCirclePoint* NextPoint;
    
    UPROPERTY(Transient)
    TArray<AOakUIGearUpExtractionAIO*> Extractors;
    
    UPROPERTY(Transient)
    TArray<AGearUpRespawnStation*> Respawners;
    
    UPROPERTY(Transient)
    TArray<FGearUpAirdropData> Airdrops;
    
    UPROPERTY(Transient)
    EOakGameStateUIGroupMode PreviousGroupMode;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnGearUpRespawn OnGearUpRespawn;
    
    UPROPERTY(BlueprintAssignable)
    FOnGearUpSupplyDrop OnGearUpSupplyDrop;
    
    UPROPERTY(BlueprintAssignable)
    FOnGearUpCircle OnGearUpCircleClosing;
    
    UPROPERTY(BlueprintAssignable)
    FOnGearUpCircle OnGearUpNewCircle;
    
    AGearUpGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(NetMulticast, Unreliable)
    void UpdateGameStateAudio(FVector CircleLocation, float CircleRadius);
    
    UFUNCTION(NetMulticast, Reliable)
    void StopPlayerStormAudio(ACharacter* Player);
    
    UFUNCTION(NetMulticast, Reliable)
    void StartPlayerStormAudio(ACharacter* Player);
    
private:
    UFUNCTION()
    void OnRep_GearUpDataPrivate();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSpawnFogParticle(ACharacter* Character);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastRemoveFogParticle(ACharacter* Character);
    
    UFUNCTION(BlueprintPure)
    float GetElapsedDeathCircleTime() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastGearUpSupplyDrop();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastGearUpRespawn();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastGearUpNewCircle();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastGearUpCircleClosing();
    
    UFUNCTION(BlueprintCallable)
    void AddActiveAirdrop(AOakMissionSpawner* AirDrop);
    
};


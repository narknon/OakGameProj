#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EActiveDuelStatus.h"
#include "PlayerDuelArenaState.h"
#include "EDuelMode.h"
#include "DuelArena.generated.h"

class UDuelGlobals;
class ADuelManager;

UCLASS()
class ADuelArena : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ArenaSetupTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ArenaTakeDownTime;
    
protected:
    UPROPERTY(Replicated, Transient)
    TArray<FPlayerDuelArenaState> DuelingPlayers;
    
    UPROPERTY(Transient)
    UDuelGlobals* DuelGlobals;
    
    UPROPERTY(Transient)
    ADuelManager* DuelManager;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    EActiveDuelStatus DuelStatus;
    
    UPROPERTY(Replicated, Transient)
    float TimerStartTime;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 NumParticipants;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    EDuelMode DuelMode;
    
public:
    ADuelArena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_InitDuelArena();
    
public:
    UFUNCTION(BlueprintPure)
    float GetTimeBeforeDuelStarts() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxDuelLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxArenaRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetDuelTimeRemaining() const;
    
};


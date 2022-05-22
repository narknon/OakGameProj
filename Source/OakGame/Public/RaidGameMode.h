#pragma once
#include "CoreMinimal.h"
#include "OakGameMode.h"
#include "RaidGameMode.generated.h"

class AOakPlayerController;
class ARaidGameState;

UCLASS(NonTransient)
class OAKGAME_API ARaidGameMode : public AOakGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpectateWhenDead;
    
private:
    UPROPERTY(Transient)
    ARaidGameState* RaidGameState;
    
public:
    ARaidGameMode();
    UFUNCTION(BlueprintCallable)
    void SetForceBalanceToMaxPlayers(bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void RespawnAllSpectatingPlayers();
    
    UFUNCTION()
    void OnNumPlayersChanged(int32 NewNumPlayers);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitRaidGameState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnPlayerRespawned(AOakPlayerController* RespawnedPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnPlayerDied(AOakPlayerController* DeadPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnAllPlayersDied();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumPlayerSpectators() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumPlayersAlive() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastRaidComplete();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastRaidBegun(int32 CountdownDuration);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastLegComplete(int32 LegNumber);
    
};


#pragma once
#include "CoreMinimal.h"
#include "EDuelLoseReason.h"
#include "GameFramework/Actor.h"
#include "ActiveDuelState.h"
#include "EDuelClassification.h"
#include "DuelManager.generated.h"

class UDuelGlobals;
class ADuelArena;
class ADuelTotem;
class AOakCharacter_Player;

UCLASS(NotPlaceable, Transient)
class ADuelManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    TArray<ADuelArena*> ActiveDuelArenas;
    
    UPROPERTY(Transient)
    FActiveDuelState ActiveDuels[2];
    
    UPROPERTY(Transient)
    TArray<ADuelTotem*> PotentialDuelTotems;
    
    UPROPERTY(Transient)
    UDuelGlobals* DuelGlobals;
    
public:
    ADuelManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastUnacceptedDuel(AOakCharacter_Player* Player, AOakCharacter_Player* DuelInstigator);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDuelWon(const TArray<AOakCharacter_Player*>& Winners, EDuelClassification Classification);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDuelTimedOut(AOakCharacter_Player* Player);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDuelStarted(const TArray<AOakCharacter_Player*>& Participants);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDuelSetupStarted(const TArray<AOakCharacter_Player*>& Participants);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDuelLost(AOakCharacter_Player* Player, EDuelLoseReason LoseReason, EDuelClassification Classification);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDuelLengthElapsed(AOakCharacter_Player* Player);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDuelInitiated(AOakCharacter_Player* Player, AOakCharacter_Player* TargetedPlayer);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDuelCanceled(AOakCharacter_Player* Player);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAcceptedDuel(AOakCharacter_Player* Player, AOakCharacter_Player* DuelInstigator);
    
};


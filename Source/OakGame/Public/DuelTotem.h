#pragma once
#include "CoreMinimal.h"
#include "EDuelMode.h"
#include "InteractiveObject.h"
#include "UseEvent.h"
#include "EDuelTotemDestroyReason.h"
#include "EPotentialDuelState.h"
#include "DuelTotem.generated.h"

class UDuelGlobals;
class UUsableComponent;
class AOakCharacter_Player;

UCLASS()
class ADuelTotem : public AInteractiveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float FailsafeDestroyDelay;
    
    UPROPERTY(Export, Transient)
    UUsableComponent* UsableComponent;
    
    UPROPERTY(Replicated, Transient)
    AOakCharacter_Player* PlayerInstigator;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_NumParticipants)
    int32 NumParticipants;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AcceptedPlayers)
    TArray<AOakCharacter_Player*> AcceptedPlayers;
    
    UPROPERTY(Replicated, Transient)
    float TimerStartTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_DestroyReason)
    EDuelTotemDestroyReason DestroyReason;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_DuelState)
    EPotentialDuelState DuelState;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    EDuelMode DuelMode;
    
    UPROPERTY(Transient)
    UDuelGlobals* DuelGlobals;
    
public:
    ADuelTotem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_NumParticipants();
    
    UFUNCTION()
    void OnRep_DuelState();
    
    UFUNCTION()
    void OnRep_DestroyReason();
    
    UFUNCTION()
    void OnRep_AcceptedPlayers();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNumParticipantsChanged(int32 NewNumParticipants);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDuelStateChanged(EPotentialDuelState NewDuelState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDestroyTotem(EDuelTotemDestroyReason TheDestroyReason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAcceptedPlayersChanged();
    
private:
    UFUNCTION()
    void HandleUsedEvent(const FUseEvent& UseEvent);
    
public:
    UFUNCTION(BlueprintPure)
    float GetTimeBeforeTimeout() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeBeforeDuelStarts() const;
    
    UFUNCTION(BlueprintPure)
    AOakCharacter_Player* GetPlayerInstigator() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumParticipants() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AOakCharacter_Player*> GetAcceptedPlayers() const;
    
};


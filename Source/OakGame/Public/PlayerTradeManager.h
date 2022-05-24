#pragma once
#include "CoreMinimal.h"
#include "EPlayerTradingStance.h"
#include "EPlayerTradeManagerStatus.h"
#include "GameFramework/Actor.h"
#include "PlayerTradeManager.generated.h"

class AOakPlayerController;
class APlayerTradeManager;
class AOakCharacter_Player;

UCLASS(NotPlaceable, Transient)
class APlayerTradeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    EPlayerTradeManagerStatus Status;
    
    UPROPERTY()
    APlayerTradeManager* Partner;
    
    UPROPERTY()
    AOakPlayerController* PartnerPC;
    
    UPROPERTY(ReplicatedUsing=OnRep_PartnerCharacter)
    AOakCharacter_Player* PartnerCharacter;
    
    UPROPERTY(Replicated)
    EPlayerTradingStance PartnerStance;
    
    UPROPERTY(ReplicatedUsing=OnRep_PartnerCashOffered)
    int32 PartnerCashOffered;
    
    UPROPERTY(ReplicatedUsing=OnRep_PartnerInvOffered)
    AActor* PartnerInvOffered[4];
    
    UPROPERTY()
    int32 MyCashOffered;
    
    UPROPERTY()
    AActor* MyInvOffered[4];
    
    APlayerTradeManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateStance(EPlayerTradingStance NewStance, uint32 Hash);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateInventorySlot(AActor* Inventory, int32 Slot);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateCashOffered(int32 NewCashValue);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelTrade();
    
private:
    UFUNCTION()
    void OnRep_PartnerInvOffered();
    
    UFUNCTION()
    void OnRep_PartnerCharacter();
    
    UFUNCTION()
    void OnRep_PartnerCashOffered();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientStanceReset(uint32 Hash);
    
    UFUNCTION(Client, Reliable)
    void ClientShowTradeConfirmationMessage(bool IsDuel);
    
};


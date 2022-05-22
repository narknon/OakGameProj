#include "PlayerTradeManager.h"
#include "Net/UnrealNetwork.h"

class AActor;

void APlayerTradeManager::ServerUpdateStance_Implementation(EPlayerTradingStance NewStance, uint32 Hash) {
}
bool APlayerTradeManager::ServerUpdateStance_Validate(EPlayerTradingStance NewStance, uint32 Hash) {
    return true;
}

void APlayerTradeManager::ServerUpdateInventorySlot_Implementation(AActor* Inventory, int32 Slot) {
}
bool APlayerTradeManager::ServerUpdateInventorySlot_Validate(AActor* Inventory, int32 Slot) {
    return true;
}

void APlayerTradeManager::ServerUpdateCashOffered_Implementation(int32 NewCashValue) {
}
bool APlayerTradeManager::ServerUpdateCashOffered_Validate(int32 NewCashValue) {
    return true;
}

void APlayerTradeManager::ServerCancelTrade_Implementation() {
}
bool APlayerTradeManager::ServerCancelTrade_Validate() {
    return true;
}

void APlayerTradeManager::OnRep_PartnerInvOffered() {
}

void APlayerTradeManager::OnRep_PartnerCharacter() {
}

void APlayerTradeManager::OnRep_PartnerCashOffered() {
}

void APlayerTradeManager::ClientStanceReset_Implementation(uint32 Hash) {
}

void APlayerTradeManager::ClientShowTradeConfirmationMessage_Implementation(bool IsDuel) {
}

void APlayerTradeManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerTradeManager, Status);
    DOREPLIFETIME(APlayerTradeManager, PartnerCharacter);
    DOREPLIFETIME(APlayerTradeManager, PartnerStance);
    DOREPLIFETIME(APlayerTradeManager, PartnerCashOffered);
    DOREPLIFETIME(APlayerTradeManager, PartnerInvOffered);
}

APlayerTradeManager::APlayerTradeManager() {
    this->Status = EPlayerTradeManagerStatus::Uninitialized;
    this->Partner = NULL;
    this->PartnerPC = NULL;
    this->PartnerCharacter = NULL;
    this->PartnerStance = EPlayerTradingStance::Deciding;
    this->PartnerCashOffered = 0;
    this->PartnerInvOffered[0] = NULL;
    this->PartnerInvOffered[1] = NULL;
    this->PartnerInvOffered[2] = NULL;
    this->PartnerInvOffered[3] = NULL;
    this->MyCashOffered = 0;
    this->MyInvOffered[0] = NULL;
    this->MyInvOffered[1] = NULL;
    this->MyInvOffered[2] = NULL;
    this->MyInvOffered[3] = NULL;
}


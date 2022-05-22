#include "OakMissionItem.h"
#include "Net/UnrealNetwork.h"

void AOakMissionItem::OnRep_BalanceStateComponent() {
}

void AOakMissionItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakMissionItem, BalanceStateComponent);
}

AOakMissionItem::AOakMissionItem() {
    this->MissionNameUIStatData = NULL;
    this->bHideUntilActivated = false;
    this->bUniquePickup = false;
    this->bCreateWaypoint = true;
    this->LikenessInventoryBalanceData = NULL;
    this->LikenessInventoryGameStage = 1;
    this->BalanceStateComponent = NULL;
    this->InventoryBalanceData = NULL;
    this->InventoryData = NULL;
    this->Pickup = NULL;
}


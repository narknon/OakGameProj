#include "CrewQuartersGunRack.h"
#include "Net/UnrealNetwork.h"
#include "OakInventoryDisplayItem.h"

class AActor;
class UGunRackSlotData;
class UInventorySlotData;

void ACrewQuartersGunRack::SaveSlot(UGunRackSlotData* SlotData) {
}

void ACrewQuartersGunRack::OnInventoryUnequippedFromSlot(AActor* InUnequippedInventory, UInventorySlotData* SlotData) {
}

void ACrewQuartersGunRack::OnInventoryEquippedOnSlot(AActor* InEquippedInventory, UInventorySlotData* SlotData) {
}

void ACrewQuartersGunRack::CreateEmptyPickup(UGunRackSlotData* SlotData) {
}

void ACrewQuartersGunRack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrewQuartersGunRack, EquippedInventory);
}

ACrewQuartersGunRack::ACrewQuartersGunRack() {
    this->OwningRoom = NULL;
    this->ItemPickupContainer = AOakInventoryDisplayItem::StaticClass();
}


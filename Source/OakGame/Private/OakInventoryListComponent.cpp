#include "OakInventoryListComponent.h"

class UWeaponSkinPartData;
class AActor;

void UOakInventoryListComponent::ServerUseItemInInventory_Implementation(const FInventoryListEntryHandle& InventoryItemHandle) {
}
bool UOakInventoryListComponent::ServerUseItemInInventory_Validate(const FInventoryListEntryHandle& InventoryItemHandle) {
    return true;
}

void UOakInventoryListComponent::ServerTransferItemToList_Implementation(const FInventoryListEntryHandle& InventoryItemHandle, AActor* DestinationActor, EInventoryListType DestinationListType, int32 Quantity) {
}
bool UOakInventoryListComponent::ServerTransferItemToList_Validate(const FInventoryListEntryHandle& InventoryItemHandle, AActor* DestinationActor, EInventoryListType DestinationListType, int32 Quantity) {
    return true;
}

void UOakInventoryListComponent::ServerSetEquippedWeaponSkin_Implementation(const FInventoryListEntryHandle& InventoryItemHandle, UWeaponSkinPartData* WeaponSkinPartData) {
}
bool UOakInventoryListComponent::ServerSetEquippedWeaponSkin_Validate(const FInventoryListEntryHandle& InventoryItemHandle, UWeaponSkinPartData* WeaponSkinPartData) {
    return true;
}

bool UOakInventoryListComponent::CanUseItemInInventory_Implementation(const FInventoryListEntryHandle& InventoryItemHandle) {
    return false;
}

UOakInventoryListComponent::UOakInventoryListComponent() {
    this->InventoryListType = EInventoryListType::IL_Primary;
}


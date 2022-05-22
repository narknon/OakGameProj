#include "InventoryListComponent.h"
#include "Net/UnrealNetwork.h"

class AInventoryItemPickup;
class AActor;
class UInventoryCategoryData;
class UInventoryCustomizationPartData;

int32 UInventoryListComponent::SizeInInventory(AInventoryItemPickup* PickupToTest) {
    return 0;
}

void UInventoryListComponent::ServerTransferItem_Implementation(const FInventoryListEntryHandle& InventoryItemHandle, AActor* DestinationActor, int32 Quantity) {
}
bool UInventoryListComponent::ServerTransferItem_Validate(const FInventoryListEntryHandle& InventoryItemHandle, AActor* DestinationActor, int32 Quantity) {
    return true;
}

void UInventoryListComponent::ServerSetItemUIFlags_Implementation(const FInventoryListEntryHandle& Handle, uint8 Flags, uint8 FlagsMask) {
}
bool UInventoryListComponent::ServerSetItemUIFlags_Validate(const FInventoryListEntryHandle& Handle, uint8 Flags, uint8 FlagsMask) {
    return true;
}

void UInventoryListComponent::ServerSetItemsUIFlags_Implementation(UInventoryCategoryData* Category, uint8 Flags, uint8 FlagsMask) {
}
bool UInventoryListComponent::ServerSetItemsUIFlags_Validate(UInventoryCategoryData* Category, uint8 Flags, uint8 FlagsMask) {
    return true;
}

void UInventoryListComponent::ServerRemoveItem_Implementation(const FInventoryListEntryHandle& InventoryItemHandle) {
}
bool UInventoryListComponent::ServerRemoveItem_Validate(const FInventoryListEntryHandle& InventoryItemHandle) {
    return true;
}

void UInventoryListComponent::ServerRemoveCustomizationPartFromInventoryActor_Implementation(const FInventoryListEntryHandle& InventoryItemHandle, UInventoryCustomizationPartData* Part) {
}
bool UInventoryListComponent::ServerRemoveCustomizationPartFromInventoryActor_Validate(const FInventoryListEntryHandle& InventoryItemHandle, UInventoryCustomizationPartData* Part) {
    return true;
}

void UInventoryListComponent::ServerDropItem_Implementation(const FInventoryListEntryHandle& InventoryItemHandle, const FVector& InitialLocation, const FRotator& InitialRotation) {
}
bool UInventoryListComponent::ServerDropItem_Validate(const FInventoryListEntryHandle& InventoryItemHandle, const FVector& InitialLocation, const FRotator& InitialRotation) {
    return true;
}

void UInventoryListComponent::ServerConsumeItem_Implementation(const FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity) {
}
bool UInventoryListComponent::ServerConsumeItem_Validate(const FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity) {
    return true;
}

void UInventoryListComponent::ServerAddCustomizationPartToInventoryActor_Implementation(const FInventoryListEntryHandle& InventoryItemHandle, UInventoryCustomizationPartData* Part) {
}
bool UInventoryListComponent::ServerAddCustomizationPartToInventoryActor_Validate(const FInventoryListEntryHandle& InventoryItemHandle, UInventoryCustomizationPartData* Part) {
    return true;
}

bool UInventoryListComponent::IsInventoryFull() const {
    return false;
}

bool UInventoryListComponent::HasActorInList(AActor* ItemActor) {
    return false;
}

AActor* UInventoryListComponent::GetStoredInventoryActor(const FInventoryListEntryHandle& InventoryItemHandle) {
    return NULL;
}

void UInventoryListComponent::GetSelectedItemQuantity(const UInventoryCategoryData* ChildTypeToGet, int32& Quantity, int32& MaxQuantity) {
}

int32 UInventoryListComponent::GetMaxInventoryItems() const {
    return 0;
}

bool UInventoryListComponent::GetItem(const FInventoryListEntryHandle& InventoryItemHandle, FInventoryListEntry& ListEntry) {
    return false;
}

FText UInventoryListComponent::GetInventoryListEntryDisplayName(FInventoryListEntry& ListEntry) {
    return FText::GetEmpty();
}

FText UInventoryListComponent::GetInventoryListEntryDisplayDescription(FInventoryListEntry& ListEntry) {
    return FText::GetEmpty();
}

int32 UInventoryListComponent::GetInventoryItemCount() const {
    return 0;
}

void UInventoryListComponent::GetInventoryHandlesOfType(const UInventoryCategoryData* ChildTypeToGet, TArray<FInventoryListEntryHandle>& ItemHandleList) {
}

FText UInventoryListComponent::GetInventoryDisplayName(AActor* InventoryActor) {
    return FText::GetEmpty();
}

FText UInventoryListComponent::GetInventoryDisplayDescription(AActor* InventoryActor) {
    return FText::GetEmpty();
}

void UInventoryListComponent::GetCategoryOnlyInventoryHandles(const UInventoryCategoryData* ChildTypeToGet, TArray<FInventoryListEntryHandle>& ItemHandleList) {
}

int32 UInventoryListComponent::GetCategoryItemQuantity(const UInventoryCategoryData* ItemCategory) {
    return 0;
}

AActor* UInventoryListComponent::GetAndConsumeSelected(const UInventoryCategoryData* TypeToConsume, int32 Quantity) {
    return NULL;
}

AActor* UInventoryListComponent::GetAndConsumeItem(const FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity) {
    return NULL;
}

void UInventoryListComponent::ClearInventory(bool DestroyInventory) {
}

bool UInventoryListComponent::CanUseSelected(const UInventoryCategoryData* ChildTypeToUse, int32 Quantity) {
    return false;
}

bool UInventoryListComponent::CanSwapItemForPickup(AActor* Item, AInventoryItemPickup* Pickup) const {
    return false;
}

void UInventoryListComponent::AddOrUpdateCategoryOnly(const UInventoryCategoryData* ItemCategory, int32 Quantity) {
}

FInventoryListEntryHandle UInventoryListComponent::AddItemFromPickup(AInventoryItemPickup* PickupActor) {
    return FInventoryListEntryHandle{};
}

FInventoryListEntryHandle UInventoryListComponent::AddExternalItemEx(const UInventoryCategoryData* ItemCategory, AActor* ActorToAdd, int32 Quantity, int32 Flags, bool bConditionalDestroyActor, int32 DesiredSlot, bool bBypassInventoryFull) {
    return FInventoryListEntryHandle{};
}

FInventoryListEntryHandle UInventoryListComponent::AddExternalItem(const UInventoryCategoryData* ItemCategory, AActor* ActorToAdd, int32 Quantity, bool AddedByPickup, bool bAutoEquip, bool bConditionalDestroyActor, int32 DesiredSlot, bool bBypassInventoryFull) {
    return FInventoryListEntryHandle{};
}

bool UInventoryListComponent::AddCategory(const UInventoryCategoryData* ItemCategory, bool TrackQuantity) {
    return false;
}

void UInventoryListComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryListComponent, InventoryList);
    DOREPLIFETIME(UInventoryListComponent, InventoryCapacityUsed);
    DOREPLIFETIME(UInventoryListComponent, MaxInventoryItems);
}

UInventoryListComponent::UInventoryListComponent() {
    this->InventoryCapacityUsed = 0;
    this->bCanPickupOnTouch = true;
}


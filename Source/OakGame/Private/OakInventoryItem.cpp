#include "OakInventoryItem.h"

class AOakCharacter;
class AInventoryItemPickup;

void AOakInventoryItem::OnPickedUp(AOakCharacter* PickupInstigator) {
}

bool AOakInventoryItem::HasValidInventoryBalanceState() const {
    return false;
}

FText AOakInventoryItem::GetOverrideErrorText() {
    return FText::GetEmpty();
}

bool AOakInventoryItem::CanBeUsedFromInventory_Implementation(AOakCharacter* InventoryOwner) const {
    return false;
}

bool AOakInventoryItem::CanBePickedUp_Implementation(AOakCharacter* PickupInstigator, int32 Quantity, bool UsedByInstigator, AInventoryItemPickup* WorldPickupActor) const {
    return false;
}

AOakInventoryItem::AOakInventoryItem() {
    this->CanBeUsedInInventory = false;
    this->ConsumeWhenUsed = false;
    this->OverrideErrorText = FText::FromString(TEXT("[red]INVENTORY FULL[/red]"));
    this->InventoryBalanceState = NULL;
}


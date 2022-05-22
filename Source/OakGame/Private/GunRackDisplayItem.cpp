#include "GunRackDisplayItem.h"
#include "Net/UnrealNetwork.h"

class AOakPlayerController;

bool AGunRackDisplayItem::IsItemOwnedBy(AOakPlayerController* User) {
    return false;
}

bool AGunRackDisplayItem::IsEmptyDisplayItem() {
    return false;
}

void AGunRackDisplayItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGunRackDisplayItem, AttachedToSlot);
    DOREPLIFETIME(AGunRackDisplayItem, AttachedToData);
}

AGunRackDisplayItem::AGunRackDisplayItem() {
    this->AttachedToSlot = 0;
    this->AttachedToData = NULL;
    this->bLeavePlacedItemInInventory = false;
    this->PlaceObjectMenuData = NULL;
    this->AttachedToComponent = NULL;
    this->DisplayTextComponent = NULL;
}


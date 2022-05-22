#include "OakInventoryConsumableItem.h"
#include "Components/StaticMeshComponent.h"

AOakInventoryConsumableItem::AOakInventoryConsumableItem() {
    this->ItemMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
}


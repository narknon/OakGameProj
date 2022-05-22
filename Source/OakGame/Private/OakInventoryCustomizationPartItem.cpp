#include "OakInventoryCustomizationPartItem.h"
#include "Components/StaticMeshComponent.h"

AOakInventoryCustomizationPartItem::AOakInventoryCustomizationPartItem() {
    this->ItemMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
}


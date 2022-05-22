#include "InventoryConditionalDamageAspectInfo.h"

FInventoryConditionalDamageAspectInfo::FInventoryConditionalDamageAspectInfo() {
    this->ConditionalModifier = NULL;
    this->bUseInventoryForDamageValueContext = false;
    this->ApplicationTarget = EInventoryConditionalDamageApplicationTarget::Inventory;
}


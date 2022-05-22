#include "SpawnFactory_OakAI.h"

USpawnFactory_OakAI::USpawnFactory_OakAI() {
    this->ItemPoolToDropOnDeath = NULL;
    this->ItemPoolToDropOnDeathAdditive = true;
    this->ItemPoolDropOnDeathType = EItemDropOnDeathType::DropOnDeath_All;
    this->bOverrideEquippedItems = false;
    this->bEquipSingleItemFromCollection = true;
    this->UINameOverride = NULL;
    this->TeamOverride = NULL;
    this->GestaltPartListDataOverride = NULL;
    this->DialogNameTagOverride = NULL;
}


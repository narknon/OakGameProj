#include "SpawnFactory_Lootable.h"

USpawnFactory_Lootable::USpawnFactory_Lootable() {
    this->bLockOnSpawn = false;
    this->UnlockCondition = NULL;
    this->LootableBalanceDataOverride = NULL;
}


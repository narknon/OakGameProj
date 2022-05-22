#include "SpawnInventoryLootRequest.h"

FSpawnInventoryLootRequest::FSpawnInventoryLootRequest() {
    this->ContextActor = NULL;
    this->InstancingPolicy = ELootInstancingPolicy::Instance;
    this->PlayerToInstanceFor = NULL;
}


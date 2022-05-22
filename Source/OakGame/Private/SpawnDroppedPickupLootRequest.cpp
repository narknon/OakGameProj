#include "SpawnDroppedPickupLootRequest.h"

FSpawnDroppedPickupLootRequest::FSpawnDroppedPickupLootRequest() {
    this->ContextActor = NULL;
    this->ItemPools = NULL;
    this->InstancingPolicy = ELootInstancingPolicy::Instance;
    this->PlayerToInstanceFor = NULL;
    this->bStartHidden = false;
    this->bRandomizeActivateDelay = false;
    this->ActivateDelay = 0.00f;
    this->MaxSpawnDelay = 0.00f;
    this->InitialLootMassScale = 0.00f;
    this->LootSpawnAction = NULL;
    this->RequestType = ESpawnDroppedPickupLootRequestType::Drop;
    this->bDroppedFromAI = false;
    this->DropPattern = NULL;
    this->AttachComponent = NULL;
    this->AttachmentMode = EPickupLootAttachmentMode::Origin;
}


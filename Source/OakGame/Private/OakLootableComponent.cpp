#include "OakLootableComponent.h"

class ADroppedInventoryItemPickup;
class ULootSpawnPatternData;

void UOakLootableComponent::HandlePickupSpawned(ADroppedInventoryItemPickup* Pickup) {
}

void UOakLootableComponent::DetachAttachedLoot(ADroppedInventoryItemPickup* Pickup, ULootSpawnPatternData* DropPattern) {
}

void UOakLootableComponent::DetachAllAttachedLoot(ULootSpawnPatternData* DropPattern) {
}

UOakLootableComponent::UOakLootableComponent() {
    this->bForceNoInstancedLoot = false;
    this->bNoLootBeam = false;
    this->DropLootPattern = NULL;
    this->TimeToSpawnLootOver = 0.00f;
    this->bSpawnAttachedLootHidden = false;
    this->LootEnabledDelay = 0.00f;
    this->LootAutoPickupPlayerTriggerRadius = 400.00f;
    this->bOverrideAutoLootDelay = false;
    this->AutoLootDelayOverride = 0.00f;
    this->MaxDeferredSpawnDelay = 1.00f;
}


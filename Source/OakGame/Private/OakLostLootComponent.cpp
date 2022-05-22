#include "OakLostLootComponent.h"

class AOakPlayerController;

void UOakLostLootComponent::SpawnAndDropLoot(AOakPlayerController* OwnerController) {
}

UOakLostLootComponent::UOakLostLootComponent() {
    this->SpawnDirectionComponent = NULL;
    this->InitialDropLootMassScale = 1.00f;
    this->DropLootPattern = NULL;
    this->SpawnDirectionComponentName = TEXT("LootSpawnDirection");
    this->DelayBetweenSpawningItem = 0.50f;
}


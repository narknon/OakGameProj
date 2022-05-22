#include "OakSpawnerComponent.h"

class USpawnerComponent;

void UOakSpawnerComponent::OnWaveWarmupCallback(USpawnerComponent* SpawnerComponent, int32 WaveIndex) {
}

UOakSpawnerComponent::UOakSpawnerComponent() {
    this->RandomItemDropped = false;
    this->bPlayableAreaAssist = false;
    this->CorpseRemovalOverrideTime = -1.00f;
    this->CorpseRemovalOverrideAction = NULL;
}


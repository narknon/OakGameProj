#include "SpawnPreviewComponent.h"

void USpawnPreviewComponent::OnReplayAction() {
}

void USpawnPreviewComponent::OnCycleActor(ECycleDirection Direction) {
}

USpawnPreviewComponent::USpawnPreviewComponent() {
    this->ActiveSpawnPointIdx = 0;
    this->PreviewAction = NULL;
    this->bAutoCycle = false;
    this->bShowAction = false;
    this->bRepeatAction = false;
}


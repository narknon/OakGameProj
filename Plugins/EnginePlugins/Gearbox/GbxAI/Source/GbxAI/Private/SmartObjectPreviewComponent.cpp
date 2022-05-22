#include "SmartObjectPreviewComponent.h"

void USmartObjectPreviewComponent::OnReplayAction() {
}

void USmartObjectPreviewComponent::OnCycleActor(ECycleDirection Direction) {
}

USmartObjectPreviewComponent::USmartObjectPreviewComponent() {
    this->ActiveAISlotIdx = 0;
    this->PreviewAction = NULL;
    this->bAutoCycle = false;
    this->bShowAction = false;
    this->bRepeatAction = false;
}


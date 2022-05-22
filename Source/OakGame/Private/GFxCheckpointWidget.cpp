#include "GFxCheckpointWidget.h"

void UGFxCheckpointWidget::PlayCheckpointAnimation() const {
}

void UGFxCheckpointWidget::AnimationComplete(const FString& AnimationName) const {
}

UGFxCheckpointWidget::UGFxCheckpointWidget() {
    this->NumCheckpointIdleLoops = 2;
    this->CurrentState = ECheckpointWidgetState::None;
    this->NextState = ECheckpointWidgetState::None;
    this->CheckpointLoopsRemaining = 0;
    this->InnerClip = NULL;
    this->CheckpointTextClip = NULL;
}


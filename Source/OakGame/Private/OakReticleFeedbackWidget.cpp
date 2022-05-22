#include "OakReticleFeedbackWidget.h"

void UOakReticleFeedbackWidget::OnGameEventComplete(EOakReticleFeedbackGameEvent GameEvent) {
}

void UOakReticleFeedbackWidget::OnGameEventCallback(EOakReticleFeedbackGameEvent GameEvent) {
}


UOakReticleFeedbackWidget::UOakReticleFeedbackWidget() {
    this->MaxDamageCausedDuration = 1.00f;
    this->MaxDeathCausedDuration = 1.00f;
    this->CurrentGameEvent = EOakReticleFeedbackGameEvent::None;
    this->CurrentGameEventDuration = 0.00f;
    this->OakPCOwner = NULL;
}


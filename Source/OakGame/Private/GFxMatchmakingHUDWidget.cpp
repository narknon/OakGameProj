#include "GFxMatchmakingHUDWidget.h"

void UGFxMatchmakingHUDWidget::OnShrinkDelayExpired() const {
}

void UGFxMatchmakingHUDWidget::OnMatchmakingWidgetStateChanged() const {
}

void UGFxMatchmakingHUDWidget::OnInputDeviceChanged() const {
}

void UGFxMatchmakingHUDWidget::OnHideDelayExpired() const {
}

UGFxMatchmakingHUDWidget::UGFxMatchmakingHUDWidget() {
    this->MatchmakingWidgetObject = NULL;
    this->MatchMessageText = NULL;
    this->MatchTypeIcon = NULL;
    this->MatchStatusIcon = NULL;
    this->MessageShowDuration = 3.00f;
}


#include "GFxBuddyWidget.h"

void UGFxBuddyWidget::OnPlayerClassChanged() {
}

void UGFxBuddyWidget::OnLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void UGFxBuddyWidget::OnDownStateExitReasonChanged(EExitDownStateReason ExitReason) {
}

UGFxBuddyWidget::UGFxBuddyWidget() {
    this->WidgetAnims = NULL;
    this->HealthBar = NULL;
    this->ShieldBar = NULL;
    this->ReviveBar = NULL;
    this->DyingBar = NULL;
    this->GodRay = NULL;
    this->CurrentTargetActor = NULL;
    this->CurrentTargetClass = NULL;
    this->CachedBuddyWidgetState = EBuddyWidgetState::Healthy;
    this->CachedFanfareState = EBuddyWidgetFanfareState::None;
}


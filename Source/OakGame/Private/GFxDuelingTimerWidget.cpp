#include "GFxDuelingTimerWidget.h"

void UGFxDuelingTimerWidget::extOnDuelTimerHidden() const {
}

UGFxDuelingTimerWidget::UGFxDuelingTimerWidget() {
    this->DistanceScaleCurve = NULL;
    this->HudTimerClip = NULL;
    this->TimerCount = 0;
    this->bHudTimeActive = false;
}


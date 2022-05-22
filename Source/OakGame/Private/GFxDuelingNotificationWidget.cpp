#include "GFxDuelingNotificationWidget.h"

void UGFxDuelingNotificationWidget::extOnDuelNotificationAnimationEnded() const {
}

UGFxDuelingNotificationWidget::UGFxDuelingNotificationWidget() {
    this->NotificationClip = NULL;
    this->bNotificationPlaying = false;
    this->bCountingDown = false;
    this->LastCountdownSecond = 0;
}


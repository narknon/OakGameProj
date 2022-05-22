#include "GFxFeedWidget.h"

void UGFxFeedWidget::extOnRolloutComplete() const {
}

UGFxFeedWidget::UGFxFeedWidget() {
    this->WidgetDuration = 4.50f;
    this->MaxWidgetRolloutTime = 4.50f;
    this->WidgetState = EGFxFeedWidgetState::Off;
    this->WidgetStateTime = 0.00f;
    this->Widget = NULL;
    this->LabelText = NULL;
}


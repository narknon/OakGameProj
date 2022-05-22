#include "GFxTutorialMessageWidget.h"

void UGFxTutorialMessageWidget::OnInputDeviceChanged() const {
}

void UGFxTutorialMessageWidget::extOnRolloutComplete() const {
}

UGFxTutorialMessageWidget::UGFxTutorialMessageWidget() {
    this->TutorialWidgetContainer = NULL;
    this->HeaderText = NULL;
    this->BodyText = NULL;
    this->CurrentTutorialMessage = NULL;
    this->TestMessage = NULL;
}


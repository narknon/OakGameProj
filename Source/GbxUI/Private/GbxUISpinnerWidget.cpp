#include "GbxUISpinnerWidget.h"

float UGbxUISpinnerWidget::MoveToNumber(uint8 NewNumber, EGbxSpinnerWidgetGoToMethod GoToMethod) {
    return 0.0f;
}

UGbxUISpinnerWidget::UGbxUISpinnerWidget() {
    this->SpinnerDisplayStrip = NULL;
    this->TotalDigitsDisplayed = 11;
    this->AnimationTime = 1.00f;
    this->CurrentValue = 0;
    this->bTransitionUpwards = false;
    this->CurrentDistanceRemaining = 0.00f;
    this->CurrentAnimSpeed = 0.00f;
    this->NewValueToGoTo = 0;
    this->AnimationType = EGbxSpinnerWidgetGoToMethod::FromCurrent;
}


#include "GFxGrenadeIndicatorWidget.h"

void UGFxGrenadeIndicatorWidget::EndTrackingGrenades() const {
}

void UGFxGrenadeIndicatorWidget::BeginTrackingGrenades() const {
}

UGFxGrenadeIndicatorWidget::UGFxGrenadeIndicatorWidget() {
    this->IndicatorDistanceFromCrosshair = 100.00f;
    this->IndicatorClass = TEXT("GrenadeIndicator");
    this->MaxTrackedGrenades = 5;
}


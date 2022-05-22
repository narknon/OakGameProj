#include "GbxGFxProgressBar.h"

void UGbxGFxProgressBar::SetPercent(float InPercent) {
}

void UGbxGFxProgressBar::SetMaxValueText(const FText& Text) {
}

void UGbxGFxProgressBar::SetFillColorAndOpacity(FLinearColor InColor) {
}

void UGbxGFxProgressBar::SetCurrentValueText(const FText& Text) {
}

bool UGbxGFxProgressBar::PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing) {
    return false;
}

void UGbxGFxProgressBar::InterpolateToPercentWithInterpolator(float InPercent, const FGbxProgressBarInterpolator& NewInterpolator) {
}

void UGbxGFxProgressBar::InterpolateToPercent(float InPercent) {
}



float UGbxGFxProgressBar::GetPercent() const {
    return 0.0f;
}

bool UGbxGFxProgressBar::EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing) {
    return false;
}

UGbxGFxProgressBar::UGbxGFxProgressBar() {
    this->Percent = 0.00f;
    this->NumFillFrames = 0;
    this->NumDeltaBarFrames = 0;
    this->NumBackgroundBarFrames = 0;
    this->EdgeFlashID = TEXT("edgeFlash");
    this->EdgeFlashInnerID = TEXT("edgeFlashInner");
    this->FillBarId = TEXT("fill");
    this->DeltaBarId = TEXT("delta");
    this->BackgroundBarId = TEXT("backgroundBar");
    this->CurrentValueLabelId = TEXT("currentValueLabel");
    this->MaxValueLabelId = TEXT("maxValueLabel");
}


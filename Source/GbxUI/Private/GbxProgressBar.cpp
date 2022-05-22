#include "GbxProgressBar.h"

void UGbxProgressBar::SetShear(float InShear) {
}

void UGbxProgressBar::SetPercent(float InPercent) {
}

void UGbxProgressBar::SetMaxValueText(const FText& Text) {
}

void UGbxProgressBar::SetFillColorAndOpacity(FLinearColor InColor) {
}

void UGbxProgressBar::SetCurrentValueText(const FText& Text) {
}

bool UGbxProgressBar::PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing) {
    return false;
}

bool UGbxProgressBar::IsInterpolating() const {
    return false;
}

void UGbxProgressBar::InterpolateToPercentWithInterpolator(float InPercent, const FGbxProgressBarInterpolator& Interpolator) {
}

void UGbxProgressBar::InterpolateToPercent(float InPercent) {
}




float UGbxProgressBar::GetShear() const {
    return 0.0f;
}

float UGbxProgressBar::GetPercent() const {
    return 0.0f;
}

bool UGbxProgressBar::EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing) {
    return false;
}

UGbxProgressBar::UGbxProgressBar() {
    this->FillTexture = NULL;
    this->bShowDeltaBar = false;
    this->DeltaTexture = NULL;
    this->DeltaEffectTexture = NULL;
    this->BackgroundTexture = NULL;
    this->FillDirection = EGbxProgressBarFillDirection::LeftToRight;
    this->Percent = 0.00f;
    this->Shear = 0.00f;
    this->Fill = NULL;
    this->DeltaEffect = NULL;
    this->Background = NULL;
    this->CurrentValueText = NULL;
    this->MaxValueText = NULL;
    this->PercentAnimationOwner = NULL;
    this->PercentAnimation = NULL;
}


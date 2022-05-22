#include "GFxVaultHunterProfileCardStatsWidget.h"

void UGFxVaultHunterProfileCardStatsWidget::OnStatBarScrollerUpdated(float SliderPercent) {
}

UGFxVaultHunterProfileCardStatsWidget::UGFxVaultHunterProfileCardStatsWidget() {
    this->StatBarContainerClip = NULL;
    this->StatBarsScrollerClip = NULL;
    this->StatBarsGridAreaClip = NULL;
    this->TimePlayedTextClip = NULL;
    this->StatBarWindowHeight = 0.00f;
    this->StatBarContentHeight = 0.00f;
}


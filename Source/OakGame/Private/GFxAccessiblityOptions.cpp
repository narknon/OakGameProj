#include "GFxAccessiblityOptions.h"

class UGbxGFxListItemSpinner;
class UGbxGFxListItemNumber;

void UGFxAccessiblityOptions::OnSubsAndCCTextSizeChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxAccessiblityOptions::OnSubsAndCCBackgroundOpacityChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxAccessiblityOptions::OnHeadBobScaleChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxAccessiblityOptions::OnCrosshairNeutralColorFrameChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxAccessiblityOptions::OnCrosshairEnemyColorFrameChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxAccessiblityOptions::OnCrosshairAllyColorFrameChanged(UGbxGFxListItemSpinner* Item) {
}

UGFxAccessiblityOptions::UGFxAccessiblityOptions() {
    this->CrosshairNeutralColorItem = NULL;
    this->CrosshairEnemyColorItem = NULL;
    this->CrosshairAllyColorItem = NULL;
}


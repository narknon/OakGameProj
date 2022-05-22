#include "GbxDebugRumbleMenu.h"

class UGbxListItem;

void UGbxDebugRumbleMenu::OnSliderValueChanged(UGbxListItem* Item) {
}

UGbxDebugRumbleMenu::UGbxDebugRumbleMenu() {
    this->SliderStepSize = 0.05f;
    this->ContentPanel = NULL;
    this->LeftLargeSlider = NULL;
    this->LeftSmallSlider = NULL;
    this->RightLargeSlider = NULL;
    this->RightSmallSlider = NULL;
}


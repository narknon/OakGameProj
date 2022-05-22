#include "GbxGFxListItemNumber.h"

void UGbxGFxListItemNumber::OnSliderUpdated(float SliderPct) {
}

UGbxGFxListItemNumber::UGbxGFxListItemNumber() {
    this->SliderRepeatsToAccelerate = 2;
    this->SliderMaxIncreases = 10;
    this->SliderFastestSteps = 10;
    this->SliderItem = NULL;
    this->ValueItem = NULL;
}


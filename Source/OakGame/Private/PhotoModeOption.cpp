#include "PhotoModeOption.h"

FPhotoModeOption::FPhotoModeOption() {
    this->OptionEffect = EPhotoModeOptionEffect::None;
    this->bIsSlider = false;
    this->SliderDisplayMin = 0.00f;
    this->SliderDisplayMax = 0.00f;
    this->SliderOutputMin = 0.00f;
    this->SliderOutputMax = 0.00f;
    this->bSliderDisplayAsInteger = false;
    this->SliderStepping = 0.00f;
    this->SliderRepeatsToAccelerate = 0;
    this->SliderMaxIncreases = 0;
    this->SliderFastestSteps = 0;
}


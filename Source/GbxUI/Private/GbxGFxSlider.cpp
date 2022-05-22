#include "GbxGFxSlider.h"

class UGbxGFxButton;

void UGbxGFxSlider::EndSlide(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGbxGFxSlider::BeginRightSlide(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGbxGFxSlider::BeginLeftSlide(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGbxGFxSlider::UGbxGFxSlider() {
    this->UpOrLeftButton = NULL;
    this->DownOrRightButton = NULL;
    this->SliderThumb = NULL;
    this->SliderTrack = NULL;
    this->SliderTrackButton = NULL;
    this->MaskFill = NULL;
    this->SliderDefaultThumb = NULL;
}


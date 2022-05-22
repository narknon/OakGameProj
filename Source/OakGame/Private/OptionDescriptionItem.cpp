#include "OptionDescriptionItem.h"

UOptionDescriptionItem::UOptionDescriptionItem() {
    this->OptionType = EOptionType::Option_TODO;
    this->OptionItemType = EOptionItemType::Title;
    this->SliderMin = 0.00f;
    this->SliderMax = 1.00f;
    this->SliderStep = 0.00f;
    this->SliderIsInteger = true;
    this->SpinnerWrapEnabled = false;
    this->ButtonBinding = NULL;
    this->AxisBinding = NULL;
    this->DrivingOptionDescriptionLink = NULL;
    this->BooleanOnText = FText::FromString(TEXT("On"));
    this->BooleanOffText = FText::FromString(TEXT("Off"));
    this->IsDesktop = true;
    this->IsQuail = true;
    this->IsXboxOne = true;
    this->AvailableOnNewerXboxes = false;
    this->IsXboxSeriesX = true;
    this->IsPS4 = true;
    this->AvailableOnNewerPlayStations = false;
    this->IsPS5 = true;
    this->IsOnlyAvailableInFrontendForSplitscreen = false;
    this->IsPrimaryPlayerOnly = false;
    this->HelperTexture = NULL;
}


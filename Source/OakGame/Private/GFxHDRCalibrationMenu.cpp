#include "GFxHDRCalibrationMenu.h"

class UGbxGFxButton;
class UGbxGFxListItemNumber;
class UGbxGFxListItemSpinner;

void UGFxHDRCalibrationMenu::OnSubtitlesSettingFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxHDRCalibrationMenu::OnSubtitlesSettingChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxHDRCalibrationMenu::OnHDROptionChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxHDRCalibrationMenu::OnHDROptionButtonFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxHDRCalibrationMenu::OnHDRMenuBrightnessFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxHDRCalibrationMenu::OnHDRMenuBrightnessChanged(UGbxGFxListItemNumber* Item) const {
}

void UGFxHDRCalibrationMenu::OnHDRBrightnessFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxHDRCalibrationMenu::OnHDRBrightnessChanged(UGbxGFxListItemNumber* Item) const {
}

void UGFxHDRCalibrationMenu::OnGraphicsPreferenceFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxHDRCalibrationMenu::OnGraphicsPreferenceChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxHDRCalibrationMenu::OnClosedCaptionsSettingFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxHDRCalibrationMenu::OnClosedCaptionsSettingChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxHDRCalibrationMenu::OnBrightnessFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxHDRCalibrationMenu::OnBrightnessChanged(UGbxGFxListItemNumber* Item) const {
}

void UGFxHDRCalibrationMenu::OnBlackLevelFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxHDRCalibrationMenu::OnBlackLevelChanged(UGbxGFxListItemNumber* Item) const {
}

UGFxHDRCalibrationMenu::UGFxHDRCalibrationMenu() {
    this->FrontendMenuData = NULL;
    this->HDRBrightnessStep = 50.00f;
    this->HDRBrightnessDefault = 400.00f;
    this->HDRMenuBrightnessDefault = 4.00f;
    this->BrightnessStep = 1.00f;
    this->BrightnessDefault = 50.00f;
    this->BlackLevelStep = 1.00f;
    this->BlackLevelDefault = 0.00f;
    this->TitleText = NULL;
    this->DescriptionText = NULL;
    this->OptionList = NULL;
    this->Background = NULL;
    this->CachedFrontendMenu = NULL;
}


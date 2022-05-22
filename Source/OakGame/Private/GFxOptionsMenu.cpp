#include "GFxOptionsMenu.h"

class UGbxGFxButton;
class UGbxGFxListCell;
class UGbxGFxDialogBox;

void UGFxOptionsMenu::SubtitleNavigationClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOptionsMenu::OnSubtitlesButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOptionsMenu::OnRestoreDefaultChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOptionsMenu::OnNonStadiaControllerDialogClicked(const UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxOptionsMenu::OnContentPanelSelectionChanged(UGbxGFxListCell* SelectedItem) const {
}

UGFxOptionsMenu::UGFxOptionsMenu() {
    this->SafeFrameMenuData = NULL;
    this->HDRCalibrationMenuData = NULL;
    this->MouseScaleMinValue = 0.00f;
    this->MouseScaleMaxValue = 10.00f;
    this->CurrentMenu = NULL;
    this->OptionsDescriptionGlobal = NULL;
    this->MainPanel = NULL;
    this->RestartTextField = NULL;
}


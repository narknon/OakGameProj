#include "GFxMayhemMenu.h"

class UGbxGFxDialogBox;

void UGFxMayhemMenu::OnMayhemValueChanged() const {
}

void UGFxMayhemMenu::OnMayhemOptionFocused() const {
}

void UGFxMayhemMenu::OnMayhemExitDialogChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMayhemMenu::OnMayhemApplyChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxMayhemMenu::OnMayhemApplyButtonClicked() const {
}

void UGFxMayhemMenu::OnMayhemActivationChanged() const {
}

UGFxMayhemMenu::UGFxMayhemMenu() {
    this->InfoPanelHeader = NULL;
    this->InfoPanelBody = NULL;
    this->CurrentMayhemStatusText = NULL;
    this->ApplyWarningText = NULL;
    this->StatsPanelHeader = NULL;
    this->StatsPanelText1 = NULL;
    this->StatsPanelText2 = NULL;
    this->StatsPanelText3 = NULL;
    this->StatsPanelBonusText1 = NULL;
    this->StatsPanelBonusText2 = NULL;
    this->StatsPanelBonusText3 = NULL;
    this->ModifiersPanelHeader = NULL;
    this->ModifiersList = NULL;
    this->MayhemOptionStatusSpinner = NULL;
    this->MayhemOptionLevelSlider = NULL;
    this->MayhemOptionApplyButton = NULL;
}


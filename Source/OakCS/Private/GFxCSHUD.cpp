#include "GFxCSHUD.h"

class UGbxGFxButton;

void UGFxCSHUD::OnHelpClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCSHUD::OnCSBucksAmountChanged(int32 NewAmount) const {
}

void UGFxCSHUD::OnBackClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxCSHUD::UGFxCSHUD() {
    this->CitizenScienceGlobals = NULL;
    this->EchoWidget = NULL;
    this->SubtitlesWidget = NULL;
    this->CSBucksAmountTextField = NULL;
    this->MenuTitle = NULL;
    this->BackButton = NULL;
    this->HelpButton = NULL;
    this->CSBucksObject = NULL;
    this->PlayerIdPanel = NULL;
    this->PlayerIdText = NULL;
}


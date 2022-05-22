#include "GFxQuickMenu.h"

class UGbxGFxButton;

void UGFxQuickMenu::WheelButtonUnfocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxQuickMenu::WheelButtonPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxQuickMenu::WheelButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxQuickMenu::extWheelDisplayed() const {
}

UGFxQuickMenu::UGFxQuickMenu() {
    this->GFxKEY_ButtonPattern = TEXT("wheelButton%i");
    this->GFxNAME_RollOverLabel = TEXT("label");
    this->OutroTime = 0.30f;
    this->RadialTolerance = 0.30f;
    this->RolloverLabel = NULL;
    this->CurrentTargetOtherPlayer = NULL;
    this->CurrentFocusedButton = NULL;
}


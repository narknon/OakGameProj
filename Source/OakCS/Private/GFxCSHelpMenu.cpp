#include "GFxCSHelpMenu.h"

class UGbxGFxButton;

void UGFxCSHelpMenu::OnCloseClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxCSHelpMenu::UGFxCSHelpMenu() {
    this->RulesTab = NULL;
    this->ControllerTab = NULL;
    this->RulesContainer = NULL;
    this->HelpContainer = NULL;
    this->ControlsContainer = NULL;
    this->CloseButton = NULL;
}


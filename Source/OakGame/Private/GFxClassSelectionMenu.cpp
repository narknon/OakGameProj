#include "GFxClassSelectionMenu.h"

class UGbxGFxButton;

void UGFxClassSelectionMenu::OnPlayerClassItemFocused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxClassSelectionMenu::OnPlayerClassItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxClassSelectionMenu::UGFxClassSelectionMenu() {
    this->ContentPanel = NULL;
    this->CharacterPicture = NULL;
    this->CharacterClass = NULL;
    this->CharacterName = NULL;
    this->CharacterDescription = NULL;
    this->TargetPC = NULL;
    this->PlayerStandIn = NULL;
}


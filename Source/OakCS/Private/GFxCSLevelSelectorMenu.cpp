#include "GFxCSLevelSelectorMenu.h"

class UGbxGFxButton;

void UGFxCSLevelSelectorMenu::OnLevelItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxCSLevelSelectorMenu::UGFxCSLevelSelectorMenu() {
    this->LevelData = NULL;
    this->DelayBeforeLoadingPuzzleMenu = 1.00f;
    this->LevelList = NULL;
}


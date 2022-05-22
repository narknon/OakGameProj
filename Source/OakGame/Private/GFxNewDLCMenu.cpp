#include "GFxNewDLCMenu.h"

class UGbxGFxListCell;

void UGFxNewDLCMenu::OnDLCListSelectionClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxNewDLCMenu::OnDLCListSelectionChanged(UGbxGFxListCell* Item) const {
}

UGFxNewDLCMenu::UGFxNewDLCMenu() {
    this->TitleText = NULL;
    this->CategoryText = NULL;
    this->TipsText = NULL;
    this->StartButton = NULL;
    this->StartButtonHint = NULL;
    this->DLCList = NULL;
}


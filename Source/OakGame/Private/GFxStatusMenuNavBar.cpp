#include "GFxStatusMenuNavBar.h"

class UGbxGFxListCell;

void UGFxStatusMenuNavBar::OnNavCellClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) {
}

UGFxStatusMenuNavBar::UGFxStatusMenuNavBar() {
    this->NavListClip = NULL;
    this->PrevButtonHintClip = NULL;
    this->NextButtonHintClip = NULL;
    this->OwnerSubmenu = NULL;
}


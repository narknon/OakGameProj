#include "GbxGFxDropDownList.h"

class UGbxGFxButton;

void UGbxGFxDropDownList::OnEntryClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGbxGFxDropDownList::OnDropDownButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGbxGFxDropDownList::UGbxGFxDropDownList() {
    this->CurrentSelectionText = NULL;
    this->ListScrollBar = NULL;
    this->DropDownButton = NULL;
    this->TopButton = NULL;
    this->DropDownListContainer = NULL;
    this->DropDownList = NULL;
}


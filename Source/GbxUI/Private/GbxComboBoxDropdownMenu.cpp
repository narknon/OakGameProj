#include "GbxComboBoxDropdownMenu.h"

class UGbxListItem;

void UGbxComboBoxDropdownMenu::OnChoiceClicked(UGbxListItem* ListItem) {
}

void UGbxComboBoxDropdownMenu::DismissWithoutChanging() {
}

UGbxComboBoxDropdownMenu::UGbxComboBoxDropdownMenu() {
    this->ChoiceListContainer = NULL;
    this->ChoiceList = NULL;
}


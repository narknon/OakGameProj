#include "GbxComboBox.h"

class UGbxUserWidget;

void UGbxComboBox::OnComboBoxClicked(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

int32 UGbxComboBox::GetCurentChoiceReferenceIndex() const {
    return 0;
}

UGbxComboBox::UGbxComboBox() {
    this->DropdownMenuClass = NULL;
    this->CurrentChoiceReferenceIndex = 0;
}


#include "GbxListItemComboBox.h"

void UGbxListItemComboBox::SetSelectedOptionIndex(int32 Index) {
}

void UGbxListItemComboBox::SelectPreviousOption() {
}

void UGbxListItemComboBox::SelectNextOption() {
}

void UGbxListItemComboBox::OnValueComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UGbxListItemComboBox::InitializeComboBox(const TArray<FText>& Items, const int32 InitialValue) {
}

int32 UGbxListItemComboBox::GetSelectedOptionIndex() const {
    return 0;
}

UGbxListItemComboBox::UGbxListItemComboBox() {
    this->ValueComboBox = NULL;
}


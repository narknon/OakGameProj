#include "GbxListItemBoolean.h"

void UGbxListItemBoolean::SetChecked(bool bChecked) {
}

bool UGbxListItemBoolean::IsChecked() const {
    return false;
}

void UGbxListItemBoolean::HandleFocusableWidgetPressed(const FGbxMenuInputEvent& InputInfo) {
}

UGbxListItemBoolean::UGbxListItemBoolean() {
    this->ValueCheckBox = NULL;
}


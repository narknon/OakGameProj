#include "GFxOptionBase.h"

class UGbxGFxButton;

void UGFxOptionBase::OnUnimplementedOptionClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) {
}

UGFxOptionBase::UGFxOptionBase() {
    this->ContentPanel = NULL;
}


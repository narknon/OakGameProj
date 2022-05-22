#include "GFxPlayerStorageNavButton.h"

class UGbxGFxButton;

void UGFxPlayerStorageNavButton::OnNavButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

FString UGFxPlayerStorageNavButton::GetNavFrameState(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState ButtonState) {
    return TEXT("");
}

UGFxPlayerStorageNavButton::UGFxPlayerStorageNavButton() {
    this->IconClip = NULL;
    this->NavToType = EInventoryListType::IL_Primary;
}


#include "GFxPCTextChatMenuNotification.h"

class UGbxGFxButton;

void UGFxPCTextChatMenuNotification::OnMenuStackEmptied() const {
}

void UGFxPCTextChatMenuNotification::OnChatButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxPCTextChatMenuNotification::UGFxPCTextChatMenuNotification() {
    this->NotificationDuration = 10.00f;
    this->ChatButtonClip = NULL;
    this->Duration = 0.00f;
    this->bChatMenuIsOpen = false;
}


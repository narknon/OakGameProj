#include "GFxPCTextChatMenu.h"

class UGbxGFxEditableTextField;
class UGFxPCTextChatBuffer;
class UGbxGFxButton;

void UGFxPCTextChatMenu::OnTextLogChanged(UGFxPCTextChatBuffer* TextChatBuffer) const {
}

void UGFxPCTextChatMenu::OnTextChanged(UGbxGFxEditableTextField* EditableTextField, const FString& Text) const {
}

void UGFxPCTextChatMenu::OnSubmit(UGbxGFxEditableTextField* EditableTextField, const FString& Text) const {
}

void UGFxPCTextChatMenu::OnScrollBarUpdated(float SliderPercent) const {
}

void UGFxPCTextChatMenu::OnPrePushMenu() const {
}

void UGFxPCTextChatMenu::OnCloseButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxPCTextChatMenu::UGFxPCTextChatMenu() {
    this->MaxLinesShown = 7;
    this->ScrollThumbTrackMinSize = 12.00f;
    this->PlayerNameColor = TEXT("#00CCFF");
    this->bCloseInMenuChatWhenSubmitting = true;
    this->TextChatLogClip = NULL;
    this->ScrollBarClip = NULL;
    this->TextInputMCClip = NULL;
    this->TextInputClip = NULL;
    this->PlaceholderTextMCClip = NULL;
    this->PlaceholderTextClip = NULL;
    this->ButtonCloseClip = NULL;
    this->ScrollPosition = 0;
    this->NumScrollEntries = 0;
    this->bNeedsToUpdateLogThisFrame = false;
    this->bDefaultMessageShowing = false;
}


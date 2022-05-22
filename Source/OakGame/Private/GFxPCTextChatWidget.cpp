#include "GFxPCTextChatWidget.h"

class UGFxPCTextChatBuffer;
class UObject;

void UGFxPCTextChatWidget::OnTextLogChanged(UGFxPCTextChatBuffer* TextChatBuffer) const {
}

void UGFxPCTextChatWidget::OnTextChatOptionChanged(bool bIsActive) const {
}

void UGFxPCTextChatWidget::OnMenuActivated(UObject* MenuObject) const {
}

UGFxPCTextChatWidget::UGFxPCTextChatWidget() {
    this->PlayerNameColor = TEXT("#00CCFF");
    this->MaxLinesShown = 5;
    this->SecondsUntilHide = 10.00f;
    this->PromptGlyphHeight = 16.00f;
    this->bTextChatEnabled = true;
    this->TextChatFeedClip = NULL;
    this->TextChatLogClip = NULL;
    this->bNeedsToUpdateLogThisFrame = false;
}


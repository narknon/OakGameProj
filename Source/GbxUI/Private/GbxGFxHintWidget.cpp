#include "GbxGFxHintWidget.h"

class UGbxGFxButton;

void UGbxGFxHintWidget::OnThisHintClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGbxGFxHintWidget::UGbxGFxHintWidget() {
    this->HintText = NULL;
    this->HoldToPressBar = NULL;
    this->HoldToPressGamepad = NULL;
    this->HoldToPressKeyboard = NULL;
    this->HoldToPressKeyboardWide = NULL;
    this->HoldToPressKeyboardXWide = NULL;
    this->HintCaret = NULL;
    this->bHasInitialHintTextWidth = false;
    this->InitialHintTextWidth = 0.00f;
    this->HoldToPressType = EHoldToPressGlyphType::None;
    this->ManualPressToHoldProgress = 0.00f;
    this->bHasBroadcastPressToHoldEvent = false;
    this->bIsHintVisible = true;
    this->bIsAvailable = true;
    this->bInputNeedsResetBeforeShowingProgress = false;
    this->ExternalHintHeldProgress = 0.00f;
}


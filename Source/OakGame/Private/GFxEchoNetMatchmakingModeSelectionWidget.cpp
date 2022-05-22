#include "GFxEchoNetMatchmakingModeSelectionWidget.h"

class UGbxGFxButton;
class UGbxGFxListCell;

void UGFxEchoNetMatchmakingModeSelectionWidget::OnArrowButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

void UGFxEchoNetMatchmakingModeSelectionWidget::OnActivityItemFocused(UGbxGFxListCell* ListItem) {
}

UGFxEchoNetMatchmakingModeSelectionWidget::UGFxEchoNetMatchmakingModeSelectionWidget() {
    this->ScrollVelocity = 2000.00f;
    this->ContentListClip = NULL;
    this->ButtonLeftClip = NULL;
    this->ButtonRightClip = NULL;
    this->bIsShowing = false;
}


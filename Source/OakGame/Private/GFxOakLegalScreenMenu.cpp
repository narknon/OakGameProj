#include "GFxOakLegalScreenMenu.h"

void UGFxOakLegalScreenMenu::OnLegalScreenTimerExpired() const {
}

void UGFxOakLegalScreenMenu::EnableInputToSkipScreen() const {
}

UGFxOakLegalScreenMenu::UGFxOakLegalScreenMenu() {
    this->DelayBeforeInputSkipScreen = 3.00f;
    this->DelayBeforeAutoSkipScreen = 10.00f;
    this->LogosWrapper = NULL;
}


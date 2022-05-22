#include "GbxHintBar.h"

void UGbxHintBar::OnHintClicked(const FName& InputAction, bool bHeld) {
}

UGbxHintBar::UGbxHintBar() {
    this->Container = NULL;
    this->bAreHintsVisible = true;
    this->bIsInputBlocked = false;
    this->bHideOnOwnerMenuDeactivate = true;
    this->bSendInputActionEvenIfOwnerIsDeactivated = false;
}


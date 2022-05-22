#include "GFxModalTutorial.h"

void UGFxModalTutorial::OnNumPlayersChanged(int32 NewNumPlayers) const {
}

void UGFxModalTutorial::OnLockoutDelayComplete() const {
}

void UGFxModalTutorial::extOnIntroComplete() const {
}

UGFxModalTutorial::UGFxModalTutorial() {
    this->TintScale = 200.00f;
    this->TintOffset = -500.00f;
    this->ExitHint = NULL;
    this->bAllowMenuAdvance = false;
}


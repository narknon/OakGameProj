#include "GFxStatusMenuSubmenu.h"

void UGFxStatusMenuSubmenu::OnOuttroAnimationComplete() const {
}

void UGFxStatusMenuSubmenu::OnIntoAnimationComplete() const {
}

UGFxStatusMenuSubmenu::UGFxStatusMenuSubmenu() {
    this->IntroTimeout = 1.00f;
    this->OuttroTimeout = 1.00f;
    this->bAllowPause = false;
    this->bShowMapMesh = false;
    this->bAllowMapMenuAxisInput = true;
    this->bHidStatusMenuForPauseMenu = false;
    this->bIsPlayingIntro = false;
    this->bIsPlayingOuttro = false;
    this->TransitionTimeRemaining = 0.00f;
    this->QueuedTransitionAction = EGFxStatusMenuTransitionReason::None;
}


#include "GFxMenuTutorialState.h"

FGFxMenuTutorialState::FGFxMenuTutorialState() {
    this->DialogSize = EGFxMenuTutorialDialogSize::Large;
    this->FocusDirection = EGFxMenuTutorialFocusDirection::Center;
    this->SplitScreenFocusDirection = EGFxMenuTutorialFocusDirection::Center;
    this->VerticalSplitScreenFocusDirection = EGFxMenuTutorialFocusDirection::Center;
    this->QuadSplitScreenFocusDirection = EGFxMenuTutorialFocusDirection::Center;
    this->bAdvanceOnKeyPress = false;
    this->bAllowTutorialSkip = false;
}


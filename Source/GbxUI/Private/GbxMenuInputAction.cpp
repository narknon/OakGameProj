#include "GbxMenuInputAction.h"

FGbxMenuInputAction::FGbxMenuInputAction() {
    this->ActionTrigger = EGbxMenuInputActionTrigger::Pressed;
    this->bWantsRepeat = false;
}


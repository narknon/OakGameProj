#include "GbxTestInputAction.h"

FGbxTestInputAction::FGbxTestInputAction() {
    this->InputEvent = IE_Pressed;
    this->StartTime = 0.00f;
    this->LifeTime = 0.00f;
    this->AmountDepressed = 0.00f;
    this->AmountDelta = 0.00f;
}


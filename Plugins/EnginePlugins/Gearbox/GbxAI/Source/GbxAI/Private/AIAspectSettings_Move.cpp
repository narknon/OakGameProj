#include "AIAspectSettings_Move.h"

FAIAspectSettings_Move::FAIAspectSettings_Move() {
    this->PathUpdateThreshold = 0.00f;
    this->bStopWhenInPosition = false;
    this->bAllowStrafe = false;
    this->bAllowPartialPath = false;
    this->bRequireDirectPath = false;
}


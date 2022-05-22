#include "GbxMenuInput.h"

UGbxMenuInput::UGbxMenuInput() {
    this->bShowDebugKeyStates = false;
    this->FramesToIgnoreMouseMoves = 30;
    this->AxisAsButtonThreshold = 0.10f;
    this->AxisThreshold = 0.01f;
}


#include "PreviewState.h"

FPreviewState::FPreviewState() {
    this->bEnabled = false;
    this->PreviewClass = NULL;
    this->bAutoCycle = false;
    this->PreviewIdx = 0;
    this->PreviewAction = NULL;
    this->ElapsedTime = 0.00f;
    this->Duration = 0.00f;
    this->bPlayingAction = false;
    this->bQueuedAction = false;
    this->bShowAction = false;
    this->bRepeatAction = false;
}


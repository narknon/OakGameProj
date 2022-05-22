#include "WwiseAudioInputEvent.h"

UWwiseAudioInputEvent::UWwiseAudioInputEvent() {
    this->BaseWwiseEvent = NULL;
    this->OverflowProtectionLimitInFrames = 8192;
    this->ConnectedSourceID = 0;
}


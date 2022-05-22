#include "GFxRolloutMessage.h"

void UGFxRolloutMessage::OnInputDeviceChanged() const {
}

void UGFxRolloutMessage::extShowAnimationFinished() const {
}

UGFxRolloutMessage::UGFxRolloutMessage() {
    this->GlyphField = NULL;
    this->MinimumDisplaySeconds = 4.00f;
    this->InnerInstanceString = TEXT("onlineMessageMC");
    this->EventIconInstanceName = TEXT("eventIconMC");
    this->bHUDWidget = false;
}

